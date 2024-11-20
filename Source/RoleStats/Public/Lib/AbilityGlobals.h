// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AbilityGlobals.generated.h"

class URsGameplayAbilityBase;
/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class ROLESTATS_API URsAbilitySystemGlobals : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	URsAbilitySystemGlobals();

	UFUNCTION(BlueprintPure, Category = "RoleStats Functions")
	static FLinearColor GetAbilityCategoryColor(const TSubclassOf<URsGameplayAbilityBase>& AbilityClass);

};
