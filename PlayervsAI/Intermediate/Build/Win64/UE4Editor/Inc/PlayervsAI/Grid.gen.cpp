// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayervsAI/Grid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrid() {}
// Cross Module References
	PLAYERVSAI_API UClass* Z_Construct_UClass_AGrid_NoRegister();
	PLAYERVSAI_API UClass* Z_Construct_UClass_AGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PlayervsAI();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void AGrid::StaticRegisterNativesAGrid()
	{
	}
	UClass* Z_Construct_UClass_AGrid_NoRegister()
	{
		return AGrid::StaticClass();
	}
	struct Z_Construct_UClass_AGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSizeMinus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSizeMinus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSizeWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSizeWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridBoxColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridBoxColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomLeftColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BottomLeftColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayervsAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grid.h" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, BillboardComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_BillboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_BillboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_GridBlock_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_GridBlock = { "GridBlock", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, GridBlock), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_GridBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_GridBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_GridLocation_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, GridLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_GridLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_GridLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, TileSize), METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_TileSizeMinus_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_TileSizeMinus = { "TileSizeMinus", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, TileSizeMinus), METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_TileSizeMinus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_TileSizeMinus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_GridSizeWorld_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_GridSizeWorld = { "GridSizeWorld", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, GridSizeWorld), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_GridSizeWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_GridSizeWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_GridBoxColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_GridBoxColor = { "GridBoxColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, GridBoxColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_GridBoxColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_GridBoxColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_BottomLeftColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_BottomLeftColor = { "BottomLeftColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, BottomLeftColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_BottomLeftColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_BottomLeftColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_PlaneColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Grid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_PlaneColor = { "PlaneColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, PlaneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_PlaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_PlaneColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_BillboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_GridBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_GridLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_TileSizeMinus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_GridSizeWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_GridBoxColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_BottomLeftColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_PlaneColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrid_Statics::ClassParams = {
		&AGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrid, 2318516352);
	template<> PLAYERVSAI_API UClass* StaticClass<AGrid>()
	{
		return AGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrid(Z_Construct_UClass_AGrid, &AGrid::StaticClass, TEXT("/Script/PlayervsAI"), TEXT("AGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
