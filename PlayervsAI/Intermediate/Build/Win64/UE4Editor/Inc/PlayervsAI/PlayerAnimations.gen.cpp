// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayervsAI/PlayerAnimations.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimations() {}
// Cross Module References
	PLAYERVSAI_API UClass* Z_Construct_UClass_UPlayerAnimations_NoRegister();
	PLAYERVSAI_API UClass* Z_Construct_UClass_UPlayerAnimations();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_PlayervsAI();
	PLAYERVSAI_API UClass* Z_Construct_UClass_APlayerClass_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UPlayerAnimations::StaticRegisterNativesUPlayerAnimations()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAnimations_NoRegister()
	{
		return UPlayerAnimations::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimations_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeHandTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeHandTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimations_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayervsAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimations_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAnimations.h" },
		{ "ModuleRelativePath", "PlayerAnimations.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PlayerAnimations" },
		{ "ModuleRelativePath", "PlayerAnimations.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimations, Player), Z_Construct_UClass_APlayerClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_RelativeHandTransform_MetaData[] = {
		{ "Category", "PlayerAnimations" },
		{ "ModuleRelativePath", "PlayerAnimations.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_RelativeHandTransform = { "RelativeHandTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimations, RelativeHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_RelativeHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_RelativeHandTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_SightTransform_MetaData[] = {
		{ "Category", "PlayerAnimations" },
		{ "ModuleRelativePath", "PlayerAnimations.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_SightTransform = { "SightTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAnimations, SightTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_SightTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_SightTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_RelativeHandTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimations_Statics::NewProp_SightTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimations_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimations>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimations_Statics::ClassParams = {
		&UPlayerAnimations::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAnimations_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimations_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimations_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimations_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnimations()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAnimations_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAnimations, 4112129817);
	template<> PLAYERVSAI_API UClass* StaticClass<UPlayerAnimations>()
	{
		return UPlayerAnimations::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAnimations(Z_Construct_UClass_UPlayerAnimations, &UPlayerAnimations::StaticClass, TEXT("/Script/PlayervsAI"), TEXT("UPlayerAnimations"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimations);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
