// Fill out your copyright notice in the Description page of Project Settings.


#include "Spikes.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "PlayerClass.h"
#include "Math/UnrealMathUtility.h"
// Sets default values
ASpikes::ASpikes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;
	SphereCollision->InitSphereRadius(35);
	SphereCollision->BodyInstance.SetCollisionProfileName("Spike");
	
	SphereCollision->CanCharacterStepUpOn = ECB_No;
	SphereCollision->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
}

// Called when the game starts or when spawned
void ASpikes::BeginPlay()
{
	Super::BeginPlay();
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &ASpikes::OnOverlapBegin);
}

// Called every frame
void ASpikes::Tick(float DeltaTime)//Do movement with timers
{
	Super::Tick(DeltaTime);
	if (bShouldSpikeLerp == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("The boolean value is %s"), (bShouldSpikeLerp ? TEXT("true") : TEXT("false")));
		if (duration > 0 && duration < 2)
		{
			SpikesGoUpAndDown(duration, DeltaTime);
		}
		else {
			duration = 0;
		}
		
		
		duration += DeltaTime;
		bShouldSpikeLerp = false;
	}
	
}

void ASpikes::SpikesGoUpAndDown(float _duration, float DeltaTime)
{
	if (_duration < 1)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 50), DeltaTime, 1));

	}
	else if (_duration > 1 && _duration < 2)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z - 50), DeltaTime, 1));
	}
	
	
}

void ASpikes::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerClass* Char = Cast<APlayerClass>(OtherActor);
	if (Char != nullptr)
	{
		Char->DealDamage(50);

	}
}

void ASpikes::ShouldSpikeLerp()
{
	bShouldSpikeLerp = true;
}

void ASpikes::SpikeNoLerp()
{
	bShouldSpikeLerp = false;
}


