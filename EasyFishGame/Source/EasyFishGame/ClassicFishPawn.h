// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ClassicFishPawn.generated.h"


UCLASS()
class EASYFISHGAME_API AClassicFishPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AClassicFishPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void OnEnemyOverlap(AActor* OverlapedActor, AActor* OtherActor);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fish")
		class UBoxComponent* ClassicFishCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fish")
		class UStaticMeshComponent* ClassicFishMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controll")
		int PriseOfFish;

};
