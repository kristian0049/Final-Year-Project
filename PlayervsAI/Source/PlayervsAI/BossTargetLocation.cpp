// Fill out your copyright notice in the Description page of Project Settings.


#include "BossTargetLocation.h"

// Sets default values
ABossTargetLocation::ABossTargetLocation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SceneComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABossTargetLocation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABossTargetLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

