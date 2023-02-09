// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEMENTLEVEL_MovementLevelCharacter_generated_h
#error "MovementLevelCharacter.generated.h already included, missing '#pragma once' in MovementLevelCharacter.h"
#endif
#define MOVEMENTLEVEL_MovementLevelCharacter_generated_h

#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_SPARSE_DATA
#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_RPC_WRAPPERS
#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovementLevelCharacter(); \
	friend struct Z_Construct_UClass_AMovementLevelCharacter_Statics; \
public: \
	DECLARE_CLASS(AMovementLevelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovementLevel"), NO_API) \
	DECLARE_SERIALIZER(AMovementLevelCharacter)


#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMovementLevelCharacter(); \
	friend struct Z_Construct_UClass_AMovementLevelCharacter_Statics; \
public: \
	DECLARE_CLASS(AMovementLevelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovementLevel"), NO_API) \
	DECLARE_SERIALIZER(AMovementLevelCharacter)


#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovementLevelCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovementLevelCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovementLevelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovementLevelCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovementLevelCharacter(AMovementLevelCharacter&&); \
	NO_API AMovementLevelCharacter(const AMovementLevelCharacter&); \
public:


#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovementLevelCharacter(AMovementLevelCharacter&&); \
	NO_API AMovementLevelCharacter(const AMovementLevelCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovementLevelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovementLevelCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovementLevelCharacter)


#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMovementLevelCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMovementLevelCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMovementLevelCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMovementLevelCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMovementLevelCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMovementLevelCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMovementLevelCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMovementLevelCharacter, L_MotionController); }


#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_17_PROLOG
#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_SPARSE_DATA \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_RPC_WRAPPERS \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_INCLASS \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_SPARSE_DATA \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_INCLASS_NO_PURE_DECLS \
	MovementLevel_Source_MovementLevel_MovementLevelCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEMENTLEVEL_API UClass* StaticClass<class AMovementLevelCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MovementLevel_Source_MovementLevel_MovementLevelCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
