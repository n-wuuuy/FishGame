// Fill out your copyright notice in the Description page of Project Settings.


#include "ClassicFishPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "EasyFishGameGameModeBase.h"
#include "PlayerPawn.h"

// Sets default values
AClassicFishPawn::AClassicFishPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ClassicFishCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = ClassicFishCollision;
	ClassicFishMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	ClassicFishMesh->SetupAttachment(ClassicFishCollision);
}

// Called when the game starts or when spawned
void AClassicFishPawn::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AClassicFishPawn::OnEnemyOverlap);
}

void AClassicFishPawn::OnEnemyOverlap(AActor* OverlapedActor, AActor* OtherActor)
{
	if (OtherActor != UGameplayStatics::GetPlayerPawn(this, 0))
		return;
	UE_LOG(LogTemp, Log, TEXT("OH you Overlap"));
	Destroy();
	AEasyFishGameGameModeBase* GameMode = Cast<AEasyFishGameGameModeBase>(UGameplayStatics::GetGameMode(this));
	GameMode->AddPoint(PriseOfFish);
	GameMode->EndGame();
}

// Called every frame
void AClassicFishPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void AClassicFishPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



