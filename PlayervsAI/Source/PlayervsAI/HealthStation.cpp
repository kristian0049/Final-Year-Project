// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthStation.h"
#include "PlayerClass.h"
#include "Components/BoxComponent.h"
// Sets default values
AHealthStation::AHealthStation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxComponent;
	BoxComponent->SetBoxExtent(FVector(50));
}

// Called when the game starts or when spawned
void AHealthStation::BeginPlay()
{
	Super::BeginPlay();
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AHealthStation::OnOverlapBegin);
}

// Called every frame
void AHealthStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealthStation::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerClass* Player = Cast<APlayerClass>(OtherActor);
	if (Player)
	{
		Player->RecoverHealth(100);
		Destroy();
	}
}

