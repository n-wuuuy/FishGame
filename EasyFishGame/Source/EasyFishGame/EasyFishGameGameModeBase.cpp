// Copyright Epic Games, Inc. All Rights Reserved.


#include "EasyFishGameGameModeBase.h"
#include "EnemySpawnControll.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerPawn.h"

AEasyFishGameGameModeBase::AEasyFishGameGameModeBase()
{
	EnemySpawnController = CreateDefaultSubobject<UEnemySpawnControll>(TEXT("SpawnController"));
}

void AEasyFishGameGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void AEasyFishGameGameModeBase::EndGame()
{
	IsGameOver = true;
	EnemySpawnController->SetActive(false);
	GameOver.Broadcast();
	UGameplayStatics::GetPlayerPawn(this, 0)->Destroy();
	SetPause(UGameplayStatics::GetPlayerController(this, 0), false);
}

void AEasyFishGameGameModeBase::AddPoint(int Points)
{
	GamePoint += Points;
}
