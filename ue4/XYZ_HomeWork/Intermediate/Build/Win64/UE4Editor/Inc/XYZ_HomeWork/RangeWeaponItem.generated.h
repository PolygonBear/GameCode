// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_RangeWeaponItem_generated_h
#error "RangeWeaponItem.generated.h already included, missing '#pragma once' in RangeWeaponItem.h"
#endif
#define XYZ_HOMEWORK_RangeWeaponItem_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponMode_Statics; \
	XYZ_HOMEWORK_API static class UScriptStruct* StaticStruct();


template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<struct FWeaponMode>();

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_RPC_WRAPPERS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARangeWeaponItem(); \
	friend struct Z_Construct_UClass_ARangeWeaponItem_Statics; \
public: \
	DECLARE_CLASS(ARangeWeaponItem, AEquipableItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(ARangeWeaponItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_INCLASS \
private: \
	static void StaticRegisterNativesARangeWeaponItem(); \
	friend struct Z_Construct_UClass_ARangeWeaponItem_Statics; \
public: \
	DECLARE_CLASS(ARangeWeaponItem, AEquipableItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(ARangeWeaponItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARangeWeaponItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARangeWeaponItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangeWeaponItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangeWeaponItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangeWeaponItem(ARangeWeaponItem&&); \
	NO_API ARangeWeaponItem(const ARangeWeaponItem&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARangeWeaponItem(ARangeWeaponItem&&); \
	NO_API ARangeWeaponItem(const ARangeWeaponItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARangeWeaponItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARangeWeaponItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARangeWeaponItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(ARangeWeaponItem, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__WeaponBarell() { return STRUCT_OFFSET(ARangeWeaponItem, WeaponBarell); } \
	FORCEINLINE static uint32 __PPO__WeaponFireMontage() { return STRUCT_OFFSET(ARangeWeaponItem, WeaponFireMontage); } \
	FORCEINLINE static uint32 __PPO__WeaponReloadMontage() { return STRUCT_OFFSET(ARangeWeaponItem, WeaponReloadMontage); } \
	FORCEINLINE static uint32 __PPO__CharacterFireMontage() { return STRUCT_OFFSET(ARangeWeaponItem, CharacterFireMontage); } \
	FORCEINLINE static uint32 __PPO__CharacterReloadMontage() { return STRUCT_OFFSET(ARangeWeaponItem, CharacterReloadMontage); } \
	FORCEINLINE static uint32 __PPO__WeaponFireMode() { return STRUCT_OFFSET(ARangeWeaponItem, WeaponFireMode); } \
	FORCEINLINE static uint32 __PPO__ReloadType() { return STRUCT_OFFSET(ARangeWeaponItem, ReloadType); } \
	FORCEINLINE static uint32 __PPO__SpreadAngle() { return STRUCT_OFFSET(ARangeWeaponItem, SpreadAngle); } \
	FORCEINLINE static uint32 __PPO__AimTurnModifier() { return STRUCT_OFFSET(ARangeWeaponItem, AimTurnModifier); } \
	FORCEINLINE static uint32 __PPO__AimLookUpModifier() { return STRUCT_OFFSET(ARangeWeaponItem, AimLookUpModifier); } \
	FORCEINLINE static uint32 __PPO__AimSpreadAngle() { return STRUCT_OFFSET(ARangeWeaponItem, AimSpreadAngle); } \
	FORCEINLINE static uint32 __PPO__AimMovementMaxSpeed() { return STRUCT_OFFSET(ARangeWeaponItem, AimMovementMaxSpeed); } \
	FORCEINLINE static uint32 __PPO__AimFOV() { return STRUCT_OFFSET(ARangeWeaponItem, AimFOV); } \
	FORCEINLINE static uint32 __PPO__MaxAmmo() { return STRUCT_OFFSET(ARangeWeaponItem, MaxAmmo); } \
	FORCEINLINE static uint32 __PPO__bAutoReload() { return STRUCT_OFFSET(ARangeWeaponItem, bAutoReload); } \
	FORCEINLINE static uint32 __PPO__AmmoType() { return STRUCT_OFFSET(ARangeWeaponItem, AmmoType); } \
	FORCEINLINE static uint32 __PPO__AimReticleType() { return STRUCT_OFFSET(ARangeWeaponItem, AimReticleType); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_34_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class ARangeWeaponItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_RangeWeaponItem_h


#define FOREACH_ENUM_ERELOADTYPE(op) \
	op(EReloadType::FullClip) \
	op(EReloadType::ByBullet) 

enum class EReloadType : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EReloadType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
