// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Abilities/RsGameplayAbilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsGameplayAbilityBase() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
ROLESTATS_API UClass* Z_Construct_UClass_URsGameplayAbilityBase();
ROLESTATS_API UClass* Z_Construct_UClass_URsGameplayAbilityBase_NoRegister();
ROLESTATS_API UEnum* Z_Construct_UEnum_RoleStats_EAbilityInputID();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Class URsGameplayAbilityBase
void URsGameplayAbilityBase::StaticRegisterNativesURsGameplayAbilityBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsGameplayAbilityBase);
UClass* Z_Construct_UClass_URsGameplayAbilityBase_NoRegister()
{
	return URsGameplayAbilityBase::StaticClass();
}
struct Z_Construct_UClass_URsGameplayAbilityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Abilities/RsGameplayAbilityBase.h" },
		{ "ModuleRelativePath", "Public/Abilities/RsGameplayAbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/Abilities/RsGameplayAbilityBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsGameplayAbilityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URsGameplayAbilityBase_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URsGameplayAbilityBase_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URsGameplayAbilityBase, AbilityInputID), Z_Construct_UEnum_RoleStats_EAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputID_MetaData), NewProp_AbilityInputID_MetaData) }; // 3289893350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URsGameplayAbilityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsGameplayAbilityBase_Statics::NewProp_AbilityInputID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsGameplayAbilityBase_Statics::NewProp_AbilityInputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsGameplayAbilityBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URsGameplayAbilityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsGameplayAbilityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsGameplayAbilityBase_Statics::ClassParams = {
	&URsGameplayAbilityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URsGameplayAbilityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URsGameplayAbilityBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsGameplayAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URsGameplayAbilityBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsGameplayAbilityBase()
{
	if (!Z_Registration_Info_UClass_URsGameplayAbilityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsGameplayAbilityBase.OuterSingleton, Z_Construct_UClass_URsGameplayAbilityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsGameplayAbilityBase.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsGameplayAbilityBase>()
{
	return URsGameplayAbilityBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsGameplayAbilityBase);
URsGameplayAbilityBase::~URsGameplayAbilityBase() {}
// End Class URsGameplayAbilityBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Abilities_RsGameplayAbilityBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsGameplayAbilityBase, URsGameplayAbilityBase::StaticClass, TEXT("URsGameplayAbilityBase"), &Z_Registration_Info_UClass_URsGameplayAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsGameplayAbilityBase), 3243427107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Abilities_RsGameplayAbilityBase_h_3533300032(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Abilities_RsGameplayAbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Abilities_RsGameplayAbilityBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
