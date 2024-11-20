// Starcache Studios, LLC (c) 2024


#include "Lib/AbilityData.h"

#include "Abilities/RsGameplayAbilityBase.h"

URsAbilityDataAsset::URsAbilityDataAsset()
	: AbilityReference(nullptr)
{
}

int URsAbilityDataAsset::GetAbilityUnlockCost() const
{
	if (IsValid(AbilityReference))
	{
		if (URsGameplayAbilityBase* AbilityObject = GetAbilityDefaultObject())
		{
			return AbilityObject->UnlockPoints;
		}
	}
	return -1;
}

FText URsAbilityDataAsset::GetAbilityDisplayName() const
{
	if (IsValid(AbilityReference))
	{
		if (URsGameplayAbilityBase* AbilityObject = GetAbilityDefaultObject())
		{
			return FText::FromString(AbilityObject->DisplayName);
		}
	}
	return {};
}

FString URsAbilityDataAsset::GetAbilityDescription() const
{
	if (IsValid(AbilityReference))
	{
		if (URsGameplayAbilityBase* AbilityObject = GetAbilityDefaultObject())
		{
			return AbilityObject->Description;
		}
	}
	return "";
}

UTexture2D* URsAbilityDataAsset::GetAbilityThumbnail() const
{
	if (IsValid(AbilityReference))
	{
		if (URsGameplayAbilityBase* AbilityObject = GetAbilityDefaultObject())
		{
			return AbilityObject->AbilityIcon;
		}
	}
	return nullptr;
}

FGameplayTag URsAbilityDataAsset::GetAbilitySchool() const
{
	if (IsValid(AbilityReference))
	{
		if (URsGameplayAbilityBase* AbilityObject = GetAbilityDefaultObject())
		{
			return AbilityObject->AbilitySchool;
		}
	}
	return {};
}

TSubclassOf<URsGameplayAbilityBase> URsAbilityDataAsset::GetAbilityReference() const
{
	if (IsValid(AbilityReference))
	{
		return AbilityReference;
	}
	return {};
}

URsGameplayAbilityBase* URsAbilityDataAsset::GetAbilityDefaultObject() const
{
	if (IsValid(AbilityReference))
	{
		return AbilityReference->GetDefaultObject<URsGameplayAbilityBase>();
	}
	return nullptr;
}
