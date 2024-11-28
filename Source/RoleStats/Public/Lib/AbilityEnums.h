// Starcache Studios, LLC (c) 2024

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EAbilityInputID : uint8
{
	None = 0	UMETA(DisplayName = "None"),
	Confirm		UMETA(DisplayName = "Confirm"),
	Cancel		UMETA(DisplayName = "Cancel"),
	Primary		UMETA(DisplayName = "Primary"),
	Secondary	UMETA(DisplayName = "Secondary"),
	Hotkey1,
	Hotkey2,
	Hotkey3,
	Hotkey4,
	Hotkey5,
	Hotkey6,
	Hotkey7,
	Hotkey8,
	Hotkey9,
	Hotkey0
};

UENUM(BlueprintType)
enum class EResearchState : uint8
{
	Unknown UMETA(DisplayName = "Unknown"),
	Experimentation UMETA(DisplayName = "Experimentation"),
	Revealed UMETA(DisplayName = "Revealed"),
	Purchasable UMETA(DisplayName = "Purchasable"),
	Completed UMETA(DisplayName = "Completed")
};

UENUM(BlueprintType)
enum class EAbilityCategory : uint8
{
	// The ability is uncategorized and should not be listed as available
	None = 0,
	// Beneficial abilities are usually "buffs," beefing up the character's stats or abilities
	Beneficial,
	// Detriments are usually "debuffs," which hinder the character's stats or abilities
	Detriment,
	// Utility abilities offer some type of tool, like unlocking or providing illumination
	Utility,
	// Offensive abilities directly harm or damage another character
	Offensive,
	// Defensive abilities mitigate or avoid harm, like blocking
	Defensive,
	// Mobility is like utility, but makes adjustments to the character's mobility
	Mobility,
	// Passive abilities are always active once unlocked, such as health regen
	Passive
};
