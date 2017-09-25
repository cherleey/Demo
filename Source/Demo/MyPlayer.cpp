// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayer.h"

AMyPlayer::AMyPlayer()
{
}

AMyPlayer::~AMyPlayer()
{
}

void AMyPlayer::BeginPlay()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMyPlayer::Tick(float DeltaSeconds)
{

}
