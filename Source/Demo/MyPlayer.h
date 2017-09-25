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

public:
	void BeginPlay();
	void Tick(float DeltaSeconds);

private:
	bool bIsFighting;
};
