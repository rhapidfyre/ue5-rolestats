// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoleStats/Public/Lib/AbilityEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityEnums() {}

// Begin Cross Module References
ROLESTATS_API UEnum* Z_Construct_UEnum_RoleStats_EAbilityInputID();
UPackage* Z_Construct_UPackage__Script_RoleStats();
// End Cross Module References

// Begin Enum EAbilityInputID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityInputID;
static UEnum* EAbilityInputID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoleStats_EAbilityInputID, (UObject*)Z_Construct_UPackage__Script_RoleStats(), TEXT("EAbilityInputID"));
	}
	return Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton;
}
template<> ROLESTATS_API UEnum* StaticEnum<EAbilityInputID>()
{
	return EAbilityInputID_StaticEnum();
}
struct Z_Construct_UEnum_RoleStats_EAbilityInputID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "EAbilityInputID::Cancel" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "EAbilityInputID::Confirm" },
		{ "Hotkey0.Name", "EAbilityInputID::Hotkey0" },
		{ "Hotkey1.Name", "EAbilityInputID::Hotkey1" },
		{ "Hotkey2.Name", "EAbilityInputID::Hotkey2" },
		{ "Hotkey3.Name", "EAbilityInputID::Hotkey3" },
		{ "Hotkey4.Name", "EAbilityInputID::Hotkey4" },
		{ "Hotkey5.Name", "EAbilityInputID::Hotkey5" },
		{ "Hotkey6.Name", "EAbilityInputID::Hotkey6" },
		{ "Hotkey7.Name", "EAbilityInputID::Hotkey7" },
		{ "Hotkey8.Name", "EAbilityInputID::Hotkey8" },
		{ "Hotkey9.Name", "EAbilityInputID::Hotkey9" },
		{ "ModuleRelativePath", "Public/Lib/AbilityEnums.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAbilityInputID::None" },
		{ "Primary.DisplayName", "Primary" },
		{ "Primary.Name", "EAbilityInputID::Primary" },
		{ "Secondary.DisplayName", "Secondary" },
		{ "Secondary.Name", "EAbilityInputID::Secondary" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityInputID::None", (int64)EAbilityInputID::None },
		{ "EAbilityInputID::Confirm", (int64)EAbilityInputID::Confirm },
		{ "EAbilityInputID::Cancel", (int64)EAbilityInputID::Cancel },
		{ "EAbilityInputID::Primary", (int64)EAbilityInputID::Primary },
		{ "EAbilityInputID::Secondary", (int64)EAbilityInputID::Secondary },
		{ "EAbilityInputID::Hotkey1", (int64)EAbilityInputID::Hotkey1 },
		{ "EAbilityInputID::Hotkey2", (int64)EAbilityInputID::Hotkey2 },
		{ "EAbilityInputID::Hotkey3", (int64)EAbilityInputID::Hotkey3 },
		{ "EAbilityInputID::Hotkey4", (int64)EAbilityInputID::Hotkey4 },
		{ "EAbilityInputID::Hotkey5", (int64)EAbilityInputID::Hotkey5 },
		{ "EAbilityInputID::Hotkey6", (int64)EAbilityInputID::Hotkey6 },
		{ "EAbilityInputID::Hotkey7", (int64)EAbilityInputID::Hotkey7 },
		{ "EAbilityInputID::Hotkey8", (int64)EAbilityInputID::Hotkey8 },
		{ "EAbilityInputID::Hotkey9", (int64)EAbilityInputID::Hotkey9 },
		{ "EAbilityInputID::Hotkey0", (int64)EAbilityInputID::Hotkey0 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RoleStats_EAbilityInputID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RoleStats,
	nullptr,
	"EAbilityInputID",
	"EAbilityInputID",
	Z_Construct_UEnum_RoleStats_EAbilityInputID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RoleStats_EAbilityInputID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RoleStats_EAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RoleStats_EAbilityInputID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RoleStats_EAbilityInputID()
{
	if (!Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton, Z_Construct_UEnum_RoleStats_EAbilityInputID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton;
}
// End Enum EAbilityInputID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Lib_AbilityEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAbilityInputID_StaticEnum, TEXT("EAbilityInputID"), &Z_Registration_Info_UEnum_EAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3289893350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Lib_AbilityEnums_h_1945059464(TEXT("/Script/RoleStats"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Lib_AbilityEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Lib_AbilityEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
