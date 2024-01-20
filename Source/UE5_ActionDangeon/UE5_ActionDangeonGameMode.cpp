// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_ActionDangeonGameMode.h"
#include "UE5_ActionDangeonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_ActionDangeonGameMode::AUE5_ActionDangeonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
