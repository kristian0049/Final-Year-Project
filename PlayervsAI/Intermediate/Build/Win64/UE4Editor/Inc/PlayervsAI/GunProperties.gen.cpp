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
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PLAYERVSAI_API UClass* Z_Construct_UClass_APlayerClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLAYERVSAI_API UClass* Z_Construct_UClass_APlayervsAIProjectile_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, TimeBetweenShots), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DamageValue_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, DamageValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DamageValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DamageValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TimeBetweenShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DamageValue,
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
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash() { return 2388278125U; }
	DEFINE_FUNCTION(AGunProperties::execProjectileShooting)
	{
		P_GET_OBJECT(APlayerClass,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileShooting(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunProperties::execProcessARHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Impact);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessARHit(Z_Param_Out_Impact,Z_Param_Out_Origin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunProperties::execProcessInstantHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Impact);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ShootDir);
		P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RadicalSpread);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessInstantHit(Z_Param_Out_Impact,Z_Param_Out_Origin,Z_Param_Out_ShootDir,Z_Param_RandomSeed,Z_Param_RadicalSpread);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunProperties::execWeaponTrace)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceFrom);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->WeaponTrace(Z_Param_Out_TraceFrom,Z_Param_Out_TraceTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunProperties::execARShooting)
	{
		P_GET_STRUCT(FVector,Z_Param_GetFwrdCam);
		P_GET_STRUCT(FTimerHandle,Z_Param__ShootingHandler);
		P_GET_OBJECT(APlayerClass,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ARShooting(Z_Param_GetFwrdCam,Z_Param__ShootingHandler,Z_Param_Player);
		P_NATIVE_END;
	}
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
		P_GET_OBJECT(UCameraComponent,Z_Param_PlayerCam);
		P_GET_STRUCT(FTimerHandle,Z_Param__ShootingHandler);
		P_GET_OBJECT(APlayerClass,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire(Z_Param_GetFwrCam,Z_Param_PlayerCam,Z_Param__ShootingHandler,Z_Param_Player);
		P_NATIVE_END;
	}
	void AGunProperties::StaticRegisterNativesAGunProperties()
	{
		UClass* Class = AGunProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ARShooting", &AGunProperties::execARShooting },
			{ "Fire", &AGunProperties::execFire },
			{ "InstantFire", &AGunProperties::execInstantFire },
			{ "ProcessARHit", &AGunProperties::execProcessARHit },
			{ "ProcessInstantHit", &AGunProperties::execProcessInstantHit },
			{ "ProjectileShooting", &AGunProperties::execProjectileShooting },
			{ "WeaponTrace", &AGunProperties::execWeaponTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGunProperties_ARShooting_Statics
	{
		struct GunProperties_eventARShooting_Parms
		{
			FVector GetFwrdCam;
			FTimerHandle _ShootingHandler;
			APlayerClass* Player;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetFwrdCam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ShootingHandler;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_ARShooting_Statics::NewProp_GetFwrdCam = { "GetFwrdCam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventARShooting_Parms, GetFwrdCam), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_ARShooting_Statics::NewProp__ShootingHandler = { "_ShootingHandler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventARShooting_Parms, _ShootingHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGunProperties_ARShooting_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventARShooting_Parms, Player), Z_Construct_UClass_APlayerClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProperties_ARShooting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ARShooting_Statics::NewProp_GetFwrdCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ARShooting_Statics::NewProp__ShootingHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ARShooting_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ARShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProperties_ARShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProperties, nullptr, "ARShooting", nullptr, nullptr, sizeof(GunProperties_eventARShooting_Parms), Z_Construct_UFunction_AGunProperties_ARShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ARShooting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ARShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ARShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProperties_ARShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProperties_ARShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunProperties_Fire_Statics
	{
		struct GunProperties_eventFire_Parms
		{
			FVector GetFwrCam;
			UCameraComponent* PlayerCam;
			FTimerHandle _ShootingHandler;
			APlayerClass* Player;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GetFwrCam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ShootingHandler;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_GetFwrCam = { "GetFwrCam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventFire_Parms, GetFwrCam), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_PlayerCam_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_PlayerCam = { "PlayerCam", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventFire_Parms, PlayerCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_PlayerCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_PlayerCam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp__ShootingHandler = { "_ShootingHandler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventFire_Parms, _ShootingHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventFire_Parms, Player), Z_Construct_UClass_APlayerClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProperties_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_GetFwrCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_PlayerCam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp__ShootingHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_Fire_Statics::NewProp_Player,
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
	struct Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics
	{
		struct GunProperties_eventProcessARHit_Parms
		{
			FHitResult Impact;
			FVector Origin;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Impact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventProcessARHit_Parms, Impact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Impact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Impact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventProcessARHit_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Impact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProperties, nullptr, "ProcessARHit", nullptr, nullptr, sizeof(GunProperties_eventProcessARHit_Parms), Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProperties_ProcessARHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProperties_ProcessARHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics
	{
		struct GunProperties_eventProcessInstantHit_Parms
		{
			FHitResult Impact;
			FVector Origin;
			FVector ShootDir;
			int32 RandomSeed;
			float RadicalSpread;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootDir;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadicalSpread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Impact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventProcessInstantHit_Parms, Impact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Impact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Impact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventProcessInstantHit_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_ShootDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_ShootDir = { "ShootDir", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventProcessInstantHit_Parms, ShootDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_ShootDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_ShootDir_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventProcessInstantHit_Parms, RandomSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_RadicalSpread = { "RadicalSpread", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventProcessInstantHit_Parms, RadicalSpread), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Impact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_ShootDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_RandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::NewProp_RadicalSpread,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProperties, nullptr, "ProcessInstantHit", nullptr, nullptr, sizeof(GunProperties_eventProcessInstantHit_Parms), Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProperties_ProcessInstantHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProperties_ProcessInstantHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics
	{
		struct GunProperties_eventProjectileShooting_Parms
		{
			APlayerClass* Player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventProjectileShooting_Parms, Player), Z_Construct_UClass_APlayerClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProperties, nullptr, "ProjectileShooting", nullptr, nullptr, sizeof(GunProperties_eventProjectileShooting_Parms), Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProperties_ProjectileShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProperties_ProjectileShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics
	{
		struct GunProperties_eventWeaponTrace_Parms
		{
			FVector TraceFrom;
			FVector TraceTo;
			FHitResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceTo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceFrom = { "TraceFrom", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventWeaponTrace_Parms, TraceFrom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceTo = { "TraceTo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventWeaponTrace_Parms, TraceTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceTo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProperties_eventWeaponTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_TraceTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProperties, nullptr, "WeaponTrace", nullptr, nullptr, sizeof(GunProperties_eventWeaponTrace_Parms), Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProperties_WeaponTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProperties_WeaponTrace_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayervsAI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGunProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGunProperties_ARShooting, "ARShooting" }, // 1112285717
		{ &Z_Construct_UFunction_AGunProperties_Fire, "Fire" }, // 1389270327
		{ &Z_Construct_UFunction_AGunProperties_InstantFire, "InstantFire" }, // 2814212513
		{ &Z_Construct_UFunction_AGunProperties_ProcessARHit, "ProcessARHit" }, // 3138860099
		{ &Z_Construct_UFunction_AGunProperties_ProcessInstantHit, "ProcessInstantHit" }, // 2320110542
		{ &Z_Construct_UFunction_AGunProperties_ProjectileShooting, "ProjectileShooting" }, // 3503999907
		{ &Z_Construct_UFunction_AGunProperties_WeaponTrace, "WeaponTrace" }, // 2333191729
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "GunProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunProperties, ProjectileClass), Z_Construct_UClass_APlayervsAIProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_CollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_WeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProperties_Statics::NewProp_ProjectileClass,
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
	IMPLEMENT_CLASS(AGunProperties, 1766422849);
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
