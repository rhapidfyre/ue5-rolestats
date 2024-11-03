// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Attributes/RsVitalityAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsVitalityAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
ROLESTATS_API UClass* Z_Construct_UClass_URsVitalityAttributeSet();
ROLESTATS_API UClass* Z_Construct_UClass_URsVitalityAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Class URsVitalityAttributeSet Function OnRep_CurrentHealth
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_CurrentHealth_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_CurrentHealth_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::RsVitalityAttributeSet_eventOnRep_CurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::RsVitalityAttributeSet_eventOnRep_CurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_CurrentHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_CurrentHealth

// Begin Class URsVitalityAttributeSet Function OnRep_CurrentHunger
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_CurrentHunger_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_CurrentHunger_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_CurrentHunger", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::RsVitalityAttributeSet_eventOnRep_CurrentHunger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::RsVitalityAttributeSet_eventOnRep_CurrentHunger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_CurrentHunger)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHunger(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_CurrentHunger

// Begin Class URsVitalityAttributeSet Function OnRep_CurrentHydration
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_CurrentHydration_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_CurrentHydration_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_CurrentHydration", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::RsVitalityAttributeSet_eventOnRep_CurrentHydration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::RsVitalityAttributeSet_eventOnRep_CurrentHydration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_CurrentHydration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHydration(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_CurrentHydration

// Begin Class URsVitalityAttributeSet Function OnRep_CurrentMagic
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_CurrentMagic_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_CurrentMagic_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_CurrentMagic", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::RsVitalityAttributeSet_eventOnRep_CurrentMagic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::RsVitalityAttributeSet_eventOnRep_CurrentMagic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_CurrentMagic)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentMagic(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_CurrentMagic

// Begin Class URsVitalityAttributeSet Function OnRep_CurrentStamina
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_CurrentStamina_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_CurrentStamina_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_CurrentStamina", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::RsVitalityAttributeSet_eventOnRep_CurrentStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::RsVitalityAttributeSet_eventOnRep_CurrentStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_CurrentStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentStamina(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_CurrentStamina

// Begin Class URsVitalityAttributeSet Function OnRep_MaximumHealth
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_MaximumHealth_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_MaximumHealth_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_MaximumHealth", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::RsVitalityAttributeSet_eventOnRep_MaximumHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::RsVitalityAttributeSet_eventOnRep_MaximumHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_MaximumHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaximumHealth(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_MaximumHealth

// Begin Class URsVitalityAttributeSet Function OnRep_MaximumHunger
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_MaximumHunger_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_MaximumHunger_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_MaximumHunger", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::RsVitalityAttributeSet_eventOnRep_MaximumHunger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::RsVitalityAttributeSet_eventOnRep_MaximumHunger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_MaximumHunger)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaximumHunger(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_MaximumHunger

// Begin Class URsVitalityAttributeSet Function OnRep_MaximumHydration
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_MaximumHydration_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_MaximumHydration_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_MaximumHydration", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::RsVitalityAttributeSet_eventOnRep_MaximumHydration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::RsVitalityAttributeSet_eventOnRep_MaximumHydration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_MaximumHydration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaximumHydration(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_MaximumHydration

// Begin Class URsVitalityAttributeSet Function OnRep_MaximumMagic
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_MaximumMagic_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_MaximumMagic_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_MaximumMagic", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::RsVitalityAttributeSet_eventOnRep_MaximumMagic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::RsVitalityAttributeSet_eventOnRep_MaximumMagic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_MaximumMagic)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaximumMagic(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_MaximumMagic

// Begin Class URsVitalityAttributeSet Function OnRep_MaximumStamina
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_MaximumStamina_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_MaximumStamina_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_MaximumStamina", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::RsVitalityAttributeSet_eventOnRep_MaximumStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::RsVitalityAttributeSet_eventOnRep_MaximumStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_MaximumStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaximumStamina(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_MaximumStamina

// Begin Class URsVitalityAttributeSet Function OnRep_PassiveHealthRegen
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_PassiveHealthRegen_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_PassiveHealthRegen_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_PassiveHealthRegen", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::RsVitalityAttributeSet_eventOnRep_PassiveHealthRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::RsVitalityAttributeSet_eventOnRep_PassiveHealthRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_PassiveHealthRegen)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PassiveHealthRegen(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_PassiveHealthRegen

