// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerClass.generated.h"

class UCameraComponent;
class USoundBase;
class USoundBase;
class UPlayerAnimations;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class PLAYERVSAI_API APlayerClass : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void Fire();

	
	void StartFire();
	void StopFire();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void MoveBackwards(float Value);
	void MoveLeft(float Value);

	void TurnAtRate(float Rate);
	void LookAtRate(float Rate);

	UPROPERTY(BlueprintReadOnly,  Category = GamePlay)
		UPlayerAnimations* Animations;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool IsPlayerDead;
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* HandsMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* FirstPersonCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float TurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float LookUpRate;

	UPROPERTY(VisibleAnywhere, Category = Spawn)
		TSubclassOf<class AGunProperties> WeaponSpawn;
	UPROPERTY(EditAnywhere, Category = Spawn)
		TSubclassOf<class AGunProperties> ShotgunSpawn;
	UPROPERTY(EditAnywhere, Category = Spawn)
		TSubclassOf<class AGunProperties> ProjectileSpawn;
	
	int32 WeaponIndex;
	TArray<AGunProperties*> WeaponArray;
	
	UFUNCTION(BlueprintPure)
		USkeletalMeshComponent* GetHands() const { return HandsMesh; }
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		UAnimMontage* FireAnimation;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* FireSound;

	UPROPERTY(BlueprintReadOnly, Category = "AR Config")
	AGunProperties *CurrentWeapon;

	
	bool bIsFiring ;

	FTimerHandle TimerHandle_HandleRefire;
	
	UFUNCTION(BlueprintPure)
	bool GetIsFiring()const { return bIsFiring; }

	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCamera; }

	AGunProperties* GetCurrentWeapon() const { return CurrentWeapon; }

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Health = 200.0f;

	void DealDamage(float DamageAmount);
	
	void SwitchNextWeapon();
	void SwitchPreviousWeapon();

	void RecoverHealth(float _Health);
};
