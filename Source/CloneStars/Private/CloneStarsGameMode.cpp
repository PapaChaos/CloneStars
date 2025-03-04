// Copyright Epic Games, Inc. All Rights Reserved.

#include "CloneStarsGameMode.h"
#include "CloneStarsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACloneStarsGameMode::ACloneStarsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
