// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Attributes/RsCoreAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsCoreAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
ROLESTATS_API UClass* Z_Construct_UClass_URsCoreAttributeSet();
ROLESTATS_API UClass* Z_Construct_UClass_URsCoreAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Class URsCoreAttributeSet Function OnRep_Astuteness
struct Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics
{
	struct RsCoreAttributeSet_eventOnRep_Astuteness_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsCoreAttributeSet_eventOnRep_Astuteness_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsCoreAttributeSet, nullptr, "OnRep_Astuteness", nullptr, nullptr, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::RsCoreAttributeSet_eventOnRep_Astuteness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::RsCoreAttributeSet_eventOnRep_Astuteness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsCoreAttributeSet::execOnRep_Astuteness)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Astuteness(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsCoreAttributeSet Function OnRep_Astuteness

// Begin Class URsCoreAttributeSet Function OnRep_Charisma
struct Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics
{
	struct RsCoreAttributeSet_eventOnRep_Charisma_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsCoreAttributeSet_eventOnRep_Charisma_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsCoreAttributeSet, nullptr, "OnRep_Charisma", nullptr, nullptr, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::RsCoreAttributeSet_eventOnRep_Charisma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::RsCoreAttributeSet_eventOnRep_Charisma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsCoreAttributeSet::execOnRep_Charisma)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Charisma(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsCoreAttributeSet Function OnRep_Charisma

// Begin Class URsCoreAttributeSet Function OnRep_Dexterity
struct Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics
{
	struct RsCoreAttributeSet_eventOnRep_Dexterity_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsCoreAttributeSet_eventOnRep_Dexterity_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsCoreAttributeSet, nullptr, "OnRep_Dexterity", nullptr, nullptr, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::RsCoreAttributeSet_eventOnRep_Dexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::RsCoreAttributeSet_eventOnRep_Dexterity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsCoreAttributeSet::execOnRep_Dexterity)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Dexterity(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsCoreAttributeSet Function OnRep_Dexterity

// Begin Class URsCoreAttributeSet Function OnRep_Fortitude
struct Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics
{
	struct RsCoreAttributeSet_eventOnRep_Fortitude_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsCoreAttributeSet_eventOnRep_Fortitude_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsCoreAttributeSet, nullptr, "OnRep_Fortitude", nullptr, nullptr, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::RsCoreAttributeSet_eventOnRep_Fortitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::RsCoreAttributeSet_eventOnRep_Fortitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsCoreAttributeSet::execOnRep_Fortitude)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Fortitude(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsCoreAttributeSet Function OnRep_Fortitude

// Begin Class URsCoreAttributeSet Function OnRep_Intellect
struct Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics
{
	struct RsCoreAttributeSet_eventOnRep_Intellect_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsCoreAttributeSet_eventOnRep_Intellect_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsCoreAttributeSet, nullptr, "OnRep_Intellect", nullptr, nullptr, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::RsCoreAttributeSet_eventOnRep_Intellect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::RsCoreAttributeSet_eventOnRep_Intellect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsCoreAttributeSet::execOnRep_Intellect)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Intellect(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsCoreAttributeSet Function OnRep_Intellect

// Begin Class URsCoreAttributeSet Function OnRep_Strength
struct Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics
{
	struct RsCoreAttributeSet_eventOnRep_Strength_Parms
	{
		FGameplayAttributeData OldData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::NewProp_OldData = { "OldData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsCoreAttributeSet_eventOnRep_Strength_Parms, OldData), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldData_MetaData), NewProp_OldData_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::NewProp_OldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsCoreAttributeSet, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::RsCoreAttributeSet_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::RsCoreAttributeSet_eventOnRep_Strength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsCoreAttributeSet::execOnRep_Strength)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Strength(Z_Param_Out_OldData);
	P_NATIVE_END;
}
// End Class URsCoreAttributeSet Function OnRep_Strength

// Begin Class URsCoreAttributeSet
void URsCoreAttributeSet::StaticRegisterNativesURsCoreAttributeSet()
{
	UClass* Class = URsCoreAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Astuteness", &URsCoreAttributeSet::execOnRep_Astuteness },
		{ "OnRep_Charisma", &URsCoreAttributeSet::execOnRep_Charisma },
		{ "OnRep_Dexterity", &URsCoreAttributeSet::execOnRep_Dexterity },
		{ "OnRep_Fortitude", &URsCoreAttributeSet::execOnRep_Fortitude },
		{ "OnRep_Intellect", &URsCoreAttributeSet::execOnRep_Intellect },
		{ "OnRep_Strength", &URsCoreAttributeSet::execOnRep_Strength },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsCoreAttributeSet);
UClass* Z_Construct_UClass_URsCoreAttributeSet_NoRegister()
{
	return URsCoreAttributeSet::StaticClass();
}
struct Z_Construct_UClass_URsCoreAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Vitality Attributes are any attributes related to the characters well-being,\n * such as health, hunger, hydration, magic. It also includes damage factors\n * and factors the character depends on such as ammunition.\n */" },
#endif
		{ "IncludePath", "Attributes/RsCoreAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vitality Attributes are any attributes related to the characters well-being,\nsuch as health, hunger, hydration, magic. It also includes damage factors\nand factors the character depends on such as ammunition." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Core Stat Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Core Stat Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fortitude_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Core Stat Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Astuteness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Core Stat Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intellect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Core Stat Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Core Stat Attributes" },
		{ "ModuleRelativePath", "Public/Attributes/RsCoreAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fortitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Astuteness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intellect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Charisma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Astuteness, "OnRep_Astuteness" }, // 1729987182
		{ &Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Charisma, "OnRep_Charisma" }, // 781803555
		{ &Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Dexterity, "OnRep_Dexterity" }, // 2007840438
		{ &Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Fortitude, "OnRep_Fortitude" }, // 247551752
		{ &Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Intellect, "OnRep_Intellect" }, // 1603076052
		{ &Z_Construct_UFunction_URsCoreAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 2699061489
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsCoreAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsCoreAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Dexterity = { "Dexterity", "OnRep_Dexterity", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsCoreAttributeSet, Dexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Fortitude = { "Fortitude", "OnRep_Fortitude", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsCoreAttributeSet, Fortitude), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fortitude_MetaData), NewProp_Fortitude_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Astuteness = { "Astuteness", "OnRep_Astuteness", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsCoreAttributeSet, Astuteness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Astuteness_MetaData), NewProp_Astuteness_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Intellect = { "Intellect", "OnRep_Intellect", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsCoreAttributeSet, Intellect), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intellect_MetaData), NewProp_Intellect_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Charisma = { "Charisma", "OnRep_Charisma", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsCoreAttributeSet, Charisma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charisma_MetaData), NewProp_Charisma_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URsCoreAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Fortitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Astuteness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Intellect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsCoreAttributeSet_Statics::NewProp_Charisma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsCoreAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URsCoreAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsCoreAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsCoreAttributeSet_Statics::ClassParams = {
	&URsCoreAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URsCoreAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URsCoreAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsCoreAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URsCoreAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsCoreAttributeSet()
{
	if (!Z_Registration_Info_UClass_URsCoreAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsCoreAttributeSet.OuterSingleton, Z_Construct_UClass_URsCoreAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsCoreAttributeSet.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsCoreAttributeSet>()
{
	return URsCoreAttributeSet::StaticClass();
}
void URsCoreAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Strength(TEXT("Strength"));
	static const FName Name_Dexterity(TEXT("Dexterity"));
	static const FName Name_Fortitude(TEXT("Fortitude"));
	static const FName Name_Astuteness(TEXT("Astuteness"));
	static const FName Name_Intellect(TEXT("Intellect"));
	static const FName Name_Charisma(TEXT("Charisma"));
	const bool bIsValid = true
		&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
		&& Name_Dexterity == ClassReps[(int32)ENetFields_Private::Dexterity].Property->GetFName()
		&& Name_Fortitude == ClassReps[(int32)ENetFields_Private::Fortitude].Property->GetFName()
		&& Name_Astuteness == ClassReps[(int32)ENetFields_Private::Astuteness].Property->GetFName()
		&& Name_Intellect == ClassReps[(int32)ENetFields_Private::Intellect].Property->GetFName()
		&& Name_Charisma == ClassReps[(int32)ENetFields_Private::Charisma].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URsCoreAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsCoreAttributeSet);
URsCoreAttributeSet::~URsCoreAttributeSet() {}
// End Class URsCoreAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsCoreAttributeSet, URsCoreAttributeSet::StaticClass, TEXT("URsCoreAttributeSet"), &Z_Registration_Info_UClass_URsCoreAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsCoreAttributeSet), 3780784790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_3334750620(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsCoreAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
