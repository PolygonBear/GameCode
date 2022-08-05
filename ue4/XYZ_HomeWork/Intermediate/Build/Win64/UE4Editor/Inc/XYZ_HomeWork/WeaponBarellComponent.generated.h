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
#ifdef XYZ_HOMEWORK_WeaponBarellComponent_generated_h
#error "WeaponBarellComponent.generated.h already included, missing '#pragma once' in WeaponBarellComponent.h"
#endif
#define XYZ_HOMEWORK_WeaponBarellComponent_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDecalInfo_Statics; \
	XYZ_HOMEWORK_API static class UScriptStruct* StaticStruct();


template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<struct FDecalInfo>();

#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProcessHit);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcessHit);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponBarellComponent(); \
	friend struct Z_Construct_UClass_UWeaponBarellComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponBarellComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UWeaponBarellComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponBarellComponent(); \
	friend struct Z_Construct_UClass_UWeaponBarellComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponBarellComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UWeaponBarellComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponBarellComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponBarellComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponBarellComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponBarellComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponBarellComponent(UWeaponBarellComponent&&); \
	NO_API UWeaponBarellComponent(const UWeaponBarellComponent&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponBarellComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponBarellComponent(UWeaponBarellComponent&&); \
	NO_API UWeaponBarellComponent(const UWeaponBarellComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponBarellComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponBarellComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponBarellComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FiringRange() { return STRUCT_OFFSET(UWeaponBarellComponent, FiringRange); } \
	FORCEINLINE static uint32 __PPO__BulletsPerShot() { return STRUCT_OFFSET(UWeaponBarellComponent, BulletsPerShot); } \
	FORCEINLINE static uint32 __PPO__HitRegistration() { return STRUCT_OFFSET(UWeaponBarellComponent, HitRegistration); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(UWeaponBarellComponent, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(UWeaponBarellComponent, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__DamageTypeClass() { return STRUCT_OFFSET(UWeaponBarellComponent, DamageTypeClass); } \
	FORCEINLINE static uint32 __PPO__FalloffDiagramCurve() { return STRUCT_OFFSET(UWeaponBarellComponent, FalloffDiagramCurve); } \
	FORCEINLINE static uint32 __PPO__MuzzleFlashFX() { return STRUCT_OFFSET(UWeaponBarellComponent, MuzzleFlashFX); } \
	FORCEINLINE static uint32 __PPO__TraceFX() { return STRUCT_OFFSET(UWeaponBarellComponent, TraceFX); } \
	FORCEINLINE static uint32 __PPO__DefaultDecalInfo() { return STRUCT_OFFSET(UWeaponBarellComponent, DefaultDecalInfo); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_38_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class UWeaponBarellComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Components_Weapon_WeaponBarellComponent_h


#define FOREACH_ENUM_EHITREGISTRATIONTYPE(op) \
	op(EHitRegistrationType::HitScan) \
	op(EHitRegistrationType::Projectile) 

enum class EHitRegistrationType : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EHitRegistrationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
