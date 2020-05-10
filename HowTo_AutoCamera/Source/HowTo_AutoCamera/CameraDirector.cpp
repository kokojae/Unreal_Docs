// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACameraDirector::ACameraDirector()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NowCamNum = 0;
}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();

	ourPlayerController = UGameplayStatics::GetPlayerController(this, 0);
	ourPlayerController->SetViewTarget(Cameras[0]);
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float TimeBetweenCameraChanges = 2.5f;
	const float SmoothBlendTime = 0.5f;

	TimeToNextCameraChange -= DeltaTime;
	if (TimeToNextCameraChange <= 0.0f)
	{
		TimeToNextCameraChange += TimeBetweenCameraChanges;

		// ���� �÷��̾��� ��Ʈ���� ó���ϴ� ���͸� ã���ϴ�.
		ourPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (ourPlayerController)
		{
			if ((ourPlayerController->GetViewTarget() != Cameras[NowCamNum]) && Cameras[NowCamNum] != nullptr)
			{
				// NowCamNum�� ī�޶�� �ε巴�� ��ȯ�մϴ�.
				ourPlayerController->SetViewTargetWithBlend(Cameras[NowCamNum], SmoothBlendTime);
			}
		}

		do
		{
			NowCamNum++;
			if (NowCamNum > 10)
				NowCamNum = 0;
		} while (Cameras[NowCamNum] == nullptr);
	}
}

