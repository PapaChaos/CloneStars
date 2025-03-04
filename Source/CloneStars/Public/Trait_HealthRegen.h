// Trait_HealthRegen.h

#pragma once

#include "CoreMinimal.h"
#include "TraitBase.h"
#include "CloneStarsCharacter.h"

#include "Trait_HealthRegen.generated.h"

/**
 * 
 */
UCLASS()
class CLONESTARS_API UTrait_HealthRegen : public UTraitBase
{
    GENERATED_BODY()

public:
    UTrait_HealthRegen()
    {
        TraitName = FName("HealthRegen");
        EffectMagnitude = 1.0f;  // Default bonus multiplier.
        Duration = 0.f; // Permanent until replaced/removed.
    }

    /*
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trait")
    float EffectMagnitude = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trait")
    float Duration = 0.0f;
    */

    virtual void ApplyEffect_Implementation(ACloneStarsCharacter* Character) override;
    virtual void RemoveEffect_Implementation(ACloneStarsCharacter* Character) override;
	
};
