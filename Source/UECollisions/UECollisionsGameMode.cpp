// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UECollisionsGameMode.h"
#include "UECollisionsPawn.h"
#include "UECollisionsHud.h"

AUECollisionsGameMode::AUECollisionsGameMode()
{
	DefaultPawnClass = AUECollisionsPawn::StaticClass();
	HUDClass = AUECollisionsHud::StaticClass();
}
