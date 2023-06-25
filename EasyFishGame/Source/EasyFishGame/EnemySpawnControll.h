// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClassicFishPawn.h"
#include "EnemySpawnControll.generated.h"

USTRUCT(BlueprintType)
struct FEnemySpawnInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
		TSubclassOf<AClassicFishPawn> EnemyClass=AClassicFishPawn::StaticClass();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
		float SpawnDeley;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
		int NumOfEnemy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
		FTransform SpawnTransform;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EASYFISHGAME_API UEnemySpawnControll : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UEnemySpawnControll();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void StartEnemySpawn();
	void SpawnEnemy();
	FEnemySpawnInfo SpawnStage;
	int EnemySpawned;
	FTimerHandle EnemySpawnTimer;
	FTimerHandle ChangeStageTimer;
	FRandomStream Random;
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpawnController")
		TArray<FEnemySpawnInfo> SpawnStages;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpawnController")
		float SpawnMinDeley;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpawnController")
		float SpawnMaxDeley;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpawnController")
		float ChangeStageTimerMultiplaer;
};
