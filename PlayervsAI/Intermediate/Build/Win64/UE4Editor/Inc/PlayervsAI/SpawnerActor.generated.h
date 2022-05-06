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
#ifdef PLAYERVSAI_SpawnerActor_generated_h
#error "SpawnerActor.generated.h already included, missing '#pragma once' in SpawnerActor.h"
#endif
#define PLAYERVSAI_SpawnerActor_generated_h

#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnerActor(); \
	friend struct Z_Construct_UClass_ASpawnerActor_Statics; \
public: \
	DECLARE_CLASS(ASpawnerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(ASpawnerActor)


#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASpawnerActor(); \
	friend struct Z_Construct_UClass_ASpawnerActor_Statics; \
public: \
	DECLARE_CLASS(ASpawnerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(ASpawnerActor)


#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnerActor(ASpawnerActor&&); \
	NO_API ASpawnerActor(const ASpawnerActor&); \
public:


#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnerActor(ASpawnerActor&&); \
	NO_API ASpawnerActor(const ASpawnerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnerActor)


#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_PRIVATE_PROPERTY_OFFSET
#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_11_PROLOG
#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_INCLASS \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_SpawnerActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class ASpawnerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_SpawnerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
