// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaygraundBorder.h"
#include "PlayerPawn.h"
#include "Components/BoxComponent.h"

// Sets default values
APlaygraundBorder::APlaygraundBorder()
{
    Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
    SetRootComponent(Trigger);
    Trigger->SetCollisionProfileName("OverlapAll");
}


void APlaygraundBorder::NotifyActorEndOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);
    if (!OtherActor)
        return;
    if (Cast<APlayerPawn>(OtherActor))
        return;
    OtherActor->Destroy();
}
