// Copyright Epic Games, Inc. All Rights Reserved.

#include "Re_AsteroidsGameMode.h"
#include "Re_AsteroidsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARe_AsteroidsGameMode::ARe_AsteroidsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
