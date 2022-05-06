// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "GunProperties.generated.h"



#define TRACE_WEAPON  ECC_GameTraceChannel1
UENUM(BlueprintType)
namespace EWeaponProjectile
{
	enum ProjectileType
	{
		EBullet     UMETA(DisplayName = "Bullet"),
		ESpread     UMETA(DisplayName = "Spread"),
		EProjectile UMETA(DisplayName = "Projectile"),
	};
}



USTRUCT()
struct FWeaponData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, Category = Config)
		float TimeBetweenShots;
	UPROPERTY(EditDefaultsOnly, Category = Config)
		float WeaponRange;
	UPROPERTY(EditDefaultsOnly, Category = Config)
		float WeaponSpread;
	UPROPERTY(EditDefaultsOnly, Category = Config)
		float DamageValue;
};

class APlayerClass;
class APlayervsAIProjectile;
UCLASS()
class PLAYERVSAI_API AGunProperties : public AActor
{
	GENERATED_BODY()




public:

	// Called when the game starts or when spawned
	AGunProperties();
	// Called every frame
	UFUNCTION()
		 void Fire(FVector GetFwrCam, UCameraComponent* PlayerCam, FTimerHandle _ShootingHandler, APlayerClass* Player);

	UFUNCTION()
		 void InstantFire(FVector GetFwrCam);
	

	UFUNCTION()
		 void ARShooting(FVector GetFwrdCam, FTimerHandle _ShootingHandler, APlayerClass* Player);
	 
	

	UPROPERTY(EditDefaultsOnly, Category = Config)
		FWeaponData WeaponConfig;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Config)
		TEnumAsByte<EWeaponProjectile::ProjectileType> ProjectileType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision)
		UBoxComponent* CollisionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Config)
		USkeletalMeshComponent* WeaponMesh;


	USkeletalMeshComponent* GetWeaponMesh()const { return WeaponMesh; }
protected:
	UFUNCTION()
		FHitResult WeaponTrace(const FVector& TraceFrom, const FVector& TraceTo) const;

	UFUNCTION()
		void ProcessInstantHit(const FHitResult& Impact, const FVector& Origin, const FVector& ShootDir, int32 RandomSeed, float RadicalSpread);

	UFUNCTION()
		void ProcessARHit(const FHitResult& Impact, const FVector& Origin);

	

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class APlayervsAIProjectile> ProjectileClass;

	FVector GunOffset;

	UFUNCTION()
	void ProjectileShooting(APlayerClass* Player);
	
};
