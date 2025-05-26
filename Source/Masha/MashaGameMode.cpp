// Copyright Epic Games, Inc. All Rights Reserved.

#include "MashaGameMode.h"
#include "MashaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMashaGameMode::AMashaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
