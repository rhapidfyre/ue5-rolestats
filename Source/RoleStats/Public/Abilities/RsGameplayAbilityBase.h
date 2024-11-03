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

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	EAbilityInputID AbilityInputID;

private:

	bool bAllowCalculation = false;
};
