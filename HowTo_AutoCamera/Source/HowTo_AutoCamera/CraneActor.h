// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CraneActor.generated.h"

UCLASS()
class HOWTO_AUTOCAMERA_API ACraneActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACraneActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float RunningTime;

	UPROPERTY(EditAnyWhere)
		float Speed;

	UPROPERTY(EditAnyWhere)
		float Height;
};
