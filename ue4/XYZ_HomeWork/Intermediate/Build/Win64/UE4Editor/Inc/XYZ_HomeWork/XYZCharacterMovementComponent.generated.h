// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_XYZCharacterMovementComponent_generated_h
#error "XYZCharacterMovementComponent.generated.h already included, missing '#pragma once' in XYZCharacterMovementComponent.h"
#endif
#define XYZ_HOMEWORK_XYZCharacterMovementComponent_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_RPC_WRAPPERS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXYZCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UXYZCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UXYZCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UXYZCharacterMovementComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUXYZCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UXYZCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UXYZCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UXYZCharacterMovementComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXYZCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXYZCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXYZCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXYZCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXYZCharacterMovementComponent(UXYZCharacterMovementComponent&&); \
	NO_API UXYZCharacterMovementComponent(const UXYZCharacterMovementComponent&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXYZCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXYZCharacterMovementComponent(UXYZCharacterMovementComponent&&); \
	NO_API UXYZCharacterMovementComponent(const UXYZCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXYZCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXYZCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXYZCharacterMovementComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SwimingCapsuleRadius() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, SwimingCapsuleRadius); } \
	FORCEINLINE static uint32 __PPO__SwimingCapsuleHalfHeight() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, SwimingCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO__CrawlCapsuleHalfHeight() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, CrawlCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO__CrawlCapsuleRadius() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, CrawlCapsuleRadius); } \
	FORCEINLINE static uint32 __PPO__ClimbingOnLadderMaxSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, ClimbingOnLadderMaxSpeed); } \
	FORCEINLINE static uint32 __PPO__LadderToCharacterOffset() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, LadderToCharacterOffset); } \
	FORCEINLINE static uint32 __PPO__ClimbingOnLadderBrakingDecelartion() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, ClimbingOnLadderBrakingDecelartion); } \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, SprintSpeed); } \
	FORCEINLINE static uint32 __PPO__OutOfStaminaSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, OutOfStaminaSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxCrawlSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxCrawlSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxLadderTopOffset() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxLadderTopOffset); } \
	FORCEINLINE static uint32 __PPO__MinLadderBottomOffset() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, MinLadderBottomOffset); } \
	FORCEINLINE static uint32 __PPO__JumpOffFromLadderSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, JumpOffFromLadderSpeed); } \
	FORCEINLINE static uint32 __PPO__ZiplineDirectionOffset() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, ZiplineDirectionOffset); } \
	FORCEINLINE static uint32 __PPO__JumpOffFromZiplineSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, JumpOffFromZiplineSpeed); } \
	FORCEINLINE static uint32 __PPO__ZiplineSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, ZiplineSpeed); } \
	FORCEINLINE static uint32 __PPO__TopOffset() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, TopOffset); } \
	FORCEINLINE static uint32 __PPO__MaxWallRunSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxWallRunSpeed); } \
	FORCEINLINE static uint32 __PPO__SlidingCapsuleHalfHeight() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, SlidingCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO__SlidingCapsuleRadius() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, SlidingCapsuleRadius); } \
	FORCEINLINE static uint32 __PPO__MaxSlidingSpeed() { return STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxSlidingSpeed); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_67_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class UXYZCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Components_MovementComponents_XYZCharacterMovementComponent_h


#define FOREACH_ENUM_EWALLRUNSIDE(op) \
	op(EWallRunSide::None) \
	op(EWallRunSide::Left) \
	op(EWallRunSide::Right) 

enum class EWallRunSide : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EWallRunSide>();

#define FOREACH_ENUM_EDETACHFROMZIPLINEMETHOD(op) \
	op(EDetachFromZiplineMethod::Fall) \
	op(EDetachFromZiplineMethod::JumpOff) 

enum class EDetachFromZiplineMethod : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EDetachFromZiplineMethod>();

#define FOREACH_ENUM_EDETACHFROMLADDERMETHOD(op) \
	op(EDetachFromLadderMethod::Fall) \
	op(EDetachFromLadderMethod::ReachingFromTop) \
	op(EDetachFromLadderMethod::ReachingFromBottom) \
	op(EDetachFromLadderMethod::JumpOff) 

enum class EDetachFromLadderMethod : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EDetachFromLadderMethod>();

#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(ECustomMovementMode::CMOVE_None) \
	op(ECustomMovementMode::CMOVE_Mantling) \
	op(ECustomMovementMode::CMOVE_Ladder) \
	op(ECustomMovementMode::CMOVE_Zipline) \
	op(ECustomMovementMode::CMOVE_WallRun) \
	op(ECustomMovementMode::CMOVE_Max) 

enum class ECustomMovementMode : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<ECustomMovementMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
