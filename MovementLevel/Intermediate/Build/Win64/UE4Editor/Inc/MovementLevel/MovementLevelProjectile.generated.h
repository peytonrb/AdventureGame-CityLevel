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
#ifdef MOVEMENTLEVEL_MovementLevelProjectile_generated_h
#error "MovementLevelProjectile.generated.h already included, missing '#pragma once' in MovementLevelProjectile.h"
#endif
#define MOVEMENTLEVEL_MovementLevelProjectile_generated_h

#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_SPARSE_DATA
#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovementLevelProjectile(); \
	friend struct Z_Construct_UClass_AMovementLevelProjectile_Statics; \
public: \
	DECLARE_CLASS(AMovementLevelProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovementLevel"), NO_API) \
	DECLARE_SERIALIZER(AMovementLevelProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMovementLevelProjectile(); \
	friend struct Z_Construct_UClass_AMovementLevelProjectile_Statics; \
public: \
	DECLARE_CLASS(AMovementLevelProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovementLevel"), NO_API) \
	DECLARE_SERIALIZER(AMovementLevelProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovementLevelProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovementLevelProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovementLevelProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovementLevelProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovementLevelProjectile(AMovementLevelProjectile&&); \
	NO_API AMovementLevelProjectile(const AMovementLevelProjectile&); \
public:


#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovementLevelProjectile(AMovementLevelProjectile&&); \
	NO_API AMovementLevelProjectile(const AMovementLevelProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovementLevelProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovementLevelProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovementLevelProjectile)


#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMovementLevelProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMovementLevelProjectile, ProjectileMovement); }


#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_12_PROLOG
#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_SPARSE_DATA \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_RPC_WRAPPERS \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_INCLASS \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_SPARSE_DATA \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_INCLASS_NO_PURE_DECLS \
	MovementLevel_Source_MovementLevel_MovementLevelProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEMENTLEVEL_API UClass* StaticClass<class AMovementLevelProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MovementLevel_Source_MovementLevel_MovementLevelProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
