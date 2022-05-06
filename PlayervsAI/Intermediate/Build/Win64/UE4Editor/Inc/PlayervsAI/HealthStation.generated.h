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
#ifdef PLAYERVSAI_HealthStation_generated_h
#error "HealthStation.generated.h already included, missing '#pragma once' in HealthStation.h"
#endif
#define PLAYERVSAI_HealthStation_generated_h

#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthStation(); \
	friend struct Z_Construct_UClass_AHealthStation_Statics; \
public: \
	DECLARE_CLASS(AHealthStation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AHealthStation)


#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHealthStation(); \
	friend struct Z_Construct_UClass_AHealthStation_Statics; \
public: \
	DECLARE_CLASS(AHealthStation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(AHealthStation)


#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthStation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthStation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthStation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthStation(AHealthStation&&); \
	NO_API AHealthStation(const AHealthStation&); \
public:


#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthStation(AHealthStation&&); \
	NO_API AHealthStation(const AHealthStation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthStation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthStation)


#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_PRIVATE_PROPERTY_OFFSET
#define PlayervsAI_Source_PlayervsAI_HealthStation_h_10_PROLOG
#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_INCLASS \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_HealthStation_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_HealthStation_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class AHealthStation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_HealthStation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
