// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayer.h"

AMyPlayer::AMyPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	Speed = 50.f;
	bIsFighting = false;
	Distance = 0.f;
}

AMyPlayer::~AMyPlayer()
{
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveForward(DeltaTime);
}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPlayer::MoveForward(float DeltaTime)
{
	if (bIsFighting)
		return;

	Distance += DeltaTime;

	AddMovementInput(GetActorForwardVector(), DeltaTime * Speed);
}

FVector AMyPlayer::GetPosition()
{
	return GetTransform().GetLocation();
}