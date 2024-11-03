// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attributes/RsDamageAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ROLESTATS_RsDamageAttributeSet_generated_h
#error "RsDamageAttributeSet.generated.h already included, missing '#pragma once' in RsDamageAttributeSet.h"
#endif
#define ROLESTATS_RsDamageAttributeSet_generated_h

#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllDamageResistAttributes); \
	DECLARE_FUNCTION(execOnRep_DarkBonus); \
	DECLARE_FUNCTION(execOnRep_HolyBonus); \
	DECLARE_FUNCTION(execOnRep_SonicBonus); \
	DECLARE_FUNCTION(execOnRep_RadioBonus); \
	DECLARE_FUNCTION(execOnRep_ShockBonus); \
	DECLARE_FUNCTION(execOnRep_AcidBonus); \
	DECLARE_FUNCTION(execOnRep_FrostBonus); \
	DECLARE_FUNCTION(execOnRep_FireBonus); \
	DECLARE_FUNCTION(execOnRep_PierceBonus); \
	DECLARE_FUNCTION(execOnRep_SlashBonus); \
	DECLARE_FUNCTION(execOnRep_BluntBonus); \
	DECLARE_FUNCTION(execOnRep_NaturalBonus); \
	DECLARE_FUNCTION(execOnRep_DarkResistance); \
	DECLARE_FUNCTION(execOnRep_HolyResistance); \
	DECLARE_FUNCTION(execOnRep_SonicResistance); \
	DECLARE_FUNCTION(execOnRep_RadioResistance); \
	DECLARE_FUNCTION(execOnRep_ShockResistance); \
	DECLARE_FUNCTION(execOnRep_AcidResistance); \
	DECLARE_FUNCTION(execOnRep_FrostResistance); \
	DECLARE_FUNCTION(execOnRep_FireResistance); \
	DECLARE_FUNCTION(execOnRep_PierceResistance); \
	DECLARE_FUNCTION(execOnRep_SlashResistance); \
	DECLARE_FUNCTION(execOnRep_BluntResistance); \
	DECLARE_FUNCTION(execOnRep_NaturalResistance); \
	DECLARE_FUNCTION(execOnRep_DamageMultiplier); \
	DECLARE_FUNCTION(execOnRep_DamageModifier); \
	DECLARE_FUNCTION(execOnRep_LuckyChance); \
	DECLARE_FUNCTION(execOnRep_CriticalMultiplier); \
	DECLARE_FUNCTION(execOnRep_CriticalChance); \
	DECLARE_FUNCTION(execOnRep_IncomingDamage); \
	DECLARE_FUNCTION(execGetAllDamageBonusAttributes);


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURsDamageAttributeSet(); \
	friend struct Z_Construct_UClass_URsDamageAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URsDamageAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoleStats"), NO_API) \
	DECLARE_SERIALIZER(URsDamageAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IncomingDamage=NETFIELD_REP_START, \
		CriticalChance, \
		CriticalMultiplier, \
		LuckyChance, \
		DamageModifier, \
		DamageMultiplier, \
		NaturalResistance, \
		BluntResistance, \
		SlashResistance, \
		PierceResistance, \
		FireResistance, \
		FrostResistance, \
		AcidResistance, \
		ShockResistance, \
		RadioResistance, \
		SonicResistance, \
		HolyResistance, \
		DarkResistance, \
		NaturalBonus, \
		BluntBonus, \
		SlashBonus, \
		PierceBonus, \
		FireBonus, \
		FrostBonus, \
		AcidBonus, \
		ShockBonus, \
		RadioBonus, \
		SonicBonus, \
		HolyBonus, \
		DarkBonus, \
		NETFIELD_REP_END=DarkBonus	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URsDamageAttributeSet) \
public:


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URsDamageAttributeSet(URsDamageAttributeSet&&); \
	URsDamageAttributeSet(const URsDamageAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URsDamageAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URsDamageAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URsDamageAttributeSet) \
	NO_API virtual ~URsDamageAttributeSet();


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_30_PROLOG
#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_33_INCLASS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLESTATS_API UClass* StaticClass<class URsDamageAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
