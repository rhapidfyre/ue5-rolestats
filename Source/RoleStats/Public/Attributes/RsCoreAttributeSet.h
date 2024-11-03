// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayEffectTypes.h"
#include "Lib/AttributeHelpers.h"
#include "Lib/RsGlobals.h"

#include "RsCoreAttributeSet.generated.h"

/**
 * Vitality Attributes are any attributes related to the characters well-being,
 * such as health, hunger, hydration, magic. It also includes damage factors
 * and factors the character depends on such as ammunition.
 */
UCLASS()
class ROLESTATS_API URsCoreAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	URsCoreAttributeSet();

	static TArray<FGameplayAttribute> GetAllCoreStatAttributes();

protected:

	virtual void PreAttributeBaseChange(
		const FGameplayAttribute& Attribute, float& NewValue) const override;

	virtual void PreAttributeChange(
		const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual void ClampAttributeOnChange(
		const FGameplayAttribute& Attribute, float& NewValue) const;

	UFUNCTION()
	virtual void OnRep_Strength(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_Dexterity(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_Fortitude(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_Astuteness(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_Intellect(const FGameplayAttributeData& OldData);

	UFUNCTION()
	virtual void OnRep_Charisma(const FGameplayAttributeData& OldData);

public:

	TMulticastDelegate<void(const FOnAttributeChangeData& Attribute)> OnAttributeUpdated;

	UPROPERTY(BlueprintReadOnly, Category = "Core Stat Attributes",
		ReplicatedUsing=OnRep_Strength, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Strength;
	ATTRIBUTE_ACCESSORS(URsCoreAttributeSet, Strength);

	UPROPERTY(BlueprintReadOnly, Category = "Core Stat Attributes",
		ReplicatedUsing=OnRep_Dexterity, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Dexterity;
	ATTRIBUTE_ACCESSORS(URsCoreAttributeSet, Dexterity);

	UPROPERTY(BlueprintReadOnly, Category = "Core Stat Attributes",
		ReplicatedUsing=OnRep_Fortitude, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Fortitude;
	ATTRIBUTE_ACCESSORS(URsCoreAttributeSet, Fortitude);

	UPROPERTY(BlueprintReadOnly, Category = "Core Stat Attributes",
		ReplicatedUsing=OnRep_Astuteness, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Astuteness;
	ATTRIBUTE_ACCESSORS(URsCoreAttributeSet, Astuteness);

	UPROPERTY(BlueprintReadOnly, Category = "Core Stat Attributes",
		ReplicatedUsing=OnRep_Intellect, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Intellect;
	ATTRIBUTE_ACCESSORS(URsCoreAttributeSet, Intellect);

	UPROPERTY(BlueprintReadOnly, Category = "Core Stat Attributes",
		ReplicatedUsing=OnRep_Charisma, Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData Charisma;
	ATTRIBUTE_ACCESSORS(URsCoreAttributeSet, Charisma);

};
