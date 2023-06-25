// Fill out your copyright notice in the Description page of Project Settings.


#include "FishPawnWithTraectory.h"

AFishPawnWithTraectory::AFishPawnWithTraectory()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFishPawnWithTraectory::BeginPlay()
{
	Super::BeginPlay();
	GlovalStartLocation = GetActorLocation();
	GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);
}


void AFishPawnWithTraectory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!Controller)
		return;
	FVector Location= GetActorLocation();
	float Lenth = (GlobalTargetLocation - GlovalStartLocation).Size();
	float Travel = (Location - GlovalStartLocation).Size();
	if (Travel >= Lenth)
	{
		FVector Swap = GlovalStartLocation;
		GlovalStartLocation = GlobalTargetLocation;
		GlobalTargetLocation = Swap;
	}
	FVector Derection = (GlobalTargetLocation - GlovalStartLocation).GetSafeNormal();
	Location += (Derection * Speed * DeltaTime);
	SetActorLocation(Location);

}
