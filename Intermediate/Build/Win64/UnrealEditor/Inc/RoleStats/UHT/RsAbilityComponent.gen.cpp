// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/RsAbilityComponent.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "GameplayAbilities/Public/GameplayAbilitySpec.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsAbilityComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpec();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
ROLESTATS_API UClass* Z_Construct_UClass_URsAbilityComponent();
ROLESTATS_API UClass* Z_Construct_UClass_URsAbilityComponent_NoRegister();
ROLESTATS_API UClass* Z_Construct_UClass_URsGameplayAbilityBase_NoRegister();
ROLESTATS_API UClass* Z_Construct_UClass_URsGameplayEffectBase_NoRegister();
ROLESTATS_API UFunction* Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature();
ROLESTATS_API UFunction* Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature();
ROLESTATS_API UFunction* Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Delegate FOnGasDamageReceived
struct Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics
{
	struct _Script_RoleStats_eventOnGasDamageReceived_Parms
	{
		URsAbilityComponent* SourceAsc;
		float UnmitigatedDamage;
		float MitigatedDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsc_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnmitigatedDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MitigatedDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAsc;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmitigatedDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigatedDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::NewProp_SourceAsc = { "SourceAsc", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RoleStats_eventOnGasDamageReceived_Parms, SourceAsc), Z_Construct_UClass_URsAbilityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAsc_MetaData), NewProp_SourceAsc_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::NewProp_UnmitigatedDamage = { "UnmitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RoleStats_eventOnGasDamageReceived_Parms, UnmitigatedDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnmitigatedDamage_MetaData), NewProp_UnmitigatedDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::NewProp_MitigatedDamage = { "MitigatedDamage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RoleStats_eventOnGasDamageReceived_Parms, MitigatedDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MitigatedDamage_MetaData), NewProp_MitigatedDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::NewProp_SourceAsc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::NewProp_UnmitigatedDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::NewProp_MitigatedDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RoleStats, nullptr, "OnGasDamageReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::_Script_RoleStats_eventOnGasDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::_Script_RoleStats_eventOnGasDamageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGasDamageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnGasDamageReceived, URsAbilityComponent* SourceAsc, const float UnmitigatedDamage, const float MitigatedDamage)
{
	struct _Script_RoleStats_eventOnGasDamageReceived_Parms
	{
		URsAbilityComponent* SourceAsc;
		float UnmitigatedDamage;
		float MitigatedDamage;
	};
	_Script_RoleStats_eventOnGasDamageReceived_Parms Parms;
	Parms.SourceAsc=SourceAsc;
	Parms.UnmitigatedDamage=UnmitigatedDamage;
	Parms.MitigatedDamage=MitigatedDamage;
	OnGasDamageReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGasDamageReceived

// Begin Delegate FOnDeathStatusChanged
struct Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics
{
	struct _Script_RoleStats_eventOnDeathStatusChanged_Parms
	{
		bool bIsNowDead;
		float CurrentHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNowDead_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsNowDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNowDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::NewProp_bIsNowDead_SetBit(void* Obj)
{
	((_Script_RoleStats_eventOnDeathStatusChanged_Parms*)Obj)->bIsNowDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::NewProp_bIsNowDead = { "bIsNowDead", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RoleStats_eventOnDeathStatusChanged_Parms), &Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::NewProp_bIsNowDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNowDead_MetaData), NewProp_bIsNowDead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RoleStats_eventOnDeathStatusChanged_Parms, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::NewProp_bIsNowDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RoleStats, nullptr, "OnDeathStatusChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::_Script_RoleStats_eventOnDeathStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::_Script_RoleStats_eventOnDeathStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeathStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDeathStatusChanged, bool bIsNowDead, const float CurrentHealth)
{
	struct _Script_RoleStats_eventOnDeathStatusChanged_Parms
	{
		bool bIsNowDead;
		float CurrentHealth;
	};
	_Script_RoleStats_eventOnDeathStatusChanged_Parms Parms;
	Parms.bIsNowDead=bIsNowDead ? true : false;
	Parms.CurrentHealth=CurrentHealth;
	OnDeathStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDeathStatusChanged

// Begin Delegate FOnAbilityGiven
struct Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics
{
	struct _Script_RoleStats_eventOnAbilityGiven_Parms
	{
		FGameplayAbilitySpec AbilitySpec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::NewProp_AbilitySpec = { "AbilitySpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RoleStats_eventOnAbilityGiven_Parms, AbilitySpec), Z_Construct_UScriptStruct_FGameplayAbilitySpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpec_MetaData), NewProp_AbilitySpec_MetaData) }; // 3358803124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::NewProp_AbilitySpec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RoleStats, nullptr, "OnAbilityGiven__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::_Script_RoleStats_eventOnAbilityGiven_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::_Script_RoleStats_eventOnAbilityGiven_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityGiven_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityGiven, FGameplayAbilitySpec const& AbilitySpec)
{
	struct _Script_RoleStats_eventOnAbilityGiven_Parms
	{
		FGameplayAbilitySpec AbilitySpec;
	};
	_Script_RoleStats_eventOnAbilityGiven_Parms Parms;
	Parms.AbilitySpec=AbilitySpec;
	OnAbilityGiven.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAbilityGiven

// Begin Class URsAbilityComponent Function GetCoreStatByTag
struct Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics
{
	struct RsAbilityComponent_eventGetCoreStatByTag_Parms
	{
		FGameplayTag StatTag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventGetCoreStatByTag_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTag_MetaData), NewProp_StatTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventGetCoreStatByTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsAbilityComponent, nullptr, "GetCoreStatByTag", nullptr, nullptr, Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::RsAbilityComponent_eventGetCoreStatByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::RsAbilityComponent_eventGetCoreStatByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsAbilityComponent::execGetCoreStatByTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_StatTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCoreStatByTag(Z_Param_Out_StatTag);
	P_NATIVE_END;
}
// End Class URsAbilityComponent Function GetCoreStatByTag

// Begin Class URsAbilityComponent Function GetCoreStatModifier
struct Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics
{
	struct RsAbilityComponent_eventGetCoreStatModifier_Parms
	{
		FGameplayAttribute Attribute;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventGetCoreStatModifier_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 2792951819
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventGetCoreStatModifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsAbilityComponent, nullptr, "GetCoreStatModifier", nullptr, nullptr, Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::RsAbilityComponent_eventGetCoreStatModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::RsAbilityComponent_eventGetCoreStatModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsAbilityComponent::execGetCoreStatModifier)
{
	P_GET_STRUCT_REF(FGameplayAttribute,Z_Param_Out_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCoreStatModifier(Z_Param_Out_Attribute);
	P_NATIVE_END;
}
// End Class URsAbilityComponent Function GetCoreStatModifier

// Begin Class URsAbilityComponent Function GetDamageBonusByTag
struct Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics
{
	struct RsAbilityComponent_eventGetDamageBonusByTag_Parms
	{
		FGameplayTag DamageTag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::NewProp_DamageTag = { "DamageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventGetDamageBonusByTag_Parms, DamageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTag_MetaData), NewProp_DamageTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventGetDamageBonusByTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::NewProp_DamageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsAbilityComponent, nullptr, "GetDamageBonusByTag", nullptr, nullptr, Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::RsAbilityComponent_eventGetDamageBonusByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::RsAbilityComponent_eventGetDamageBonusByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsAbilityComponent::execGetDamageBonusByTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_DamageTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamageBonusByTag(Z_Param_Out_DamageTag);
	P_NATIVE_END;
}
// End Class URsAbilityComponent Function GetDamageBonusByTag

// Begin Class URsAbilityComponent Function GetDamageResistanceByTag
struct Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics
{
	struct RsAbilityComponent_eventGetDamageResistanceByTag_Parms
	{
		FGameplayTag DamageTag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::NewProp_DamageTag = { "DamageTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventGetDamageResistanceByTag_Parms, DamageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTag_MetaData), NewProp_DamageTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventGetDamageResistanceByTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::NewProp_DamageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsAbilityComponent, nullptr, "GetDamageResistanceByTag", nullptr, nullptr, Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::RsAbilityComponent_eventGetDamageResistanceByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::RsAbilityComponent_eventGetDamageResistanceByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsAbilityComponent::execGetDamageResistanceByTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_DamageTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamageResistanceByTag(Z_Param_Out_DamageTag);
	P_NATIVE_END;
}
// End Class URsAbilityComponent Function GetDamageResistanceByTag

// Begin Class URsAbilityComponent Function HotkeyAbility
struct Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics
{
	struct RsAbilityComponent_eventHotkeyAbility_Parms
	{
		FInputActionValue InputValue;
		const TSubclassOf<URsGameplayAbilityBase> AbilityReference;
		bool bStartAbility;
		bool bCancelAbility;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityReference_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityReference;
	static void NewProp_bStartAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAbility;
	static void NewProp_bCancelAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelAbility;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventHotkeyAbility_Parms, InputValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputValue_MetaData), NewProp_InputValue_MetaData) }; // 494646648
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_AbilityReference = { "AbilityReference", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RsAbilityComponent_eventHotkeyAbility_Parms, AbilityReference), Z_Construct_UClass_UClass, Z_Construct_UClass_URsGameplayAbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityReference_MetaData), NewProp_AbilityReference_MetaData) };
void Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_bStartAbility_SetBit(void* Obj)
{
	((RsAbilityComponent_eventHotkeyAbility_Parms*)Obj)->bStartAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_bStartAbility = { "bStartAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RsAbilityComponent_eventHotkeyAbility_Parms), &Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_bStartAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartAbility_MetaData), NewProp_bStartAbility_MetaData) };
void Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_bCancelAbility_SetBit(void* Obj)
{
	((RsAbilityComponent_eventHotkeyAbility_Parms*)Obj)->bCancelAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_bCancelAbility = { "bCancelAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RsAbilityComponent_eventHotkeyAbility_Parms), &Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_bCancelAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelAbility_MetaData), NewProp_bCancelAbility_MetaData) };
void Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RsAbilityComponent_eventHotkeyAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RsAbilityComponent_eventHotkeyAbility_Parms), &Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_InputValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_AbilityReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_bStartAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_bCancelAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsAbilityComponent, nullptr, "HotkeyAbility", nullptr, nullptr, Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::RsAbilityComponent_eventHotkeyAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::RsAbilityComponent_eventHotkeyAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsAbilityComponent::execHotkeyAbility)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputValue);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URsGameplayAbilityBase>,Z_Param_Out_AbilityReference);
	P_GET_UBOOL(Z_Param_bStartAbility);
	P_GET_UBOOL(Z_Param_bCancelAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HotkeyAbility(Z_Param_Out_InputValue,Z_Param_Out_AbilityReference,Z_Param_bStartAbility,Z_Param_bCancelAbility);
	P_NATIVE_END;
}
// End Class URsAbilityComponent Function HotkeyAbility

// Begin Class URsAbilityComponent Function IsDead
struct Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics
{
	struct RsAbilityComponent_eventIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RsAbilityComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RsAbilityComponent_eventIsDead_Parms), &Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsAbilityComponent, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::RsAbilityComponent_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::RsAbilityComponent_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URsAbilityComponent_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsAbilityComponent_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsAbilityComponent::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead();
	P_NATIVE_END;
}
// End Class URsAbilityComponent Function IsDead

// Begin Class URsAbilityComponent Function OnRep_IsDead
static FName NAME_URsAbilityComponent_OnRep_IsDead = FName(TEXT("OnRep_IsDead"));
void URsAbilityComponent::OnRep_IsDead()
{
	ProcessEvent(FindFunctionChecked(NAME_URsAbilityComponent_OnRep_IsDead),NULL);
}
struct Z_Construct_UFunction_URsAbilityComponent_OnRep_IsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URsAbilityComponent_OnRep_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URsAbilityComponent, nullptr, "OnRep_IsDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URsAbilityComponent_OnRep_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_URsAbilityComponent_OnRep_IsDead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URsAbilityComponent_OnRep_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URsAbilityComponent_OnRep_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URsAbilityComponent::execOnRep_IsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsDead_Implementation();
	P_NATIVE_END;
}
// End Class URsAbilityComponent Function OnRep_IsDead

// Begin Class URsAbilityComponent
void URsAbilityComponent::StaticRegisterNativesURsAbilityComponent()
{
	UClass* Class = URsAbilityComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCoreStatByTag", &URsAbilityComponent::execGetCoreStatByTag },
		{ "GetCoreStatModifier", &URsAbilityComponent::execGetCoreStatModifier },
		{ "GetDamageBonusByTag", &URsAbilityComponent::execGetDamageBonusByTag },
		{ "GetDamageResistanceByTag", &URsAbilityComponent::execGetDamageResistanceByTag },
		{ "HotkeyAbility", &URsAbilityComponent::execHotkeyAbility },
		{ "IsDead", &URsAbilityComponent::execIsDead },
		{ "OnRep_IsDead", &URsAbilityComponent::execOnRep_IsDead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsAbilityComponent);
UClass* Z_Construct_UClass_URsAbilityComponent_NoRegister()
{
	return URsAbilityComponent::StaticClass();
}
struct Z_Construct_UClass_URsAbilityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "RsAbilityComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "ASC Settings" },
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEffects_MetaData[] = {
		{ "Category", "ASC Settings" },
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageCalcEffect_MetaData[] = {
		{ "Category", "ASC Settings" },
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAbility_MetaData[] = {
		{ "Category", "ASC Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability applied when the actor has 'died'\n" },
#endif
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability applied when the actor has 'died'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnAbility_MetaData[] = {
		{ "Category", "ASC Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability applied when the actor has 'revived'\n" },
#endif
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability applied when the actor has 'revived'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGasDamageReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeathStatusChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityGiven_MetaData[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/RsAbilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultEffects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageCalcEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DeathAbility;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RespawnAbility;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGasDamageReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeathStatusChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityGiven;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URsAbilityComponent_GetCoreStatByTag, "GetCoreStatByTag" }, // 3313590305
		{ &Z_Construct_UFunction_URsAbilityComponent_GetCoreStatModifier, "GetCoreStatModifier" }, // 635399784
		{ &Z_Construct_UFunction_URsAbilityComponent_GetDamageBonusByTag, "GetDamageBonusByTag" }, // 2100937304
		{ &Z_Construct_UFunction_URsAbilityComponent_GetDamageResistanceByTag, "GetDamageResistanceByTag" }, // 4059703865
		{ &Z_Construct_UFunction_URsAbilityComponent_HotkeyAbility, "HotkeyAbility" }, // 859464995
		{ &Z_Construct_UFunction_URsAbilityComponent_IsDead, "IsDead" }, // 2391413018
		{ &Z_Construct_UFunction_URsAbilityComponent_OnRep_IsDead, "OnRep_IsDead" }, // 1825817134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsAbilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URsGameplayAbilityBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilities_MetaData), NewProp_DefaultAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DefaultEffects_Inner = { "DefaultEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URsGameplayEffectBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DefaultEffects = { "DefaultEffects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, DefaultEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEffects_MetaData), NewProp_DefaultEffects_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DamageCalcEffect = { "DamageCalcEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, DamageCalcEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageCalcEffect_MetaData), NewProp_DamageCalcEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DeathAbility = { "DeathAbility", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, DeathAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAbility_MetaData), NewProp_DeathAbility_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_RespawnAbility = { "RespawnAbility", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, RespawnAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnAbility_MetaData), NewProp_RespawnAbility_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_OnGasDamageReceived = { "OnGasDamageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, OnGasDamageReceived), Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGasDamageReceived_MetaData), NewProp_OnGasDamageReceived_MetaData) }; // 310807836
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_OnDeathStatusChanged = { "OnDeathStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, OnDeathStatusChanged), Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeathStatusChanged_MetaData), NewProp_OnDeathStatusChanged_MetaData) }; // 670890286
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_OnAbilityGiven = { "OnAbilityGiven", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, OnAbilityGiven), Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityGiven_MetaData), NewProp_OnAbilityGiven_MetaData) }; // 1809744603
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsAbilityComponent, InputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputComponent_MetaData), NewProp_InputComponent_MetaData) };
void Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((URsAbilityComponent*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_bIsDead = { "bIsDead", "OnRep_IsDead", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URsAbilityComponent), &Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URsAbilityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DefaultAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DefaultAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DefaultEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DefaultEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DamageCalcEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_DeathAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_RespawnAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_OnGasDamageReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_OnDeathStatusChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_OnAbilityGiven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_InputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsAbilityComponent_Statics::NewProp_bIsDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsAbilityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URsAbilityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsAbilityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsAbilityComponent_Statics::ClassParams = {
	&URsAbilityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URsAbilityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URsAbilityComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsAbilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URsAbilityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsAbilityComponent()
{
	if (!Z_Registration_Info_UClass_URsAbilityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsAbilityComponent.OuterSingleton, Z_Construct_UClass_URsAbilityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsAbilityComponent.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsAbilityComponent>()
{
	return URsAbilityComponent::StaticClass();
}
void URsAbilityComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsDead(TEXT("bIsDead"));
	const bool bIsValid = true
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URsAbilityComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsAbilityComponent);
URsAbilityComponent::~URsAbilityComponent() {}
// End Class URsAbilityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsAbilityComponent, URsAbilityComponent::StaticClass, TEXT("URsAbilityComponent"), &Z_Registration_Info_UClass_URsAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsAbilityComponent), 1558495461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_755661853(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_RsAbilityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
