// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
class UPrimitiveComponent;
class AActor;
#ifdef XYZ_HOMEWORK_XYZProjectile_generated_h
#error "XYZProjectile.generated.h already included, missing '#pragma once' in XYZProjectile.h"
#endif
#define XYZ_HOMEWORK_XYZProjectile_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_10_DELEGATE \
struct _Script_XYZ_HomeWork_eventOnProjectileHit_Parms \
{ \
	FHitResult Hit; \
	FVector Direction; \
}; \
static inline void FOnProjectileHit_DelegateWrapper(const FMulticastScriptDelegate& OnProjectileHit, FHitResult const& Hit, FVector const& Direction) \
{ \
	_Script_XYZ_HomeWork_eventOnProjectileHit_Parms Parms; \
	Parms.Hit=Hit; \
	Parms.Direction=Direction; \
	OnProjectileHit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollisionHit); \
	DECLARE_FUNCTION(execLaunchProjectile);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollisionHit); \
	DECLARE_FUNCTION(execLaunchProjectile);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXYZProjectile(); \
	friend struct Z_Construct_UClass_AXYZProjectile_Statics; \
public: \
	DECLARE_CLASS(AXYZProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AXYZProjectile)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAXYZProjectile(); \
	friend struct Z_Construct_UClass_AXYZProjectile_Statics; \
public: \
	DECLARE_CLASS(AXYZProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AXYZProjectile)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXYZProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXYZProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXYZProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXYZProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXYZProjectile(AXYZProjectile&&); \
	NO_API AXYZProjectile(const AXYZProjectile&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXYZProjectile(AXYZProjectile&&); \
	NO_API AXYZProjectile(const AXYZProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXYZProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXYZProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AXYZProjectile)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(AXYZProjectile, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AXYZProjectile, ProjectileMovementComponent); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_12_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class AXYZProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Projectiles_XYZProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
