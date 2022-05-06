// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnerActor.h"
#include "Enemy.h"
#include "Components/SphereComponent.h"
#include "PlayerClass.h"
ASpawnerActor::ASpawnerActor()
{
	if (GetWorld())
	{
		static ConstructorHelpers::FObjectFinder<UBlueprint> MeleeBlueprint(TEXT("Blueprint'/Game/AI_Pathfinding/BP_Enemy.BP_Enemy'"));
		static ConstructorHelpers::FObjectFinder<UBlueprint> RangeBlueprint(TEXT("Blueprint'/Game/AI_Pathfinding/BP_RangedEnemy.BP_RangedEnemy'"));
		MeleeSpawn = NULL;
		RangeSpawn = NULL;
		if (MeleeBlueprint.Succeeded())
		{
			MeleeSpawn = (UClass*)MeleeBlueprint.Object->GeneratedClass;
		}
		if (RangeBlueprint.Succeeded())
		{
			RangeSpawn = (UClass*)RangeBlueprint.Object->GeneratedClass;
		}
	}
	
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;
	SphereCollision->InitSphereRadius(200);
	SphereCollision->BodyInstance.SetCollisionProfileName("Spike");

	SphereCollisionTwo = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionTwo"));
	SphereCollisionTwo->SetupAttachment(RootComponent);
	SphereCollisionTwo->InitSphereRadius(200);
	SphereCollisionTwo->BodyInstance.SetCollisionProfileName("Spike");

	SphereCollision->CanCharacterStepUpOn = ECB_No;
	SphereCollision->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SceneComponent->SetupAttachment(RootComponent);

	SphereCollisionTwo->CanCharacterStepUpOn = ECB_No;
	SphereCollisionTwo->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));

}

// Called when the game starts or when spawned
void ASpawnerActor::BeginPlay()
{
	Super::BeginPlay();
	SphereCollisionTwo->OnComponentBeginOverlap.AddDynamic(this, &ASpawnerActor::OnOverlapBegin);
	
}

// Called every frame
void ASpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (canSpawn == true)
	{
		if (HowLongToSpawn < 60)
		{
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
			if (SpawnEachSeconds < 1 && HasSpawned == false)
			{
				for (int8 i = 0; i < 3; i++)
				{
					AEnemy* MeleeSpawner = GetWorld()->SpawnActor<AEnemy>(MeleeSpawn, ActorSpawnParams);
					FVector SpawnLocation = FVector(GetActorLocation().X + 15, GetActorLocation().Y, GetActorLocation().Z);
					MeleeSpawner->SetActorLocation(SpawnLocation);

					if (SpawnEachSeconds > 5 && HasSpawned == true)
					{
						i = 0;
					}
				}
				for (int8 i = 0; i < 2; i++)
				{
					AEnemy* RangeSpawner = GetWorld()->SpawnActor<AEnemy>(RangeSpawn, ActorSpawnParams);
					FVector SpawnLocation = FVector(GetActorLocation().X, GetActorLocation().Y + 30, GetActorLocation().Z);
					RangeSpawner->SetActorLocation(SpawnLocation);

					if (SpawnEachSeconds > 5 && HasSpawned == true)
					{
						i = 0;
					}
				}

				HasSpawned = true;
			}
			else if (SpawnEachSeconds > 5 && HasSpawned == true)
			{
				HasSpawned = false;
				SpawnEachSeconds = 0;
			}
			SpawnEachSeconds += DeltaTime;
		}
	}
	
	
	HowLongToSpawn += DeltaTime;
}

void ASpawnerActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerClass* Char = Cast<APlayerClass>(OtherActor);
	if (Char != nullptr)
	{
		canSpawn = true;
	}

}


