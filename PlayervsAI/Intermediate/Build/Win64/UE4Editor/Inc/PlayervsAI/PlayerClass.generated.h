// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef PLAYERVSAI_PlayerClass_generated_h
#error "PlayerClass.generated.h already included, missing '#pragma once' in PlayerClass.h"
#endif
#define PLAYERVSAI_PlayerClass_generated_h

#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_SPARSE_DATA
#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsFiring); \
	DECLARE_FUNCTION(execGetHands); \
	DECLARE_FUNCTION(execFire);


#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsFiring); \
	DECLARE_FUNCTION(execGetHands); \
	DECLARE_FUNCTION(execFire);


#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerClass(); \
	friend struct Z_Construct_UClass_APlayerClass_Statics; \
public: \
	DECLARE_CLASS(APlayerClass, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(APlayerClass)


#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerClass(); \
	friend struct Z_Construct_UClass_APlayerClass_Statics; \
public: \
	DECLARE_CLASS(APlayerClass, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlayervsAI"), NO_API) \
	DECLARE_SERIALIZER(APlayerClass)


#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerClass(APlayerClass&&); \
	NO_API APlayerClass(const APlayerClass&); \
public:


#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerClass(APlayerClass&&); \
	NO_API APlayerClass(const APlayerClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerClass)


#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Animations() { return STRUCT_OFFSET(APlayerClass, Animations); }


#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_16_PROLOG
#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_RPC_WRAPPERS \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_INCLASS \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_PRIVATE_PROPERTY_OFFSET \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_SPARSE_DATA \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_INCLASS_NO_PURE_DECLS \
	PlayervsAI_Source_PlayervsAI_PlayerClass_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERVSAI_API UClass* StaticClass<class APlayerClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlayervsAI_Source_PlayervsAI_PlayerClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
