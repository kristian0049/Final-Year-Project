// Fill out your copyright notice in the Description page of Project Settings.


#include "Grid.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine.h"
// Sets default values
AGrid::AGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GridBlock = CreateDefaultSubobject<USceneComponent>(TEXT("Grid"));
	
}

// Called when the game starts or when spawned
void AGrid::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGrid::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	FlushPersistentDebugLines(GetWorld());
	GridLocation = GridBlock->GetComponentLocation();
	DrawDebugBox(GetWorld(),GridLocation,FVector(GridSizeWorld.Y,GridSizeWorld.X,5.0f),GridBoxColor,true,-1.0f,uint8(0),10.0f);
	DrawDebugBox(GetWorld(), GridBottomLeft(), FVector(20.0f, 20.0f, 20.0f), BottomLeftColor, true, -1.0f, uint8(0), 10.0f);
	DrawTile();
	
	
}

// Called every frame
void AGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AGrid::GridBottomLeft()
{
	
	return FVector((GridLocation - (GridBlock->GetRightVector() * GridSizeWorld.X)) - (GridBlock->GetForwardVector() * GridSizeWorld.Y));
}

int32 AGrid::GetGridTileNumberX()
{
	int32 GridTileNumberX = UKismetMathLibrary::Round(GridSizeWorld.X / TileSize);
	return GridTileNumberX;
}

int32 AGrid::GetGridTileNumberY()
{
	int32 GridTileNumberY = UKismetMathLibrary::Round(GridSizeWorld.Y / TileSize) ;
	return GridTileNumberY;
}

void AGrid::DrawTile()
{
	int32 X;
	int32 Y;
	FVector TilePosition;
	const TArray<AActor*> actorsToIgnore;
	TArray<FHitResult> HitResults;
	for (int32 i = 0; i < GetGridTileNumberX(); i++)
	{
		X = i;
		for (int32 x = 0; x < GetGridTileNumberY(); x++)
		{
			Y = x;
			TilePosition = GridBottomLeft() +
				((GridBlock->GetRightVector()) * ((X * (TileSize * 2)) + TileSize))
				+ (GridBlock->GetForwardVector() * (TileSize + (Y * (TileSize * 2))));
			

			bool SphereTraceGround = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), TilePosition, TilePosition, TileSize-TileSizeMinus, UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel2), false, actorsToIgnore, EDrawDebugTrace::ForDuration, HitResults, true, FLinearColor::Red, FLinearColor::Green, 20);
			if (SphereTraceGround == true) {
				
				bool SphereTraceObstacle = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), FVector(TilePosition.X,TilePosition.Y,TilePosition.Z), FVector(TilePosition.X,TilePosition.Y,TilePosition.Z+10), TileSize - TileSizeMinus, UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel3), false, actorsToIgnore, EDrawDebugTrace::ForDuration, HitResults, true, FLinearColor::Red, FLinearColor::Green, 20);
				if (SphereTraceObstacle == true)
				{
					UKismetSystemLibrary::DrawDebugPlane(GetWorld(), FPlane(0, 0, 1, TilePosition.Z), TilePosition, TileSize - TileSizeMinus, FLinearColor::Yellow, 10000);
				}
				else if(SphereTraceObstacle == false) {
					UKismetSystemLibrary::DrawDebugPlane(GetWorld(), FPlane(0, 0, 1, TilePosition.Z), TilePosition, TileSize - TileSizeMinus, FLinearColor::Red, 10000);
				}
				
				
			}
		}
	}
	

	
	
}

