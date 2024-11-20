// Starcache Studios, LLC (c) 2024


#include "RsAbilityComponent.h"

#include "Abilities/RsGameplayAbilityBase.h"
#include "Effects/RsGameplayEffectBase.h"
#include "EnhancedInputComponent.h"
#include "Attributes/RsVitalityAttributeSet.h"
#include "Lib/RsGlobals.h"
#include "Logging/StructuredLog.h"
#include "Net/UnrealNetwork.h"

DEFINE_LOG_CATEGORY(LogRolestats);

namespace RsInputAbilitySystem
{
	constexpr int32 InvalidInputID = 0;
	int32 IncrementingInputID = InvalidInputID;

	static int32 GetNextInputID()
	{
		return ++IncrementingInputID;
	}
}


URsAbilityComponent::URsAbilityComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);

	this->OnActiveGameplayEffectAddedDelegateToSelf.AddUObject(this, &URsAbilityComponent::NewGameplayEffectAppliedToSelf);
	FOnGivenActiveGameplayEffectRemoved* GERemovedDelegate = &OnAnyGameplayEffectRemovedDelegate();
	GERemovedDelegate->AddUObject(this, &URsAbilityComponent::OnAnyGameplayEffectRemoved);
}

void URsAbilityComponent::NewGameplayEffectAppliedToSelf(
	UAbilitySystemComponent* SourceAsc, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle EffectHandle)
{
	UE_LOGFMT(LogTemp, Display, "{Name}({NetAuthority}): New Gameplay Effect Applied -> {EffectSpec} {EffectHandle}"
		, GetName(), GetOwner()->HasAuthority() ? "SERVER" : "CLIENT", EffectSpec.ToSimpleString(), EffectHandle.ToString());
	OnGameplayEffectAdded.Broadcast(EffectSpec, EffectHandle);
}

void URsAbilityComponent::OnAnyGameplayEffectRemoved(const FActiveGameplayEffect& ActiveGameplayEffect)
{
	UE_LOGFMT(LogTemp, Display, "{Name}({NetAuthority}): Active Gameplay Effect Removed -> {GameplayEffect}"
		, GetName(), GetOwner()->HasAuthority() ? "SERVER" : "CLIENT", ActiveGameplayEffect.Spec.ToSimpleString());
	OnGameplayEffectRemoved.Broadcast(ActiveGameplayEffect.Spec, ActiveGameplayEffect.Handle);
}

float URsAbilityComponent::GetAbilityExperience(const FGameplayTag& AbilityTag)
{
	const float* ExpPointer = AbilityExperience.Find(AbilityTag);
	return ExpPointer != nullptr ? *ExpPointer : 0.0f;
}

float URsAbilityComponent::GetCooldownByAbility(const TSubclassOf<URsGameplayAbilityBase>& AbilityReference)
{
	if (IsValid(AbilityReference))
	{
		return AbilityCooldowns.Contains(AbilityReference) ? *AbilityCooldowns.Find(AbilityReference) : 0.f;
	}
	return 0.f;
}

void URsAbilityComponent::BindListeners()
{
	AbilityActivatedCallbacks.AddUObject(this, &URsAbilityComponent::RsAbilityStarted);
	AbilityCommittedCallbacks.AddUObject(this, &URsAbilityComponent::RsAbilityActivated);
	AbilityEndedCallbacks.AddUObject(this, &URsAbilityComponent::RsAbilityEnded);
	AbilityFailedCallbacks.AddUObject(this, &URsAbilityComponent::RsAbilityFailed);
}

void URsAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GetOwner()->HasAuthority())
	{
		InitDefaultAbilities();
		InitDefaultEffects();
	}
	BindListeners();
}

void URsAbilityComponent::InitDefaultAbilities()
{
	if (!GetOwner()->HasAuthority())
	{
		return;
	}

	// Grant all explicit abilities
	for (TSubclassOf<URsGameplayAbilityBase>& Ability : DefaultAbilities)
	{
		GiveAbility(FGameplayAbilitySpec(Ability, 1, static_cast<int32>(Ability.GetDefaultObject()->AbilityInputID), this));
	}
}

