// Fill out your copyright notice in the Description page of Project Settings.


#include "GunProperties.h"
#include "Engine.h"
#include "Kismet/KismetMathLibrary.h"
AGunProperties::AGunProperties() 
{
	PrimaryActorTick.bCanEverTick = true;
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	RootComponent = CollisionComp;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun Mesh"));
	WeaponMesh->AttachTo(RootComponent);
}


void AGunProperties::Fire(FVector GetFwrCam, UCameraComponent* PlayerCam, FTimerHandle _ShootingHandler)
{
	if (ProjectileType == EWeaponProjectile::EBullet)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Black, TEXT("Bullet"))
		
		ARShooting(GetFwrCam,_ShootingHandler);
		
	}
	if (ProjectileType == EWeaponProjectile::ESpread)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Black, TEXT("Spread"));
		for (int32 i = 0; i <= WeaponConfig.WeaponSpread; i++)
		{
			InstantFire(GetFwrCam);
		}
	}
	if (ProjectileType == EWeaponProjectile::EProjectile)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Black, TEXT("Projectile"));
	}
}

void AGunProperties::InstantFire(FVector GetFwrCam)
{
	const int32 RandomSeed = FMath::Rand();
	FRandomStream WeaponRandomStream(RandomSeed);
	const float CurrentSpread = WeaponConfig.WeaponSpread;
	const float SpreadCone = FMath::DegreesToRadians(WeaponConfig.WeaponSpread *0.5 );
	const FVector StartTrace = WeaponMesh->GetSocketLocation("MF");
	const FVector ShootDir = WeaponRandomStream.VRandCone(StartTrace, SpreadCone, SpreadCone);
	const FVector CameraDir = FVector(GetFwrCam.X,GetFwrCam.Y,GetFwrCam.Z-0.025) ;
	const FVector EndTrace = StartTrace + ShootDir + CameraDir  * WeaponConfig.WeaponRange;
	const FHitResult Impact = WeaponTrace(StartTrace, EndTrace);

	ProcessInstantHit(Impact, StartTrace, ShootDir, RandomSeed, CurrentSpread);
}

void AGunProperties::ARShooting(FVector GetFwrdCam, FTimerHandle _ShootingHandler)
{
	FRotator RecoilRot = FinalRecoilTransform.GetRotation().Rotator();
	RecoilRot += FRotator(0.0f, 0.0f, -10.0f);
	
	FinalRecoilTransform.SetRotation(RecoilRot.Quaternion());
	
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
	DrawDebugLine(this->GetWorld(), Origin, Impact.TraceEnd, FColor::Black, true, 1000, 10.f);
}

void AGunProperties::ProcessARHit(const FHitResult& Impact, const FVector& Origin)
{
	const FVector EndTrace = Origin * WeaponConfig.WeaponRange;
	const FVector EndPoint = Impact.GetActor() ? Impact.ImpactPoint : EndTrace;
	DrawDebugLine(this->GetWorld(), Origin, Impact.TraceEnd, FColor::Black, true, 1000, 10.f);
}


void AGunProperties::InterpFinalRecoil(float DeltaSeconds) 
{
	//Interp To Zero
	if (ProjectileType == EWeaponProjectile::EBullet)
	{
		FinalRecoilTransform = UKismetMathLibrary::TInterpTo(RecoilTransform, FinalRecoilTransform, DeltaSeconds, 10.0f);
	}
}

void AGunProperties::InterpRecoil(float DeltaSeconds)
{
	if (ProjectileType == EWeaponProjectile::EBullet)
	{

	}
}