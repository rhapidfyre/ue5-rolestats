// Starcache Studios, LLC (c) 2024


#include "RsAbilityComponent.h"

#include "AbilitySystemLog.h"
#include "Abilities/RsGameplayAbilityBase.h"
#include "Effects/RsGameplayEffectBase.h"
#include "EnhancedInputComponent.h"
#include "Attributes/RsDamageAttributeSet.h"
#include "Attributes/RsVitalityAttributeSet.h"
#include "Kismet/GameplayStatics.h"
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


FResearchProgress::FResearchProgress()
{
}

FResearchProgress::FResearchProgress(TSubclassOf<URsGameplayAbilityBase> ResearchAbility, const float StartingSkill)
	: AbilityReference(ResearchAbility), SkillLevelStarting(StartingSkill)
{
}

bool FResearchProgress::operator==(const FResearchProgress& Element) const
{
	if (AbilityReference != nullptr)
	{
		if (AbilityReference == Element.AbilityReference)
		{
			if (SkillLevelStarting != Element.SkillLevelStarting)
			{
				return false;
			}

			if (SkillLevelCurrent != Element.SkillLevelCurrent)
			{
				return false;
			}

			if (ReagentsConsumed != Element.ReagentsConsumed)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

URsAbilityComponent::URsAbilityComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);

	this->OnActiveGameplayEffectAddedDelegateToSelf.AddUObject(this, &URsAbilityComponent::NewGameplayEffectAppliedToSelf);
	FOnGivenActiveGameplayEffectRemoved* GERemovedDelegate = &OnAnyGameplayEffectRemovedDelegate();
	GERemovedDelegate->AddUObject(this, &URsAbilityComponent::OnAnyGameplayEffectRemoved);
}

void URsAbilityComponent::SetTargetActor(AActor* NewTargetActor)
{
	const AActor* OldTarget = TargetActor;
	TargetActor = NewTargetActor;
	OnTargetActorUpdated.Broadcast(OldTarget);
}

AActor* URsAbilityComponent::GetTargetActor() const
{
	return TargetActor;
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

/**
 * \brief Consumed num of reagents, updating research progress until the ability is unlocked
 * \param AbilityReference The ability being researched
 * \param ConsumedReagent The reagent that was consumed
 * \param NumReagentsConsumed The number of reagents consumed
 */
void URsAbilityComponent::ResearchConsumeReagent(TSubclassOf<URsGameplayAbilityBase> AbilityReference,
                                                 UDataAsset* ConsumedReagent, int NumReagentsConsumed)
{
	for (auto& ResearchEntry : ResearchProgress)
	{
		if (ResearchEntry.AbilityReference == AbilityReference)
		{
			const auto* DefaultAbilityObject = ResearchEntry.AbilityReference->GetDefaultObject<URsGameplayAbilityBase>();

			// If experimenting, convert all reagents into experience
			if (ResearchEntry.ResearchState == EResearchState::Experimentation)
			{
				ResearchEntry.SkillLevelCurrent += (NumReagentsConsumed * DefaultAbilityObject->ReagentToExperienceRatio);
				if (ResearchEntry.SkillLevelCurrent >= DefaultAbilityObject->ExperimentationNeeded)
				{
					ResearchEntry.ResearchState = EResearchState::Revealed;
				}
			}

			// If the ability has been revealed, consume reagents for unlock
			if (ResearchEntry.ResearchState == EResearchState::Revealed)
			{
				if (IsValid(ConsumedReagent) && NumReagentsConsumed > 0)
				{
					// If the reagents consumed is the correct reagent
					if (ConsumedReagent->StaticClass() == DefaultAbilityObject->ResearchReagent)
					{
						ResearchEntry.ReagentsConsumed += NumReagentsConsumed;
						if (ResearchEntry.ReagentsConsumed >= DefaultAbilityObject->ReagentsRequired)
						{
							ResearchEntry.ResearchState = EResearchState::Purchasable;
						}
					}
				}
			}

			// Allow the player who is the server to receive the update
			if (GetNetMode() < NM_Client)
			{
				OnResearchUpdated.Broadcast(ResearchEntry.AbilityReference);
			}
			return;
		}
	}
}

void URsAbilityComponent::ResearchExperienceGained(const FGameplayTag& AbilitySchoolTag, const float XpGained)
{
	for (auto& ResearchEntry : ResearchProgress)
	{
		if (const URsGameplayAbilityBase* DefaultAbilityObject = ResearchEntry.AbilityReference->GetDefaultObject<URsGameplayAbilityBase>())
		{
			if (DefaultAbilityObject->AbilitySchool == AbilitySchoolTag)
			{
				if (ResearchEntry.ResearchState == EResearchState::Experimentation)
				{
					ResearchEntry.SkillLevelCurrent += abs(XpGained);
					if (ResearchEntry.SkillLevelCurrent >= DefaultAbilityObject->ExperimentationNeeded)
					{
						ResearchEntry.ResearchState = EResearchState::Revealed;
						UE_LOGFMT(LogTemp, Display, "Experience Gained: '{AbilitySchool}' - Experimentation Complete"
							, AbilitySchoolTag.ToString());
					}
					else
					{
						UE_LOGFMT(LogTemp, Display, "Experience Gained: '{AbilitySchool}' ({NewValue})"
							, AbilitySchoolTag.ToString(), ResearchEntry.SkillLevelCurrent);
					}
				}

				if (GetNetMode() < NM_Client)
				{
					OnResearchUpdated.Broadcast(ResearchEntry.AbilityReference);
				}
			}
		}
	}
}

/**
 * \brief Starts the research process, adding the ability to the research progress data array
 * \param AbilityReference The ability to be researched
 */
void URsAbilityComponent::ResearchBegin(TSubclassOf<URsGameplayAbilityBase> AbilityReference)
{
	if (IsValid(AbilityReference))
	{
		const URsGameplayAbilityBase* DefaultAbilityObject = AbilityReference->GetDefaultObject<URsGameplayAbilityBase>();
		if (IsValid(DefaultAbilityObject))
		{
			FResearchProgress NewResearchData(AbilityReference, GetAbilityExperience(DefaultAbilityObject->AbilitySchool));
			ResearchProgress.Add(NewResearchData);

			if (GetNetMode() < NM_Client)
			{
				OnResearchUpdated.Broadcast(AbilityReference);
			}
		}
	}
}

void URsAbilityComponent::ResearchPurchase(TSubclassOf<URsGameplayAbilityBase> AbilityReference)
{
	if (IsValid(AbilityReference))
	{
		for (auto& ResearchEntry : ResearchProgress)
		{
			if (ResearchEntry.AbilityReference == AbilityReference)
			{
				const URsGameplayAbilityBase* DefaultAbilityObject = AbilityReference->GetDefaultObject<URsGameplayAbilityBase>();
				if (ResearchEntry.SkillLevelCurrent >= DefaultAbilityObject->ExperimentationNeeded)
				{
					if (ResearchEntry.ReagentsConsumed >= DefaultAbilityObject->ReagentsRequired)
					{
						ResearchEntry.ResearchState = EResearchState::Completed;
						GiveAbility(FGameplayAbilitySpec(AbilityReference, 1,
							static_cast<int32>(DefaultAbilityObject->AbilityInputID), this));
					}
				}
				break;
			}
		}
	}

	// Remove any completed research entries
	for (int i = ResearchProgress.Num() - 1; i >= 0; i--)
	{
		if (ResearchProgress.IsValidIndex(i))
		{
			if (ResearchProgress[i].ResearchState == EResearchState::Completed)
			{
				ResearchProgress.RemoveAt(i);
			}
		}
	}
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
	BindListeners();
}

void URsAbilityComponent::InitDefaultAbilities()
{
	if (!GetOwner()->HasAuthority())
	{
		return;
	}

	// Grant the default attack ability
	if (IsValid(DefaultAttackAbility))
	{
		GiveAbility(FGameplayAbilitySpec(DefaultAttackAbility, 1, 0, this));
	}

	// Grant all explicit abilities
	for (TSubclassOf<URsGameplayAbilityBase>& Ability : DefaultAbilities)
	{
		if (IsValid(Ability))
		{
			GiveAbility(FGameplayAbilitySpec(Ability, 1,
				static_cast<int32>(Ability.GetDefaultObject()->AbilityInputID), this));
		}
	}
}

void URsAbilityComponent::InitDefaultEffects()
{
	FGameplayEffectContextHandle EffectContext = MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (TSubclassOf<URsGameplayEffectBase>& Effect : DefaultEffects)
	{
		if (GetGameplayEffectCount(Effect, this))
		{
			UE_LOGFMT(LogTemp, Warning, "GAS: Default Effect '{Effect}' already exists!", Effect->GetName());
			continue;
		}

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

/**
 * \brief Begins a research request, adding the research to the research data array if eligible
 * \param AbilityReference The ability to be researched
 */
void URsAbilityComponent::Server_ResearchBegin_Implementation(TSubclassOf<UGameplayAbility> AbilityReference)
{
	if (IsValid(AbilityReference))
	{

	}
}

void URsAbilityComponent::OnRep_ResearchProgress_Implementation(const TArray<FResearchProgress>& OldProgress)
{
	for (int i = ResearchProgress.Num() - 1; i >= 0; i--)
	{
		if (ResearchProgress.IsValidIndex(i))
		{
			// Existing research
			if (OldProgress.Contains(ResearchProgress[i]))
			{
				for (const auto& OldResearch : OldProgress)
				{
					// Ability research existed previously, and a value has changed
					if (OldResearch.AbilityReference == ResearchProgress[i].AbilityReference)
					{
						if (
							 (OldResearch.ReagentsConsumed != ResearchProgress[i].ReagentsConsumed)
							 || (OldResearch.SkillLevelCurrent != ResearchProgress[i].SkillLevelCurrent)
							 || (OldResearch.ResearchState != ResearchProgress[i].ResearchState)
						)
						{
							OnResearchUpdated.Broadcast(ResearchProgress[i].AbilityReference);
						}
						break;
					}
				}
			}

			// New research found
			else
			{
				OnResearchUpdated.Broadcast(ResearchProgress[i].AbilityReference);
			}
		}
	}
}

void URsAbilityComponent::Client_CooldownEnded_Implementation(
	TSubclassOf<UGameplayAbility> AbilityReference)
{
	if (IsValid(AbilityReference))
	{
		{
			FRWScopeLock WriteLock(CooldownLock, SLT_Write);
			AbilityCooldowns.Remove(AbilityReference);
		}
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
			{
				FRWScopeLock WriteLock(CooldownLock, SLT_Write);
				AbilityCooldowns.Add(AbilityReference);
			}
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

	TArray<TSubclassOf<UGameplayAbility>> AllCooldownKeys;
	{
		FRWScopeLock ReadLock(CooldownLock, SLT_ReadOnly);
		AbilityCooldowns.GetKeys(AllCooldownKeys);
	}

	for (const auto& CooldownKey : AllCooldownKeys)
	{
		if (AbilityCooldowns.Contains(CooldownKey))
		{
			// Lock it - The entry is either being removed, or modified
			float& CooldownValue = AbilityCooldowns[CooldownKey];
			if (CooldownValue <= 0.f)
			{
				OnAbilityCooldownEnded.Broadcast(CooldownKey);
				{
					FRWScopeLock WriteLock(CooldownLock, SLT_Write);
					AbilityCooldowns.Remove(CooldownKey);
				}
				Client_CooldownEnded(CooldownKey);
			}
			else
			{
				FRWScopeLock WriteLock(CooldownLock, SLT_Write);
				CooldownValue -= CooldownRate;
			}
		}
	}
}

void URsAbilityComponent::OnRep_TargetActor_Implementation(const AActor* OldTarget)
{
	OnTargetActorUpdated.Broadcast(OldTarget);
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
				{
					FRWScopeLock WriteLock(CooldownLock, SLT_Write);
					AbilityCooldowns.Add(AbilityReference, DefaultObject->CooldownTime);
				}
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

				// Apply experience to research schools
				ResearchExperienceGained(AbilitySkillTag, abs(NewValue - OldValue));
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
	UE_LOGFMT(LogAbilitySystem, Warning, "{GetName}({NetAuthority}) - GetCoreStatByTag() is not implemented!"
		, GetOwner()->GetName(), GetOwner()->HasAuthority() ? TEXT("SERVER") : TEXT("CLIENT"));
	return 0.f;
}

float URsAbilityComponent::GetDamageResistanceByTag(const FGameplayTag& DamageTag) const
{
	UE_LOGFMT(LogAbilitySystem, Warning, "{GetName}({NetAuthority}) - GetDamageResistanceByTag() is not implemented!"
		, GetOwner()->GetName(), GetOwner()->HasAuthority() ? TEXT("SERVER") : TEXT("CLIENT"));
	return 0.f;
}

float URsAbilityComponent::GetDamageBonusByTag(const FGameplayTag& DamageTag) const
{
	UE_LOGFMT(LogAbilitySystem, Warning, "{GetName}({NetAuthority}) - GetDamageBonusByTag() is not implemented!"
		, GetOwner()->GetName(), GetOwner()->HasAuthority() ? TEXT("SERVER") : TEXT("CLIENT"));
	return 0.f;
}

bool URsAbilityComponent::HotkeyAbility(
	const FInputActionValue& InputValue, const TSubclassOf<URsGameplayAbilityBase>& AbilityReference, const ETriggerEvent TriggerEvent)
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
					FRWScopeLock WriteLock(CooldownLock, SLT_Write);
					AbilityCooldowns.Add(AbilityReference, DefaultObject->CooldownTime);
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
	DOREPLIFETIME(URsAbilityComponent, TargetActor);
}


// Called every frame
void URsAbilityComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
