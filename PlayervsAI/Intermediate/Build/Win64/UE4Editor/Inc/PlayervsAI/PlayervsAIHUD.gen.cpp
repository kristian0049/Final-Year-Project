// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayervsAI/PlayervsAIHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayervsAIHUD() {}
// Cross Module References
	PLAYERVSAI_API UClass* Z_Construct_UClass_APlayervsAIHUD_NoRegister();
	PLAYERVSAI_API UClass* Z_Construct_UClass_APlayervsAIHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PlayervsAI();
// End Cross Module References
	void APlayervsAIHUD::StaticRegisterNativesAPlayervsAIHUD()
	{
	}
	UClass* Z_Construct_UClass_APlayervsAIHUD_NoRegister()
	{
		return APlayervsAIHUD::StaticClass();
	}
	struct Z_Construct_UClass_APlayervsAIHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayervsAIHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayervsAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayervsAIHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PlayervsAIHUD.h" },
		{ "ModuleRelativePath", "PlayervsAIHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayervsAIHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayervsAIHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayervsAIHUD_Statics::ClassParams = {
		&APlayervsAIHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayervsAIHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayervsAIHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayervsAIHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayervsAIHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayervsAIHUD, 3311942552);
	template<> PLAYERVSAI_API UClass* StaticClass<APlayervsAIHUD>()
	{
		return APlayervsAIHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayervsAIHUD(Z_Construct_UClass_APlayervsAIHUD, &APlayervsAIHUD::StaticClass, TEXT("/Script/PlayervsAI"), TEXT("APlayervsAIHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayervsAIHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
