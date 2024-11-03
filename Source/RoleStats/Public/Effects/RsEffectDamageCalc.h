// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "Lib/RsGlobals.h"

#include "RsEffectDamageCalc.generated.h"


/**
 * To utilize this in the project, add this UGGEffectDamageCalc to your
 * Gameplay Effect execution array.
 */
UCLASS()
class ROLESTATS_API URsEffectDamageCalc : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:

	URsEffectDamageCalc();

	virtual void Execute_Implementation(
		const FGameplayEffectCustomExecutionParameters& ExecutionParams,
		FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag InDamageTag = TAG_Damage_Physical.GetTag();

};
