// Starcache Studios, LLC (c) 2024

#pragma once

#include "GameplayEffectTypes.h"

#include "RsGameplayEffectContext.generated.h"


USTRUCT()
struct ROLESTATS_API FRsGameplayEffectContext : public FGameplayEffectContext
{
	GENERATED_BODY()

public:

	void SetIsCriticalHit(bool tIsCriticalHit) { bIsCriticalHit = tIsCriticalHit; }
	void SetIsLuckyHit(bool tIsLuckyHit) { bIsLuckyHit = tIsLuckyHit; }

	bool IsCriticalHit() const { return bIsCriticalHit; }
	bool IsLuckyHit() const { return bIsLuckyHit; }

	// Mandatory child override - Returns the actual struct used for serialization
	virtual UScriptStruct* GetScriptStruct() const override;

	// Duplicates (deep copy) this struct
	virtual FRsGameplayEffectContext* Duplicate() const override;

	// Mandatory child override -
	virtual bool NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess) override;

protected:

	UPROPERTY()
	bool bIsCriticalHit = false;

	UPROPERTY()
	bool bIsLuckyHit = false;
};
