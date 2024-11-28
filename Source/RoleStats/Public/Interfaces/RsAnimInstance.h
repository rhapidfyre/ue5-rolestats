// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "RsAnimInstance.generated.h"

struct FGameplayTag;

UINTERFACE(BlueprintType)
class ROLESTATS_API UAttackAnimInterface : public UInterface
{
	GENERATED_BODY()
};

class ROLESTATS_API IAttackAnimInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Animation")
	void AttackAnimationType(const FGameplayTag& AttackType);

};
