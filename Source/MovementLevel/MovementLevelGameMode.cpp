// Copyright Epic Games, Inc. All Rights Reserved.

#include "MovementLevelGameMode.h"
#include "MovementLevelHUD.h"
#include "MovementLevelCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMovementLevelGameMode::AMovementLevelGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMovementLevelHUD::StaticClass();
}
