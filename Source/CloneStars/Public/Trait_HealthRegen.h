// Trait_HealthRegen.h

#pragma once

#include "CoreMinimal.h"
#include "TraitBase.h"

#include "Trait_HealthRegen.generated.h"

/**
 * 
 */
UCLASS()
class CLONESTARS_API UTrait_HealthRegen : public UTraitBase
{
    GENERATED_BODY()

public:
    UHealthRegenTrait()
    {
        TraitName = FName("HealthRegen");
        EffectMagnitude = 1.0f;  // Default bonus multiplier.
        Duration = 0.f; // Permanent until replaced/removed.
    }

    virtual void ApplyEffect_Implementation(ACloneStarsCharacter* Character) override;
    virtual void RemoveEffect_Implementation(ACloneStarsCharacter* Character) override;
	
};