void URsAbilityComponent::InitDefaultEffects()
{
	FGameplayEffectContextHandle EffectContext = MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (TSubclassOf<URsGameplayEffectBase>& Effect : DefaultEffects)
	{
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingSpec(Effect, 1, EffectContext);
		if (SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle EffectHandle = ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			if (EffectHandle.IsValid())
			{
				UE_LOGFMT(LogRolestats, Display, "GAS: Successfully Applied Gameplay Effect '{GameplayEffect}'"
					, EffectHandle.ToString());
			}
			else
			{
				UE_LOGFMT(LogRolestats, Error, "GAS: Failed to Apply Gameplay Effect '{GameplayEffect}'"
					, Effect->GetDefaultObjectName());
			}
		}
	}
}

void URsAbilityComponent::RsAbilityStarted(UGameplayAbility* AbilityObject)
{
	OnAbilityStarted.Broadcast(Cast<URsGameplayAbilityBase>(AbilityObject));
}

void URsAbilityComponent::RsAbilityActivated(UGameplayAbility* AbilityObject)
{
	OnAbilityActivated.Broadcast(Cast<URsGameplayAbilityBase>(AbilityObject));
}

void URsAbilityComponent::RsAbilityEnded(UGameplayAbility* AbilityObject)
{
	OnAbilityEnded.Broadcast(Cast<URsGameplayAbilityBase>(AbilityObject));
}

void URsAbilityComponent::RsAbilityFailed(const UGameplayAbility* AbilityObject,
	const FGameplayTagContainer& FailureTags)
{
	OnAbilityFailed.Broadcast(Cast<URsGameplayAbilityBase>(AbilityObject), FailureTags);
}

void URsAbilityComponent::Client_CooldownEnded_Implementation(
	TSubclassOf<UGameplayAbility> AbilityReference)
{
	if (IsValid(AbilityReference))
	{
		AbilityCooldowns.Remove(AbilityReference);
		OnAbilityCooldownEnded.Broadcast(AbilityReference);
	}
}

void URsAbilityComponent::Client_CooldownStarted_Implementation(
	TSubclassOf<UGameplayAbility> AbilityReference, const float TimeInSeconds)
{
	if (IsValid(AbilityReference))
	{
		const URsGameplayAbilityBase* DefaultObject = Cast<URsGameplayAbilityBase>(AbilityReference.GetDefaultObject());
		if (IsValid(DefaultObject))
		{
			AbilityCooldowns.Add(AbilityReference);
			OnAbilityCooldownStarted.Broadcast(AbilityReference, DefaultObject->CooldownTime);
		}
	}
}

void URsAbilityComponent::CooldownTick()
{
	if (AbilityCooldowns.Num() < 1)
	{
		CooldownTimer.Invalidate();
		return;
	}

	for (auto& AbilityCooldown : AbilityCooldowns)
	{
		if (AbilityCooldown.Value <= 0.f)
		{
			OnAbilityCooldownEnded.Broadcast(AbilityCooldown.Key);
			Client_CooldownEnded(AbilityCooldown.Key);
			AbilityCooldowns.Remove(AbilityCooldown.Key);
		}
		else
		{
			AbilityCooldown.Value -= CooldownRate;
		}
	}
}

void URsAbilityComponent::Client_SkillIncrease_Implementation(const FGameplayTag& SchoolTag, const float OldValue,
                                                              const float NewValue)
{
	OnAbilitySkillEarned.Broadcast(SchoolTag, OldValue, NewValue);
}

