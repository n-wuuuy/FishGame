// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawnControll.h"


// Sets default values for this component's properties
UEnemySpawnControll::UEnemySpawnControll()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemySpawnControll::BeginPlay()
{
	Super::BeginPlay();
	Random.GenerateNewSeed();
	StartEnemySpawn();
}

void UEnemySpawnControll::StartEnemySpawn()
{
	SpawnStage = SpawnStages[Random.RandRange(0, SpawnStages.Num() - 1)];
	EnemySpawned = 0;
	SpawnEnemy();
	float ChangeStageTime = Random.RandRange(SpawnMinDeley, SpawnMaxDeley)*ChangeStageTimerMultiplaer;
	GetWorld()->GetTimerManager().SetTimer(ChangeStageTimer,this,&UEnemySpawnControll::StartEnemySpawn,ChangeStageTime,true);

}

void UEnemySpawnControll::SpawnEnemy()
{
	FActorSpawnParameters SpawnParametr;
	GetWorld()->SpawnActor<AClassicFishPawn>(SpawnStage.EnemyClass, SpawnStage.SpawnTransform,SpawnParametr);
	EnemySpawned++;
	if (EnemySpawned < SpawnStage.NumOfEnemy)
	{
		GetWorld()->GetTimerManager().SetTimer(EnemySpawnTimer,this, &UEnemySpawnControll::SpawnEnemy,SpawnStage.SpawnDeley,true);
	}
}


// Called every frame
void UEnemySpawnControll::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

