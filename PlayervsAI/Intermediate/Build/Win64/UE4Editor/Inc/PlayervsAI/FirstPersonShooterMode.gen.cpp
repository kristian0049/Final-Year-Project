// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayervsAI/FirstPersonShooterMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonShooterMode() {}
// Cross Module References
	PLAYERVSAI_API UClass* Z_Construct_UClass_AFirstPersonShooterMode_NoRegister();
	PLAYERVSAI_API UClass* Z_Construct_UClass_AFirstPersonShooterMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_PlayervsAI();
// End Cross Module References
	void AFirstPersonShooterMode::StaticRegisterNativesAFirstPersonShooterMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstPersonShooterMode_NoRegister()
	{
		return AFirstPersonShooterMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonShooterMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonShooterMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayervsAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonShooterMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstPersonShooterMode.h" },
		{ "ModuleRelativePath", "FirstPersonShooterMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonShooterMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonShooterMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonShooterMode_Statics::ClassParams = {
		&AFirstPersonShooterMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonShooterMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonShooterMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonShooterMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonShooterMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstPersonShooterMode, 423908155);
	template<> PLAYERVSAI_API UClass* StaticClass<AFirstPersonShooterMode>()
	{
		return AFirstPersonShooterMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonShooterMode(Z_Construct_UClass_AFirstPersonShooterMode, &AFirstPersonShooterMode::StaticClass, TEXT("/Script/PlayervsAI"), TEXT("AFirstPersonShooterMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonShooterMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
