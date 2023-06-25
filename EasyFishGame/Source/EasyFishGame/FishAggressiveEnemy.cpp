// Fill out your copyright notice in the Description page of Project Settings.


#include "FishAggressiveEnemy.h"
#include "PlayerPawn.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"



void AFishAggressiveEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!Controller)
		return;
	FVector PlacePawn = GetActorLocation();
	FRotator AnglePawn = GetActorRotation();
	PawnLocation = GetActorLocation();
	/*TargetLocation = UGameplayStatics::GetPlayerPawn(this, 0)->GetActorLocation();
	FRotator AngleRotation = UKismetMathLibrary::FindLookAtRotation(PlacePawn, TargetLocation);
	FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(AngleRotation, AnglePawn);
	float FinalAngle = UKismetMathLibrary::FClamp(Delta.Yaw, Speed * -1, Speed);
	FinalAngle *= DeltaTime;
	FRotator LastAngle = FRotator(0.0f, 0.0f, FinalAngle);
	AFishAggressiveEnemy::AddActorLocalRotation(LastAngle);*/
}