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
}


void URsAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	InitDefaultAbilities();
	InitDefaultEffects();
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

/*
bool URsAbilityComponent::PrimaryAbility(
	const TSubclassOf<URsGameplayAbilityBase>& AbilityReference, const bool bStartAbility, const bool bCancelAbility)
{
	const bool bActivated = TryActivateAbilityByClass(AbilityReference, true);
	if (bActivated)
	{
		UE_LOGFMT(LogRolestats, Display, "Activated Primary Ability Binding");
	}
	else
	{
		UE_LOGFMT(LogRolestats, Warning, "FAILED to Activate Primary Ability Binding");
	}
	return bActivated;
}

bool URsAbilityComponent::SecondaryAbility(
	const TSubclassOf<URsGameplayAbilityBase>& AbilityReference, const bool bStartAbility, const bool bCancelAbility)
{
	if (bStartAbility)
	{
		const bool bActivated = TryActivateAbilityByClass(AbilityReference, true);
		if (bActivated)
		{
			UE_LOGFMT(LogRolestats, Display, "Activated Secondary Ability Binding");
		}
		else
		{
			UE_LOGFMT(LogRolestats, Warning, "FAILED to Activate Secondary Ability Binding");
		}
		return bActivated;
	}
	if (FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromClass(AbilityReference))
	{
		if (bCancelAbility)
		{
			AbilityLocalInputPressed(static_cast<uint32>(EAbilityInputID::Cancel));
			//CancelAbilitySpec(*AbilitySpec, nullptr);
			UE_LOGFMT(LogRolestats, Warning, "Ability '{AbilityName}' was CANCELED", AbilitySpec->GetDebugString());
			return true;
		}
		AbilityLocalInputPressed(static_cast<uint32>(EAbilityInputID::Confirm));
		UE_LOGFMT(LogRolestats, Warning, "Ability '{AbilityName}' was CONFIRMED", AbilitySpec->GetDebugString());
	}
	return true;
}
*/

bool URsAbilityComponent::HotkeyAbility(
	const FInputActionValue& InputValue, const TSubclassOf<URsGameplayAbilityBase>& AbilityReference, const bool bStartAbility, const bool bCancelAbility)
{
	if (InputValue.Get<bool>())
	{
		const bool bActivated = TryActivateAbilityByClass(AbilityReference, true);
		if (bActivated)
		{
			UE_LOGFMT(LogRolestats, Display,
				"Activated Hotkey Ability Binding ({AbilityReference})", AbilityReference->GetName());
		}
		else
		{
			UE_LOGFMT(LogRolestats, Warning,
				"FAILED to Activate Hotkey Ability Binding ({AbilityReference})", AbilityReference->GetName());
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
