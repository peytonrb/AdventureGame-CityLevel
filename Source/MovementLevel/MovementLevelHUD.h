// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MovementLevelHUD.generated.h"

UCLASS()
class AMovementLevelHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMovementLevelHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

