// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoleStats_init() {}
	ROLESTATS_API UFunction* Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature();
	ROLESTATS_API UFunction* Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature();
	ROLESTATS_API UFunction* Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RoleStats;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RoleStats()
	{
		if (!Z_Registration_Info_UPackage__Script_RoleStats.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RoleStats_OnAbilityGiven__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RoleStats_OnDeathStatusChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RoleStats_OnGasDamageReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RoleStats",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x84F1E514,
				0xC70CDC3D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RoleStats.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RoleStats.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RoleStats(Z_Construct_UPackage__Script_RoleStats, TEXT("/Script/RoleStats"), Z_Registration_Info_UPackage__Script_RoleStats, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x84F1E514, 0xC70CDC3D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
