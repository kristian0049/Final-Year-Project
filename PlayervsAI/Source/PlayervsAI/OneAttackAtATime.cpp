// Fill out your copyright notice in the Description page of Project Settings.


#include "OneAttackAtATime.h"
#include "Components/SphereComponent.h"
#include "Enemy.h"
// Sets default values
AOneAttackAtATime::AOneAttackAtATime()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;
	SphereCollision->InitSphereRadius(500);
	SphereCollision->BodyInstance.SetCollisionProfileName("Spike");


	SphereCollision->CanCharacterStepUpOn = ECB_No;
	SphereCollision->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
}

// Called when the game starts or when spawned
void AOneAttackAtATime::BeginPlay()
{
	Super::BeginPlay();
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AOneAttackAtATime::OnOverlapBegin);
	
}

// Called every frame
void AOneAttackAtATime::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (rangedEnemies.Num() > 0)
	{
		for (int8 i = 0; i < rangedEnemies.Num(); i)
		{
			AEnemy* Enemy = rangedEnemies[i];
			if (Enemy->HasRangedAttacked == true)
			{
				
				if (DelaySwitch > 3.0)
				{
					Enemy->SetHasRangedAttacked();
					i++;
					DelaySwitch = 0;
				}
				
			}
			
		}
		DelaySwitch += DeltaTime;
	}
}

void AOneAttackAtATime::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AEnemy* Char = Cast<AEnemy>(OtherActor);
	if (Char )
	{
		if (Char->EnemyType == EEnemyType::ERanged)
		{
			rangedEnemies.Add(Char);
		}
	}
}

