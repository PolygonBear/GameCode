// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_Ladder_generated_h
#error "Ladder.generated.h already included, missing '#pragma once' in Ladder.h"
#endif
#define XYZ_HOMEWORK_Ladder_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_RPC_WRAPPERS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALadder(); \
	friend struct Z_Construct_UClass_ALadder_Statics; \
public: \
	DECLARE_CLASS(ALadder, AInteractiveActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(ALadder)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALadder(); \
	friend struct Z_Construct_UClass_ALadder_Statics; \
public: \
	DECLARE_CLASS(ALadder, AInteractiveActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(ALadder)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALadder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALadder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALadder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALadder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALadder(ALadder&&); \
	NO_API ALadder(const ALadder&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALadder(ALadder&&); \
	NO_API ALadder(const ALadder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALadder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALadder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALadder)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LadderHeight() { return STRUCT_OFFSET(ALadder, LadderHeight); } \
	FORCEINLINE static uint32 __PPO__LadderWidth() { return STRUCT_OFFSET(ALadder, LadderWidth); } \
	FORCEINLINE static uint32 __PPO__StepsInterval() { return STRUCT_OFFSET(ALadder, StepsInterval); } \
	FORCEINLINE static uint32 __PPO__BottomStepOffset() { return STRUCT_OFFSET(ALadder, BottomStepOffset); } \
	FORCEINLINE static uint32 __PPO__RightRailMeshComponent() { return STRUCT_OFFSET(ALadder, RightRailMeshComponent); } \
	FORCEINLINE static uint32 __PPO__LeftRailMeshComponent() { return STRUCT_OFFSET(ALadder, LeftRailMeshComponent); } \
	FORCEINLINE static uint32 __PPO__StepMeshComponent() { return STRUCT_OFFSET(ALadder, StepMeshComponent); } \
	FORCEINLINE static uint32 __PPO__TopInteractionVolume() { return STRUCT_OFFSET(ALadder, TopInteractionVolume); } \
	FORCEINLINE static uint32 __PPO__AttachFromTopAnimMontage() { return STRUCT_OFFSET(ALadder, AttachFromTopAnimMontage); } \
	FORCEINLINE static uint32 __PPO__AttachFromTopAnimMontageInitialOffset() { return STRUCT_OFFSET(ALadder, AttachFromTopAnimMontageInitialOffset); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_13_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class ALadder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Actors_Interactive_Environment_Ladder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
