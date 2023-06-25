// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LittleFishEnemy.h"
#include "TestAggressiv.generated.h"

/**
 * 
 */
UCLASS()
class EASYFISHGAME_API ATestAggressiv : public ALittleFishEnemy
{
	GENERATED_BODY()
protected:
	FVector PawnLocation;
	class APlayerPawn* PlayerPawn;
	FVector TargetLocation;
public:
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controll")
		float Speed = 200;
};
