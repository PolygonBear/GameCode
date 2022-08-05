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
#ifdef XYZ_HOMEWORK_MeleeWeaponItem_generated_h
#error "MeleeWeaponItem.generated.h already included, missing '#pragma once' in MeleeWeaponItem.h"
#endif
#define XYZ_HOMEWORK_MeleeWeaponItem_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMelleAttackDescription_Statics; \
	XYZ_HOMEWORK_API static class UScriptStruct* StaticStruct();


template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<struct FMelleAttackDescription>();

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrecessHit);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrecessHit);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeleeWeaponItem(); \
	friend struct Z_Construct_UClass_AMeleeWeaponItem_Statics; \
public: \
	DECLARE_CLASS(AMeleeWeaponItem, AEquipableItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AMeleeWeaponItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAMeleeWeaponItem(); \
	friend struct Z_Construct_UClass_AMeleeWeaponItem_Statics; \
public: \
	DECLARE_CLASS(AMeleeWeaponItem, AEquipableItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AMeleeWeaponItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeleeWeaponItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeleeWeaponItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeWeaponItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeWeaponItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeleeWeaponItem(AMeleeWeaponItem&&); \
	NO_API AMeleeWeaponItem(const AMeleeWeaponItem&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeleeWeaponItem(AMeleeWeaponItem&&); \
	NO_API AMeleeWeaponItem(const AMeleeWeaponItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeWeaponItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeWeaponItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeleeWeaponItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Attacks() { return STRUCT_OFFSET(AMeleeWeaponItem, Attacks); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_28_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class AMeleeWeaponItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_Weapons_MeleeWeaponItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
