	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FPSCODETUTORIAL_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Constructor for AFPSCharacter
	AFPSCharacter(const FObjectInitializer& ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	UCameraComponent* FirstPersonCameraComponent;

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* FirstPersonMesh;

	/** Gun muzzle's offset from the camera location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AFPSProjectile> ProjectileClass;

protected:
	// Handles moving forward/backward
	UFUNCTION()
	void MoveForward(float Val);
	
	// Handles strafing
	UFUNCTION()
	void MoveRight(float Val);

	// Sets jump flag when key is pressed
	UFUNCTION()
	void OnStartJump();
	// Clears jump flag when key is released
	UFUNCTION()
	void OnStopJump();

	//handles firing
    UFUNCTION()
    void OnFire();
};
