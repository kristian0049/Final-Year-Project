// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UENUM(BlueprintType)
namespace EEnemyType
{
	enum EnemyType
	{
		EMelee     UMETA(DisplayName = "MeleeType"),
		ERanged     UMETA(DisplayName = "RangedType"),
		EBoss UMETA(DisplayName = "Boss"),
	};
}
class UBoxComponent;
class APlayerClass;
class USkeletalMeshComponent;
class AEnemyProjectile;
class UArrowComponent;
class ASpikes;

UCLASS()
class PLAYERVSAI_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Config)
		TEnumAsByte<EEnemyType::EnemyType> EnemyType;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Config)
		class UBoxComponent* DamageCollision;
	
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);

	UPROPERTY(VisibleDefaultsOnly, Category = Enemy)
		class UAIPerceptionComponent* AIPerComp;

	UPROPERTY(VisibleDefaultsOnly, Category = Enemy)
		class UAISenseConfig_Sight* SightConfig;

	UPROPERTY(VisibleAnywhere, Category = "Movement")
		FRotator EnemyRotation;

	UPROPERTY(VisibleAnywhere, Category = "Movement")
		FVector BaseLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		FVector CurrentVelocity;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		float MovementSpeed;


	float DistanceSquared;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Health = 100.0f;
	
	UPROPERTY(EditAnywhere)
		float DamageValue = 5.0f;

	void DealDamage(float DamageAmount);

	APlayerClass* getPlayer;

	void LookAtPlayer(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
	FVector ProjectileSpawn;

	void ThrowProjectile();

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AEnemyAIProjectile> ProjectileClass;

	

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		USceneComponent* ProjectileLocation;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* EnemyMesh;

	AEnemyAIProjectile* Projectile;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sight")
		UArrowComponent* Arrow;

	float TimeElapsedForProjectile;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BossMechanics")
		TArray <ASpikes*> Spikes;

	float BossTime;

	void BossDash(float DeltaTime);

	UPROPERTY(VisibleAnywhere, Category = Spawn)
		TSubclassOf<class AEnemy> MeleeSpawn;
	UPROPERTY(VisibleAnywhere, Category = Spawn)
		TSubclassOf<class AEnemy> RangeSpawn;

	float SpawnEachSeconds;
	bool HasSpawned = false;

	bool HasRangedAttacked = false;
	
	void SetHasRangedAttacked();

	bool ResetBoss = false;

	
	float DelayReset;
};
