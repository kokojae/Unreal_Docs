// Fill out your copyright notice in the Description page of Project Settings.


#include "CraneActor.h"

// Sets default values
ACraneActor::ACraneActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = 1.0f;
	Height = 100.0f;
}

// Called when the game starts or when spawned
void ACraneActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACraneActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin((RunningTime + DeltaTime) * Speed) - FMath::Sin(RunningTime * Speed));
	NewLocation.Z += DeltaHeight * Height;       //Scale our height by a factor of Height
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

