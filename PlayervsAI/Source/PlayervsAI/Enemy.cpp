// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Components/BoxComponent.h"
#include "PlayerClass.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "GameFrameWork/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnemyAIProjectile.h"
#include "Components/ArrowComponent.h"
#include "Spikes.h"

// Sets default values
AEnemy::AEnemy()
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
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Collision"));
	DamageCollision->SetupAttachment(RootComponent);
	EnemyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EnemyMesh"));
	EnemyMesh->SetupAttachment(RootComponent);
	EnemyMesh->bCastDynamicShadow = false;
	EnemyMesh->CastShadow = false;

	ProjectileLocation = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileLocation"));
	ProjectileLocation->SetupAttachment(EnemyMesh);
	ProjectileLocation->SetRelativeLocation(ProjectileSpawn);

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ProjectileArrow"));
	Arrow->SetupAttachment(EnemyMesh);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0, 600.0f, 0.0f);
	
	ProjectileSpawn = FVector(100, 100, 100);

	CurrentVelocity = FVector::ZeroVector;
	MovementSpeed = 375.0f;
	DistanceSquared = BIG_NUMBER;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	DamageCollision->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnHit);
	BaseLocation = this->GetActorLocation();
	getPlayer = Cast<APlayerClass>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (EnemyType == EEnemyType::ERanged && FVector::Distance(GetActorLocation(), getPlayer->GetActorLocation()) < 2000)
	{
		LookAtPlayer(DeltaTime);
		if (TimeElapsedForProjectile  >1)
		{
			ThrowProjectile();
			UE_LOG(LogTemp, Warning, TEXT("The boolean value is %s"), (HasRangedAttacked ? TEXT("true") : TEXT("false")));
			TimeElapsedForProjectile = 0;
		}
		TimeElapsedForProjectile += DeltaTime;
	}
	if (EnemyType == EEnemyType::EBoss)
	{
		if (ResetBoss == false)
		{
			if (BossTime < 10)
			{
				LookAtPlayer(DeltaTime);
				if (TimeElapsedForProjectile > 1)
				{
					ThrowProjectile();
					TimeElapsedForProjectile = 0;
				}
				TimeElapsedForProjectile += DeltaTime;
			}
			else if (BossTime > 10 && BossTime < 12 )
			{
				for (int8 i = 0; i < Spikes.Num(); i++)
				{
					
					ASpikes* Spike = Spikes[i];
					
					if (Spike->bShouldSpikeLerp == false)
					{
						Spike->ShouldSpikeLerp();
					}
					
					
				}
					
			}
			else if (BossTime > 16 && BossTime < 20)
			{
				
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
				if (SpawnEachSeconds < 1 && HasSpawned == false)
				{
					for (int8 i = 0; i < 1; i++)
					{
						AEnemy* MeleeSpawner = GetWorld()->SpawnActor<AEnemy>(MeleeSpawn, ActorSpawnParams);
						FVector SpawnLocation = FVector(GetActorLocation().X + 15, GetActorLocation().Y, GetActorLocation().Z);
						MeleeSpawner->SetActorLocation(SpawnLocation);
						AEnemy* RangeSpawner = GetWorld()->SpawnActor<AEnemy>(RangeSpawn, ActorSpawnParams);
						FVector RangeSpawnLocation = FVector(GetActorLocation().X, GetActorLocation().Y + 30, GetActorLocation().Z);
						RangeSpawner->SetActorLocation(RangeSpawnLocation);

						if (SpawnEachSeconds > 5 && HasSpawned == true)
						{
							i = 0;
						}
					}
					HasSpawned = true;
				}
			}
			else if (BossTime > 20)
			{
				HasSpawned = false;
				SpawnEachSeconds = 0;
				ResetBoss = true;
			}
			
		}else if (ResetBoss == true)
		{
			if (DelayReset < 3)
			{
				for (int8 i = 0; i < Spikes.Num(); i++)
				{
					ASpikes* Spike = Spikes[i];
					Spike->SpikeNoLerp();
				}
				ResetBoss = false;
				BossTime = 0;
			}
			else {
				DelayReset = 0;
			}
			DelayReset += DeltaTime;
		}
		
		BossTime += DeltaTime;
	}
	
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	APlayerClass* Char = Cast<APlayerClass>(OtherActor);
	
	if (Char && EnemyType == EEnemyType::EMelee) {
		Char->DealDamage(DamageValue);
	}
}





void AEnemy::DealDamage(float DamageAmount)
{
	Health -= DamageAmount;
	if (Health <= 0)
	{
		Destroy();
	}

	
}

void AEnemy::LookAtPlayer(float DeltaTime)
{
	FVector GetAILocation = GetActorLocation();
	FVector PlayerLocation = getPlayer->GetActorLocation();
	FRotator RotateTo = UKismetMathLibrary::FindLookAtRotation(GetAILocation, PlayerLocation);
	FRotator InterpedRotation = UKismetMathLibrary::RInterpTo(GetActorRotation(), RotateTo, DeltaTime,0.0);
	SetActorRotation(FRotator(0, InterpedRotation.Yaw, 0));
}

void AEnemy::ThrowProjectile()
{
	FVector ArrowLocation = Arrow->GetComponentLocation();
	FRotator FindLookAtRotOne = UKismetMathLibrary::FindLookAtRotation(FVector(FVector(ArrowLocation.X, ArrowLocation.Y, ArrowLocation.Z + (-100)) + (Arrow->GetForwardVector() * 50)), getPlayer->GetMesh()->GetComponentLocation());
	FRotator FindLookAtRotTwo = UKismetMathLibrary::FindLookAtRotation(FVector(FVector(ArrowLocation.X, ArrowLocation.Y, ArrowLocation.Z + (-100)) + (Arrow->GetForwardVector() * 50)), getPlayer->GetMesh()->GetComponentLocation() + (GetDistanceTo(getPlayer) / 2000 * getPlayer->GetVelocity()));
	Arrow->SetWorldRotation(FindLookAtRotOne);
	UWorld* const World = GetWorld();
	const FVector SpawnRotation = Arrow->GetComponentLocation() + Arrow->GetForwardVector();
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	World->SpawnActor<AEnemyAIProjectile>(ProjectileClass, SpawnRotation, FRotator(FindLookAtRotTwo.Pitch,UKismetMathLibrary::RandomFloatInRange(FindLookAtRotTwo.Yaw-0.5,FindLookAtRotTwo.Yaw+0.5),FindLookAtRotTwo.Roll) , ActorSpawnParams);
	HasRangedAttacked = true;
	
}

void AEnemy::BossDash(float DeltaTime)
{
	bool bDoOnce = true;
	float Delay = 0;
	if (bDoOnce == true)
	{
		LaunchCharacter(FVector(0, 0, 200), false, false);
		if (Delay < 0.3)
		{
			
			LaunchCharacter(FVector(GetActorLocation().X*600,0,0), false, false);

		}
		Delay += DeltaTime;
		bDoOnce = false;
	}
	
}

void AEnemy::SetHasRangedAttacked()
{
	HasRangedAttacked = false;
}


