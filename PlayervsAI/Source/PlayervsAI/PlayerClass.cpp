// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerClass.h"
#include "Camera/CameraComponent.h"
#include "Engine.h"
#include "Engine/Blueprint.h"
#include "PlayerAnimations.h"
#include "GunProperties.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"




// Sets default values
APlayerClass::APlayerClass()
{
	if (GetWorld())
	{
		static ConstructorHelpers::FObjectFinder<UBlueprint> WeaponBlueprint(TEXT("Blueprint'/Game/PlayerClassBlueprints/BP_AR.BP_AR'"));
		static ConstructorHelpers::FObjectFinder<UBlueprint> ShotgunBlueprint(TEXT("Blueprint'/Game/PlayerClassBlueprints/BP_Shotgun.BP_Shotgun'"));
		static ConstructorHelpers::FObjectFinder<UBlueprint> ProjectileBlueprint(TEXT("Blueprint'/Game/PlayerClassBlueprints/BP_Projectile.BP_Projectile'"));
		WeaponSpawn = NULL;
		ShotgunSpawn = NULL;
		ProjectileSpawn = NULL;
		if (WeaponBlueprint.Succeeded())
		{
			WeaponSpawn = (UClass*)WeaponBlueprint.Object->GeneratedClass;
		}
		if (ShotgunBlueprint.Succeeded())
		{
			ShotgunSpawn = (UClass*)ShotgunBlueprint.Object->GeneratedClass;
		}
		if (ProjectileBlueprint.Succeeded())
		{
			ProjectileSpawn = (UClass*)ProjectileBlueprint.Object->GeneratedClass;
		}
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

	
	WeaponIndex = 0;
}

// Called when the game starts or when spawned
void APlayerClass::BeginPlay()
{
	Super::BeginPlay();
	Animations = Cast<UPlayerAnimations>(GetHands()->GetAnimInstance());
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;
	AGunProperties* Spawner = GetWorld()->SpawnActor<AGunProperties>(WeaponSpawn,SpawnParams);
	if (Spawner)
	{
		Spawner->AttachToComponent(HandsMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget,true), TEXT("Hand_R"));
		CurrentWeapon = Spawner;
		WeaponArray.Add(CurrentWeapon);
	}
	if (AGunProperties* Weapon = GetWorld()->SpawnActor<AGunProperties>(ShotgunSpawn, SpawnParams)) {
		Weapon->GetWeaponMesh()->SetHiddenInGame(true);
		Weapon->AttachToComponent(HandsMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("Hand_R"));
		WeaponArray.Add(Weapon);
	}
	if (AGunProperties* Weapon = GetWorld()->SpawnActor<AGunProperties>(ProjectileSpawn, SpawnParams)) {
		Weapon->GetWeaponMesh()->SetHiddenInGame(true);
		Weapon->AttachToComponent(HandsMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("Hand_R"));
		WeaponArray.Add(Weapon);
	}
}

void APlayerClass::Fire()
{
	Animations->Fire();
	CurrentWeapon->Fire(FirstPersonCamera->GetForwardVector(),FirstPersonCamera, TimerHandle_HandleRefire,this);
	
	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}
	//if (FireAnimation != nullptr)
	//{
	//	// Get the animation object for the arms mesh
	//	
	//	if (Animations != nullptr)
	//	{
	//		Animations->Montage_Play(FireAnimation, 1.0f);
	//	}
	//}
}



void APlayerClass::StartFire()
{
	bIsFiring = true;
	Fire();
	GetWorldTimerManager().SetTimer(TimerHandle_HandleRefire, this, &APlayerClass::Fire, CurrentWeapon->WeaponConfig.TimeBetweenShots, true);
}

void APlayerClass::StopFire()
{
	bIsFiring = false;
	GetWorldTimerManager().ClearTimer(TimerHandle_HandleRefire);
	
}

void APlayerClass::MoveForward(float Value)
{
	
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value*200);
	}
}

void APlayerClass::MoveRight(float Value)
{
	
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value*200);
	}
}

void APlayerClass::MoveBackwards(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value*200);
	}
}

void APlayerClass::MoveLeft(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value*200);
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
	
	UE_LOG(LogTemp, Warning, TEXT("The float value is: %f"), Health);
	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Black, FString::Printf(TEXT("Bool: %s"), bIsFiring ? TEXT("true") : TEXT("false")));
	}*/
}

// Called to bind functionality to input
void APlayerClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerClass::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &APlayerClass::StopFire);

	PlayerInputComponent->BindAction("SwitchNextWeapon", IE_Pressed, this, &APlayerClass::SwitchNextWeapon);
	PlayerInputComponent->BindAction("SwitchPreviousWeapon", IE_Pressed, this, &APlayerClass::SwitchPreviousWeapon);

	PlayerInputComponent->BindAxis("MoveForward",  this, &APlayerClass::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",  this, &APlayerClass::MoveRight);
	PlayerInputComponent->BindAxis("MoveBackwards", this, &APlayerClass::MoveBackwards);
	PlayerInputComponent->BindAxis("MoveLeft", this, &APlayerClass::MoveLeft);

	PlayerInputComponent->BindAxis("Turn",this, &APlayerClass::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp",this, &APlayerClass::LookAtRate);

}

void APlayerClass::DealDamage(float DamageAmount)
{
	Health -= DamageAmount;

	if (Health <= 0)
	{
		IsPlayerDead = true;
		for (int8 i = 0; i < WeaponArray.Num(); i++)
		{
			AGunProperties* Gun = WeaponArray[i];
			Gun->Destroy();
		}
		Destroy();
	}
}

void APlayerClass::SwitchNextWeapon()
{
	if (CurrentWeapon)
	{
		if (WeaponArray.Num() > WeaponIndex + 1)
		{
			++WeaponIndex;
			if (AGunProperties* NextWeapon = WeaponArray[WeaponIndex ])
			{

				CurrentWeapon->GetWeaponMesh()->SetHiddenInGame(true);
				CurrentWeapon = NextWeapon;
				CurrentWeapon->GetWeaponMesh()->SetHiddenInGame(false);
			}
		}
		

	}
}

void APlayerClass::SwitchPreviousWeapon()
{
	if (CurrentWeapon)
	{
		if ( WeaponIndex - 1 >= 0)
		{
			--WeaponIndex;
			if (AGunProperties* NextWeapon = WeaponArray[WeaponIndex])
			{

				CurrentWeapon->GetWeaponMesh()->SetHiddenInGame(true);
				CurrentWeapon = NextWeapon;
				CurrentWeapon->GetWeaponMesh()->SetHiddenInGame(false);
			}
		}


	}
}

void APlayerClass::RecoverHealth(float _Health)
{
	
	Health += _Health;
	if (Health > 200)
	{
		Health = 200;
	}
}



