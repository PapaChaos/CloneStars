// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TraitBase.h"
#include "CloneStarsPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class CLONESTARS_API ACloneStarsPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
    // Active genetic traits applied to the player.
    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Genetics")
    TArray<UTraitBase*> ActiveGeneticTraits;

    // Health property with replication
    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats")
    float Health = 100.0f;

    // Health regeneration property with replication
    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Player Stats")
    float HealthRegen = 0.0f;

    // Function to add a new genetic trait.
    UFUNCTION(BlueprintCallable, Category = "Genetics")
    void AddGeneticTrait(UTraitBase* NewTrait);

    // Process all collected traits (e.g., when preparing the next clone).
    UFUNCTION(BlueprintCallable, Category = "Genetics")
    void ProcessCollectedTraits();

protected:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
