// Copyright Epic Games, Inc. All Rights Reserved.

#include "TerrainTraceEffectGameMode.h"
#include "TerrainTraceEffectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATerrainTraceEffectGameMode::ATerrainTraceEffectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
