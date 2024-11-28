// Starcache Studios, LLC (c) 2024


#include "Abilities/RsGameplayAbilityBase.h"

URsGameplayAbilityBase::URsGameplayAbilityBase()
	: AbilityIcon(nullptr),
	  AbilityCategory(),
	  AbilityInputID(EAbilityInputID::None),
	  AbilityRank(1),
	  CooldownTime(0)
{
}

float URsGameplayAbilityBase::GetAbilityCooldownTime() const
{
	return CooldownTime > 0.f ? CooldownTime : 0.f;
}
