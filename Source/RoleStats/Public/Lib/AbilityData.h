// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "AbilityData.generated.h"

class URsGameplayAbilityBase;


/**
 * \brief The data asset containing all the information of a gameplay
 * ability, such as the name and icon of the ability.
 */
UCLASS(BlueprintType, Blueprintable)
class ROLESTATS_API URsAbilityDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	URsAbilityDataAsset();

	// The amount of points to unlock this ability
	UFUNCTION(BlueprintPure) int			GetAbilityUnlockCost() const;

	// The name that is displayed (user-friendly) when showcasing the ability
	UFUNCTION(BlueprintPure) FText			GetAbilityDisplayName() const;

	// The descriptive string that describes the ability and the purpose
	UFUNCTION(BlueprintPure) FString		GetAbilityDescription() const;

	// The icon the ability displays in the UI
	UFUNCTION(BlueprintPure) UTexture2D*	GetAbilityThumbnail() const;

	// The icon the ability displays in the UI
	UFUNCTION(BlueprintPure) FGameplayTag	GetAbilitySchool() const;

	// A class reference to the actual ability itself
	UFUNCTION(BlueprintPure) TSubclassOf<URsGameplayAbilityBase> GetAbilityReference() const;

	// A class reference to the actual ability itself
	UFUNCTION(BlueprintPure) URsGameplayAbilityBase* GetAbilityDefaultObject() const;

private:

	// Abilities that are required before unlocking this ability
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data Settings", meta = (AllowPrivateAccess = "true"))
	TArray< TSubclassOf<URsGameplayAbilityBase> > AbilityPrerequisites;

	// The actual gameplay ability this data asset references
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data Settings", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<URsGameplayAbilityBase> AbilityReference;

};
