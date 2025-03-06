// Starcache Studios, LLC (c) 2024


#include "Effects/RsEffectDamageCalc.h"

#include "Attributes/RsCoreAttributeSet.h"
#include "Attributes/RsDamageAttributeSet.h"
#include "Attributes/RsVitalityAttributeSet.h"

#include "Logging/StructuredLog.h"


struct FDamageStatics
{
public:
	TMap<FGameplayTag, FGameplayEffectAttributeCaptureDefinition> BonusMap;
	TMap<FGameplayTag, FGameplayEffectAttributeCaptureDefinition> ResistanceMap;

	DECLARE_ATTRIBUTE_CAPTUREDEF(IncomingDamage); // Target's incoming damage
	DECLARE_ATTRIBUTE_CAPTUREDEF(CurrentHealth); // Target's health
	DECLARE_ATTRIBUTE_CAPTUREDEF(Fortitude);      // Target's damage mitigation
	DECLARE_ATTRIBUTE_CAPTUREDEF(Resistance);     // Target's magic resistance
	DECLARE_ATTRIBUTE_CAPTUREDEF(Avoidance);	  // Target's dexterity (avoidance)
	DECLARE_ATTRIBUTE_CAPTUREDEF(Astuteness);    // Target's magic damage mitigation

	DECLARE_ATTRIBUTE_CAPTUREDEF(Strength);       // Source's melee damage bonus
	DECLARE_ATTRIBUTE_CAPTUREDEF(Dexterity);      // Source's ranged damage bonus
	DECLARE_ATTRIBUTE_CAPTUREDEF(Intellect);      // Source's magic damage boost

