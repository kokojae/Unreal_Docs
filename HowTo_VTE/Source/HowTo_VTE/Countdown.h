// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TextRenderComponent.h"
#include "Countdown.generated.h"

UCLASS()
class HOWTO_VTE_API ACountdown : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACountdown();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 카운트 다운이 실행되는 시간 (초)
	// How long, in seconds, the countdown will run
	UPROPERTY(EditAnywhere)
	int32 CountdownTime;
	UTextRenderComponent* CountdownText;
	void UpdateTimerDisplay();
	void AdvanceTimer();
	void CountdownHasFinished();
	FTimerHandle CountdownTimerHandle;
};
