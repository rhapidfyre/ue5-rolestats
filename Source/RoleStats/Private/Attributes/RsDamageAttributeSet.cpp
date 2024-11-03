// Starcache Studios, LLC (c) 2024


#include "Attributes/RsDamageAttributeSet.h"

#include "Logging/StructuredLog.h"
#include "Net/UnrealNetwork.h"

URsDamageAttributeSet::URsDamageAttributeSet()
	: IncomingDamage(0.f), CriticalChance(0.f), CriticalMultiplier(1.f)
	, LuckyChance(0.f), DamageModifier(0.f), DamageMultiplier(1.f)
	, BluntResistance(0.f), SlashResistance(0.f), PierceResistance(0.f)
	, BiteResistance(0.f), KickResistance(0.f), ClawResistance(0.f)
	, StingResistance(0.f),FireResistance(0.f), FrostResistance(0.f)
	, AcidResistance(0.f), ShockResistance(0.f), RadioResistance(0.f)
	, SonicResistance(0.f), HolyResistance(0.f), DarkResistance(0.f)
	, BluntBonus(0.f), SlashBonus(0.f), PierceBonus(0.f)
	, BiteBonus(0.f), KickBonus(0.f), ClawBonus(0.f)
	, StingBonus(0.f),FireBonus(0.f), FrostBonus(0.f)
	, AcidBonus(0.f), ShockBonus(0.f), RadioBonus(0.f)
	, SonicBonus(0.f), HolyBonus(0.f), DarkBonus(0.f)
{
}


TArray<FGameplayAttributeData> URsDamageAttributeSet::GetAllDamageResistAttributes()
{
	TArray AllResistances = {
		BluntResistance, SlashResistance, PierceResistance,
		BiteResistance, KickResistance, ClawResistance,
		StingResistance,FireResistance, FrostResistance,
		AcidResistance, ShockResistance, RadioResistance,
		SonicResistance, HolyResistance, DarkResistance,
	};
	return AllResistances;
}

TArray<FGameplayAttributeData> URsDamageAttributeSet::GetAllDamageBonusAttributes()
{
	TArray AllBonuses = {
		BluntBonus, SlashBonus, PierceBonus,
		BiteBonus, KickBonus, ClawBonus,
		StingBonus,FireBonus, FrostBonus,
		AcidBonus, ShockBonus, RadioBonus,
		SonicBonus, HolyBonus, DarkBonus,
	};
	return AllBonuses;
}

void URsDamageAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
	ClampAttributeOnChange(Attribute, NewValue);
}

void URsDamageAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	ClampAttributeOnChange(Attribute, NewValue);
}

void URsDamageAttributeSet::ClampAttributeOnChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	// All resistances and bonuses are capped at -1,000 to 1,000
	//  where negative is a vulnerability/handicap and positive is resistance/bonus
	NewValue = FMath::Clamp(NewValue, -1000.f, 1000.f);
}


////////////////////////////////////////////////////////////////////////////////
//	REPLICATION
////////////////////////////////////////////////////////////////////////////////

void URsDamageAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Damage Attributes
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, CriticalChance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, CriticalMultiplier,	COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, LuckyChance,			COND_OwnerOnly, 	REPNOTIFY_Always);

	// Resistance Attributes
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, BluntResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, SlashResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, PierceResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, FireResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, FrostResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, AcidResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, ShockResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, RadioResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, SonicResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, HolyResistance,		COND_OwnerOnly, 	REPNOTIFY_Always);

	// Damage Bonus Attributes
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, BluntBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, SlashBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, PierceBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, FireBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, FrostBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, AcidBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, ShockBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, RadioBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, SonicBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, HolyBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URsDamageAttributeSet, DarkBonus,		COND_OwnerOnly, 		REPNOTIFY_Always);
}

void URsDamageAttributeSet::OnRep_IncomingDamage(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetIncomingDamage();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Incoming Damage Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, IncomingDamage, OldData);
}

void URsDamageAttributeSet::OnRep_CriticalChance(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetCriticalChance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Critical Chance Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, CriticalChance, OldData);
}

void URsDamageAttributeSet::OnRep_CriticalMultiplier(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetCriticalMultiplier();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Critical Multiplier Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, CriticalMultiplier, OldData);
}

