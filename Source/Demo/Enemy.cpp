// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "Respawn.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

AEnemy::~AEnemy()
{
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
