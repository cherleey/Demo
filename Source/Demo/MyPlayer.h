// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MyPlayer.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API AMyPlayer : public APaperCharacter
{
	GENERATED_BODY()
		
public:
	AMyPlayer();
	~AMyPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	bool bIsFighting;
	float Speed;
	float Distance;

public:
	void MoveForward(float DeltaTime);
	FVector GetPosition();
};
