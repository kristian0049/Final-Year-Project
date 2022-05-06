// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimations.generated.h"

/**
 * 
 */
class APlayerClass;

UCLASS()
class PLAYERVSAI_API UPlayerAnimations : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPlayerAnimations();

	virtual void NativeBeginPlay()override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(BlueprintReadOnly, Category = "PlayerAnimations")
		APlayerClass* Player;

	UPROPERTY(BlueprintReadOnly, Category = "PlayerAnimations")
		FTransform RelativeHandTransform;

	UPROPERTY(BlueprintReadOnly, Category = "PlayerAnimations")
		FTransform SightTransform;

	UPROPERTY(BlueprintReadOnly, Category = "PlayerAnimations")
		FTransform LeftHandTransform;

	UPROPERTY(BlueprintReadOnly, Category = "PlayerAnimations")
		FTransform RecoilTransform;
	FTransform FinalRecoilTransform;

	UFUNCTION()
	void Fire();
protected:
	void SetSightTransform();
	void SetRelativeHandTransform();
	void InterpFinalRecoil(float DeltaSeconds);
	void InterpRecoil(float DeltaSeconds);
	void SetLeftHandTransform();
};
