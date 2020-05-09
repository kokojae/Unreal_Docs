// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DollyActor.generated.h"

UCLASS()
class HOWTO_AUTOCAMERA_API ADollyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADollyActor();

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
		float Distance;
};
