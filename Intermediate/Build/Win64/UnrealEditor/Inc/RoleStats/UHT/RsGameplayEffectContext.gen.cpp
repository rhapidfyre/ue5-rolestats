// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Effects/RsGameplayEffectContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsGameplayEffectContext() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
ROLESTATS_API UScriptStruct* Z_Construct_UScriptStruct_FRsGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin ScriptStruct FRsGameplayEffectContext
static_assert(std::is_polymorphic<FRsGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FRsGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RsGameplayEffectContext;
class UScriptStruct* FRsGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RsGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RsGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRsGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_RoleStats(), TEXT("RsGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_RsGameplayEffectContext.OuterSingleton;
}
template<> ROLESTATS_API UScriptStruct* StaticStruct<FRsGameplayEffectContext>()
{
	return FRsGameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Effects/RsGameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/RsGameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLuckyHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effects/RsGameplayEffectContext.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
	static void NewProp_bIsLuckyHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLuckyHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRsGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
{
	((FRsGameplayEffectContext*)Obj)->bIsCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRsGameplayEffectContext), &Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCriticalHit_MetaData), NewProp_bIsCriticalHit_MetaData) };
void Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewProp_bIsLuckyHit_SetBit(void* Obj)
{
	((FRsGameplayEffectContext*)Obj)->bIsLuckyHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewProp_bIsLuckyHit = { "bIsLuckyHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRsGameplayEffectContext), &Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewProp_bIsLuckyHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLuckyHit_MetaData), NewProp_bIsLuckyHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewProp_bIsCriticalHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewProp_bIsLuckyHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"RsGameplayEffectContext",
	Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::PropPointers),
	sizeof(FRsGameplayEffectContext),
	alignof(FRsGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRsGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_RsGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RsGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RsGameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FRsGameplayEffectContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsGameplayEffectContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRsGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FRsGameplayEffectContext_Statics::NewStructOps, TEXT("RsGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_RsGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRsGameplayEffectContext), 2510840330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsGameplayEffectContext_h_1558598941(TEXT("/Script/RoleStats"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsGameplayEffectContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsGameplayEffectContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
