// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PLAYERVSAI_EnemyAIProjectile_generated_h
#error "EnemyAIProjectile.generated.h already included, missing '#pragma once' in EnemyAIProjectile.h"
#endif
#define PLAYERVSAI_EnemyAIProjectile_generated_h

#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIProjectile(); \
	friend struct Z_Construct_UClass_AEnemyAIProjectile_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIProjectile)


#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIProjectile(); \
	friend struct Z_Construct_UClass_AEnemyAIProjectile_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIProjectile)


#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIProjectile(AEnemyAIProjectile&&); \
	NO_API AEnemyAIProjectile(const AEnemyAIProjectile&); \
public:


#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIProjectile(AEnemyAIProjectile&&); \
	NO_API AEnemyAIProjectile(const AEnemyAIProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAIProjectile)


#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_PRIVATE_PROPERTY_OFFSET
#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_13_PROLOG
#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_INCLASS \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class AEnemyAIProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_EnemyAIProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
