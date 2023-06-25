// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class EASYFISHGAME_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();
private:
	FVector2D TouchLocation;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void TouchPress(ETouchIndex::Type  FingerIndex, FVector Location);
	void TouchRelese(ETouchIndex::Type  FingerIndex, FVector Location);
	FVector2D MoveLimit;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UBoxComponent* PawnCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UStaticMeshComponent* PawnMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		class UCameraComponent* PawnCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		class USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controll")
		bool Touching;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controll")
		float TouchMoveSensetive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controll")
		FVector TargetLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controll")
		FVector CameraTargetLocation;

};
