// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
class AEnemy;
class ABossTargetLocation;
UCLASS()
class PLAYERVSAI_API AEnemyController : public AAIController
{
	GENERATED_BODY()
public: 
	AEnemyController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnPossess(APawn* pawn)override;

	virtual FRotator GetControlRotation() const override;

	UFUNCTION()
		void OnPawnDetected(const TArray<AActor*> &UpdateActors);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sight")
		float AISightRadius = 2000;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sight")
		float AILoseSightRadius = 2300;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sight")
		float AIVisionAngleDegree = 180;

	UPROPERTY(VisibleDefaultsOnly, Category = Enemy)
		class UAISenseConfig_Sight* SightConfig;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sight")
		float DistanceToPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sight")
		bool bIsPlayerDetected = false;

	AEnemy* AIBot;

	UPROPERTY(EditDefaultsOnly, Category = "BossMechanics")
		TSubclassOf<class ABossTargetLocation> TargetBossClass;
	
};
