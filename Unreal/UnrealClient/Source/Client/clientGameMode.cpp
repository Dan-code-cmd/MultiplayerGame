// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClientGameMode.h"
#include "ClientCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClientGameMode::AClientGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
