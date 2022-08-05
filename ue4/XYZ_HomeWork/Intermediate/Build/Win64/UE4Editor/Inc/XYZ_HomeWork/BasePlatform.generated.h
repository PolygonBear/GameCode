// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_BasePlatform_generated_h
#error "BasePlatform.generated.h already included, missing '#pragma once' in BasePlatform.h"
#endif
#define XYZ_HOMEWORK_BasePlatform_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTimelineFinished); \
	DECLARE_FUNCTION(execMovePlatform); \
	DECLARE_FUNCTION(execTimelineFloatReturn);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTimelineFinished); \
	DECLARE_FUNCTION(execMovePlatform); \
	DECLARE_FUNCTION(execTimelineFloatReturn);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlatform(); \
	friend struct Z_Construct_UClass_ABasePlatform_Statics; \
public: \
	DECLARE_CLASS(ABasePlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(ABasePlatform)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABasePlatform(); \
	friend struct Z_Construct_UClass_ABasePlatform_Statics; \
public: \
	DECLARE_CLASS(ABasePlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(ABasePlatform)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlatform(ABasePlatform&&); \
	NO_API ABasePlatform(const ABasePlatform&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlatform(ABasePlatform&&); \
	NO_API ABasePlatform(const ABasePlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlatform)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementType() { return STRUCT_OFFSET(ABasePlatform, MovementType); } \
	FORCEINLINE static uint32 __PPO__PlatformMeshComponent() { return STRUCT_OFFSET(ABasePlatform, PlatformMeshComponent); } \
	FORCEINLINE static uint32 __PPO__EndLocation() { return STRUCT_OFFSET(ABasePlatform, EndLocation); } \
	FORCEINLINE static uint32 __PPO__StartLocation() { return STRUCT_OFFSET(ABasePlatform, StartLocation); } \
	FORCEINLINE static uint32 __PPO__PlatformMovementCurve() { return STRUCT_OFFSET(ABasePlatform, PlatformMovementCurve); } \
	FORCEINLINE static uint32 __PPO__CooldownTimer() { return STRUCT_OFFSET(ABasePlatform, CooldownTimer); } \
	FORCEINLINE static uint32 __PPO__ForwardSpeedRate() { return STRUCT_OFFSET(ABasePlatform, ForwardSpeedRate); } \
	FORCEINLINE static uint32 __PPO__BackwardSpeedRate() { return STRUCT_OFFSET(ABasePlatform, BackwardSpeedRate); } \
	FORCEINLINE static uint32 __PPO__bReverse() { return STRUCT_OFFSET(ABasePlatform, bReverse); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_18_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class ABasePlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Actors_BasePlatform_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::OnDeamnd) \
	op(EMovementType::Loop) 

enum class EMovementType : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
