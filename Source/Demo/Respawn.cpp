// Fill out your copyright notice in the Description page of Project Settings.

#include "Respawn.h"
#include "MyPlayer.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


// Sets default values
ARespawn::ARespawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Player = NULL;
}

// Called when the game starts or when spawned
void ARespawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARespawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!Player)
		Player = Cast<AMyPlayer>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	else
	{
		FVector NewLocation = Player->GetPosition();
		NewLocation.X += 1000.f;
		SetActorLocation(NewLocation);
	}
}

FVector ARespawn::GetPosition()
{
	return GetTransform().GetLocation();
}

