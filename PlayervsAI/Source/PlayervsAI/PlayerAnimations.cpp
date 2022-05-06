// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimations.h"
#include "PlayerClass.h"
#include "GunProperties.h"
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
		FTimerHandle TSetSightTransform;
		FTimerHandle TSetRelativeHandTransform;
		GetWorld()->GetTimerManager().SetTimer(TSetSightTransform, this, &UPlayerAnimations::SetSightTransform, 0.3f, false);
		GetWorld()->GetTimerManager().SetTimer(TSetRelativeHandTransform, this, &UPlayerAnimations::SetRelativeHandTransform, 0.3f, false);
	}

}

void UPlayerAnimations::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if (!RecoilTransform.Equals(FTransform()) || !FinalRecoilTransform.Equals(FTransform()) )
	{
		InterpFinalRecoil(DeltaSeconds);
			InterpRecoil(DeltaSeconds);
	}
	

	SetLeftHandTransform();
}
void UPlayerAnimations::SetSightTransform()
{
	FTransform CameraComponent = Player->GetFirstPersonCameraComponent()->GetComponentTransform();
	FTransform MeshTransform = Player->GetHands()->GetComponentTransform();

	SightTransform = UKismetMathLibrary::MakeRelativeTransform(CameraComponent, MeshTransform);

	SightTransform.SetLocation(SightTransform.GetLocation() + SightTransform.GetRotation().Vector() * 30.0f);

}

void UPlayerAnimations::SetRelativeHandTransform()
{
	if (Player->GetCurrentWeapon())
	{
		FTransform CurrentWeapon = Player->GetHands()->GetSocketTransform(FName("Hand_R"));
		FTransform MeshTransform = Player->GetHands()->GetSocketTransform(FName("hand_r"));

		RelativeHandTransform = UKismetMathLibrary::MakeRelativeTransform(CurrentWeapon, MeshTransform);
	}
}

void UPlayerAnimations::InterpFinalRecoil(float DeltaSeconds)
{
	//Interp to zero
	FinalRecoilTransform = UKismetMathLibrary::TInterpTo(FinalRecoilTransform, FTransform(), DeltaSeconds, 10.f);
	UE_LOG(LogTemp, Warning, TEXT("VAL AT INTERPFINAL RECOIL: %f"), FinalRecoilTransform.GetRotation().Rotator().Roll);
}

void UPlayerAnimations::InterpRecoil(float DeltaSeconds)
{
	RecoilTransform= UKismetMathLibrary::TInterpTo(RecoilTransform, FinalRecoilTransform, DeltaSeconds, 10.f);
	
	UE_LOG(LogTemp, Warning, TEXT("VAL AT INTERRECOIL: %f"), FinalRecoilTransform.GetRotation().Rotator().Roll);
}

void UPlayerAnimations::SetLeftHandTransform()
{
	if (Player)
	{
		FTransform GunSocket = Player->GetCurrentWeapon()->GetWeaponMesh()->GetSocketTransform(FName("S_LeftHand"));
		FTransform MeshTransform = Player->GetHands()->GetSocketTransform(FName("hand_r"));

		LeftHandTransform = UKismetMathLibrary::MakeRelativeTransform(GunSocket, MeshTransform);
	}
	
}

void UPlayerAnimations::Fire()
{
	FVector RecoilLoc = FinalRecoilTransform.GetLocation();
	RecoilLoc += FVector(FMath::RandRange(-0.1f,0.1f), FMath::RandRange(-5.0f, -5.0f), FMath::RandRange(0.2f, 5.0f));
	FRotator RecoilRot = FinalRecoilTransform.GetRotation().Rotator();
	RecoilRot += FRotator(FMath::RandRange(-5.0, 5.0f), FMath::RandRange(-5.0, 5.0f), FMath::RandRange(-3.0, 5.0f));
	
	FinalRecoilTransform.SetLocation(RecoilLoc);
	FinalRecoilTransform.SetRotation(RecoilRot.Quaternion());
	UE_LOG(LogTemp, Warning, TEXT("VAL: %f"), FinalRecoilTransform.GetRotation().Rotator().Roll);
}
