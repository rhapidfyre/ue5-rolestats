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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityStarted,
	const URsGameplayAbilityBase*, AbilityObject);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityActivated,
	const URsGameplayAbilityBase*, AbilitySpec);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityEnded,
	const URsGameplayAbilityBase*, AbilitySpec);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityFailed,
	const URsGameplayAbilityBase*, AbilitySpec, const FGameplayTagContainer&, FailureTags);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameplayEffectAdded,
	const FGameplayEffectSpec&, EffectSpec, FActiveGameplayEffectHandle, EffectHandle);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameplayEffectRemoved,
	const FGameplayEffectSpec&, EffectSpec, FActiveGameplayEffectHandle, EffectHandle);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAbilitySkillEarned,
	const FGameplayTag&, AbilitySchoolTag, const float, OldValue, const float, NewValue);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityCooldownStarted,
	const UClass*, AbilityReference, const float, TimeInSeconds);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityCooldownEnded, const UClass*, AbilityReference);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResearchUpdated, const UClass*, AbilityReference);


struct FInputActionValue;

class URsGameplayEffectBase;
class URsGameplayAbilityBase;

USTRUCT(BlueprintType)
struct ROLESTATS_API FResearchProgress
{
	GENERATED_BODY()
public:
	FResearchProgress();
	FResearchProgress(TSubclassOf<URsGameplayAbilityBase> ResearchAbility, const float StartingSkill = 0.f);

	// The ability that is being researched
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<URsGameplayAbilityBase> AbilityReference = nullptr;

	// The skill level when the player started researching the ability
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float SkillLevelStarting = 0.f;

	// The skill level required when the ability becomes ready to unlock
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float SkillLevelCurrent = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) EResearchState ResearchState = EResearchState::Experimentation;

	// Number of correct reagents consumed
	int ReagentsConsumed = 0;

	bool operator==(const FResearchProgress& Element) const;
};


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
		, const ETriggerEvent TriggerEvent);

	virtual void ReceiveDamage(URsAbilityComponent* SourceAsc, float UnmitigatedDamage, float MitigatedDamage);

	void SetDead(const bool bKillNow = true);

	void CheckIfDead();

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void NewGameplayEffectAppliedToSelf(UAbilitySystemComponent* SourceAsc, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle EffectHandle);

	UFUNCTION()
	void OnAnyGameplayEffectRemoved(const FActiveGameplayEffect& ActiveGameplayEffect);

	UFUNCTION(BlueprintPure)
	float GetAbilityExperience(const FGameplayTag& AbilityTag);

	UFUNCTION(BlueprintPure)
	float GetCooldownByAbility(const TSubclassOf<URsGameplayAbilityBase>& AbilityReference);

	// Called when a player has updated progress on research
	// If this is the first invocation for the given ability, it will unlock the research (if eligible)
	UFUNCTION(BlueprintCallable)
	void ResearchConsumeReagent(TSubclassOf<URsGameplayAbilityBase> AbilityReference, UDataAsset* ConsumedReagent, int NumReagentsConsumed = 1);

	void ResearchExperienceGained(const FGameplayTag& AbilitySchoolTag, const float XpGained);

	void ResearchBegin(TSubclassOf<URsGameplayAbilityBase> AbilityReference);

	void ResearchPurchase(TSubclassOf<URsGameplayAbilityBase> AbilityReference);


protected:

	void BindListeners();

	virtual void BeginPlay() override;

	virtual void InitDefaultAbilities();

	virtual void InitDefaultEffects();

	virtual void RsAbilityStarted(UGameplayAbility* AbilityObject);

	virtual void RsAbilityActivated(UGameplayAbility* AbilityObject);

	virtual void RsAbilityEnded(UGameplayAbility* AbilityObject);

	virtual void RsAbilityFailed(const UGameplayAbility* AbilityObject, const FGameplayTagContainer& FailureTags);

private:

	UFUNCTION(NetMulticast, Reliable)
	void OnRep_IsDead();

	UFUNCTION(Client, Reliable)
	void OnRep_ResearchProgress(const TArray<FResearchProgress>& OldProgress);

	UFUNCTION(Server, Unreliable)
	void Server_AbilityActivation(TSubclassOf<UGameplayAbility> AbilityReference);

	UFUNCTION(Server, Reliable)
	void Server_ResearchBegin(TSubclassOf<UGameplayAbility> AbilityReference);

	UFUNCTION(Client, Unreliable)
	void Client_SkillIncrease(const FGameplayTag& SchoolTag, const float OldValue, const float NewValue);

	UFUNCTION(Client, Reliable)
	void Client_CooldownStarted(TSubclassOf<UGameplayAbility> AbilityReference, const float TimeInSeconds);

	UFUNCTION(Client, Reliable)
	void Client_CooldownEnded(TSubclassOf<UGameplayAbility> AbilityReference);

	UFUNCTION()
	void CooldownTick();

public:

	UPROPERTY(BlueprintAssignable) FOnGasDamageReceived		 OnGasDamageReceived;
	UPROPERTY(BlueprintAssignable) FOnDeathStatusChanged	 OnDeathStatusChanged;
	UPROPERTY(BlueprintAssignable) FOnAbilityGiven			 OnAbilityGiven;
	UPROPERTY(BlueprintAssignable) FOnGameplayEffectAdded	 OnGameplayEffectAdded;
	UPROPERTY(BlueprintAssignable) FOnGameplayEffectRemoved  OnGameplayEffectRemoved;
	UPROPERTY(BlueprintAssignable) FOnAbilitySkillEarned	 OnAbilitySkillEarned;
	UPROPERTY(BlueprintAssignable) FOnAbilityCooldownStarted OnAbilityCooldownStarted;
	UPROPERTY(BlueprintAssignable) FOnAbilityCooldownEnded	 OnAbilityCooldownEnded;
	UPROPERTY(BlueprintAssignable) FOnResearchUpdated		 OnResearchUpdated;

	// Called when an ability has started without confirmation of success
	UPROPERTY(BlueprintAssignable) FOnAbilityStarted OnAbilityStarted;

	// Called when an ability has activated successfully and the ability has fired
	UPROPERTY(BlueprintAssignable) FOnAbilityActivated OnAbilityActivated;

	// Called when an ability has ended and cooldown has been applied
	UPROPERTY(BlueprintAssignable) FOnAbilityEnded OnAbilityEnded;

	// Called when an ability has failed and no effects or cooldown have been applied
	UPROPERTY(BlueprintAssignable) FOnAbilityFailed OnAbilityFailed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ASC Settings")
	TSubclassOf<UGameplayAbility> DefaultAttackAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ASC Settings")
	TSubclassOf<UGameplayAbility> DefaultBlockAbility;

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


private:

	UPROPERTY()
	UEnhancedInputComponent* InputComponent;

	// Ability school (key) that the character has unlocked and how much experience they have (value)
	TMap<FGameplayTag, float> AbilityExperience;

	UPROPERTY(ReplicatedUsing=OnRep_ResearchProgress)
	TArray<FResearchProgress> ResearchProgress;

	TMap<TSubclassOf<UGameplayAbility>, float> AbilityCooldowns;

	FTimerHandle CooldownTimer;
	float CooldownRate = 0.5f;

public:

	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(ReplicatedUsing=OnRep_IsDead)
	bool bIsDead = false;
};
