// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RsAbilityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URsAbilityComponent;
class URsGameplayAbilityBase;
struct FGameplayAbilitySpec;
struct FGameplayAttribute;
struct FGameplayTag;
struct FInputActionValue;
#ifdef ROLESTATS_RsAbilityComponent_generated_h
#error "RsAbilityComponent.generated.h already included, missing '#pragma once' in RsAbilityComponent.h"
#endif
#define ROLESTATS_RsAbilityComponent_generated_h

#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_17_DELEGATE \
ROLESTATS_API void FOnGasDamageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnGasDamageReceived, URsAbilityComponent* SourceAsc, const float UnmitigatedDamage, const float MitigatedDamage);


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_20_DELEGATE \
ROLESTATS_API void FOnDeathStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDeathStatusChanged, bool bIsNowDead, const float CurrentHealth);


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_23_DELEGATE \
ROLESTATS_API void FOnAbilityGiven_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityGiven, FGameplayAbilitySpec const& AbilitySpec);


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRep_IsDead_Implementation(); \
	DECLARE_FUNCTION(execOnRep_IsDead); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execHotkeyAbility); \
	DECLARE_FUNCTION(execGetDamageBonusByTag); \
	DECLARE_FUNCTION(execGetDamageResistanceByTag); \
	DECLARE_FUNCTION(execGetCoreStatByTag); \
	DECLARE_FUNCTION(execGetCoreStatModifier);


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_CALLBACK_WRAPPERS
#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURsAbilityComponent(); \
	friend struct Z_Construct_UClass_URsAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(URsAbilityComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoleStats"), NO_API) \
	DECLARE_SERIALIZER(URsAbilityComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsDead=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URsAbilityComponent(URsAbilityComponent&&); \
	URsAbilityComponent(const URsAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URsAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URsAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URsAbilityComponent) \
	NO_API virtual ~URsAbilityComponent();


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_31_PROLOG
#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_CALLBACK_WRAPPERS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLESTATS_API UClass* StaticClass<class URsAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