void URsAbilityComponent::Server_AbilityActivation_Implementation(TSubclassOf<UGameplayAbility> AbilityReference)
{
	UE_LOGFMT(LogTemp, Display, "URsAbilityComponent::Server_AbilityActivation_Implementation()");

	const TSubclassOf<URsGameplayAbilityBase> AbilityClass{AbilityReference};
	if (IsValid(AbilityClass))
	{
		const URsGameplayAbilityBase* DefaultObject = AbilityReference->GetDefaultObject<URsGameplayAbilityBase>();
		if (IsValid(DefaultObject))
		{
			if (DefaultObject->CooldownTime > 0.f)
			{
				AbilityCooldowns.Add(AbilityReference, DefaultObject->CooldownTime);
				OnAbilityCooldownStarted.Broadcast(AbilityReference, DefaultObject->CooldownTime);
				Client_CooldownStarted(AbilityReference, DefaultObject->CooldownTime);
			}

			FGameplayTag AbilitySkillTag = DefaultObject->AbilitySchool;
			if (AbilitySkillTag.IsValid())
			{
				const float OldValue = AbilityExperience.Contains(AbilitySkillTag) ? *AbilityExperience.Find(AbilitySkillTag) : 0.f;
				const float NewValue = OldValue + 1;
				AbilityExperience.Add(AbilitySkillTag, NewValue);
				OnAbilitySkillEarned.Broadcast(AbilitySkillTag, OldValue, NewValue);
				Client_SkillIncrease(AbilitySkillTag, OldValue, NewValue);
			}
		}
	}

	if (AbilityCooldowns.Num() > 0 && !CooldownTimer.IsValid())
	{
		GetWorld()->GetTimerManager().SetTimer(CooldownTimer, this, &URsAbilityComponent::CooldownTick, CooldownRate, true);
	}
}

void URsAbilityComponent::OnRep_IsDead_Implementation()
{
	bool bIsFound = false;
	float CurrentHealth = GetGameplayAttributeValue(URsVitalityAttributeSet::GetCurrentHealthAttribute(), bIsFound);
	const bool bIsNowDead = IsDead();
	UE_LOGFMT(LogTemp, Display, "URsAbilityComponent::OnRep_IsDead_Implementation() (IsDead is now {TruthValue})"
		, bIsNowDead ? "TRUE" : "FALSE");
	OnDeathStatusChanged.Broadcast(bIsNowDead, bIsFound ? CurrentHealth : (bIsNowDead ? -1.f : 1.f));
}

float URsAbilityComponent::GetCoreStatModifier(const FGameplayAttribute& Attribute) const
{
	if (!Attribute.IsValid())
	{
		return 0.f;
	}
	bool bFound = false;
	const float StatValue = GetGameplayAttributeValue(Attribute, bFound);
	return (StatValue - 100) / 2.435;
}

float URsAbilityComponent::GetCoreStatByTag(const FGameplayTag& StatTag) const
{
	return 0.f;
}

float URsAbilityComponent::GetDamageResistanceByTag(const FGameplayTag& DamageTag) const
{
	return 0.f;
}

float URsAbilityComponent::GetDamageBonusByTag(const FGameplayTag& DamageTag) const
{
	return 0.f;
}

bool URsAbilityComponent::HotkeyAbility(
	const FInputActionValue& InputValue, const TSubclassOf<URsGameplayAbilityBase>& AbilityReference, const bool bStartAbility, const bool bCancelAbility)
{
	if (InputValue.Get<bool>())
	{
		if (AbilityCooldowns.Contains(AbilityReference))
		{
			UE_LOGFMT(LogRolestats, Display, "{Name}({NetAuthority}): ({AbilityReference}) is on cooldown!"
				, GetOwner()->GetName(), GetOwner()->HasAuthority(), AbilityReference->GetName());
			return false;
		}

		const bool bActivated = TryActivateAbilityByClass(AbilityReference, true);
		if (bActivated)
		{
			const URsGameplayAbilityBase* DefaultObject = AbilityReference->GetDefaultObject<URsGameplayAbilityBase>();
			if (IsValid(DefaultObject))
			{
				OnAbilityActivated.Broadcast(DefaultObject);

				if (DefaultObject->CooldownTime > 0.f)
				{
					AbilityCooldowns.Add(AbilityReference, DefaultObject->CooldownTime);
					//OnAbilityCooldownStarted.Broadcast(AbilityReference, DefaultObject->CooldownTime);
				}
			}

			Server_AbilityActivation(AbilityReference);
			UE_LOGFMT(LogRolestats, Display, "{Name}({NetAuthority}): Activated Hotkey Ability Binding ({AbilityReference})"
				, GetOwner()->GetName(), GetOwner()->HasAuthority(), AbilityReference->GetName());
		}
		else
		{
			UE_LOGFMT(LogRolestats, Warning, "{Name}({NetAuthority}): FAILED to Activate Hotkey Ability Binding ({AbilityReference})"
				, GetOwner()->GetName(), GetOwner()->HasAuthority(), AbilityReference ? AbilityReference->GetName() : "Invalid");
		}
		return bActivated;
	}
	return false;
}

