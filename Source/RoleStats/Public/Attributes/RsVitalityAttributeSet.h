// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Lib/AttributeHelpers.h"

#include "RsVitalityAttributeSet.generated.h"


/**
 * Vitality Attributes are any attributes related to the characters well-being,
 * such as health, hunger, hydration, magic. It also includes damage factors
 * and factors the character depends on such as ammunition.
 */
UCLASS()
class ROLESTATS_API URsVitalityAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	URsVitalityAttributeSet();

	static TArray<FGameplayAttribute> GetAllVitalityAttributes();

protected:

	virtual void PreAttributeBaseChange(
		const FGameplayAttribute& Attribute, float& NewValue) const override;

	virtual void PreAttributeChange(
		const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual void ClampAttributeOnChange(
		const FGameplayAttribute& Attribute, float& NewValue) const;

	virtual void PostAttributeChange(
		const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	UFUNCTION()
	virtual void OnRep_CurrentHealth(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_CurrentMagic(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_CurrentStamina(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_CurrentHunger(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_CurrentHydration(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_CurrentOxygen(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_PassiveHealthRegen(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_PassiveStaminaRegen(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_PassiveMagicRegen(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_PassiveHungerDrain(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_PassiveHydroDrain(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_PassiveOxygenDrain(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_MaximumHealth(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_MaximumMagic(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_MaximumStamina(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_MaximumHunger(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_MaximumHydration(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_MaximumOxygen(const FGameplayAttributeData& OldData);


	UFUNCTION()
	virtual void OnRep_ActiveStaminaRegen(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_ActiveHungerDrain(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_ActiveHydroDrain(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_ActiveOxygenDrain(const FGameplayAttributeData& OldData);

public:

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_CurrentHealth, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurrentHealth;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, CurrentHealth);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_CurrentMagic, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurrentStamina;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, CurrentStamina);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_CurrentMagic, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurrentMagic;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, CurrentMagic);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_CurrentHunger, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurrentHunger;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, CurrentHunger);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_CurrentMagic, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurrentHydration;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, CurrentHydration);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_CurrentOxygen, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData CurrentOxygen;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, CurrentOxygen);


	UPROPERTY(BlueprintReadOnly, Category = "Attribute Maximums",
		ReplicatedUsing=OnRep_MaximumHealth, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaximumHealth;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, MaximumHealth);

	UPROPERTY(BlueprintReadOnly, Category = "Attribute Maximums",
		ReplicatedUsing=OnRep_MaximumMagic, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaximumStamina;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, MaximumStamina);

	UPROPERTY(BlueprintReadOnly, Category = "Attribute Maximums",
		ReplicatedUsing=OnRep_MaximumMagic, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaximumMagic;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, MaximumMagic);

	UPROPERTY(BlueprintReadOnly, Category = "Attribute Maximums",
		ReplicatedUsing=OnRep_MaximumHunger, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaximumHunger;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, MaximumHunger);

	UPROPERTY(BlueprintReadOnly, Category = "Attribute Maximums",
		ReplicatedUsing=OnRep_MaximumHydration, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaximumHydration;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, MaximumHydration);

	UPROPERTY(BlueprintReadOnly, Category = "Attribute Maximums",
		ReplicatedUsing=OnRep_MaximumOxygen, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaximumOxygen;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, MaximumOxygen);


	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_PassiveHealthRegen, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PassiveHealthRegen;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, PassiveHealthRegen);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_PassiveMagicRegen, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PassiveMagicRegen;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, PassiveMagicRegen);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_PassiveStaminaRegen, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PassiveStaminaRegen;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, PassiveStaminaRegen);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_PassiveHungerDrain, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PassiveHungerDrain;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, PassiveHungerDrain);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_PassiveHydroDrain, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PassiveHydroDrain;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, PassiveHydroDrain);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_PassiveOxygenDrain, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData PassiveOxygenDrain;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, PassiveOxygenDrain);


	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_ActiveStaminaRegen, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ActiveStaminaRegen;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, ActiveStaminaRegen);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_ActiveHungerDrain, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ActiveHungerDrain;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, ActiveHungerDrain);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_ActiveHydroDrain, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ActiveHydroDrain;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, ActiveHydroDrain);

	UPROPERTY(BlueprintReadOnly, Category = "Status Attributes",
		ReplicatedUsing=OnRep_ActiveOxygenDrain, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData ActiveOxygenDrain;
	ATTRIBUTE_ACCESSORS(URsVitalityAttributeSet, ActiveOxygenDrain);

};
