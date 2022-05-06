// Fill out your copyright notice in the Description page of Project Settings.


#include "GunProperties.h"
#include "Engine.h"
#include "PlayerClass.h"
#include "Kismet/KismetMathLibrary.h"
#include "Enemy.h"
#include "PlayervsAIProjectile.h"

AGunProperties::AGunProperties() 
{
	PrimaryActorTick.bCanEverTick = true;
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	RootComponent = CollisionComp;
	GunOffset = FVector(100.0f, 0.0f, 10.0f);
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun Mesh"));
	WeaponMesh->AttachTo(RootComponent);
}


void AGunProperties::Fire(FVector GetFwrCam, UCameraComponent* PlayerCam, FTimerHandle _ShootingHandler, APlayerClass* Player)
{
	if (ProjectileType == EWeaponProjectile::EBullet && !IsHidden()  )
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Black, TEXT("Bullet"))
		
		ARShooting(GetFwrCam,_ShootingHandler,Player);
		
	}
	if (ProjectileType == EWeaponProjectile::ESpread && !IsHidden() )
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Black, TEXT("Spread"));
		for (int32 i = 0; i <= WeaponConfig.WeaponSpread; i++)
		{
			InstantFire(GetFwrCam);
		}
	}
	if (ProjectileType == EWeaponProjectile::EProjectile && !IsHidden())
	{
		ProjectileShooting( Player);
	}
}

void AGunProperties::InstantFire(FVector GetFwrCam)
{
	const int32 RandomSeed = FMath::Rand();
	FRandomStream WeaponRandomStream(RandomSeed);
	const float CurrentSpread = WeaponConfig.WeaponSpread;
	const float SpreadCone = FMath::DegreesToRadians(WeaponConfig.WeaponSpread *0.5 );
	const FVector StartTrace = WeaponMesh->GetSocketLocation("MF");
	const FVector CameraDir = FVector(GetFwrCam.X, GetFwrCam.Y, GetFwrCam.Z);
	const FVector ShootDir = WeaponRandomStream.VRandCone(CameraDir, SpreadCone, SpreadCone);
	const FVector EndTrace = StartTrace + ShootDir    * WeaponConfig.WeaponRange;
	const FHitResult Impact = WeaponTrace(StartTrace, EndTrace);

	ProcessInstantHit(Impact, StartTrace, ShootDir, RandomSeed, CurrentSpread);
}


void AGunProperties::ARShooting(FVector GetFwrdCam, FTimerHandle _ShootingHandler, APlayerClass* Player)
{
	const FRotator StartTrace = Player->GetControlRotation();
	
	const FVector SpawnLocation = WeaponMesh->GetSocketLocation(FName("MF"));
	const FVector EndTrace = SpawnLocation + StartTrace.Vector()  * WeaponConfig.WeaponRange;
	const FHitResult Impact = WeaponTrace(SpawnLocation, EndTrace);
	ProcessARHit(Impact, SpawnLocation);
	
	
}




FHitResult AGunProperties::WeaponTrace(const FVector& TraceFrom, const FVector& TraceTo) const
{
	static FName WeaponFireTag = FName(TEXT("WeaponTrace"));
	FCollisionQueryParams TraceParams(WeaponFireTag, true);
	
	TraceParams.bReturnPhysicalMaterial = true;
	TraceParams.AddIgnoredActor(this);

	FHitResult Hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(Hit, TraceFrom, TraceTo, TRACE_WEAPON, TraceParams);
	return Hit;
}

void AGunProperties::ProcessInstantHit(const FHitResult& Impact, const FVector& Origin, const FVector& ShootDir, int32 RandomSeed, float RadicalSpread)
{
	const FVector EndTrace = Origin + ShootDir * WeaponConfig.WeaponRange;
	const FVector EndPoint = Impact.GetActor() ? Impact.ImpactPoint : EndTrace;
	AEnemy* Enemy = Cast<AEnemy>(Impact.GetActor());
	if (Enemy)
	{
		Enemy->DealDamage(WeaponConfig.DamageValue);
	}
	DrawDebugLine(this->GetWorld(), Origin, Impact.TraceEnd, FColor::Black, true, 1000, 10.f);
}

void AGunProperties::ProcessARHit(const FHitResult& Impact, const FVector& Origin)
{
	const FVector EndTrace = Origin * WeaponConfig.WeaponRange;
	const FVector EndPoint = Impact.GetActor() ? Impact.ImpactPoint : EndTrace;
	AEnemy* Enemy = Cast<AEnemy>(Impact.GetActor());
	if (Enemy)
	{
		Enemy->DealDamage(WeaponConfig.DamageValue);

	}
	DrawDebugLine(this->GetWorld(), Origin, Impact.TraceEnd, FColor::Black, true, 1000, 10.f);
}


void AGunProperties::ProjectileShooting(APlayerClass* Player)
{
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			
				const FRotator SpawnRotation = Player->GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = WeaponMesh->GetSocketLocation(FName("MF"));

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<APlayervsAIProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
			
		}
	}
}