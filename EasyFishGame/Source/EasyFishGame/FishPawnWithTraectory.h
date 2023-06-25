// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClassicFishPawn.h"
#include "FishPawnWithTraectory.generated.h"

/**
 * 
 */
UCLASS()
class EASYFISHGAME_API AFishPawnWithTraectory : public AClassicFishPawn
{
	GENERATED_BODY()
protected:
	AFishPawnWithTraectory();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector GlovalStartLocation;
	FVector GlobalTargetLocation;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta=(MakeEditWidget=ture))
		FVector TargetLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controll")
		float Speed=20;
};
