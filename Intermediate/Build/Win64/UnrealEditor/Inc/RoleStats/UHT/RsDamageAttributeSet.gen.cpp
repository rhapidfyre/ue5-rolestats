// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Attributes/RsDamageAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsDamageAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
ROLESTATS_API UClass* Z_Construct_UClass_URsDamageAttributeSet();
ROLESTATS_API UClass* Z_Construct_UClass_URsDamageAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Class URsDamageAttributeSet Function GetAllDamageBonusAttributes
struct Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics
{
	struct RsDamageAttributeSet_eventGetAllDamageBonusAttributes_Parms
	{
		TArray<FGameplayAttributeData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(0, nullptr) }; // 675369593
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventGetAllDamageBonusAttributes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "GetAllDamageBonusAttributes", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::RsDamageAttributeSet_eventGetAllDamageBonusAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::RsDamageAttributeSet_eventGetAllDamageBonusAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execGetAllDamageBonusAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAttributeData>*)Z_Param__Result=P_THIS->GetAllDamageBonusAttributes();
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function GetAllDamageBonusAttributes

// Begin Class URsDamageAttributeSet Function GetAllDamageResistAttributes
struct Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics
{
	struct RsDamageAttributeSet_eventGetAllDamageResistAttributes_Parms
	{
		TArray<FGameplayAttributeData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(0, nullptr) }; // 675369593
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventGetAllDamageResistAttributes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "GetAllDamageResistAttributes", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::RsDamageAttributeSet_eventGetAllDamageResistAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::RsDamageAttributeSet_eventGetAllDamageResistAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execGetAllDamageResistAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAttributeData>*)Z_Param__Result=P_THIS->GetAllDamageResistAttributes();
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function GetAllDamageResistAttributes

// Begin Class URsDamageAttributeSet Function OnRep_AcidBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_AcidBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_AcidBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_AcidBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::RsDamageAttributeSet_eventOnRep_AcidBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::RsDamageAttributeSet_eventOnRep_AcidBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_AcidBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AcidBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_AcidBonus

// Begin Class URsDamageAttributeSet Function OnRep_AcidResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_AcidResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_AcidResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_AcidResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::RsDamageAttributeSet_eventOnRep_AcidResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::RsDamageAttributeSet_eventOnRep_AcidResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_AcidResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AcidResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_AcidResistance

// Begin Class URsDamageAttributeSet Function OnRep_BluntBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_BluntBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_BluntBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_BluntBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::RsDamageAttributeSet_eventOnRep_BluntBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::RsDamageAttributeSet_eventOnRep_BluntBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_BluntBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BluntBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_BluntBonus

// Begin Class URsDamageAttributeSet Function OnRep_BluntResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_BluntResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_BluntResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_BluntResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::RsDamageAttributeSet_eventOnRep_BluntResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::RsDamageAttributeSet_eventOnRep_BluntResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_BluntResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BluntResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_BluntResistance

// Begin Class URsDamageAttributeSet Function OnRep_CriticalChance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_CriticalChance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_CriticalChance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_CriticalChance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::RsDamageAttributeSet_eventOnRep_CriticalChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::RsDamageAttributeSet_eventOnRep_CriticalChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_CriticalChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalChance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_CriticalChance