void URsDamageAttributeSet::OnRep_LuckyChance(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetLuckyChance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Lucky Chance Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, LuckyChance, OldData);
}

void URsDamageAttributeSet::OnRep_DamageModifier(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetDamageModifier();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Damage Modifier Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, DamageModifier, OldData);
}

void URsDamageAttributeSet::OnRep_DamageMultiplier(const FGameplayAttributeData& OldData)
{
	const float oldValue = OldData.GetCurrentValue();
	const float newValue = GetDamageMultiplier();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Damage Multiplier Updated. Was {OldValue}, Now {NewValue}",
		GetName(), GetOwningActor()->HasAuthority()?"SRV":"CLI",
		oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, DamageMultiplier, OldData);
}

void URsDamageAttributeSet::OnRep_NaturalResistance(const FGameplayAttributeData& OldData)
{
}


void URsDamageAttributeSet::OnRep_BluntResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetBluntResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Blunt Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, BluntResistance, OldData);
}

void URsDamageAttributeSet::OnRep_SlashResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetSlashResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Slash Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, SlashResistance, OldData);
}

void URsDamageAttributeSet::OnRep_PierceResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetPierceResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Piercing Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, PierceResistance, OldData);
}

void URsDamageAttributeSet::OnRep_FireResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetFireResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Fire Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, FireResistance, OldData);
}

void URsDamageAttributeSet::OnRep_FrostResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetFrostResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Frost Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, FrostResistance, OldData);
}

void URsDamageAttributeSet::OnRep_AcidResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetAcidResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Acid Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, AcidResistance, OldData);
}

void URsDamageAttributeSet::OnRep_ShockResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetShockResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Shock Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, ShockResistance, OldData);
}

void URsDamageAttributeSet::OnRep_RadioResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetRadioResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Radio Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, RadioResistance, OldData);
}

void URsDamageAttributeSet::OnRep_SonicResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetSonicResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Sonic Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, SonicResistance, OldData);
}

void URsDamageAttributeSet::OnRep_HolyResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetHolyResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Holy Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, HolyResistance, OldData);
}

void URsDamageAttributeSet::OnRep_DarkResistance(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetDarkResistance();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Dark Resistance Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, DarkResistance, OldData);
}

void URsDamageAttributeSet::OnRep_NaturalBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetNaturalBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Blunt Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, NaturalBonus, OldData);
}


void URsDamageAttributeSet::OnRep_BluntBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetBluntBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Blunt Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, BluntBonus, OldData);
}

void URsDamageAttributeSet::OnRep_SlashBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetSlashBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Slashing Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, SlashBonus, OldData);
}

void URsDamageAttributeSet::OnRep_PierceBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetPierceBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Piercing Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, PierceBonus, OldData);
}

void URsDamageAttributeSet::OnRep_FireBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetFireBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Fire Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, FireBonus, OldData);
}

void URsDamageAttributeSet::OnRep_FrostBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetFrostBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Frost Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, FrostBonus, OldData);
}

void URsDamageAttributeSet::OnRep_AcidBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetAcidBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Acid Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, AcidBonus, OldData);
}

void URsDamageAttributeSet::OnRep_ShockBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetShockBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Shock Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, ShockBonus, OldData);
}

void URsDamageAttributeSet::OnRep_RadioBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetRadioBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Radioactive Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, RadioBonus, OldData);
}

void URsDamageAttributeSet::OnRep_SonicBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetSonicBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Sonic Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, SonicBonus, OldData);
}

void URsDamageAttributeSet::OnRep_HolyBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetHolyBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Holy Magic Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, HolyBonus, OldData);
}

void URsDamageAttributeSet::OnRep_DarkBonus(const FGameplayAttributeData& OldData)
{
	float oldValue = OldData.GetCurrentValue();
	float newValue = GetDarkBonus();
	UE_LOGFMT(LogAbilitySystemComponent, VeryVerbose,  "{Name}({Authority}): "
		"Dark Magic Bonus Updated. Was {OldValue}, Now {NewValue}", GetName(),
		GetOwningActor()->HasAuthority()?"SRV":"CLI", oldValue, newValue);
	GAMEPLAYATTRIBUTE_REPNOTIFY(URsDamageAttributeSet, DarkBonus, OldData);
}
