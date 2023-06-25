// Fill out your copyright notice in the Description page of Project Settings.


#include "LittleFishEnemy.h"

ALittleFishEnemy::ALittleFishEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ALittleFishEnemy::Tick(float DeltaTime)
{
	ALittleFishEnemy::AddActorLocalOffset(TargetLocation);
}
