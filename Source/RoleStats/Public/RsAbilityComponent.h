// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "InputAction.h"
#include "Delegates/Delegate.h"
#include "GameplayAbilitySpec.h" // for FGameplayAbilitySpecHandle
#include "Lib/AbilityEnums.h"

#include "RsAbilityComponent.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogRolestats, Log, All);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGasDamageReceived,
	class URsAbilityComponent*, SourceAsc, const float, UnmitigatedDamage, const float, MitigatedDamage);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeathStatusChanged,
	const bool, bIsNowDead, const float, CurrentHealth);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityGiven,
	const FGameplayAbilitySpec&, AbilitySpec);


struct FInputActionValue;
class URsGameplayEffectBase;
class URsGameplayAbilityBase;


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType, Blueprintable)
class ROLESTATS_API URsAbilityComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:

	URsAbilityComponent();

	UFUNCTION(BlueprintPure) float GetCoreStatModifier(const FGameplayAttribute& Attribute) const;

	UFUNCTION(BlueprintPure) float GetCoreStatByTag(const FGameplayTag& StatTag) const;
	UFUNCTION(BlueprintPure) float GetDamageResistanceByTag(const FGameplayTag& DamageTag) const;
	UFUNCTION(BlueprintPure) float GetDamageBonusByTag(const FGameplayTag& DamageTag) const;

	UFUNCTION(BlueprintCallable) bool HotkeyAbility(
		const FInputActionValue& InputValue, const TSubclassOf<URsGameplayAbilityBase>& AbilityReference
		, const bool bStartAbility, const bool bCancelAbility);

	virtual void ReceiveDamage(URsAbilityComponent* SourceAsc, float UnmitigatedDamage, float MitigatedDamage);

	void SetDead(const bool bKillNow = true);

	void CheckIfDead();

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ASC Settings")
	TArray< TSubclassOf<URsGameplayAbilityBase> > DefaultAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ASC Settings")
	TArray< TSubclassOf<URsGameplayEffectBase> > DefaultEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ASC Settings")
	TSubclassOf<UGameplayEffect> DamageCalcEffect;


	// The ability applied when the actor has 'died'
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ASC Settings")
	TSubclassOf<UGameplayAbility> DeathAbility;

	// The ability applied when the actor has 'revived'
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ASC Settings")
	TSubclassOf<UGameplayAbility> RespawnAbility;

protected:

	virtual void BeginPlay() override;

	virtual void InitDefaultAbilities();
	virtual void InitDefaultEffects();

private:

	UFUNCTION(NetMulticast, Reliable)
	void OnRep_IsDead();

public:

	UPROPERTY(BlueprintAssignable) FOnGasDamageReceived OnGasDamageReceived;
	UPROPERTY(BlueprintAssignable) FOnDeathStatusChanged OnDeathStatusChanged;
	UPROPERTY(BlueprintAssignable) FOnAbilityGiven OnAbilityGiven;

private:

	UPROPERTY()
	UEnhancedInputComponent* InputComponent;

public:

	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(ReplicatedUsing=OnRep_IsDead)
	bool bIsDead = false;
};
