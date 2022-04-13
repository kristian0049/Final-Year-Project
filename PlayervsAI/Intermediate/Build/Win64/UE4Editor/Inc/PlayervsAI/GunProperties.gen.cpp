// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayervsAI/GunProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunProperties() {}
// Cross Module References
	PLAYERVSAI_API UEnum* Z_Construct_UEnum_PlayervsAI_EWeaponProjectile();
	UPackage* Z_Construct_UPackage__Script_PlayervsAI();
	PLAYERVSAI_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	PLAYERVSAI_API UClass* Z_Construct_UClass_AGunProperties_NoRegister();
	PLAYERVSAI_API UClass* Z_Construct_UClass_AGunProperties();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EWeaponProjectile_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayervsAI_EWeaponProjectile, Z_Construct_UPackage__Script_PlayervsAI(), TEXT("EWeaponProjectile"));
		}
		return Singleton;
	}
	template<> PLAYERVSAI_API UEnum* StaticEnum<EWeaponProjectile::ProjectileType>()
	{
		return EWeaponProjectile_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponProjectile(EWeaponProjectile_StaticEnum, TEXT("/Script/PlayervsAI"), TEXT("EWeaponProjectile"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayervsAI_EWeaponProjectile_Hash() { return 1546551155U; }
	UEnum* Z_Construct_UEnum_PlayervsAI_EWeaponProjectile()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayervsAI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponProjectile"), 0, Get_Z_Construct_UEnum_PlayervsAI_EWeaponProjectile_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponProjectile::EBullet", (int64)EWeaponProjectile::EBullet },
				{ "EWeaponProjectile::ESpread", (int64)EWeaponProjectile::ESpread },
				{ "EWeaponProjectile::EProjectile", (int64)EWeaponProjectile::EProjectile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EBullet.DisplayName", "Bullet" },
				{ "EBullet.Name", "EWeaponProjectile::EBullet" },
				{ "EProjectile.DisplayName", "Projectile" },
				{ "EProjectile.Name", "EWeaponProjectile::EProjectile" },
				{ "ESpread.DisplayName", "Spread" },
				{ "ESpread.Name", "EWeaponProjectile::ESpread" },
				{ "ModuleRelativePath", "GunProperties.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayervsAI,
				nullptr,
				"EWeaponProjectile",
				"EWeaponProjectile::ProjectileType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYERVSAI_API uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_PlayervsAI(), TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash());
	}
	return Singleton;
}
template<> PLAYERVSAI_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponData(FWeaponData::StaticStruct, TEXT("/Script/PlayervsAI"), TEXT("WeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_PlayervsAI_StaticRegisterNativesFWeaponData
{
	FScriptStruct_PlayervsAI_StaticRegisterNativesFWeaponData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponData")),new UScriptStruct::TCppStructOps<FWeaponData>);
	}
} ScriptStruct_PlayervsAI_StaticRegisterNativesFWeaponData;
	struct Z_Construct_UScriptStruct_FWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShotCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, MaxAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, TimeBetweenShots), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ShotCost_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ShotCost = { "ShotCost", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, ShotCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ShotCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ShotCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponSpread_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponSpread = { "WeaponSpread", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponSpread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ShotCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponSpread,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayervsAI,
		nullptr,
		&NewStructOps,
		"WeaponData",
		sizeof(FWeaponData),
		alignof(FWeaponData),
		Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayervsAI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash() { return 3651344737U; }
	DEFINE_FUNCTION(AGunProperties::execInstantFire)
	{
		P_GET_STRUCT(FVector,Z_Param_GetFwrCam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstantFire(Z_Param_GetFwrCam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunProperties::execFire)
	{
		P_GET_STRUCT(FVector,Z_Param_GetFwrCam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire(Z_Param_GetFwrCam);
		P_NATIVE_END;
	}
	void AGunProperties::StaticRegisterNativesAGunProperties()
	{
		UClass* Class = AGunProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AGunProperties::execFire },
			{ "InstantFire", &AGunProperties::execInstantFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGunProperties_Fire_Statics
	{
		struct GunProperties_eventFire_Parms
		{
			FVector GetFwrCam;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetFwrCam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_GetFwrCam = { "GetFwrCam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventFire_Parms, GetFwrCam), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProperties_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_GetFwrCam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_Fire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called every frame\n" },
		{ "ModuleRelativePath", "GunProperties.h" },
		{ "ToolTip", "Called every frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProperties_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProperties, nullptr, "Fire", nullptr, nullptr, sizeof(GunProperties_eventFire_Parms), Z_Construct_UFunction_AGunProperties_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProperties_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProperties_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunProperties_InstantFire_Statics
	{
		struct GunProperties_eventInstantFire_Parms
		{
			FVector GetFwrCam;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetFwrCam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_InstantFire_Statics::NewProp_GetFwrCam = { "GetFwrCam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventInstantFire_Parms, GetFwrCam), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProperties_InstantFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_InstantFire_Statics::NewProp_GetFwrCam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_InstantFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProperties_InstantFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProperties, nullptr, "InstantFire", nullptr, nullptr, sizeof(GunProperties_eventInstantFire_Parms), Z_Construct_UFunction_AGunProperties_InstantFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_InstantFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_InstantFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_InstantFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProperties_InstantFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProperties_InstantFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGunProperties_NoRegister()
	{
		return AGunProperties::StaticClass();
	}
	struct Z_Construct_UClass_AGunProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectileType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayervsAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGunProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGunProperties_Fire, "Fire" }, // 1910549093
		{ &Z_Construct_UFunction_AGunProperties_InstantFire, "InstantFire" }, // 2814212513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GunProperties.h" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponConfig = { "WeaponConfig", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunProperties, WeaponConfig), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileType_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileType = { "ProjectileType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunProperties, ProjectileType), Z_Construct_UEnum_PlayervsAI_EWeaponProjectile, METADATA_PARAMS(Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProperties_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunProperties_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunProperties, CollisionComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunProperties_Statics::NewProp_CollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProperties_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunProperties, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_CollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunProperties_Statics::ClassParams = {
		&AGunProperties::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGunProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunProperties_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunProperties, 2513246409);
	template<> PLAYERVSAI_API UClass* StaticClass<AGunProperties>()
	{
		return AGunProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunProperties(Z_Construct_UClass_AGunProperties, &AGunProperties::StaticClass, TEXT("/Script/PlayervsAI"), TEXT("AGunProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
