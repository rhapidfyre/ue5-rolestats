// Starcache Studios, LLC (c) 2024


#include "Lib/AbilityGlobals.h"

#include "Abilities/RsGameplayAbilityBase.h"

URsAbilitySystemGlobals::URsAbilitySystemGlobals()
{
}

FLinearColor URsAbilitySystemGlobals::GetAbilityCategoryColor(
	const TSubclassOf<URsGameplayAbilityBase>& AbilityClass)
{
	if (IsValid(AbilityClass))
	{
		if (URsGameplayAbilityBase* AbilityObject = AbilityClass->GetDefaultObject<URsGameplayAbilityBase>())
		{
			switch (AbilityObject->AbilityCategory)
			{
			case EAbilityCategory::Beneficial:
				return FLinearColor(0.f, 0.5, 0.f);
			case EAbilityCategory::Defensive:
				return FLinearColor(0.f, 1.f, 0.f);
			case EAbilityCategory::Detriment:
				return FLinearColor(1.f, 0.4, 0.4);
			case EAbilityCategory::Mobility:
				return FLinearColor(0.f, 0.6, 1.f);
			case EAbilityCategory::Offensive:
				return FLinearColor(1.f, 0.f, 0.f);
			case EAbilityCategory::Passive:
				return FLinearColor(.8f, 0.6, 1.f);
			case EAbilityCategory::Utility:
				return FLinearColor(1.f, 0.8, 0.f);
			default:
				return FLinearColor::White;
			}
		}
	}
	return FLinearColor::White;
}
