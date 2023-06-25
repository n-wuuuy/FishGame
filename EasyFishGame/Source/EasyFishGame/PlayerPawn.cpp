// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EasyFishGameGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
APlayerPawn::APlayerPawn():
	TouchMoveSensetive(1.f)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = PawnCollision;
	PawnMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	PawnMesh->SetupAttachment(PawnCollision);
	PawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	AEasyFishGameGameModeBase* GameMode = Cast<AEasyFishGameGameModeBase>(UGameplayStatics::GetGameMode(this));
}

void APlayerPawn::TouchPress(ETouchIndex::Type  FingerIndex, FVector Location)
{
	TouchLocation = FVector2D(Location);
	Touching = true;

}

void APlayerPawn::TouchRelese(ETouchIndex::Type  FingerIndex, FVector Location)
{
	Touching = false;
	AEasyFishGameGameModeBase* GameMode = Cast<AEasyFishGameGameModeBase>(UGameplayStatics::GetGameMode(this));
	GameMode->EndGame();
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APlayerController* PlayerControll = Cast<APlayerController>(GetController());
	bool Touch;
	float TouchX;
	float TouchY;
	PlayerControll->GetInputTouchState(ETouchIndex::Touch1, TouchX, TouchY, Touch);
	if (Touch)
	{	
		FVector  NewLocation;
		NewLocation.Y = FMath::Clamp(TouchLocation.X - TouchX, -500.f, 500.f);
		NewLocation.X = TouchLocation.Y - TouchY;
		AddActorLocalOffset(FVector(NewLocation.X, NewLocation.Y *-1, 0.f));
		TouchLocation = FVector2D(TouchX, TouchY);
	}
	APlayerPawn::AddActorLocalOffset(TargetLocation*-1.f);
	APlayerPawn::PawnCamera->AddLocalOffset(CameraTargetLocation*-1.f);
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindTouch(IE_Pressed,this,&APlayerPawn::TouchPress);
	PlayerInputComponent->BindTouch(IE_Released, this, &APlayerPawn::TouchRelese);
}

