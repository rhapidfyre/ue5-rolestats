// Starcache Studios, LLC (c) 2024


#include "Attributes/RsCoreAttributeSet.h"

#include "Logging/StructuredLog.h"
#include "Net/UnrealNetwork.h"


URsCoreAttributeSet::URsCoreAttributeSet()
	: Strength(100.f),  Dexterity(100.f)
	, Fortitude(100.f), Astuteness(100.f)
	, Intellect(100.f), Charisma(100.f)
{
}

void URsCoreAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
	ClampAttributeOnChange(Attribute, NewValue);
}

void URsCoreAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	ClampAttributeOnChange(Attribute, NewValue);
}

void URsCoreAttributeSet::ClampAttributeOnChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	// Allow some stats to go below zero
	float minAttributeValue = 0.f;
	if (GetDexterityAttribute() == Attribute)
	{
		minAttributeValue = STAT_MIN;
	}
	else if (GetCharismaAttribute() == Attribute)
	{
		minAttributeValue = STAT_MIN;
	}

	// Cap all core stats at 1,000
	NewValue = FMath::Clamp(NewValue, minAttributeValue, STAT_MAX);
}

TArray<FGameplayAttribute> URsCoreAttributeSet::GetAllCoreStatAttributes()
{
	return {
		GetStrengthAttribute(), GetDexterityAttribute(), GetFortitudeAttribute(),
		GetAstutenessAttribute(), GetIntellectAttribute(), GetCharismaAttribute()
	};
}


////////////////////////////////////////////////////////////////////////////////
//	REPLICATION
////////////////////////////////////////////////////////////////////////////////


void URsCoreAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Vitality Attributes
	DOREPLIFETIME_CONDITION_NOTIFY(URsCoreAttributeSet, Strength,	COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsCoreAttributeSet, Dexterity,	COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsCoreAttributeSet, Fortitude,	COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsCoreAttributeSet, Astuteness,	COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsCoreAttributeSet, Intellect,	COND_OwnerOnly, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsCoreAttributeSet, Charisma,	COND_OwnerOnly, REPNOTIFY_Always);

}

void URsCoreAttributeSet::OnRep_Strength(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetStrength();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Strength Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsCoreAttributeSet, Strength, OldData);
}

void URsCoreAttributeSet::OnRep_Dexterity(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetDexterity();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Dexterity Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsCoreAttributeSet, Dexterity, OldData);
}

void URsCoreAttributeSet::OnRep_Fortitude(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetFortitude();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Fortitude Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsCoreAttributeSet, Fortitude, OldData);
}

void URsCoreAttributeSet::OnRep_Astuteness(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetAstuteness();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Astuteness Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsCoreAttributeSet, Astuteness, OldData);
}

void URsCoreAttributeSet::OnRep_Intellect(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetIntellect();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Intellect Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsCoreAttributeSet, Intellect, OldData);
}

void URsCoreAttributeSet::OnRep_Charisma(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetCharisma();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Charisma Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsCoreAttributeSet, Charisma, OldData);
}
