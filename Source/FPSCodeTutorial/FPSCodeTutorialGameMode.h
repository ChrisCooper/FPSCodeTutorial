// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "FPSCodeTutorialGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPSCODETUTORIAL_API AFPSCodeTutorialGameMode : public AGameMode
{
	GENERATED_BODY()
	
	// 4.6 needs below line to be included (before or after StartPlay(). This is the definition of constructor whose signature is also different from older versions.
	AFPSCodeTutorialGameMode(const FObjectInitializer& ObjectInitializer);

	virtual void StartPlay() override;
	
	
};
