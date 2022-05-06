// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spikes.generated.h"

class USphereComponent;
UCLASS()
class PLAYERVSAI_API ASpikes : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpikes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	USphereComponent* SphereCollision;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, Meta = (MakeEditWidget = true))
	FVector MoveSpikeTo ;


	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	float duration;

	void SpikesGoUpAndDown(float _duration, float DeltaTime);
	bool bShouldSpikeLerp;
	void ShouldSpikeLerp();
	void SpikeNoLerp();
};
