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
#ifdef PLAYERVSAI_Spikes_generated_h
#error "Spikes.generated.h already included, missing '#pragma once' in Spikes.h"
#endif
#define PLAYERVSAI_Spikes_generated_h

#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpikes(); \
	friend struct Z_Construct_UClass_ASpikes_Statics; \
public: \
	DECLARE_CLASS(ASpikes, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(ASpikes)


#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASpikes(); \
	friend struct Z_Construct_UClass_ASpikes_Statics; \
public: \
	DECLARE_CLASS(ASpikes, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(ASpikes)


#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpikes(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpikes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpikes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpikes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpikes(ASpikes&&); \
	NO_API ASpikes(const ASpikes&); \
public:


#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpikes(ASpikes&&); \
	NO_API ASpikes(const ASpikes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpikes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpikes); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpikes)


#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_PRIVATE_PROPERTY_OFFSET
#define PlayervsAI_Source_PlayervsAI_Spikes_h_10_PROLOG
#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_INCLASS \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_Spikes_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_Spikes_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class ASpikes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_Spikes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
