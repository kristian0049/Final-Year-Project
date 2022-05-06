// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "PlayerClass.h"
#include "Enemy.h"
#include "BossTargetLocation.h"
AEnemyController::AEnemyController()
{
	PrimaryActorTick.bCanEverTick = true;
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AiPerception")));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config "));

	SightConfig->SightRadius = AISightRadius;
	SightConfig->LoseSightRadius = AILoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees =180;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->SetMaxAge(0);

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AEnemyController::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
	
	
}
void AEnemyController::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsPlayerDetected == true )
	{
		APlayerClass* Player = Cast<APlayerClass>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
		AIBot = Cast<AEnemy>(GetPawn());
		ABossTargetLocation* GetLocation = Cast<ABossTargetLocation>(UGameplayStatics::GetActorOfClass(GetWorld(), TargetBossClass));
		
		
		if (AIBot->EnemyType == EEnemyType::EMelee)
		{
			MoveToActor(Player, 10.0, false);
			
		}
		if (AIBot->EnemyType == EEnemyType::ERanged)
		{
			MoveToActor(Player, 1500, false, true, true);
		}
		
		
	}
}

void AEnemyController::OnPossess(APawn* pawn)
{
	Super::OnPossess(pawn);
}

FRotator AEnemyController::GetControlRotation() const
{
	if (GetPawn() == nullptr)
	{
		return FRotator(0.0f, 0.0f, 0.0f);
	}
	return FRotator(0.0f,GetPawn()->GetActorRotation().Yaw,0.0f);
}

void AEnemyController::OnPawnDetected(const TArray<AActor*> &UpdateActors)
{
	for (size_t i = 0; i < UpdateActors.Num(); i++)
	{
		DistanceToPlayer = GetPawn()->GetDistanceTo(UpdateActors[i]);

	}
	bIsPlayerDetected = true;
}

