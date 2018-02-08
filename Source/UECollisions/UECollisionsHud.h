// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "UECollisionsHud.generated.h"


UCLASS(config = Game)
class AUECollisionsHud : public AHUD
{
	GENERATED_BODY()

public:
	AUECollisionsHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
