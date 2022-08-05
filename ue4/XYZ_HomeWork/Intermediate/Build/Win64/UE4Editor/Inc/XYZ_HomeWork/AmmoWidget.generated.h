// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_AmmoWidget_generated_h
#error "AmmoWidget.generated.h already included, missing '#pragma once' in AmmoWidget.h"
#endif
#define XYZ_HOMEWORK_AmmoWidget_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateGrenadesCount); \
	DECLARE_FUNCTION(execUpdateAmmoCount);


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateGrenadesCount); \
	DECLARE_FUNCTION(execUpdateAmmoCount);


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAmmoWidget(); \
	friend struct Z_Construct_UClass_UAmmoWidget_Statics; \
public: \
	DECLARE_CLASS(UAmmoWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UAmmoWidget)


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAmmoWidget(); \
	friend struct Z_Construct_UClass_UAmmoWidget_Statics; \
public: \
	DECLARE_CLASS(UAmmoWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UAmmoWidget)


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAmmoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmmoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmmoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmmoWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAmmoWidget(UAmmoWidget&&); \
	NO_API UAmmoWidget(const UAmmoWidget&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAmmoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAmmoWidget(UAmmoWidget&&); \
	NO_API UAmmoWidget(const UAmmoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmmoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmmoWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmmoWidget)


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Grenades() { return STRUCT_OFFSET(UAmmoWidget, Grenades); } \
	FORCEINLINE static uint32 __PPO__Ammo() { return STRUCT_OFFSET(UAmmoWidget, Ammo); } \
	FORCEINLINE static uint32 __PPO__TotalAmmo() { return STRUCT_OFFSET(UAmmoWidget, TotalAmmo); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_9_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class UAmmoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_AmmoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
