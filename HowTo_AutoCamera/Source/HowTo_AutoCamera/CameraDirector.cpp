// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACameraDirector::ACameraDirector()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float TimeBetweenCameraChanges = 5.0f;
	const float SmoothBlendTime = 0.75f;

	TimeToNextCameraChange -= DeltaTime;
	if (TimeToNextCameraChange <= 0.0f)
	{
		TimeToNextCameraChange += TimeBetweenCameraChanges;

		// 로컬 플레이어의 컨트롤을 처리하는 액터를 찾습니다.
		APlayerController* ourPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (ourPlayerController)
		{
			if ((ourPlayerController->GetViewTarget() != CameraOne) && (CameraOne != nullptr))
			{
				// 1번 카메라로 즉시 컷해 들어갑니다.
				ourPlayerController->SetViewTarget(CameraOne);
			}
			else if ((ourPlayerController->GetViewTarget() != CameraTwo) && CameraTwo != nullptr)
			{
				// 2번 카메라로 부드럽게 전환합니다.
				ourPlayerController->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
			}
		}
	}
}

