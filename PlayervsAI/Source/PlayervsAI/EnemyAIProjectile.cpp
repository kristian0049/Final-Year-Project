// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PlayerClass.h"
#include "Enemy.h"
#include "GameFramework/ProjectileMovementComponent.h"
// Sets default values
AEnemyAIProjectile::AEnemyAIProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
		// set up a notification for when this component hits something blocking
	CollisionComp->OnComponentHit.AddDynamic(this, &AEnemyAIProjectile::OnHit);
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 2000.f;
	ProjectileMovement->MaxSpeed = 2000.f;
	ProjectileMovement->bRotationFollowsVelocity = false;
	ProjectileMovement->bShouldBounce = false;

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;
	
	

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void AEnemyAIProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AEnemyAIProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}

void AEnemyAIProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	APlayerClass* Char = Cast<APlayerClass>(OtherActor);
	if (Char != nullptr)
	{
		Char->DealDamage(10);
		Destroy();
	}
	
	
}