// Begin Class URsVitalityAttributeSet Function OnRep_PassiveHungerDrain
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_PassiveHungerDrain_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_PassiveHungerDrain_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_PassiveHungerDrain", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::RsVitalityAttributeSet_eventOnRep_PassiveHungerDrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::RsVitalityAttributeSet_eventOnRep_PassiveHungerDrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_PassiveHungerDrain)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PassiveHungerDrain(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_PassiveHungerDrain

// Begin Class URsVitalityAttributeSet Function OnRep_PassiveHydroDrain
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_PassiveHydroDrain_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_PassiveHydroDrain_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_PassiveHydroDrain", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::RsVitalityAttributeSet_eventOnRep_PassiveHydroDrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::RsVitalityAttributeSet_eventOnRep_PassiveHydroDrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_PassiveHydroDrain)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PassiveHydroDrain(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_PassiveHydroDrain

// Begin Class URsVitalityAttributeSet Function OnRep_PassiveMagicRegen
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_PassiveMagicRegen_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_PassiveMagicRegen_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_PassiveMagicRegen", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::RsVitalityAttributeSet_eventOnRep_PassiveMagicRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::RsVitalityAttributeSet_eventOnRep_PassiveMagicRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_PassiveMagicRegen)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PassiveMagicRegen(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_PassiveMagicRegen

