// Fill out your copyright notice in the Description page of Project Settings.


#include "DollyActor.h"

// Sets default values
ADollyActor::ADollyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Speed = 1.0f;
	Distance = 100.0f;
}

// Called when the game starts or when spawned
void ADollyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADollyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin((RunningTime + DeltaTime) * Speed) - FMath::Sin(RunningTime * Speed));
	NewLocation.Y += DeltaHeight * Distance;       //Scale our distance by a factor of Distance
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

