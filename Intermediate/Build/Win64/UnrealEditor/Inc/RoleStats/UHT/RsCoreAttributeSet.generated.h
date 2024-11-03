// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attributes/RsCoreAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ROLESTATS_RsCoreAttributeSet_generated_h
#error "RsCoreAttributeSet.generated.h already included, missing '#pragma once' in RsCoreAttributeSet.h"
#endif
#define ROLESTATS_RsCoreAttributeSet_generated_h

#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Charisma); \
	DECLARE_FUNCTION(execOnRep_Intellect); \
	DECLARE_FUNCTION(execOnRep_Astuteness); \
	DECLARE_FUNCTION(execOnRep_Fortitude); \
	DECLARE_FUNCTION(execOnRep_Dexterity); \
	DECLARE_FUNCTION(execOnRep_Strength);


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURsCoreAttributeSet(); \
	friend struct Z_Construct_UClass_URsCoreAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URsCoreAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoleStats"), NO_API) \
	DECLARE_SERIALIZER(URsCoreAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Strength=NETFIELD_REP_START, \
		Dexterity, \
		Fortitude, \
		Astuteness, \
		Intellect, \
		Charisma, \
		NETFIELD_REP_END=Charisma	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URsCoreAttributeSet) \
public:


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URsCoreAttributeSet(URsCoreAttributeSet&&); \
	URsCoreAttributeSet(const URsCoreAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URsCoreAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URsCoreAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URsCoreAttributeSet) \
	NO_API virtual ~URsCoreAttributeSet();


#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_18_PROLOG
#define FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLESTATS_API UClass* StaticClass<class URsCoreAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