	DECLARE_ATTRIBUTE_CAPTUREDEF(BluntBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(SlashBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(PierceBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(BiteBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(KickBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(ClawBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(StingBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(FireBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(FrostBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(AcidBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(ShockBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(RadioBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(SonicBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(HolyBonus);
	DECLARE_ATTRIBUTE_CAPTUREDEF(DarkBonus);

	DECLARE_ATTRIBUTE_CAPTUREDEF(BluntResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(SlashResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(PierceResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(BiteResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(KickResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(ClawResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(StingResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(FireResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(FrostResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(AcidResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(ShockResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(RadioResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(SonicResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(HolyResistance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(DarkResistance);

	FDamageStatics()
	{
        BonusMap.Add(TAG_Damage_Physical_Blunt, BluntBonusDef);
        BonusMap.Add(TAG_Damage_Physical_Slash, SlashBonusDef);
        BonusMap.Add(TAG_Damage_Physical_Pierce, PierceBonusDef);
        BonusMap.Add(TAG_Damage_Physical_Bite, BiteBonusDef);
        BonusMap.Add(TAG_Damage_Physical_Kick, KickBonusDef);
        BonusMap.Add(TAG_Damage_Physical_Claw, ClawBonusDef);
        BonusMap.Add(TAG_Damage_Physical_Sting, StingBonusDef);
        BonusMap.Add(TAG_Damage_Elemental_Fire, FireBonusDef);
        BonusMap.Add(TAG_Damage_Elemental_Frost, FrostBonusDef);
        BonusMap.Add(TAG_Damage_Elemental_Acid, AcidBonusDef);
        BonusMap.Add(TAG_Damage_Elemental_Shock, ShockBonusDef);
        BonusMap.Add(TAG_Damage_Elemental_Radioactive, RadioBonusDef);
        BonusMap.Add(TAG_Damage_Elemental_Sonic, SonicBonusDef);
        BonusMap.Add(TAG_Damage_Magic_Holy, HolyBonusDef);
        BonusMap.Add(TAG_Damage_Magic_DarkMagic, DarkBonusDef);

        ResistanceMap.Add(TAG_Damage_Physical_Blunt, BluntResistanceDef);
        ResistanceMap.Add(TAG_Damage_Physical_Slash, SlashResistanceDef);
        ResistanceMap.Add(TAG_Damage_Physical_Pierce, PierceResistanceDef);
        ResistanceMap.Add(TAG_Damage_Physical_Bite, BiteResistanceDef);
        ResistanceMap.Add(TAG_Damage_Physical_Kick, KickResistanceDef);
        ResistanceMap.Add(TAG_Damage_Physical_Claw, ClawResistanceDef);
        ResistanceMap.Add(TAG_Damage_Physical_Sting, StingResistanceDef);
        ResistanceMap.Add(TAG_Damage_Elemental_Fire, FireResistanceDef);
        ResistanceMap.Add(TAG_Damage_Elemental_Frost, FrostResistanceDef);
        ResistanceMap.Add(TAG_Damage_Elemental_Acid, AcidResistanceDef);
        ResistanceMap.Add(TAG_Damage_Elemental_Shock, ShockResistanceDef);
        ResistanceMap.Add(TAG_Damage_Elemental_Radioactive, RadioResistanceDef);
        ResistanceMap.Add(TAG_Damage_Elemental_Sonic, SonicResistanceDef);
        ResistanceMap.Add(TAG_Damage_Magic_Holy, HolyResistanceDef);
        ResistanceMap.Add(TAG_Damage_Magic_DarkMagic, DarkResistanceDef);

		// Capturing Incoming Damage (Set on the Target)
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, IncomingDamage, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsVitalityAttributeSet, CurrentHealth, Target, false);

		// Capturing Stats (Affects Damage Output)
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsCoreAttributeSet, Strength, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsCoreAttributeSet, Dexterity, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsCoreAttributeSet, Intellect, Source, false);

		// Defender Stats (Mitigation & Avoidance)
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsCoreAttributeSet, Fortitude, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsCoreAttributeSet, Dexterity, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsCoreAttributeSet, Intellect, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsCoreAttributeSet, Astuteness, Target, false);

		// Damage Bonuses
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, BluntBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, SlashBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, PierceBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, BiteBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, KickBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, ClawBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, StingBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, FireBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, FrostBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, AcidBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, ShockBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, RadioBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, SonicBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, HolyBonus, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, DarkBonus, Source, false);

		// Damage Resist
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, BluntResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, SlashResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, PierceResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, BiteResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, KickResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, ClawResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, StingResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, FireResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, FrostResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, AcidResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, ShockResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, RadioResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, SonicResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, HolyResistance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(URsDamageAttributeSet, DarkResistance, Target, false);
	}

	// Get Bonus Attribute for a Given Damage Type
	FGameplayEffectAttributeCaptureDefinition GetDamageBonusAttribute(const FGameplayTag& DamageTag) const
	{
		if (BonusMap.Contains(DamageTag))
		{
			return BonusMap[DamageTag];
		}
		return FGameplayEffectAttributeCaptureDefinition(); // Return empty if not found
	}

	// Get Resistance Attribute for a Given Damage Type
	FGameplayEffectAttributeCaptureDefinition GetDamageResistanceAttribute(const FGameplayTag& DamageTag) const
	{
		if (ResistanceMap.Contains(DamageTag))
		{
			return ResistanceMap[DamageTag];
		}
		return FGameplayEffectAttributeCaptureDefinition(); // Return empty if not found
	}
};

// Ensures only one instance exists
static const FDamageStatics& DamageStatics()
{
	static FDamageStatics DmgStatics;
	return DmgStatics;
}

URsEffectDamageCalc::URsEffectDamageCalc()
{
	RelevantAttributesToCapture.Add(DamageStatics().IncomingDamageDef);
	RelevantAttributesToCapture.Add(DamageStatics().CurrentHealthDef);
	RelevantAttributesToCapture.Add(DamageStatics().StrengthDef);
	RelevantAttributesToCapture.Add(DamageStatics().DexterityDef);
	RelevantAttributesToCapture.Add(DamageStatics().IntellectDef);
	RelevantAttributesToCapture.Add(DamageStatics().FortitudeDef);
	RelevantAttributesToCapture.Add(DamageStatics().ResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().AvoidanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().AstutenessDef);
	RelevantAttributesToCapture.Add(DamageStatics().BluntBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().SlashBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().PierceBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().BiteBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().KickBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().ClawBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().StingBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().FireBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().FrostBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().AcidBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().ShockBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().RadioBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().SonicBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().HolyBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().DarkBonusDef);
	RelevantAttributesToCapture.Add(DamageStatics().BluntResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().SlashResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().PierceResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().BiteResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().KickResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().ClawResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().StingResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().FireResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().FrostResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().AcidResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().ShockResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().RadioResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().SonicResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().HolyResistanceDef);
	RelevantAttributesToCapture.Add(DamageStatics().DarkResistanceDef);
}

void URsEffectDamageCalc::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
                                                 FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	Super::Execute_Implementation(ExecutionParams, OutExecutionOutput);

	// Get Ability Components & Actor References
	UAbilitySystemComponent* SourceComponent = ExecutionParams.GetSourceAbilitySystemComponent();
	UAbilitySystemComponent* TargetComponent = ExecutionParams.GetTargetAbilitySystemComponent();

	if (!SourceComponent || !TargetComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("AbilitySystemComponent is NULL! Skipping execution."));
		return;
	}

	AActor* SourceActor = SourceComponent->GetAvatarActor();
	AActor* TargetActor = TargetComponent->GetAvatarActor();
	if (!SourceActor || !TargetActor) return;

	const FGameplayEffectSpec& EffectSpec = ExecutionParams.GetOwningSpec();
	FAggregatorEvaluateParameters EvalParams;

	TArray DamageTags = {
		TAG_Damage.GetTag(), TAG_Damage_World.GetTag(), TAG_Damage_Ranged.GetTag(),
		TAG_Damage_Physical.GetTag(), TAG_Damage_Physical_Blunt.GetTag(), TAG_Damage_Physical_Slash.GetTag(), TAG_Damage_Physical_Pierce.GetTag(),
		TAG_Damage_Physical_Bite.GetTag(), TAG_Damage_Physical_Kick.GetTag(), TAG_Damage_Physical_Claw.GetTag(), TAG_Damage_Physical_Sting.GetTag(), TAG_Damage_Physical_Misc.GetTag(),
		TAG_Damage_Elemental.GetTag(), TAG_Damage_Elemental_Fire.GetTag(), TAG_Damage_Elemental_Frost.GetTag(), TAG_Damage_Elemental_Acid.GetTag(),
		TAG_Damage_Elemental_Shock.GetTag(), TAG_Damage_Elemental_Radioactive.GetTag(), TAG_Damage_Elemental_Sonic.GetTag(), TAG_Damage_Elemental_Misc.GetTag(),
		TAG_Damage_Magic.GetTag(), TAG_Damage_Magic_Holy.GetTag(), TAG_Damage_Magic_DarkMagic.GetTag(), TAG_Damage_Magic_Misc.GetTag()
	};

	// Store incoming damage for each type
	TMap<FGameplayTag, float> DamageValues, BonusValues, ResistanceValues;

	// Determines all the damages that are applied in this calculation
	for (const FGameplayTag& DamageTag : DamageTags)
	{
		float DamageValue = EffectSpec.GetSetByCallerMagnitude(DamageTag, false, 0.f);
		if (FMath::IsNearlyZero(DamageValue))  // Only store valid damage values
			continue;

		UE_LOGFMT(LogTemp, Display, "Damage Value for Tag={DamageTag} is {DamageValue}", DamageTag.ToString(), DamageValue);
		DamageValues.Add(DamageTag, DamageValue);
	}

	if (DamageValues.Num() < 1)
	{
		UE_LOGFMT(LogTemp, Error, "No damage values found when performing damage calculation!");
		return;
	}

	// Determines if any bonuses applies, and if so, sets the value to increase the damage by (-)
	for (const auto& Kvp : DamageValues)
	{
		float BonusValue = 0.f;
		if (DamageStatics().BonusMap.Contains(Kvp.Key))
			ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().BonusMap[Kvp.Key], EvalParams, BonusValue);

		if (!FMath::IsNearlyZero(BonusValue))
		{
			UE_LOGFMT(LogTemp, Display, "Damage Bonus Applied. Bonus={BonusValue}", BonusValue);
			BonusValues.Add(Kvp.Key, BonusValue * DamageValues.Contains(Kvp.Key) ? DamageValues[Kvp.Key] : 0.f);
		}
	}

	// Determines if any resistance applies, and if so, sets the value to reduce the damage by (+)
	for (const auto& Kvp : DamageValues)
	{
		float ResistValue = 0.f;
		if (DamageStatics().ResistanceMap.Contains(Kvp.Key))
			ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().ResistanceMap[Kvp.Key], EvalParams, ResistValue);

		if (!FMath::IsNearlyZero(ResistValue))
		{
			UE_LOGFMT(LogTemp, Display, "Damage Resistance Applied. Resist={ResistValue}", ResistValue);
			ResistanceValues.Add(Kvp.Key, ResistValue * DamageValues.Contains(Kvp.Key) ? DamageValues[Kvp.Key] : 0.f);
		}
	}

	// Apply Bonuses and resistances
	float InMeleeDamage = 0.f, InRangedDamage = 0.f, InMagicDamage = 0.f;
	for (auto& DamageValue : DamageValues)
	{
		if (FMath::IsNearlyZero(DamageValue.Value))
			continue;

		// Any type of physical sub-tag is melee damage
		if (DamageValue.Key.MatchesTag(TAG_Damage_Physical))
			InMeleeDamage  += DamageValue.Value + (BonusValues.Contains(DamageValue.Key) ? BonusValues[DamageValue.Key] : 0.f);

		// As is for ranged damage
		else if (DamageValue.Key.MatchesTag(TAG_Damage_Ranged))
			InRangedDamage += DamageValue.Value + (BonusValues.Contains(DamageValue.Key) ? BonusValues[DamageValue.Key] : 0.f);

		// All other damage is magical
		else
			InMagicDamage  += DamageValue.Value + (BonusValues.Contains(DamageValue.Key) ? BonusValues[DamageValue.Key] : 0.f);
	}

	// Add melee damage bonuses and then mitigate the damage
	float FinalMeleeDamage = InMeleeDamage;
	if (InMeleeDamage != 0.f)
	{
		float Strength = STAT_DEFAULT, Fortitude = STAT_DEFAULT;

		// Strength (source) increases or decreases damage
		if (!ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().StrengthDef, EvalParams, Strength))
			UE_LOGFMT(LogTemp, Display, "Failed to capture Source's Strength value, using default.");
		else
			UE_LOGFMT(LogTemp, Display, "Source's Strength={Strength}", Strength);

		// Damage bonus (can be positive or negative)
		float DamageBonus = (Strength - STAT_DEFAULT) * 0.005f; // ±0.5% per point over 100

		// If Strength is lower than default, clamp the penalty to a max reduction of 90%
		if (DamageBonus < 0.f)
			DamageBonus = FMath::Max(DamageBonus, -0.90f); // Limit reduction to 90% of original damage

		// Apply the damage bonus to the base damage
		FinalMeleeDamage = InMeleeDamage * (1.f + DamageBonus);

		// Target's Fortitude (resistance to melee damage)
		if (!ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().FortitudeDef, EvalParams, Fortitude))
			UE_LOGFMT(LogTemp, Display, "Failed to capture Target's Fortitude value, using default.");
		else
			UE_LOGFMT(LogTemp, Display, "Target's Fortitude={Fortitude}", Fortitude);

		// Calculate damage reduction from Fortitude
		float DamageResist = (Fortitude - STAT_DEFAULT) * 0.005f; // 0.5% reduction per point over 100
		DamageResist = FMath::Clamp(DamageResist, 0.f, 0.95f); // Clamped between 0% and 95%

		// Apply resistance reduction
		FinalMeleeDamage *= (1.f - DamageResist);

		// Log final values
		UE_LOGFMT(LogTemp, Display,
			"FinalMeleeDamage={FinalMeleeDamage}, OriginalMeleeDamage={InMeleeDamage}, DamageBonus={DamageBonus}, DamageResist={DamageResist}",
			FinalMeleeDamage, InMeleeDamage, DamageBonus, DamageResist);
	}

	// Add range damage bonuses and then mitigate the damage
	float FinalRangedDamage = InRangedDamage;
	if (InRangedDamage != 0.f)
	{
		float Dexterity = STAT_DEFAULT, Avoidance = STAT_DEFAULT, Fortitude = STAT_DEFAULT;

		if (!ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().DexterityDef, EvalParams, Dexterity))
			UE_LOGFMT(LogTemp, Display, "Failed to capture Source's Dexterity value, using default.");
		else
			UE_LOGFMT(LogTemp, Display, "Source's Dexterity={Dexterity}", Dexterity);

		float RangedBonus = (Dexterity - STAT_DEFAULT) * 0.005f;
		RangedBonus = FMath::Max(RangedBonus, -0.90f); // Clamp penalty at 90% reduction

		FinalRangedDamage = InRangedDamage * (1.f + RangedBonus);

		// Avoidance (Dexterity of Target) - Determines evasion chance
		if (!ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().AvoidanceDef, EvalParams, Avoidance))
			UE_LOGFMT(LogTemp, Display, "Failed to capture Target's Avoidance (Dexterity) value, using default.");
		else
			UE_LOGFMT(LogTemp, Display, "Source's Avoidance={Avoidance}", Avoidance);

		float DodgeChance = FMath::Clamp((Avoidance - STAT_DEFAULT) * 0.005f, 0.f, 0.95f);
		if (FMath::RandRange(0.f, 1.f) < DodgeChance)
		{
			UE_LOGFMT(LogTemp, Display, "Ranged Attack Dodged ({DodgeChance}% chance)!");
			FinalRangedDamage = 0.f;
		}
		else
		{
			if (!ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().FortitudeDef, EvalParams, Fortitude))
				UE_LOGFMT(LogTemp, Display, "Failed to capture Target's Fortitude value, using default.");

			float RangedResist = FMath::Clamp((Fortitude - STAT_DEFAULT) * 0.005f, 0.f, 0.95f);
			FinalRangedDamage *= (1.f - RangedResist);
		}
	}

	float FinalMagicDamage = InMagicDamage;
	if (InMagicDamage != 0.f)
	{
		float Intellect = STAT_DEFAULT, Astuteness = STAT_DEFAULT;

		if (!ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().IntellectDef, EvalParams, Intellect))
			UE_LOGFMT(LogTemp, Display, "Failed to capture Source's Intellect value, using default.");
		else
			UE_LOGFMT(LogTemp, Display, "Source's Intellect={Intellect}", Intellect);

		float MagicBonus = (Intellect - STAT_DEFAULT) * 0.005f;
		MagicBonus = FMath::Max(MagicBonus, -0.90f);

		FinalMagicDamage = InMagicDamage * (1.f + MagicBonus);

		if (!ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().AstutenessDef, EvalParams, Astuteness))
			UE_LOGFMT(LogTemp, Display, "Failed to capture Target's Astuteness value, using default.");
		else
			UE_LOGFMT(LogTemp, Display, "Source's Astuteness={Astuteness}", Astuteness);

		float MagicResist = FMath::Clamp((Astuteness - STAT_DEFAULT) * 0.005f, 0.f, 0.95f);
		FinalMagicDamage *= (1.f - MagicResist);
	}

	float FinalDamage = FinalMeleeDamage + FinalRangedDamage + FinalMagicDamage;

	UE_LOGFMT(LogTemp, Display,
		"Final({FinalDamage}) Melee({FinalMeleeDamage}) Ranged({FinalRangedDamage}) Magic({FinalMagicDamage})"
		, FinalDamage, FinalMeleeDamage, FinalRangedDamage, FinalMagicDamage);

	// Apply Final Damage to Target
	OutExecutionOutput.AddOutputModifier(
		FGameplayModifierEvaluatedData(DamageStatics().IncomingDamageProperty, EGameplayModOp::Override, FinalDamage));

	UE_LOG(LogTemp, Log, TEXT("Final Damage Applied: %f"), FinalDamage);
}
