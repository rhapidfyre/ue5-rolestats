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
