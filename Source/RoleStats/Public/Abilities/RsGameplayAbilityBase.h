// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Lib/AbilityEnums.h"
#include "RsGameplayAbilityBase.generated.h"


/**
 *
 */
UCLASS()
class ROLESTATS_API URsGameplayAbilityBase : public UGameplayAbility
{
	GENERATED_BODY()

public:

	URsGameplayAbilityBase();

	UFUNCTION(BlueprintPure)
	float GetAbilityCooldownTime() const;

public:

	// UI-Safe, user-friendly name for the ability.
	// To get the game-safe machine friendly name, use GetName()
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	FString DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	FGameplayTag AttackType;

	// Describes what the purpose of this ability is, or what it does
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	FString Description;

	// The UI-safe image that represents this ability
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	UTexture2D* AbilityIcon;

	// The school of magic or discipline that this skill uses
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	FGameplayTag AbilitySchool;

	// When active, this ability modifies the following attributes by the given amount
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	TMap<FGameplayAttribute, float> AttributeModifier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	EAbilityCategory AbilityCategory;

	// Key = Class Tag, Value = Required Level
	// If this map is empty, the ability can be used by all classes
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	TMap<FGameplayTag, int> RequiredLevel;

	// Rk I = Base Ability. Rk II = Heightened Stats, Rk III = Higher Resist
	// All abilities are rank one by default.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	int AbilityRank;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	float CooldownTime;

	// Reagent required to research this ability successfully
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	TSubclassOf<UDataAsset> ResearchReagent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	int ReagentsRequired = 1;

	// The amount of experience in this school needed to unlock research
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	float ExperimentationNeeded = 1000.f;

	// One reagent is worth this value in experience when consuming reagent during experimentation phase
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	float ReagentToExperienceRatio = 3.f;

	// TODO - Obsolete?
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	EAbilityInputID AbilityInputID;
};