// Begin Class URsVitalityAttributeSet Function OnRep_PassiveStaminaRegen
struct Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics
{
	struct RsVitalityAttributeSet_eventOnRep_PassiveStaminaRegen_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsVitalityAttributeSet_eventOnRep_PassiveStaminaRegen_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsVitalityAttributeSet, nullptr, "OnRep_PassiveStaminaRegen", nullptr, nullptr, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::RsVitalityAttributeSet_eventOnRep_PassiveStaminaRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::RsVitalityAttributeSet_eventOnRep_PassiveStaminaRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsVitalityAttributeSet::execOnRep_PassiveStaminaRegen)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PassiveStaminaRegen(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsVitalityAttributeSet Function OnRep_PassiveStaminaRegen

// Begin Class URsVitalityAttributeSet
void URsVitalityAttributeSet::StaticRegisterNativesURsVitalityAttributeSet()
{
	UClass* Class = URsVitalityAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentHealth", &URsVitalityAttributeSet::execOnRep_CurrentHealth },
		{ "OnRep_CurrentHunger", &URsVitalityAttributeSet::execOnRep_CurrentHunger },
		{ "OnRep_CurrentHydration", &URsVitalityAttributeSet::execOnRep_CurrentHydration },
		{ "OnRep_CurrentMagic", &URsVitalityAttributeSet::execOnRep_CurrentMagic },
		{ "OnRep_CurrentStamina", &URsVitalityAttributeSet::execOnRep_CurrentStamina },
		{ "OnRep_MaximumHealth", &URsVitalityAttributeSet::execOnRep_MaximumHealth },
		{ "OnRep_MaximumHunger", &URsVitalityAttributeSet::execOnRep_MaximumHunger },
		{ "OnRep_MaximumHydration", &URsVitalityAttributeSet::execOnRep_MaximumHydration },
		{ "OnRep_MaximumMagic", &URsVitalityAttributeSet::execOnRep_MaximumMagic },
		{ "OnRep_MaximumStamina", &URsVitalityAttributeSet::execOnRep_MaximumStamina },
		{ "OnRep_PassiveHealthRegen", &URsVitalityAttributeSet::execOnRep_PassiveHealthRegen },
		{ "OnRep_PassiveHungerDrain", &URsVitalityAttributeSet::execOnRep_PassiveHungerDrain },
		{ "OnRep_PassiveHydroDrain", &URsVitalityAttributeSet::execOnRep_PassiveHydroDrain },
		{ "OnRep_PassiveMagicRegen", &URsVitalityAttributeSet::execOnRep_PassiveMagicRegen },
		{ "OnRep_PassiveStaminaRegen", &URsVitalityAttributeSet::execOnRep_PassiveStaminaRegen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsVitalityAttributeSet);
UClass* Z_Construct_UClass_URsVitalityAttributeSet_NoRegister()
{
	return URsVitalityAttributeSet::StaticClass();
}
struct Z_Construct_UClass_URsVitalityAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Vitality Attributes are any attributes related to the characters well-being,\n * such as health, hunger, hydration, magic. It also includes damage factors\n * and factors the character depends on such as ammunition.\n */" },
#endif
		{ "IncludePath", "Attributes/RsVitalityAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vitality Attributes are any attributes related to the characters well-being,\nsuch as health, hunger, hydration, magic. It also includes damage factors\nand factors the character depends on such as ammunition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMagic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHunger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHydration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attribute Maximums" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumStamina_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attribute Maximums" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumMagic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attribute Maximums" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHunger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attribute Maximums" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHydration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attribute Maximums" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveHealthRegen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveMagicRegen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveStaminaRegen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveHungerDrain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveHydroDrain_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Status Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsVitalityAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMagic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHunger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHydration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumMagic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumHunger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumHydration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassiveHealthRegen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassiveMagicRegen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassiveStaminaRegen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassiveHungerDrain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PassiveHydroDrain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 254167874
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHunger, "OnRep_CurrentHunger" }, // 198548665
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentHydration, "OnRep_CurrentHydration" }, // 1655789951
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentMagic, "OnRep_CurrentMagic" }, // 4197386217
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_CurrentStamina, "OnRep_CurrentStamina" }, // 3284433204
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHealth, "OnRep_MaximumHealth" }, // 1800930439
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHunger, "OnRep_MaximumHunger" }, // 235027450
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumHydration, "OnRep_MaximumHydration" }, // 3672111818
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumMagic, "OnRep_MaximumMagic" }, // 1264934730
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_MaximumStamina, "OnRep_MaximumStamina" }, // 3894848004
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHealthRegen, "OnRep_PassiveHealthRegen" }, // 2896386254
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHungerDrain, "OnRep_PassiveHungerDrain" }, // 2217072013
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveHydroDrain, "OnRep_PassiveHydroDrain" }, // 3418862502
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveMagicRegen, "OnRep_PassiveMagicRegen" }, // 1187590282
		{ &Z_Construct_UFunction_URsVitalityAttributeSet_OnRep_PassiveStaminaRegen, "OnRep_PassiveStaminaRegen" }, // 2648262844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsVitalityAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentStamina = { "CurrentStamina", "OnRep_CurrentMagic", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, CurrentStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentMagic = { "CurrentMagic", "OnRep_CurrentMagic", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, CurrentMagic), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMagic_MetaData), NewProp_CurrentMagic_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentHunger = { "CurrentHunger", "OnRep_CurrentHunger", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, CurrentHunger), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHunger_MetaData), NewProp_CurrentHunger_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentHydration = { "CurrentHydration", "OnRep_CurrentMagic", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, CurrentHydration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHydration_MetaData), NewProp_CurrentHydration_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumHealth = { "MaximumHealth", "OnRep_MaximumHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, MaximumHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHealth_MetaData), NewProp_MaximumHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumStamina = { "MaximumStamina", "OnRep_MaximumMagic", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, MaximumStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumStamina_MetaData), NewProp_MaximumStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumMagic = { "MaximumMagic", "OnRep_MaximumMagic", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, MaximumMagic), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumMagic_MetaData), NewProp_MaximumMagic_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumHunger = { "MaximumHunger", "OnRep_MaximumHunger", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, MaximumHunger), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHunger_MetaData), NewProp_MaximumHunger_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumHydration = { "MaximumHydration", "OnRep_MaximumHydration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, MaximumHydration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumHydration_MetaData), NewProp_MaximumHydration_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveHealthRegen = { "PassiveHealthRegen", "OnRep_PassiveHealthRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, PassiveHealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveHealthRegen_MetaData), NewProp_PassiveHealthRegen_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveMagicRegen = { "PassiveMagicRegen", "OnRep_PassiveMagicRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, PassiveMagicRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveMagicRegen_MetaData), NewProp_PassiveMagicRegen_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveStaminaRegen = { "PassiveStaminaRegen", "OnRep_PassiveStaminaRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, PassiveStaminaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveStaminaRegen_MetaData), NewProp_PassiveStaminaRegen_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveHungerDrain = { "PassiveHungerDrain", "OnRep_PassiveHungerDrain", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, PassiveHungerDrain), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveHungerDrain_MetaData), NewProp_PassiveHungerDrain_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveHydroDrain = { "PassiveHydroDrain", "OnRep_PassiveHydroDrain", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsVitalityAttributeSet, PassiveHydroDrain), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveHydroDrain_MetaData), NewProp_PassiveHydroDrain_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URsVitalityAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentMagic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentHunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_CurrentHydration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumMagic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumHunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_MaximumHydration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveHealthRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveMagicRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveStaminaRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveHungerDrain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsVitalityAttributeSet_Statics::NewProp_PassiveHydroDrain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsVitalityAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URsVitalityAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsVitalityAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsVitalityAttributeSet_Statics::ClassParams = {
	&URsVitalityAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URsVitalityAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URsVitalityAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsVitalityAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URsVitalityAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsVitalityAttributeSet()
{
	if (!Z_Registration_Info_UClass_URsVitalityAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsVitalityAttributeSet.OuterSingleton, Z_Construct_UClass_URsVitalityAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsVitalityAttributeSet.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsVitalityAttributeSet>()
{
	return URsVitalityAttributeSet::StaticClass();
}
void URsVitalityAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentHealth(TEXT("CurrentHealth"));
	static const FName Name_CurrentStamina(TEXT("CurrentStamina"));
	static const FName Name_CurrentMagic(TEXT("CurrentMagic"));
	static const FName Name_CurrentHunger(TEXT("CurrentHunger"));
	static const FName Name_CurrentHydration(TEXT("CurrentHydration"));
	static const FName Name_MaximumHealth(TEXT("MaximumHealth"));
	static const FName Name_MaximumStamina(TEXT("MaximumStamina"));
	static const FName Name_MaximumMagic(TEXT("MaximumMagic"));
	static const FName Name_MaximumHunger(TEXT("MaximumHunger"));
	static const FName Name_MaximumHydration(TEXT("MaximumHydration"));
	static const FName Name_PassiveHealthRegen(TEXT("PassiveHealthRegen"));
	static const FName Name_PassiveMagicRegen(TEXT("PassiveMagicRegen"));
	static const FName Name_PassiveStaminaRegen(TEXT("PassiveStaminaRegen"));
	static const FName Name_PassiveHungerDrain(TEXT("PassiveHungerDrain"));
	static const FName Name_PassiveHydroDrain(TEXT("PassiveHydroDrain"));
	const bool bIsValid = true
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName()
		&& Name_CurrentStamina == ClassReps[(int32)ENetFields_Private::CurrentStamina].Property->GetFName()
		&& Name_CurrentMagic == ClassReps[(int32)ENetFields_Private::CurrentMagic].Property->GetFName()
		&& Name_CurrentHunger == ClassReps[(int32)ENetFields_Private::CurrentHunger].Property->GetFName()
		&& Name_CurrentHydration == ClassReps[(int32)ENetFields_Private::CurrentHydration].Property->GetFName()
		&& Name_MaximumHealth == ClassReps[(int32)ENetFields_Private::MaximumHealth].Property->GetFName()
		&& Name_MaximumStamina == ClassReps[(int32)ENetFields_Private::MaximumStamina].Property->GetFName()
		&& Name_MaximumMagic == ClassReps[(int32)ENetFields_Private::MaximumMagic].Property->GetFName()
		&& Name_MaximumHunger == ClassReps[(int32)ENetFields_Private::MaximumHunger].Property->GetFName()
		&& Name_MaximumHydration == ClassReps[(int32)ENetFields_Private::MaximumHydration].Property->GetFName()
		&& Name_PassiveHealthRegen == ClassReps[(int32)ENetFields_Private::PassiveHealthRegen].Property->GetFName()
		&& Name_PassiveMagicRegen == ClassReps[(int32)ENetFields_Private::PassiveMagicRegen].Property->GetFName()
		&& Name_PassiveStaminaRegen == ClassReps[(int32)ENetFields_Private::PassiveStaminaRegen].Property->GetFName()
		&& Name_PassiveHungerDrain == ClassReps[(int32)ENetFields_Private::PassiveHungerDrain].Property->GetFName()
		&& Name_PassiveHydroDrain == ClassReps[(int32)ENetFields_Private::PassiveHydroDrain].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URsVitalityAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsVitalityAttributeSet);
URsVitalityAttributeSet::~URsVitalityAttributeSet() {}
// End Class URsVitalityAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsVitalityAttributeSet, URsVitalityAttributeSet::StaticClass, TEXT("URsVitalityAttributeSet"), &Z_Registration_Info_UClass_URsVitalityAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsVitalityAttributeSet), 1528171625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_3166226963(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsVitalityAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
