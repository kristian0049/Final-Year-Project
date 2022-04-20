// Fill out your copyright notice in the Description page of Project Settings.


#include "GunProperties.h"
#include "Engine.h"
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
		HandleRecoil(_ShootingHandler);
		ARShooting(GetFwrCam,_ShootingHandler);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Black, *RecoilPattern[CurrentRecoil].ToString());
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
	
	const FVector StartTrace = WeaponMesh->GetSocketLocation("MF");
	const FVector CameraDir = FVector(GetFwrdCam.X, GetFwrdCam.Y, GetFwrdCam.Z );
	const FVector EndTrace = StartTrace +   CameraDir * WeaponConfig.WeaponRange;
	const FHitResult Impact = WeaponTrace(StartTrace, EndTrace);
	ProcessARHit(Impact, StartTrace);
	LastTimeShot = GetWorldTimerManager().GetTimerElapsed(_ShootingHandler);
}

void AGunProperties::HandleRecoil(FTimerHandle _ShootingHandler)
{
	//I need it to rotate on the yaw and roll
	if (GetWorldTimerManager().GetTimerElapsed(_ShootingHandler) - LastTimeShot >= WeaponConfig.ResetRecoil) {
		ShootDirAr = RecoilPattern[0];
		CurrentRecoil = 1;
	}
	else {
		RecoilPattern[CurrentRecoil];
		if (CurrentRecoil + 1 <= RecoilPattern.Num() - 1)
		{
			CurrentRecoil += 1;
		}
		else {
			CurrentRecoil = 0;
		}
	}
}

bool AGunProperties::IsPlayerFiring(bool _isFiring)
{
	return _isFiring;
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
