// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grid.generated.h"

class USceneComponent;
class UBillboardComponent;
UCLASS()
class PLAYERVSAI_API AGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector GridBottomLeft();

	int32 GetGridTileNumberX();

	int32 GetGridTileNumberY();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Config)
		UBillboardComponent* BillboardComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grid)
		USceneComponent* GridBlock;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grid)
		FVector GridLocation;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grid)
		float TileSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Debug)
		float TileSizeMinus;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Grid)
		FVector2D  GridSizeWorld = FVector2D(500.0f, 500.0f);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Debug)
		FColor GridBoxColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Debug)
		FColor BottomLeftColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Debug)
		FLinearColor PlaneColor;
	void DrawTile();

	
};
