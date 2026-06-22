#include "TemporaryActor.h"
#include "Engine/Engine.h"

ATemporaryActor::ATemporaryActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ATemporaryActor::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("ATemporaryActor BeginPlay - Temporary plugin is working!"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            5.0f,
            FColor::Cyan,
            TEXT("Temporary Plugin Actor BeginPlay!")
        );
    }
}