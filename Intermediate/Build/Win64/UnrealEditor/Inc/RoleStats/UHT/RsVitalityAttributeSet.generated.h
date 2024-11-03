// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attributes/RsVitalityAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ROLESTATS_RsVitalityAttributeSet_generated_h
#error "RsVitalityAttributeSet.generated.h already included, missing '#pragma once' in RsVitalityAttributeSet.h"
#endif
#define ROLESTATS_RsVitalityAttributeSet_generated_h

#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaximumHydration); \
	DECLARE_FUNCTION(execOnRep_MaximumHunger); \
	DECLARE_FUNCTION(execOnRep_MaximumStamina); \
	DECLARE_FUNCTION(execOnRep_MaximumMagic); \
	DECLARE_FUNCTION(execOnRep_MaximumHealth); \
	DECLARE_FUNCTION(execOnRep_PassiveHydroDrain); \
	DECLARE_FUNCTION(execOnRep_PassiveHungerDrain); \
	DECLARE_FUNCTION(execOnRep_PassiveMagicRegen); \
	DECLARE_FUNCTION(execOnRep_PassiveStaminaRegen); \
	DECLARE_FUNCTION(execOnRep_PassiveHealthRegen); \
	DECLARE_FUNCTION(execOnRep_CurrentHydration); \
	DECLARE_FUNCTION(execOnRep_CurrentHunger); \
	DECLARE_FUNCTION(execOnRep_CurrentStamina); \
	DECLARE_FUNCTION(execOnRep_CurrentMagic); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURsVitalityAttributeSet(); \
	friend struct Z_Construct_UClass_URsVitalityAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URsVitalityAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoleStats"), NO_API) \
	DECLARE_SERIALIZER(URsVitalityAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		CurrentStamina, \
		CurrentMagic, \
		CurrentHunger, \
		CurrentHydration, \
		MaximumHealth, \
		MaximumStamina, \
		MaximumMagic, \
		MaximumHunger, \
		MaximumHydration, \
		PassiveHealthRegen, \
		PassiveMagicRegen, \
		PassiveStaminaRegen, \
		PassiveHungerDrain, \
		PassiveHydroDrain, \
		NETFIELD_REP_END=PassiveHydroDrain	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URsVitalityAttributeSet) \
public:


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URsVitalityAttributeSet(URsVitalityAttributeSet&&); \
	URsVitalityAttributeSet(const URsVitalityAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URsVitalityAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URsVitalityAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URsVitalityAttributeSet) \
	NO_API virtual ~URsVitalityAttributeSet();


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_17_PROLOG
#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_20_INCLASS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLESTATS_API UClass* StaticClass<class URsVitalityAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