void URsAbilityComponent::ReceiveDamage(URsAbilityComponent* SourceAsc, float UnmitigatedDamage, float MitigatedDamage)
{

	OnGasDamageReceived.Broadcast(SourceAsc, UnmitigatedDamage, MitigatedDamage);
}

void URsAbilityComponent::SetDead(const bool bKillNow)
{
	// Only run on authority
	if (!GetOwner()->HasAuthority())
	{
		return;
	}

	if (bIsDead != bKillNow)
	{
		bIsDead = bKillNow;

		bool bIsFound = false;
		float CurrentHealth = GetGameplayAttributeValue(URsVitalityAttributeSet::GetCurrentHealthAttribute(), bIsFound);
		if (IsDead())
		{
			UE_LOGFMT(LogTemp, Warning, "{GetName}({NetAuthority}) has returned to the living plane."
				, GetOwner()->GetName(), GetOwner()->HasAuthority());
		}
		else
		{
			UE_LOGFMT(LogTemp, Warning, "{GetName}({NetAuthority}) has died (HP = {CurrentHealth})"
			, GetOwner()->GetName(), GetOwner()->HasAuthority(), CurrentHealth);
		}

		OnDeathStatusChanged.Broadcast(IsDead(), CurrentHealth);
	}
}

void URsAbilityComponent::CheckIfDead()
{
	// Only run on authority
	if (!GetOwner()->HasAuthority())
	{
		return;
	}

	bool bIsFound = false;
	float CurrentHealth = GetGameplayAttributeValue(URsVitalityAttributeSet::GetCurrentHealthAttribute(), bIsFound);
	if (bIsFound)
	{
		if (IsDead())
		{
			if (CurrentHealth >= 0.f)
			{
				bIsDead = false;
				if (GetOwner()->HasAuthority() || GetNetMode() < NM_Client)
				{
					RemoveActiveEffectsWithTags(FGameplayTagContainer(TAG_Effects_Status_Dead.GetTag()));
					UE_LOGFMT(LogTemp, Warning, "{GetName}({NetAuthority}) has returned to the living plane."
						, GetOwner()->GetName(), GetOwner()->HasAuthority());
					OnDeathStatusChanged.Broadcast(false, CurrentHealth);
				}
			}
		}
		else
		{
			if (CurrentHealth < 0.f)
			{
				bIsDead = true;
				if (GetOwner()->HasAuthority() || GetNetMode() < NM_Client)
				{
					UE_LOGFMT(LogTemp, Warning, "{GetName}({NetAuthority}) has died (HP = {CurrentHealth})"
					, GetOwner()->GetName(), GetOwner()->HasAuthority(), CurrentHealth);

					if (IsValid(DeathAbility))
					{
						FGameplayAbilitySpec AbilitySpec = BuildAbilitySpecFromClass(DeathAbility);
						GiveAbilityAndActivateOnce(AbilitySpec);
					}
					OnDeathStatusChanged.Broadcast(true, CurrentHealth);
				}
			}
		}
	}
	const bool bIsNowDead = IsDead();
	OnDeathStatusChanged.Broadcast(bIsNowDead, bIsFound ? CurrentHealth : (bIsNowDead ? -1.f : 1.f));
}

bool URsAbilityComponent::IsDead() const
{
	return bIsDead;
}

void URsAbilityComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(URsAbilityComponent, bIsDead);
}


// Called every frame
void URsAbilityComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
