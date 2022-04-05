// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerClass.h"
#include "Camera/CameraComponent.h"
#include "Engine.h"
#include "Engine/Blueprint.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
// Sets default values
APlayerClass::APlayerClass()
{
	static ConstructorHelpers::FObjectFinder<UBlueprint> WeaponBlueprint(TEXT("Blueprint'/Game/PlayerClassBlueprints/AR.AR'"));
	WeaponSpawn = NULL;

	if (WeaponBlueprint.Succeeded())
	{
		WeaponSpawn = (UClass*)WeaponBlueprint.Object->GeneratedClass;
	}
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(40.0f, 95.0f);
	
	TurnRate = 45.0f;
	LookUpRate = 45.0f;

	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPS_PlayerCamera"));
	FirstPersonCamera->SetupAttachment(GetCapsuleComponent());
	FirstPersonCamera->AddRelativeLocation(FVector(-39.65f, 1.75f,64.0f));
	FirstPersonCamera->bUsePawnControlRotation = true;

	HandsMesh = CreateDefaultSubobject < USkeletalMeshComponent>(TEXT("Character Mesh"));
	HandsMesh->SetOnlyOwnerSee(true);
	HandsMesh->SetupAttachment(FirstPersonCamera);
	HandsMesh->bCastDynamicShadow = false;
	HandsMesh->CastShadow = false;
	HandsMesh->AddRelativeRotation(FRotator(1.9f, -19.9f, 5.2f));
	HandsMesh->AddRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	GunMesh->SetOnlyOwnerSee(true);
	GunMesh->bCastDynamicShadow = false;
	GunMesh->CastShadow = false;

	
	
	
	

	MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle Location"));
	MuzzleLocation->SetupAttachment(GunMesh);
	MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	GunOffset = FVector(100.0f, 0.0f, 10.0f);

}

// Called when the game starts or when spawned
void APlayerClass::BeginPlay()
{
	Super::BeginPlay();
	
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;
	AGunProperties* Spawner = GetWorld()->SpawnActor<AGunProperties>(WeaponSpawn,SpawnParams);
	if (Spawner)
	{
		Spawner->AttachToComponent(HandsMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("GripPoint"));
		CurrentWeapon = Spawner;
	}
}

void APlayerClass::Fire()
{
	CurrentWeapon->Fire();
}

void APlayerClass::MoveForward(float Value)
{
	
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value+500);
	}
}

void APlayerClass::MoveRight(float Value)
{
	
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value+500);
	}
}

void APlayerClass::MoveBackwards(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value-500);
	}
}

void APlayerClass::MoveLeft(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value-500);
	}
}

void APlayerClass::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * TurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerClass::LookAtRate(float Rate)
{
	AddControllerPitchInput(Rate * LookUpRate * GetWorld()->GetDeltaSeconds());
}

// Called every frame
void APlayerClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerClass::Fire);

	PlayerInputComponent->BindAxis("MoveForward",  this, &APlayerClass::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",  this, &APlayerClass::MoveRight);
	PlayerInputComponent->BindAxis("MoveBackwards", this, &APlayerClass::MoveBackwards);
	PlayerInputComponent->BindAxis("MoveLeft", this, &APlayerClass::MoveLeft);

	PlayerInputComponent->BindAxis("Turn",this, &APlayerClass::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp",this, &APlayerClass::LookAtRate);

}

