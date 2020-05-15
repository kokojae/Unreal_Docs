 // Fill out your copyright notice in the Description page of Project Settings.


#include "Countdown.h"

// Sets default values
ACountdown::ACountdown()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CountdownText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("CountdownNumber"));
	CountdownText->SetHorizontalAlignment(EHTA_Center);
	CountdownText->SetWorldSize(150.0f);
	RootComponent = CountdownText;
	CountdownTime = 3;
}

// Called when the game starts or when spawned
void ACountdown::BeginPlay()
{
	Super::BeginPlay();
	
	UpdateTimerDisplay();
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ACountdown::AdvanceTimer, 1.0f, true);
}

// Called every frame
void ACountdown::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACountdown::UpdateTimerDisplay()
{
	CountdownText->SetText(FString::FromInt(FMath::Max(CountdownTime, 0)));
}

void ACountdown::AdvanceTimer()
{
	--CountdownTime;
	UpdateTimerDisplay();
	if (CountdownTime < 1)
	{
		//ī��Ʈ �ٿ��� �Ϸ�Ǿ�����, Ÿ�̸Ӹ� ������ŵ�ϴ�.
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		// Ÿ�̸Ӱ� ���� �� �츮���ϰ� ���� Ư���� �ൿ���Ѵ�.
		CountdownHasFinished();
	}
}

void ACountdown::CountdownHasFinished()
{
	//Ư�� ������ ��ȯ�մϴ�.
	CountdownText->SetText(TEXT("GO!"));
}

