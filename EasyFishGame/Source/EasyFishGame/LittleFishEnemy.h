// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassicFishPawn.h"
#include "LittleFishEnemy.generated.h"

/**
 * 
 */
UCLASS()
class EASYFISHGAME_API ALittleFishEnemy : public AClassicFishPawn
{
	GENERATED_BODY()
public:
	ALittleFishEnemy();
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector TargetLocation;
};
