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
#ifdef XYZ_HOMEWORK_InterectiveCameraActor_generated_h
#error "InterectiveCameraActor.generated.h already included, missing '#pragma once' in InterectiveCameraActor.h"
#endif
#define XYZ_HOMEWORK_InterectiveCameraActor_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInterectiveCameraActor(); \
	friend struct Z_Construct_UClass_AInterectiveCameraActor_Statics; \
public: \
	DECLARE_CLASS(AInterectiveCameraActor, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AInterectiveCameraActor)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInterectiveCameraActor(); \
	friend struct Z_Construct_UClass_AInterectiveCameraActor_Statics; \
public: \
	DECLARE_CLASS(AInterectiveCameraActor, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AInterectiveCameraActor)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInterectiveCameraActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInterectiveCameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInterectiveCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInterectiveCameraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInterectiveCameraActor(AInterectiveCameraActor&&); \
	NO_API AInterectiveCameraActor(const AInterectiveCameraActor&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInterectiveCameraActor(AInterectiveCameraActor&&); \
	NO_API AInterectiveCameraActor(const AInterectiveCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInterectiveCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInterectiveCameraActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInterectiveCameraActor)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(AInterectiveCameraActor, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__TransitionToCameraTime() { return STRUCT_OFFSET(AInterectiveCameraActor, TransitionToCameraTime); } \
	FORCEINLINE static uint32 __PPO__TransitionToPawnTime() { return STRUCT_OFFSET(AInterectiveCameraActor, TransitionToPawnTime); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_12_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class AInterectiveCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Actors_InterectiveCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
