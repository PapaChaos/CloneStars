#include "CloneStarsPlayerState.h"
#include "Net/UnrealNetwork.h"

void ACloneStarsPlayerState::AddGeneticTrait(UTraitBase* NewTrait)
{
	if (NewTrait)
	{
		ActiveGeneticTraits.Add(NewTrait);
		// Optionally, apply the effect immediately to the current character.
	}
}

void ACloneStarsPlayerState::ProcessCollectedTraits()
{
	// Iterate through collected traits and apply their effects to the new clone.
	// This can be called in your respawn (clone lab) process.
	// You may also choose to combine traits, reset them, etc.
	// (Implementation depends on your desired progression mechanics)
}
void ACloneStarsPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACloneStarsPlayerState, Health);
	DOREPLIFETIME(ACloneStarsPlayerState, HealthRegen);
}