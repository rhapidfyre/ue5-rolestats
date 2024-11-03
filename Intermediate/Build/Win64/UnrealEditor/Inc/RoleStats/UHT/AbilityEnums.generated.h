// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lib/AbilityEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROLESTATS_AbilityEnums_generated_h
#error "AbilityEnums.generated.h already included, missing '#pragma once' in AbilityEnums.h"
#endif
#define ROLESTATS_AbilityEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TalesDungeoneer_Plugins_RoleStats_Source_RoleStats_Public_Lib_AbilityEnums_h


#define FOREACH_ENUM_EABILITYINPUTID(op) \
	op(EAbilityInputID::None) \
	op(EAbilityInputID::Confirm) \
	op(EAbilityInputID::Cancel) \
	op(EAbilityInputID::Primary) \
	op(EAbilityInputID::Secondary) \
	op(EAbilityInputID::Hotkey1) \
	op(EAbilityInputID::Hotkey2) \
	op(EAbilityInputID::Hotkey3) \
	op(EAbilityInputID::Hotkey4) \
	op(EAbilityInputID::Hotkey5) \
	op(EAbilityInputID::Hotkey6) \
	op(EAbilityInputID::Hotkey7) \
	op(EAbilityInputID::Hotkey8) \
	op(EAbilityInputID::Hotkey9) \
	op(EAbilityInputID::Hotkey0) 

enum class EAbilityInputID : uint8;
template<> struct TIsUEnumClass<EAbilityInputID> { enum { Value = true }; };
template<> ROLESTATS_API UEnum* StaticEnum<EAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
