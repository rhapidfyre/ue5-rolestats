// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Effects/RsEffectDamageCalc.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsEffectDamageCalc() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
ROLESTATS_API UClass* Z_Construct_UClass_URsEffectDamageCalc();
ROLESTATS_API UClass* Z_Construct_UClass_URsEffectDamageCalc_NoRegister();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Class URsEffectDamageCalc
void URsEffectDamageCalc::StaticRegisterNativesURsEffectDamageCalc()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsEffectDamageCalc);
UClass* Z_Construct_UClass_URsEffectDamageCalc_NoRegister()
{
	return URsEffectDamageCalc::StaticClass();
}
struct Z_Construct_UClass_URsEffectDamageCalc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * To utilize this in the project, add this UGGEffectDamageCalc to your\n * Gameplay Effect execution array.\n */" },
#endif
		{ "IncludePath", "Effects/RsEffectDamageCalc.h" },
		{ "ModuleRelativePath", "Public/Effects/RsEffectDamageCalc.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To utilize this in the project, add this UGGEffectDamageCalc to your\nGameplay Effect execution array." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDamageTag_MetaData[] = {
		{ "Category", "RsEffectDamageCalc" },
		{ "ModuleRelativePath", "Public/Effects/RsEffectDamageCalc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDamageTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsEffectDamageCalc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsEffectDamageCalc_Statics::NewProp_InDamageTag = { "InDamageTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsEffectDamageCalc, InDamageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDamageTag_MetaData), NewProp_InDamageTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URsEffectDamageCalc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsEffectDamageCalc_Statics::NewProp_InDamageTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsEffectDamageCalc_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URsEffectDamageCalc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsEffectDamageCalc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsEffectDamageCalc_Statics::ClassParams = {
	&URsEffectDamageCalc::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URsEffectDamageCalc_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URsEffectDamageCalc_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsEffectDamageCalc_Statics::Class_MetaDataParams), Z_Construct_UClass_URsEffectDamageCalc_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsEffectDamageCalc()
{
	if (!Z_Registration_Info_UClass_URsEffectDamageCalc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsEffectDamageCalc.OuterSingleton, Z_Construct_UClass_URsEffectDamageCalc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsEffectDamageCalc.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsEffectDamageCalc>()
{
	return URsEffectDamageCalc::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsEffectDamageCalc);
URsEffectDamageCalc::~URsEffectDamageCalc() {}
// End Class URsEffectDamageCalc

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsEffectDamageCalc_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsEffectDamageCalc, URsEffectDamageCalc::StaticClass, TEXT("URsEffectDamageCalc"), &Z_Registration_Info_UClass_URsEffectDamageCalc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsEffectDamageCalc), 2683944891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsEffectDamageCalc_h_3543954664(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsEffectDamageCalc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsEffectDamageCalc_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
