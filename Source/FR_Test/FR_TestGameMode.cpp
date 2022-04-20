// Copyright Epic Games, Inc. All Rights Reserved.

#include "FR_TestGameMode.h"
#include "FR_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFR_TestGameMode::AFR_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/StarterContent/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
