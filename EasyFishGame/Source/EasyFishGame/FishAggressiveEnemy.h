// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassicFishPawn.h"
#include "FishAggressiveEnemy.generated.h"

/**
 * 
 */
UCLASS()
class EASYFISHGAME_API AFishAggressiveEnemy : public AClassicFishPawn
{
	GENERATED_BODY()
protected:
	FVector PawnLocation;
	class APlayerPawn* PlayerPawn;
	FVector TargetLocation;
	FVector HelpLocation;
public:
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controll")
		float Speed = 200;
};