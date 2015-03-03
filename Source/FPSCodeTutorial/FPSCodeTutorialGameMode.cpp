// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSCodeTutorial.h"
#include "FPSCodeTutorialGameMode.h"

#include "FPSCharacter.h"


AFPSCodeTutorialGameMode::AFPSCodeTutorialGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultPawnClass = AFPSCharacter::StaticClass();
}

void AFPSCodeTutorialGameMode::StartPlay()
{
	Super::StartPlay();

	StartMatch();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("FPSCodeTutorialGameMode started"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No GEngine on AFPSCodeTutorialGameMode StartPlay"));
	}
}