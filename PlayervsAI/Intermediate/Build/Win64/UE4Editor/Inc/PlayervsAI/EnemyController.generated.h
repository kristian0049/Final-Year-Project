// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PLAYERVSAI_EnemyController_generated_h
#error "EnemyController.generated.h already included, missing '#pragma once' in EnemyController.h"
#endif
#define PLAYERVSAI_EnemyController_generated_h

#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyController(); \
	friend struct Z_Construct_UClass_AEnemyController_Statics; \
public: \
	DECLARE_CLASS(AEnemyController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AEnemyController)


#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public:


#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyController(AEnemyController&&); \
	NO_API AEnemyController(const AEnemyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyController)


#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_PRIVATE_PROPERTY_OFFSET
#define PlayervsAI_Source_PlayervsAI_EnemyController_h_14_PROLOG
#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_INCLASS \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_EnemyController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_EnemyController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class AEnemyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_EnemyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
