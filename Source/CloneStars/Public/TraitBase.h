// GeneticTrait.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
class ACloneStarsCharacter;

#include "TraitBase.generated.h"

UCLASS(Abstract, Blueprintable)
class CLONESTARS_API UTraitBase : public UObject
{
    GENERATED_BODY()

public:
    // A unique name/ID for the trait (e.g., "HealthRegen", "SpeedBoost")
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Genetics")
    FName TraitName;

    // The magnitude or intensity of this trait’s effect.
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Genetics")
    float EffectMagnitude;

    // Duration for temporary traits (0 = permanent until removed)
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Genetics")
    float Duration;

    // Called to apply the trait effect to the character.
    UFUNCTION(BlueprintNativeEvent, Category = "Genetics")
    void ApplyEffect(class ACloneStarsCharacter* Character);
    virtual void ApplyEffect_Implementation(ACloneStarsCharacter* Character);

    // Called to remove the trait effect from the character.
    UFUNCTION(BlueprintNativeEvent, Category = "Genetics")
    void RemoveEffect(class ACloneStarsCharacter* Character);
    virtual void RemoveEffect_Implementation(ACloneStarsCharacter* Character);
};
