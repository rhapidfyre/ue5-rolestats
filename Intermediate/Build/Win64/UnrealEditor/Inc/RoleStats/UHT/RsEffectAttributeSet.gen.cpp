// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Attributes/RsEffectAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsEffectAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
ROLESTATS_API UClass* Z_Construct_UClass_URsEffectAttributeSet();
ROLESTATS_API UClass* Z_Construct_UClass_URsEffectAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Class URsEffectAttributeSet
void URsEffectAttributeSet::StaticRegisterNativesURsEffectAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsEffectAttributeSet);
UClass* Z_Construct_UClass_URsEffectAttributeSet_NoRegister()
{
	return URsEffectAttributeSet::StaticClass();
}
struct Z_Construct_UClass_URsEffectAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Attributes/RsEffectAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Attributes/RsEffectAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsEffectAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URsEffectAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsEffectAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsEffectAttributeSet_Statics::ClassParams = {
	&URsEffectAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsEffectAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URsEffectAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsEffectAttributeSet()
{
	if (!Z_Registration_Info_UClass_URsEffectAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsEffectAttributeSet.OuterSingleton, Z_Construct_UClass_URsEffectAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsEffectAttributeSet.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsEffectAttributeSet>()
{
	return URsEffectAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsEffectAttributeSet);
URsEffectAttributeSet::~URsEffectAttributeSet() {}
// End Class URsEffectAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsEffectAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsEffectAttributeSet, URsEffectAttributeSet::StaticClass, TEXT("URsEffectAttributeSet"), &Z_Registration_Info_UClass_URsEffectAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsEffectAttributeSet), 2217619137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsEffectAttributeSet_h_302104633(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsEffectAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Attributes_RsEffectAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
