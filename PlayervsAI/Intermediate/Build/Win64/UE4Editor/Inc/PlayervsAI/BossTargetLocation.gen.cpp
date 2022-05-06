// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayervsAI/BossTargetLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossTargetLocation() {}
// Cross Module References
	PLAYERVSAI_API UClass* Z_Construct_UClass_ABossTargetLocation_NoRegister();
	PLAYERVSAI_API UClass* Z_Construct_UClass_ABossTargetLocation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PlayervsAI();
// End Cross Module References
	void ABossTargetLocation::StaticRegisterNativesABossTargetLocation()
	{
	}
	UClass* Z_Construct_UClass_ABossTargetLocation_NoRegister()
	{
		return ABossTargetLocation::StaticClass();
	}
	struct Z_Construct_UClass_ABossTargetLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABossTargetLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayervsAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossTargetLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BossTargetLocation.h" },
		{ "ModuleRelativePath", "BossTargetLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABossTargetLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossTargetLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABossTargetLocation_Statics::ClassParams = {
		&ABossTargetLocation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABossTargetLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABossTargetLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABossTargetLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABossTargetLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABossTargetLocation, 2608900938);
	template<> PLAYERVSAI_API UClass* StaticClass<ABossTargetLocation>()
	{
		return ABossTargetLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABossTargetLocation(Z_Construct_UClass_ABossTargetLocation, &ABossTargetLocation::StaticClass, TEXT("/Script/PlayervsAI"), TEXT("ABossTargetLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABossTargetLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
