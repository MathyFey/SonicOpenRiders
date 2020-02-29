// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SonicOpenRidersGameMode.h"
#include "SonicOpenRidersHUD.h"
#include "SonicOpenRidersCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASonicOpenRidersGameMode::ASonicOpenRidersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASonicOpenRidersHUD::StaticClass();
}
