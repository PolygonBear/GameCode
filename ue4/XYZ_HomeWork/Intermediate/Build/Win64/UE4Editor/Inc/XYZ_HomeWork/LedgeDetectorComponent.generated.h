// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_LedgeDetectorComponent_generated_h
#error "LedgeDetectorComponent.generated.h already included, missing '#pragma once' in LedgeDetectorComponent.h"
#endif
#define XYZ_HOMEWORK_LedgeDetectorComponent_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLedgeDescription_Statics; \
	XYZ_HOMEWORK_API static class UScriptStruct* StaticStruct();


template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<struct FLedgeDescription>();

#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_RPC_WRAPPERS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULedgeDetectorComponent(); \
	friend struct Z_Construct_UClass_ULedgeDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(ULedgeDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(ULedgeDetectorComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesULedgeDetectorComponent(); \
	friend struct Z_Construct_UClass_ULedgeDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(ULedgeDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(ULedgeDetectorComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULedgeDetectorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULedgeDetectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULedgeDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULedgeDetectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULedgeDetectorComponent(ULedgeDetectorComponent&&); \
	NO_API ULedgeDetectorComponent(const ULedgeDetectorComponent&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULedgeDetectorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULedgeDetectorComponent(ULedgeDetectorComponent&&); \
	NO_API ULedgeDetectorComponent(const ULedgeDetectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULedgeDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULedgeDetectorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULedgeDetectorComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinimunLedgeHeight() { return STRUCT_OFFSET(ULedgeDetectorComponent, MinimunLedgeHeight); } \
	FORCEINLINE static uint32 __PPO__MaximunLedgeHeight() { return STRUCT_OFFSET(ULedgeDetectorComponent, MaximunLedgeHeight); } \
	FORCEINLINE static uint32 __PPO__ForwardCheckDistance() { return STRUCT_OFFSET(ULedgeDetectorComponent, ForwardCheckDistance); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_29_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class ULedgeDetectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Components_LedgeDetectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
