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
struct FHitResult;
#ifdef PLAYERVSAI_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define PLAYERVSAI_Enemy_generated_h

#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_PRIVATE_PROPERTY_OFFSET
#define PlayervsAI_Source_PlayervsAI_Enemy_h_26_PROLOG
#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_INCLASS \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_Enemy_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_Enemy_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_Enemy_h


#define FOREACH_ENUM_EENEMYTYPE(op) \
	op(EEnemyType::EMelee) \
	op(EEnemyType::ERanged) \
	op(EEnemyType::EBoss) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
