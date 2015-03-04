// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSCodeTutorial.h"
#include "FPSCodeTutorialGameMode.h"

#include "FPSCharacter.h"

// https://wiki.unrealengine.com/First_Person_Shooter_C%2B%2B_Tutorial

AFPSCodeTutorialGameMode::AFPSCodeTutorialGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnObject(TEXT("Pawn'/Game/Blueprints/BP_FPS_Character.BP_FPS_Character_C'"));

	if (PlayerPawnObject.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnObject.Class;
	}
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