// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEquipableItem;
#ifdef XYZ_HOMEWORK_ReticleWidget_generated_h
#error "ReticleWidget.generated.h already included, missing '#pragma once' in ReticleWidget.h"
#endif
#define XYZ_HOMEWORK_ReticleWidget_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_RPC_WRAPPERS \
	virtual void OnEquippedItemChanged_Implementation(const AEquipableItem* EquippedItem); \
	virtual void OnAimingStateChanged_Implementation(bool bIsAiming); \
 \
	DECLARE_FUNCTION(execOnEquippedItemChanged); \
	DECLARE_FUNCTION(execOnAimingStateChanged);


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEquippedItemChanged_Implementation(const AEquipableItem* EquippedItem); \
	virtual void OnAimingStateChanged_Implementation(bool bIsAiming); \
 \
	DECLARE_FUNCTION(execOnEquippedItemChanged); \
	DECLARE_FUNCTION(execOnAimingStateChanged);


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_EVENT_PARMS \
	struct ReticleWidget_eventOnAimingStateChanged_Parms \
	{ \
		bool bIsAiming; \
	}; \
	struct ReticleWidget_eventOnEquippedItemChanged_Parms \
	{ \
		const AEquipableItem* EquippedItem; \
	};


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_CALLBACK_WRAPPERS
#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReticleWidget(); \
	friend struct Z_Construct_UClass_UReticleWidget_Statics; \
public: \
	DECLARE_CLASS(UReticleWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UReticleWidget)


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUReticleWidget(); \
	friend struct Z_Construct_UClass_UReticleWidget_Statics; \
public: \
	DECLARE_CLASS(UReticleWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UReticleWidget)


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReticleWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReticleWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReticleWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReticleWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReticleWidget(UReticleWidget&&); \
	NO_API UReticleWidget(const UReticleWidget&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReticleWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReticleWidget(UReticleWidget&&); \
	NO_API UReticleWidget(const UReticleWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReticleWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReticleWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReticleWidget)


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentReticle() { return STRUCT_OFFSET(UReticleWidget, CurrentReticle); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_13_PROLOG \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_EVENT_PARMS


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_CALLBACK_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_CALLBACK_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class UReticleWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_UI_Widget_ReticleWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
