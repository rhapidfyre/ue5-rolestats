// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Abilities/Tasks/RsAbilityTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRsAbilityTask() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
ROLESTATS_API UClass* Z_Construct_UClass_URsAbilityTask();
ROLESTATS_API UClass* Z_Construct_UClass_URsAbilityTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Class URsAbilityTask
void URsAbilityTask::StaticRegisterNativesURsAbilityTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsAbilityTask);
UClass* Z_Construct_UClass_URsAbilityTask_NoRegister()
{
	return URsAbilityTask::StaticClass();
}
struct Z_Construct_UClass_URsAbilityTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Tasks/RsAbilityTask.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/RsAbilityTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsAbilityTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URsAbilityTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_RoleStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URsAbilityTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URsAbilityTask_Statics::ClassParams = {
	&URsAbilityTask::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URsAbilityTask_Statics::Class_MetaDataParams), Z_Construct_UClass_URsAbilityTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URsAbilityTask()
{
	if (!Z_Registration_Info_UClass_URsAbilityTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsAbilityTask.OuterSingleton, Z_Construct_UClass_URsAbilityTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URsAbilityTask.OuterSingleton;
}
template<> ROLESTATS_API UClass* StaticClass<URsAbilityTask>()
{
	return URsAbilityTask::StaticClass();
}
URsAbilityTask::URsAbilityTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URsAbilityTask);
URsAbilityTask::~URsAbilityTask() {}
// End Class URsAbilityTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Abilities_Tasks_RsAbilityTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URsAbilityTask, URsAbilityTask::StaticClass, TEXT("URsAbilityTask"), &Z_Registration_Info_UClass_URsAbilityTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsAbilityTask), 27872289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Abilities_Tasks_RsAbilityTask_h_1461675692(TEXT("/Script/RoleStats"),
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Abilities_Tasks_RsAbilityTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Abilities_Tasks_RsAbilityTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
