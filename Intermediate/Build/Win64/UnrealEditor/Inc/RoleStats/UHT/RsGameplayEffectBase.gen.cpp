// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Effects/RsGameplayEffectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsGameplayEffectBase() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
ROLESTATS_API UClass* Z_Construct_UClass_URsGameplayEffectBase();
ROLESTATS_API UClass* Z_Construct_UClass_URsGameplayEffectBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Class URsGameplayEffectBase
void URsGameplayEffectBase::StaticRegisterNativesURsGameplayEffectBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsGameplayEffectBase);
UClass* Z_Construct_UClass_URsGameplayEffectBase_NoRegister()
{
	return URsGameplayEffectBase::StaticClass();
}
struct Z_Construct_UClass_URsGameplayEffectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Effects/RsGameplayEffectBase.h" },
		{ "ModuleRelativePath", "Public/Effects/RsGameplayEffectBase.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsGameplayEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URsGameplayEffectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsGameplayEffectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsGameplayEffectBase_Statics::ClassParams = {
	&URsGameplayEffectBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsGameplayEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URsGameplayEffectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsGameplayEffectBase()
{
	if (!Z_Registration_Info_UClass_URsGameplayEffectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsGameplayEffectBase.OuterSingleton, Z_Construct_UClass_URsGameplayEffectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsGameplayEffectBase.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsGameplayEffectBase>()
{
	return URsGameplayEffectBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsGameplayEffectBase);
URsGameplayEffectBase::~URsGameplayEffectBase() {}
// End Class URsGameplayEffectBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsGameplayEffectBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsGameplayEffectBase, URsGameplayEffectBase::StaticClass, TEXT("URsGameplayEffectBase"), &Z_Registration_Info_UClass_URsGameplayEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsGameplayEffectBase), 2704297411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsGameplayEffectBase_h_1254697768(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsGameplayEffectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Effects_RsGameplayEffectBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
