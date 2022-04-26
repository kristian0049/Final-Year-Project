// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
struct FTimerHandle;
class UCameraComponent;
#ifdef PLAYERVSAI_GunProperties_generated_h
#error "GunProperties.generated.h already included, missing '#pragma once' in GunProperties.h"
#endif
#define PLAYERVSAI_GunProperties_generated_h

#define PlayervsAI_Source_PlayervsAI_GunProperties_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics; \
	PLAYERVSAI_API static class UScriptStruct* StaticStruct();


template<> PLAYERVSAI_API UScriptStruct* StaticStruct<struct FWeaponData>();

#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProcessARHit); \
	DECLARE_FUNCTION(execProcessInstantHit); \
	DECLARE_FUNCTION(execWeaponTrace); \
	DECLARE_FUNCTION(execInterpRecoil); \
	DECLARE_FUNCTION(execInterpFinalRecoil); \
	DECLARE_FUNCTION(execARShooting); \
	DECLARE_FUNCTION(execInstantFire); \
	DECLARE_FUNCTION(execFire);


#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcessARHit); \
	DECLARE_FUNCTION(execProcessInstantHit); \
	DECLARE_FUNCTION(execWeaponTrace); \
	DECLARE_FUNCTION(execInterpRecoil); \
	DECLARE_FUNCTION(execInterpFinalRecoil); \
	DECLARE_FUNCTION(execARShooting); \
	DECLARE_FUNCTION(execInstantFire); \
	DECLARE_FUNCTION(execFire);


#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunProperties(); \
	friend struct Z_Construct_UClass_AGunProperties_Statics; \
public: \
	DECLARE_CLASS(AGunProperties, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AGunProperties)


#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAGunProperties(); \
	friend struct Z_Construct_UClass_AGunProperties_Statics; \
public: \
	DECLARE_CLASS(AGunProperties, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AGunProperties)


#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunProperties(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunProperties(AGunProperties&&); \
	NO_API AGunProperties(const AGunProperties&); \
public:


#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunProperties(AGunProperties&&); \
	NO_API AGunProperties(const AGunProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunProperties)


#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_PRIVATE_PROPERTY_OFFSET
#define PlayervsAI_Source_PlayervsAI_GunProperties_h_47_PROLOG
#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_INCLASS \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_GunProperties_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_GunProperties_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class AGunProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_GunProperties_h


#define FOREACH_ENUM_EWEAPONPROJECTILE(op) \
	op(EWeaponProjectile::EBullet) \
	op(EWeaponProjectile::ESpread) \
	op(EWeaponProjectile::EProjectile) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
