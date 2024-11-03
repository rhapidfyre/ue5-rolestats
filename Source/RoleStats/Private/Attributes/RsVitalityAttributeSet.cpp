// Starcache Studios, LLC (c) 2024


#include "Attributes/RsVitalityAttributeSet.h"

#include "Logging/StructuredLog.h"
#include "Net/UnrealNetwork.h"

URsVitalityAttributeSet::URsVitalityAttributeSet()
	: CurrentHealth(100.f), CurrentStamina(100.f), CurrentMagic(100.f)
	, CurrentHunger(0.f), CurrentHydration(0.f)
	, MaximumHealth(100.f), MaximumStamina(100.f), MaximumMagic(100.f)
	, MaximumHunger(0.f), MaximumHydration(0.f)
	, PassiveHealthRegen(0.f), PassiveMagicRegen(0.f), PassiveStaminaRegen(0.f)
	, PassiveHungerDrain(0.f), PassiveHydroDrain(0.f)
{
}

TArray<FGameplayAttribute> URsVitalityAttributeSet::GetAllVitalityAttributes()
{
	return {
		GetCurrentHealthAttribute(),	GetMaximumHealthAttribute(),
		GetCurrentStaminaAttribute(),	GetMaximumStaminaAttribute(),
		GetCurrentMagicAttribute(),		GetMaximumMagicAttribute(),
		GetCurrentHungerAttribute(),	GetMaximumHungerAttribute(),
		GetCurrentHydrationAttribute(),	GetMaximumHydrationAttribute(),
		GetPassiveHealthRegenAttribute(), GetPassiveMagicRegenAttribute(),
		GetPassiveStaminaRegenAttribute(), GetPassiveHungerDrainAttribute(),
		GetPassiveHydroDrainAttribute()
	};
}


void URsVitalityAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
	ClampAttributeOnChange(Attribute, NewValue);
}

void URsVitalityAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	ClampAttributeOnChange(Attribute, NewValue);
}

void URsVitalityAttributeSet::ClampAttributeOnChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	float minAttributeValue = 0.f;
	float maxAttributeValue;
	if (GetCurrentHealthAttribute() == Attribute)
	{
		// Allow health to go negative
		maxAttributeValue = GetMaximumHealth();
		minAttributeValue = 0 - maxAttributeValue;
	}
	else if (GetCurrentHungerAttribute() == Attribute)
	{
		maxAttributeValue = GetMaximumHunger();
	}
	else if (GetCurrentHydrationAttribute() == Attribute)
	{
		maxAttributeValue = GetMaximumHydration();
	}
	else
	{
		return;
	}
	NewValue = FMath::Clamp(NewValue, minAttributeValue, maxAttributeValue);
}

void URsVitalityAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);
}


////////////////////////////////////////////////////////////////////////////////
//	REPLICATION
////////////////////////////////////////////////////////////////////////////////

void URsVitalityAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Vitality Attributes
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, CurrentHealth,		COND_None, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, CurrentMagic,		COND_None, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, CurrentStamina,		COND_None, 		REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, CurrentHunger,		 COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, CurrentHydration,	 COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, PassiveHealthRegen,	 COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, PassiveStaminaRegen, COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, PassiveMagicRegen,	 COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, PassiveHungerDrain,	 COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, PassiveHydroDrain,	 COND_OwnerOnly, REPNOTIFY_Always);

	// Attribute Maximums
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, MaximumHealth,		COND_None, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, MaximumMagic,		COND_None, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, MaximumStamina,		COND_None, 		REPNOTIFY_Always);

	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, MaximumHunger,		COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsVitalityAttributeSet, MaximumHydration,	COND_OwnerOnly, REPNOTIFY_Always);
}

void URsVitalityAttributeSet::OnRep_CurrentHealth(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetCurrentHealth();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Current Health Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, CurrentHealth, OldData);
}

void URsVitalityAttributeSet::OnRep_CurrentMagic(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetCurrentMagic();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Current Magic Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, CurrentMagic, OldData);
}

void URsVitalityAttributeSet::OnRep_CurrentStamina(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetCurrentStamina();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Current Stamina Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, CurrentStamina, OldData);
}

void URsVitalityAttributeSet::OnRep_CurrentHunger(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetCurrentHunger();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Current Hunger Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, CurrentHunger, OldData);
}

void URsVitalityAttributeSet::OnRep_CurrentHydration(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetCurrentHydration();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Current Hydration Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, CurrentHydration, OldData);
}

void URsVitalityAttributeSet::OnRep_PassiveHealthRegen(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetPassiveHealthRegen();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Passive Health Regen Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, PassiveHealthRegen, OldData);
}

void URsVitalityAttributeSet::OnRep_PassiveStaminaRegen(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetPassiveStaminaRegen();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Passive Stamina Regen Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, PassiveStaminaRegen, OldData);
}

void URsVitalityAttributeSet::OnRep_PassiveMagicRegen(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetPassiveMagicRegen();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Passive Magic Regen Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, PassiveMagicRegen, OldData);
}

void URsVitalityAttributeSet::OnRep_PassiveHungerDrain(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetPassiveHungerDrain();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Passive Hunger Drain Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, PassiveHungerDrain, OldData);
}

void URsVitalityAttributeSet::OnRep_PassiveHydroDrain(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetPassiveHydroDrain();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Passive Hydration Drain Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, PassiveHydroDrain, OldData);
}

void URsVitalityAttributeSet::OnRep_MaximumHealth(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetMaximumHealth();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Maximum Health Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, MaximumHealth, OldData);
}

void URsVitalityAttributeSet::OnRep_MaximumMagic(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetMaximumMagic();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Maximum Magic Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, MaximumMagic, OldData);
}

void URsVitalityAttributeSet::OnRep_MaximumStamina(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetMaximumStamina();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Maximum Stamina Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, MaximumStamina, OldData);
}

void URsVitalityAttributeSet::OnRep_MaximumHunger(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetMaximumHunger();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Maximum Hunger Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, MaximumHunger, OldData);
}

void URsVitalityAttributeSet::OnRep_MaximumHydration(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetMaximumHydration();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Maximum Hydration Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsVitalityAttributeSet, MaximumHydration, OldData);
}
