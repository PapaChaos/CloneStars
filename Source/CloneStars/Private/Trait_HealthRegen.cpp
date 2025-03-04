// HealthRegenTrait.cpp
#include "Trait_HealthRegen.h"

void UTrait_HealthRegen::ApplyEffect_Implementation(ACloneStarsCharacter* Character)
{
    if (Character)
    {
        // Increase the character's health regeneration by the EffectMagnitude.
        Character->ModifyHealthRegen(EffectMagnitude);
    }
}

void UTrait_HealthRegen::RemoveEffect_Implementation(ACloneStarsCharacter* Character)
{
    if (Character)
    {
        // Reverse the effect when the trait is removed.
        Character->ModifyHealthRegen(-EffectMagnitude);
    }
}
