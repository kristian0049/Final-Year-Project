// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimations.h"
#include "PlayerClass.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"
UPlayerAnimations::UPlayerAnimations() 
{

}

void UPlayerAnimations::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	Player = Cast<APlayerClass>(TryGetPawnOwner());
	if (Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("Valid Player"));
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid Player"));
	}
	if (Player)
	{
		FTimerHandle TSetSightTransform;
		FTimerHandle TSetRelativeHandTransform;
		GetWorld()->GetTimerManager().SetTimer(TSetSightTransform, this, &UPlayerAnimations::SetSightTransform, 0.3f, false);
		GetWorld()->GetTimerManager().SetTimer(TSetRelativeHandTransform, this, &UPlayerAnimations::SetRelativeHandTransform, 0.3f, false);
	}

			
	
}

void UPlayerAnimations::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}
void UPlayerAnimations::SetSightTransform()
{
	FTransform CameraComponent = Player->GetFirstPersonCameraComponent()->GetComponentTransform();
	FTransform MeshTransform = Player->GetHands()->GetComponentTransform();

	FTransform Relative = UKismetMathLibrary::MakeRelativeTransform(CameraComponent, MeshTransform);

	FVector NewSightVector = Relative.GetLocation();
	FVector ForwardVec = Relative.GetRotation().GetForwardVector();

	ForwardVec *= 30;

	NewSightVector += ForwardVec;

	SightTransform.SetLocation(NewSightVector);
	SightTransform.SetRotation(Relative.Rotator().Quaternion());

}

void UPlayerAnimations::SetRelativeHandTransform()
{
	if (Player->GetCurrentWeapon())
	{
		FTransform CurrentWeapon = Player->GetHands()->GetSocketTransform(FName("GripPoint"));
		FTransform MeshTransform = Player->GetHands()->GetRelativeTransform();

		RelativeHandTransform = UKismetMathLibrary::MakeRelativeTransform(CurrentWeapon, MeshTransform);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("FAILED TO GET CURRENT WEAPON VIEW"));
	}

}