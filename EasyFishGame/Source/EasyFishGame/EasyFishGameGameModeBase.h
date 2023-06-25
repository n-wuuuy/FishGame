// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EasyFishGameGameModeBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameOverEvent);
/**
 * 
 */
UCLASS()
class EASYFISHGAME_API AEasyFishGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		AEasyFishGameGameModeBase();
protected:
	virtual void BeginPlay() override;
	bool IsGameOver;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enemies")
		class UEnemySpawnControll* EnemySpawnController;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enemies")
		class APlayerPawn* PlayerPawn;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enemies")
		int GamePoint;
	UPROPERTY(BlueprintAssignable, Category = "Game")
		FGameOverEvent GameOver;
	UFUNCTION(BlueprintCallable, Category = "Game")
		void EndGame();
	UFUNCTION(BlueprintCallable, Category = "Game")
		void AddPoint(int Points);
};
