// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"
class  AEnemy;
class USceneComponent;
class USphereComponent;
UCLASS()
class PLAYERVSAI_API ASpawnerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SphereCollision")
		USphereComponent* SphereCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SphereCollision")
		USphereComponent* SphereCollisionTwo;

	UPROPERTY(VisibleAnywhere, Category = Spawn)
		TSubclassOf<class AEnemy> MeleeSpawn;
	UPROPERTY(VisibleAnywhere, Category = Spawn)
		TSubclassOf<class AEnemy> RangeSpawn;
	USceneComponent* SceneComponent;


	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	float HowLongToSpawn;
	float SpawnEachSeconds;
	bool HasSpawned = false;
	bool canSpawn = false;
};
