// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_EquipableItem_generated_h
#error "EquipableItem.generated.h already included, missing '#pragma once' in EquipableItem.h"
#endif
#define XYZ_HOMEWORK_EquipableItem_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_9_DELEGATE \
struct _Script_XYZ_HomeWork_eventOnEquipmentStateChanged_Parms \
{ \
	bool bIsEquipped; \
}; \
static inline void FOnEquipmentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentStateChanged, bool bIsEquipped) \
{ \
	_Script_XYZ_HomeWork_eventOnEquipmentStateChanged_Parms Parms; \
	Parms.bIsEquipped=bIsEquipped ? true : false; \
	OnEquipmentStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_RPC_WRAPPERS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEquipableItem(); \
	friend struct Z_Construct_UClass_AEquipableItem_Statics; \
public: \
	DECLARE_CLASS(AEquipableItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AEquipableItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEquipableItem(); \
	friend struct Z_Construct_UClass_AEquipableItem_Statics; \
public: \
	DECLARE_CLASS(AEquipableItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AEquipableItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEquipableItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEquipableItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipableItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipableItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipableItem(AEquipableItem&&); \
	NO_API AEquipableItem(const AEquipableItem&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEquipableItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipableItem(AEquipableItem&&); \
	NO_API AEquipableItem(const AEquipableItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipableItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipableItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEquipableItem)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnEquipmentStateChanged() { return STRUCT_OFFSET(AEquipableItem, OnEquipmentStateChanged); } \
	FORCEINLINE static uint32 __PPO__ItemType() { return STRUCT_OFFSET(AEquipableItem, ItemType); } \
	FORCEINLINE static uint32 __PPO__UnEquippedSocketName() { return STRUCT_OFFSET(AEquipableItem, UnEquippedSocketName); } \
	FORCEINLINE static uint32 __PPO__EquippedSocketName() { return STRUCT_OFFSET(AEquipableItem, EquippedSocketName); } \
	FORCEINLINE static uint32 __PPO__CharacterEquipAnimMontage() { return STRUCT_OFFSET(AEquipableItem, CharacterEquipAnimMontage); } \
	FORCEINLINE static uint32 __PPO__ReticleType() { return STRUCT_OFFSET(AEquipableItem, ReticleType); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_14_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class AEquipableItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Equipment_EquipableItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
