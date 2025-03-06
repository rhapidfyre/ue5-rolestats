// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Lib/AttributeHelpers.h"
#include "RsDamageAttributeSet.generated.h"


DECLARE_MULTICAST_DELEGATE_FourParams(FVitalityAttributeEvent,
	AActor*,						// Effect Instigator (what called the effect)
	AActor*,						// Effect Causer (what dun it)
	const FGameplayEffectSpec&, 	// the effect spec
	float							// Effect magnitude
	);

DECLARE_MULTICAST_DELEGATE_SixParams(FVitalityAttributeDamageEvent,
	AActor*,						// Effect Instigator (what called the effect)
	AActor*,						// Effect Causer (what dun it)
	const FGameplayTagContainer&,	// Tag Container
	float,							// Effect magnitude
	bool,							// bIsCriticalHit
	bool							// bIsLuckyHit
	);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDamageTaken, const float, DamageTaken, const AActor*, DamageInstigator);

/**
 *
 */
UCLASS()
class ROLESTATS_API URsDamageAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	URsDamageAttributeSet();

protected:

	UFUNCTION(BlueprintCallable)
	TArray<FGameplayAttributeData> GetAllDamageBonusAttributes();

	virtual void PreAttributeBaseChange(
		const FGameplayAttribute& Attribute, float& NewValue) const override;

	virtual void PreAttributeChange(
		const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual void ClampAttributeOnChange(
		const FGameplayAttribute& Attribute, float& NewValue) const;

	virtual void PostGameplayEffectExecute(
		const struct FGameplayEffectModCallbackData& Data) override;

	UFUNCTION() virtual void OnRep_IncomingDamage(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_CriticalChance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_CriticalMultiplier(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_LuckyChance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_DamageModifier(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_DamageMultiplier(const FGameplayAttributeData& OldData);

	UFUNCTION() virtual void OnRep_NaturalResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_BluntResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_SlashResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_PierceResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_FireResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_FrostResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_AcidResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_ShockResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_RadioResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_SonicResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_HolyResistance(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_DarkResistance(const FGameplayAttributeData& OldData);

	UFUNCTION() virtual void OnRep_NaturalBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_BluntBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_SlashBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_PierceBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_FireBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_FrostBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_AcidBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_ShockBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_RadioBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_SonicBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_HolyBonus(const FGameplayAttributeData& OldData);
	UFUNCTION() virtual void OnRep_DarkBonus(const FGameplayAttributeData& OldData);

public:


	UPROPERTY(BlueprintReadOnly, Category = "Damage Attributes",
		ReplicatedUsing=OnRep_IncomingDamage, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData IncomingDamage;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, IncomingDamage);

	UPROPERTY(BlueprintReadOnly, Category = "Damage Attributes",
		ReplicatedUsing=OnRep_CriticalChance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CriticalChance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, CriticalChance);

	UPROPERTY(BlueprintReadOnly, Category = "Damage Attributes",
		ReplicatedUsing=OnRep_CriticalMultiplier, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CriticalMultiplier;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, CriticalMultiplier);

	UPROPERTY(BlueprintReadOnly, Category = "Damage Attributes",
		ReplicatedUsing=OnRep_LuckyChance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData LuckyChance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, LuckyChance);

	UPROPERTY(BlueprintReadOnly, Category = "Damage Attributes",
		ReplicatedUsing=OnRep_DamageModifier, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamageModifier;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, DamageModifier);

	UPROPERTY(BlueprintReadOnly, Category = "Damage Attributes",
		ReplicatedUsing=OnRep_DamageMultiplier, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DamageMultiplier;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, DamageMultiplier);


	/**
	 * Damage Resistances
	*/

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_NaturalResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NaturalResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, NaturalResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_BluntResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BluntResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, BluntResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_SlashResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SlashResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, SlashResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_PierceResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PierceResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, PierceResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BiteResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, BiteResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData KickResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, KickResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ClawResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, ClawResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData StingResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, StingResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_FireResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FireResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, FireResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_FrostResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FrostResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, FrostResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_AcidResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AcidResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, AcidResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_ShockResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ShockResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, ShockResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_RadioResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RadioResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, RadioResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_SonicResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SonicResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, SonicResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_HolyResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HolyResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, HolyResistance);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes",
		ReplicatedUsing=OnRep_DarkResistance, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DarkResistance;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, DarkResistance);

	UFUNCTION(BlueprintCallable)
	TArray<FGameplayAttributeData> GetAllDamageResistAttributes();


	/**
	 * Damage Bonuses
	*/

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_NaturalBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData NaturalBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, NaturalBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_BluntBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BluntBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, BluntBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_SlashBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SlashBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, SlashBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_PierceBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PierceBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, PierceBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BiteBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, BiteBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData KickBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, KickBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ClawBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, ClawBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Resistance Attributes", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData StingBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, StingBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_FireBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FireBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, FireBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_FrostBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData FrostBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, FrostBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_AcidBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData AcidBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, AcidBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_ShockBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ShockBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, ShockBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_RadioBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData RadioBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, RadioBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_SonicBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData SonicBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, SonicBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_HolyBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData HolyBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, HolyBonus);

	UPROPERTY(BlueprintReadOnly, Category = "Bonus Attributes",
		ReplicatedUsing=OnRep_DarkBonus, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData DarkBonus;
	ATTRIBUTE_ACCESSORS(URsDamageAttributeSet, DarkBonus);

	mutable FVitalityAttributeEvent OnOutOfHealth; // Used to bind listeners for when health runs out
	mutable FVitalityAttributeDamageEvent OnAttributeDamage; // Used to bind listeners for when health runs out

	UPROPERTY(BlueprintAssignable) FOnDamageTaken OnDamageTaken;

private:

	bool bOutOfHealth = false;

	bool bOutOfArmor = false;
};