// Begin Class URsDamageAttributeSet Function OnRep_CriticalMultiplier
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics
{
	struct RsDamageAttributeSet_eventOnRep_CriticalMultiplier_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_CriticalMultiplier_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_CriticalMultiplier", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::RsDamageAttributeSet_eventOnRep_CriticalMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::RsDamageAttributeSet_eventOnRep_CriticalMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_CriticalMultiplier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalMultiplier(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_CriticalMultiplier

// Begin Class URsDamageAttributeSet Function OnRep_DamageModifier
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics
{
	struct RsDamageAttributeSet_eventOnRep_DamageModifier_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_DamageModifier_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_DamageModifier", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::RsDamageAttributeSet_eventOnRep_DamageModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::RsDamageAttributeSet_eventOnRep_DamageModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_DamageModifier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DamageModifier(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_DamageModifier

// Begin Class URsDamageAttributeSet Function OnRep_DamageMultiplier
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics
{
	struct RsDamageAttributeSet_eventOnRep_DamageMultiplier_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_DamageMultiplier_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_DamageMultiplier", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::RsDamageAttributeSet_eventOnRep_DamageMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::RsDamageAttributeSet_eventOnRep_DamageMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_DamageMultiplier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DamageMultiplier(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_DamageMultiplier

// Begin Class URsDamageAttributeSet Function OnRep_DarkBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_DarkBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_DarkBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_DarkBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::RsDamageAttributeSet_eventOnRep_DarkBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::RsDamageAttributeSet_eventOnRep_DarkBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_DarkBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DarkBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_DarkBonus

// Begin Class URsDamageAttributeSet Function OnRep_DarkResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_DarkResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_DarkResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_DarkResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::RsDamageAttributeSet_eventOnRep_DarkResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::RsDamageAttributeSet_eventOnRep_DarkResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_DarkResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DarkResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_DarkResistance

// Begin Class URsDamageAttributeSet Function OnRep_FireBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_FireBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_FireBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_FireBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::RsDamageAttributeSet_eventOnRep_FireBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::RsDamageAttributeSet_eventOnRep_FireBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_FireBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FireBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_FireBonus

// Begin Class URsDamageAttributeSet Function OnRep_FireResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_FireResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_FireResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_FireResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::RsDamageAttributeSet_eventOnRep_FireResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::RsDamageAttributeSet_eventOnRep_FireResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_FireResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FireResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_FireResistance

// Begin Class URsDamageAttributeSet Function OnRep_FrostBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_FrostBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_FrostBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_FrostBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::RsDamageAttributeSet_eventOnRep_FrostBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::RsDamageAttributeSet_eventOnRep_FrostBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_FrostBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FrostBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_FrostBonus

// Begin Class URsDamageAttributeSet Function OnRep_FrostResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_FrostResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_FrostResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_FrostResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::RsDamageAttributeSet_eventOnRep_FrostResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::RsDamageAttributeSet_eventOnRep_FrostResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_FrostResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FrostResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_FrostResistance

// Begin Class URsDamageAttributeSet Function OnRep_HolyBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_HolyBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_HolyBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_HolyBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::RsDamageAttributeSet_eventOnRep_HolyBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::RsDamageAttributeSet_eventOnRep_HolyBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_HolyBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HolyBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_HolyBonus

// Begin Class URsDamageAttributeSet Function OnRep_HolyResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_HolyResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_HolyResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_HolyResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::RsDamageAttributeSet_eventOnRep_HolyResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::RsDamageAttributeSet_eventOnRep_HolyResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_HolyResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HolyResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_HolyResistance

// Begin Class URsDamageAttributeSet Function OnRep_IncomingDamage
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics
{
	struct RsDamageAttributeSet_eventOnRep_IncomingDamage_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_IncomingDamage_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_IncomingDamage", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::RsDamageAttributeSet_eventOnRep_IncomingDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::RsDamageAttributeSet_eventOnRep_IncomingDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_IncomingDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IncomingDamage(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_IncomingDamage

// Begin Class URsDamageAttributeSet Function OnRep_LuckyChance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_LuckyChance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_LuckyChance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_LuckyChance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::RsDamageAttributeSet_eventOnRep_LuckyChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::RsDamageAttributeSet_eventOnRep_LuckyChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_LuckyChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LuckyChance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_LuckyChance

// Begin Class URsDamageAttributeSet Function OnRep_NaturalBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_NaturalBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_NaturalBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_NaturalBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::RsDamageAttributeSet_eventOnRep_NaturalBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::RsDamageAttributeSet_eventOnRep_NaturalBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_NaturalBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_NaturalBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_NaturalBonus

// Begin Class URsDamageAttributeSet Function OnRep_NaturalResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_NaturalResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_NaturalResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_NaturalResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::RsDamageAttributeSet_eventOnRep_NaturalResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::RsDamageAttributeSet_eventOnRep_NaturalResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_NaturalResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_NaturalResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_NaturalResistance

// Begin Class URsDamageAttributeSet Function OnRep_PierceBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_PierceBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_PierceBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_PierceBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::RsDamageAttributeSet_eventOnRep_PierceBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::RsDamageAttributeSet_eventOnRep_PierceBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_PierceBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PierceBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_PierceBonus

// Begin Class URsDamageAttributeSet Function OnRep_PierceResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_PierceResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_PierceResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_PierceResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::RsDamageAttributeSet_eventOnRep_PierceResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::RsDamageAttributeSet_eventOnRep_PierceResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_PierceResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PierceResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_PierceResistance

// Begin Class URsDamageAttributeSet Function OnRep_RadioBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_RadioBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_RadioBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_RadioBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::RsDamageAttributeSet_eventOnRep_RadioBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::RsDamageAttributeSet_eventOnRep_RadioBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_RadioBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RadioBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_RadioBonus

// Begin Class URsDamageAttributeSet Function OnRep_RadioResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_RadioResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_RadioResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_RadioResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::RsDamageAttributeSet_eventOnRep_RadioResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::RsDamageAttributeSet_eventOnRep_RadioResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_RadioResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RadioResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_RadioResistance

// Begin Class URsDamageAttributeSet Function OnRep_ShockBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_ShockBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_ShockBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_ShockBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::RsDamageAttributeSet_eventOnRep_ShockBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::RsDamageAttributeSet_eventOnRep_ShockBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_ShockBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ShockBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_ShockBonus

// Begin Class URsDamageAttributeSet Function OnRep_ShockResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_ShockResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_ShockResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_ShockResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::RsDamageAttributeSet_eventOnRep_ShockResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::RsDamageAttributeSet_eventOnRep_ShockResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_ShockResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ShockResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_ShockResistance

// Begin Class URsDamageAttributeSet Function OnRep_SlashBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_SlashBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_SlashBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_SlashBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::RsDamageAttributeSet_eventOnRep_SlashBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::RsDamageAttributeSet_eventOnRep_SlashBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_SlashBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SlashBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_SlashBonus

// Begin Class URsDamageAttributeSet Function OnRep_SlashResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_SlashResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_SlashResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_SlashResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::RsDamageAttributeSet_eventOnRep_SlashResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::RsDamageAttributeSet_eventOnRep_SlashResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_SlashResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SlashResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_SlashResistance

// Begin Class URsDamageAttributeSet Function OnRep_SonicBonus
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics
{
	struct RsDamageAttributeSet_eventOnRep_SonicBonus_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_SonicBonus_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_SonicBonus", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::RsDamageAttributeSet_eventOnRep_SonicBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::RsDamageAttributeSet_eventOnRep_SonicBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_SonicBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SonicBonus(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_SonicBonus

// Begin Class URsDamageAttributeSet Function OnRep_SonicResistance
struct Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics
{
	struct RsDamageAttributeSet_eventOnRep_SonicResistance_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsDamageAttributeSet_eventOnRep_SonicResistance_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsDamageAttributeSet, nullptr, "OnRep_SonicResistance", nullptr, nullptr, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::RsDamageAttributeSet_eventOnRep_SonicResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::RsDamageAttributeSet_eventOnRep_SonicResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsDamageAttributeSet::execOnRep_SonicResistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SonicResistance(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsDamageAttributeSet Function OnRep_SonicResistance

// Begin Class URsDamageAttributeSet
void URsDamageAttributeSet::StaticRegisterNativesURsDamageAttributeSet()
{
	UClass* Class = URsDamageAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllDamageBonusAttributes", &URsDamageAttributeSet::execGetAllDamageBonusAttributes },
		{ "GetAllDamageResistAttributes", &URsDamageAttributeSet::execGetAllDamageResistAttributes },
		{ "OnRep_AcidBonus", &URsDamageAttributeSet::execOnRep_AcidBonus },
		{ "OnRep_AcidResistance", &URsDamageAttributeSet::execOnRep_AcidResistance },
		{ "OnRep_BluntBonus", &URsDamageAttributeSet::execOnRep_BluntBonus },
		{ "OnRep_BluntResistance", &URsDamageAttributeSet::execOnRep_BluntResistance },
		{ "OnRep_CriticalChance", &URsDamageAttributeSet::execOnRep_CriticalChance },
		{ "OnRep_CriticalMultiplier", &URsDamageAttributeSet::execOnRep_CriticalMultiplier },
		{ "OnRep_DamageModifier", &URsDamageAttributeSet::execOnRep_DamageModifier },
		{ "OnRep_DamageMultiplier", &URsDamageAttributeSet::execOnRep_DamageMultiplier },
		{ "OnRep_DarkBonus", &URsDamageAttributeSet::execOnRep_DarkBonus },
		{ "OnRep_DarkResistance", &URsDamageAttributeSet::execOnRep_DarkResistance },
		{ "OnRep_FireBonus", &URsDamageAttributeSet::execOnRep_FireBonus },
		{ "OnRep_FireResistance", &URsDamageAttributeSet::execOnRep_FireResistance },
		{ "OnRep_FrostBonus", &URsDamageAttributeSet::execOnRep_FrostBonus },
		{ "OnRep_FrostResistance", &URsDamageAttributeSet::execOnRep_FrostResistance },
		{ "OnRep_HolyBonus", &URsDamageAttributeSet::execOnRep_HolyBonus },
		{ "OnRep_HolyResistance", &URsDamageAttributeSet::execOnRep_HolyResistance },
		{ "OnRep_IncomingDamage", &URsDamageAttributeSet::execOnRep_IncomingDamage },
		{ "OnRep_LuckyChance", &URsDamageAttributeSet::execOnRep_LuckyChance },
		{ "OnRep_NaturalBonus", &URsDamageAttributeSet::execOnRep_NaturalBonus },
		{ "OnRep_NaturalResistance", &URsDamageAttributeSet::execOnRep_NaturalResistance },
		{ "OnRep_PierceBonus", &URsDamageAttributeSet::execOnRep_PierceBonus },
		{ "OnRep_PierceResistance", &URsDamageAttributeSet::execOnRep_PierceResistance },
		{ "OnRep_RadioBonus", &URsDamageAttributeSet::execOnRep_RadioBonus },
		{ "OnRep_RadioResistance", &URsDamageAttributeSet::execOnRep_RadioResistance },
		{ "OnRep_ShockBonus", &URsDamageAttributeSet::execOnRep_ShockBonus },
		{ "OnRep_ShockResistance", &URsDamageAttributeSet::execOnRep_ShockResistance },
		{ "OnRep_SlashBonus", &URsDamageAttributeSet::execOnRep_SlashBonus },
		{ "OnRep_SlashResistance", &URsDamageAttributeSet::execOnRep_SlashResistance },
		{ "OnRep_SonicBonus", &URsDamageAttributeSet::execOnRep_SonicBonus },
		{ "OnRep_SonicResistance", &URsDamageAttributeSet::execOnRep_SonicResistance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsDamageAttributeSet);
UClass* Z_Construct_UClass_URsDamageAttributeSet_NoRegister()
{
	return URsDamageAttributeSet::StaticClass();
}
struct Z_Construct_UClass_URsDamageAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Attributes/RsDamageAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Damage Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Damage Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Damage Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LuckyChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Damage Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Damage Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Damage Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaturalResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Damage Resistances\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage Resistances" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BluntResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlashResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PierceResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiteResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KickResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClawResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StingResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrostResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcidResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShockResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SonicResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolyResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarkResistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaturalBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Damage Bonuses\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage Bonuses" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BluntBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlashBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PierceBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiteBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KickBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClawBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StingBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Resistance Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrostBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcidBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShockBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadioBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SonicBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolyBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarkBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Bonus Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsDamageAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LuckyChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageModifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaturalResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BluntResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlashResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PierceResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiteResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KickResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClawResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StingResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrostResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcidResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShockResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadioResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SonicResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HolyResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DarkResistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaturalBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BluntBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlashBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PierceBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiteBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KickBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClawBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StingBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrostBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcidBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShockBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadioBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SonicBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HolyBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DarkBonus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageBonusAttributes, "GetAllDamageBonusAttributes" }, // 2534895448
		{ &Z_Construct_UFunction_URsDamageAttributeSet_GetAllDamageResistAttributes, "GetAllDamageResistAttributes" }, // 856433614
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidBonus, "OnRep_AcidBonus" }, // 3808555977
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_AcidResistance, "OnRep_AcidResistance" }, // 1584136779
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntBonus, "OnRep_BluntBonus" }, // 1425865307
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_BluntResistance, "OnRep_BluntResistance" }, // 3570156634
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalChance, "OnRep_CriticalChance" }, // 1558617398
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_CriticalMultiplier, "OnRep_CriticalMultiplier" }, // 816212342
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageModifier, "OnRep_DamageModifier" }, // 525470691
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DamageMultiplier, "OnRep_DamageMultiplier" }, // 412773245
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkBonus, "OnRep_DarkBonus" }, // 1989420033
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_DarkResistance, "OnRep_DarkResistance" }, // 173685111
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireBonus, "OnRep_FireBonus" }, // 2133366903
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FireResistance, "OnRep_FireResistance" }, // 1321491078
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostBonus, "OnRep_FrostBonus" }, // 3584748548
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_FrostResistance, "OnRep_FrostResistance" }, // 1994055734
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyBonus, "OnRep_HolyBonus" }, // 3853798897
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_HolyResistance, "OnRep_HolyResistance" }, // 1781087798
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_IncomingDamage, "OnRep_IncomingDamage" }, // 2713369574
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_LuckyChance, "OnRep_LuckyChance" }, // 2677314560
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalBonus, "OnRep_NaturalBonus" }, // 294633099
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_NaturalResistance, "OnRep_NaturalResistance" }, // 2015256743
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceBonus, "OnRep_PierceBonus" }, // 3295213171
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_PierceResistance, "OnRep_PierceResistance" }, // 3430518954
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioBonus, "OnRep_RadioBonus" }, // 1916918937
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_RadioResistance, "OnRep_RadioResistance" }, // 2203460470
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockBonus, "OnRep_ShockBonus" }, // 2948555342
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_ShockResistance, "OnRep_ShockResistance" }, // 3187401301
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashBonus, "OnRep_SlashBonus" }, // 2413836074
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SlashResistance, "OnRep_SlashResistance" }, // 194040029
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicBonus, "OnRep_SonicBonus" }, // 3179535891
		{ &Z_Construct_UFunction_URsDamageAttributeSet_OnRep_SonicResistance, "OnRep_SonicResistance" }, // 1847373084
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsDamageAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_IncomingDamage = { "IncomingDamage", "OnRep_IncomingDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, IncomingDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingDamage_MetaData), NewProp_IncomingDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_CriticalChance = { "CriticalChance", "OnRep_CriticalChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, CriticalChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalChance_MetaData), NewProp_CriticalChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_CriticalMultiplier = { "CriticalMultiplier", "OnRep_CriticalMultiplier", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, CriticalMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalMultiplier_MetaData), NewProp_CriticalMultiplier_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_LuckyChance = { "LuckyChance", "OnRep_LuckyChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, LuckyChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LuckyChance_MetaData), NewProp_LuckyChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_DamageModifier = { "DamageModifier", "OnRep_DamageModifier", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, DamageModifier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageModifier_MetaData), NewProp_DamageModifier_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", "OnRep_DamageMultiplier", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, DamageMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_NaturalResistance = { "NaturalResistance", "OnRep_NaturalResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, NaturalResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaturalResistance_MetaData), NewProp_NaturalResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_BluntResistance = { "BluntResistance", "OnRep_BluntResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, BluntResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BluntResistance_MetaData), NewProp_BluntResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_SlashResistance = { "SlashResistance", "OnRep_SlashResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, SlashResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlashResistance_MetaData), NewProp_SlashResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_PierceResistance = { "PierceResistance", "OnRep_PierceResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, PierceResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PierceResistance_MetaData), NewProp_PierceResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_BiteResistance = { "BiteResistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, BiteResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiteResistance_MetaData), NewProp_BiteResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_KickResistance = { "KickResistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, KickResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KickResistance_MetaData), NewProp_KickResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_ClawResistance = { "ClawResistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, ClawResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClawResistance_MetaData), NewProp_ClawResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_StingResistance = { "StingResistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, StingResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StingResistance_MetaData), NewProp_StingResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_FireResistance = { "FireResistance", "OnRep_FireResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, FireResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireResistance_MetaData), NewProp_FireResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_FrostResistance = { "FrostResistance", "OnRep_FrostResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, FrostResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrostResistance_MetaData), NewProp_FrostResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_AcidResistance = { "AcidResistance", "OnRep_AcidResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, AcidResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcidResistance_MetaData), NewProp_AcidResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_ShockResistance = { "ShockResistance", "OnRep_ShockResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, ShockResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShockResistance_MetaData), NewProp_ShockResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_RadioResistance = { "RadioResistance", "OnRep_RadioResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, RadioResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioResistance_MetaData), NewProp_RadioResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_SonicResistance = { "SonicResistance", "OnRep_SonicResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, SonicResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SonicResistance_MetaData), NewProp_SonicResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_HolyResistance = { "HolyResistance", "OnRep_HolyResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, HolyResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolyResistance_MetaData), NewProp_HolyResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_DarkResistance = { "DarkResistance", "OnRep_DarkResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, DarkResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarkResistance_MetaData), NewProp_DarkResistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_NaturalBonus = { "NaturalBonus", "OnRep_NaturalBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, NaturalBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaturalBonus_MetaData), NewProp_NaturalBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_BluntBonus = { "BluntBonus", "OnRep_BluntBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, BluntBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BluntBonus_MetaData), NewProp_BluntBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_SlashBonus = { "SlashBonus", "OnRep_SlashBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, SlashBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlashBonus_MetaData), NewProp_SlashBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_PierceBonus = { "PierceBonus", "OnRep_PierceBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, PierceBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PierceBonus_MetaData), NewProp_PierceBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_BiteBonus = { "BiteBonus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, BiteBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiteBonus_MetaData), NewProp_BiteBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_KickBonus = { "KickBonus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, KickBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KickBonus_MetaData), NewProp_KickBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_ClawBonus = { "ClawBonus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, ClawBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClawBonus_MetaData), NewProp_ClawBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_StingBonus = { "StingBonus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, StingBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StingBonus_MetaData), NewProp_StingBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_FireBonus = { "FireBonus", "OnRep_FireBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, FireBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireBonus_MetaData), NewProp_FireBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_FrostBonus = { "FrostBonus", "OnRep_FrostBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, FrostBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrostBonus_MetaData), NewProp_FrostBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_AcidBonus = { "AcidBonus", "OnRep_AcidBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, AcidBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcidBonus_MetaData), NewProp_AcidBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_ShockBonus = { "ShockBonus", "OnRep_ShockBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, ShockBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShockBonus_MetaData), NewProp_ShockBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_RadioBonus = { "RadioBonus", "OnRep_RadioBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, RadioBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadioBonus_MetaData), NewProp_RadioBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_SonicBonus = { "SonicBonus", "OnRep_SonicBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, SonicBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SonicBonus_MetaData), NewProp_SonicBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_HolyBonus = { "HolyBonus", "OnRep_HolyBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, HolyBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolyBonus_MetaData), NewProp_HolyBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_DarkBonus = { "DarkBonus", "OnRep_DarkBonus", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsDamageAttributeSet, DarkBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarkBonus_MetaData), NewProp_DarkBonus_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URsDamageAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_IncomingDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_CriticalChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_CriticalMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_LuckyChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_DamageModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_NaturalResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_BluntResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_SlashResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_PierceResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_BiteResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_KickResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_ClawResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_StingResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_FireResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_FrostResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_AcidResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_ShockResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_RadioResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_SonicResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_HolyResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_DarkResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_NaturalBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_BluntBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_SlashBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_PierceBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_BiteBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_KickBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_ClawBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_StingBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_FireBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_FrostBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_AcidBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_ShockBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_RadioBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_SonicBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_HolyBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDamageAttributeSet_Statics::NewProp_DarkBonus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsDamageAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URsDamageAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsDamageAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsDamageAttributeSet_Statics::ClassParams = {
	&URsDamageAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URsDamageAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URsDamageAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsDamageAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URsDamageAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsDamageAttributeSet()
{
	if (!Z_Registration_Info_UClass_URsDamageAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsDamageAttributeSet.OuterSingleton, Z_Construct_UClass_URsDamageAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsDamageAttributeSet.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsDamageAttributeSet>()
{
	return URsDamageAttributeSet::StaticClass();
}
void URsDamageAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_IncomingDamage(TEXT("IncomingDamage"));
	static const FName Name_CriticalChance(TEXT("CriticalChance"));
	static const FName Name_CriticalMultiplier(TEXT("CriticalMultiplier"));
	static const FName Name_LuckyChance(TEXT("LuckyChance"));
	static const FName Name_DamageModifier(TEXT("DamageModifier"));
	static const FName Name_DamageMultiplier(TEXT("DamageMultiplier"));
	static const FName Name_NaturalResistance(TEXT("NaturalResistance"));
	static const FName Name_BluntResistance(TEXT("BluntResistance"));
	static const FName Name_SlashResistance(TEXT("SlashResistance"));
	static const FName Name_PierceResistance(TEXT("PierceResistance"));
	static const FName Name_FireResistance(TEXT("FireResistance"));
	static const FName Name_FrostResistance(TEXT("FrostResistance"));
	static const FName Name_AcidResistance(TEXT("AcidResistance"));
	static const FName Name_ShockResistance(TEXT("ShockResistance"));
	static const FName Name_RadioResistance(TEXT("RadioResistance"));
	static const FName Name_SonicResistance(TEXT("SonicResistance"));
	static const FName Name_HolyResistance(TEXT("HolyResistance"));
	static const FName Name_DarkResistance(TEXT("DarkResistance"));
	static const FName Name_NaturalBonus(TEXT("NaturalBonus"));
	static const FName Name_BluntBonus(TEXT("BluntBonus"));
	static const FName Name_SlashBonus(TEXT("SlashBonus"));
	static const FName Name_PierceBonus(TEXT("PierceBonus"));
	static const FName Name_FireBonus(TEXT("FireBonus"));
	static const FName Name_FrostBonus(TEXT("FrostBonus"));
	static const FName Name_AcidBonus(TEXT("AcidBonus"));
	static const FName Name_ShockBonus(TEXT("ShockBonus"));
	static const FName Name_RadioBonus(TEXT("RadioBonus"));
	static const FName Name_SonicBonus(TEXT("SonicBonus"));
	static const FName Name_HolyBonus(TEXT("HolyBonus"));
	static const FName Name_DarkBonus(TEXT("DarkBonus"));
	const bool bIsValid = true
		&& Name_IncomingDamage == ClassReps[(int32)ENetFields_Private::IncomingDamage].Property->GetFName()
		&& Name_CriticalChance == ClassReps[(int32)ENetFields_Private::CriticalChance].Property->GetFName()
		&& Name_CriticalMultiplier == ClassReps[(int32)ENetFields_Private::CriticalMultiplier].Property->GetFName()
		&& Name_LuckyChance == ClassReps[(int32)ENetFields_Private::LuckyChance].Property->GetFName()
		&& Name_DamageModifier == ClassReps[(int32)ENetFields_Private::DamageModifier].Property->GetFName()
		&& Name_DamageMultiplier == ClassReps[(int32)ENetFields_Private::DamageMultiplier].Property->GetFName()
		&& Name_NaturalResistance == ClassReps[(int32)ENetFields_Private::NaturalResistance].Property->GetFName()
		&& Name_BluntResistance == ClassReps[(int32)ENetFields_Private::BluntResistance].Property->GetFName()
		&& Name_SlashResistance == ClassReps[(int32)ENetFields_Private::SlashResistance].Property->GetFName()
		&& Name_PierceResistance == ClassReps[(int32)ENetFields_Private::PierceResistance].Property->GetFName()
		&& Name_FireResistance == ClassReps[(int32)ENetFields_Private::FireResistance].Property->GetFName()
		&& Name_FrostResistance == ClassReps[(int32)ENetFields_Private::FrostResistance].Property->GetFName()
		&& Name_AcidResistance == ClassReps[(int32)ENetFields_Private::AcidResistance].Property->GetFName()
		&& Name_ShockResistance == ClassReps[(int32)ENetFields_Private::ShockResistance].Property->GetFName()
		&& Name_RadioResistance == ClassReps[(int32)ENetFields_Private::RadioResistance].Property->GetFName()
		&& Name_SonicResistance == ClassReps[(int32)ENetFields_Private::SonicResistance].Property->GetFName()
		&& Name_HolyResistance == ClassReps[(int32)ENetFields_Private::HolyResistance].Property->GetFName()
		&& Name_DarkResistance == ClassReps[(int32)ENetFields_Private::DarkResistance].Property->GetFName()
		&& Name_NaturalBonus == ClassReps[(int32)ENetFields_Private::NaturalBonus].Property->GetFName()
		&& Name_BluntBonus == ClassReps[(int32)ENetFields_Private::BluntBonus].Property->GetFName()
		&& Name_SlashBonus == ClassReps[(int32)ENetFields_Private::SlashBonus].Property->GetFName()
		&& Name_PierceBonus == ClassReps[(int32)ENetFields_Private::PierceBonus].Property->GetFName()
		&& Name_FireBonus == ClassReps[(int32)ENetFields_Private::FireBonus].Property->GetFName()
		&& Name_FrostBonus == ClassReps[(int32)ENetFields_Private::FrostBonus].Property->GetFName()
		&& Name_AcidBonus == ClassReps[(int32)ENetFields_Private::AcidBonus].Property->GetFName()
		&& Name_ShockBonus == ClassReps[(int32)ENetFields_Private::ShockBonus].Property->GetFName()
		&& Name_RadioBonus == ClassReps[(int32)ENetFields_Private::RadioBonus].Property->GetFName()
		&& Name_SonicBonus == ClassReps[(int32)ENetFields_Private::SonicBonus].Property->GetFName()
		&& Name_HolyBonus == ClassReps[(int32)ENetFields_Private::HolyBonus].Property->GetFName()
		&& Name_DarkBonus == ClassReps[(int32)ENetFields_Private::DarkBonus].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URsDamageAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsDamageAttributeSet);
URsDamageAttributeSet::~URsDamageAttributeSet() {}
// End Class URsDamageAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsDamageAttributeSet, URsDamageAttributeSet::StaticClass, TEXT("URsDamageAttributeSet"), &Z_Registration_Info_UClass_URsDamageAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsDamageAttributeSet), 457633711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_1251869051(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsDamageAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
