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
#ifdef PLAYERVSAI_PlayervsAIProjectile_generated_h
#error "PlayervsAIProjectile.generated.h already included, missing '#pragma once' in PlayervsAIProjectile.h"
#endif
#define PLAYERVSAI_PlayervsAIProjectile_generated_h

#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayervsAIProjectile(); \
	friend struct Z_Construct_UClass_APlayervsAIProjectile_Statics; \
public: \
	DECLARE_CLASS(APlayervsAIProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(APlayervsAIProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayervsAIProjectile(); \
	friend struct Z_Construct_UClass_APlayervsAIProjectile_Statics; \
public: \
	DECLARE_CLASS(APlayervsAIProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(APlayervsAIProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayervsAIProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayervsAIProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayervsAIProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayervsAIProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayervsAIProjectile(APlayervsAIProjectile&&); \
	NO_API APlayervsAIProjectile(const APlayervsAIProjectile&); \
public:


#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayervsAIProjectile(APlayervsAIProjectile&&); \
	NO_API APlayervsAIProjectile(const APlayervsAIProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayervsAIProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayervsAIProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayervsAIProjectile)


#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APlayervsAIProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APlayervsAIProjectile, ProjectileMovement); }


#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_12_PROLOG
#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_INCLASS \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class APlayervsAIProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_PlayervsAIProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
