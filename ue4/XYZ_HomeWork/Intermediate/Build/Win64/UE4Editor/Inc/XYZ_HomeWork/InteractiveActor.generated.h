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
struct FHitResult;
#ifdef XYZ_HOMEWORK_InteractiveActor_generated_h
#error "InteractiveActor.generated.h already included, missing '#pragma once' in InteractiveActor.h"
#endif
#define XYZ_HOMEWORK_InteractiveActor_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteractionVolumeOverlapEnd); \
	DECLARE_FUNCTION(execOnInteractionVolumeOverlapBegin);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteractionVolumeOverlapEnd); \
	DECLARE_FUNCTION(execOnInteractionVolumeOverlapBegin);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractiveActor(); \
	friend struct Z_Construct_UClass_AInteractiveActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AInteractiveActor)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAInteractiveActor(); \
	friend struct Z_Construct_UClass_AInteractiveActor_Statics; \
public: \
	DECLARE_CLASS(AInteractiveActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AInteractiveActor)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractiveActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractiveActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractiveActor(AInteractiveActor&&); \
	NO_API AInteractiveActor(const AInteractiveActor&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractiveActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractiveActor(AInteractiveActor&&); \
	NO_API AInteractiveActor(const AInteractiveActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractiveActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractiveActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractiveActor)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractionVolume() { return STRUCT_OFFSET(AInteractiveActor, InteractionVolume); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_11_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class AInteractiveActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_InteractiveActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
