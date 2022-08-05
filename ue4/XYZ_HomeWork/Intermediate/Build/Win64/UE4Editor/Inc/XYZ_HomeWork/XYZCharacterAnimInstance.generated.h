// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_XYZCharacterAnimInstance_generated_h
#error "XYZCharacterAnimInstance.generated.h already included, missing '#pragma once' in XYZCharacterAnimInstance.h"
#endif
#define XYZ_HOMEWORK_XYZCharacterAnimInstance_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_RPC_WRAPPERS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXYZCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UXYZCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UXYZCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UXYZCharacterAnimInstance)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUXYZCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UXYZCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UXYZCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UXYZCharacterAnimInstance)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXYZCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXYZCharacterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXYZCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXYZCharacterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXYZCharacterAnimInstance(UXYZCharacterAnimInstance&&); \
	NO_API UXYZCharacterAnimInstance(const UXYZCharacterAnimInstance&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXYZCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXYZCharacterAnimInstance(UXYZCharacterAnimInstance&&); \
	NO_API UXYZCharacterAnimInstance(const UXYZCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXYZCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXYZCharacterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXYZCharacterAnimInstance)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AimRotation() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, AimRotation); } \
	FORCEINLINE static uint32 __PPO__IKFootRightOffset() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, IKFootRightOffset); } \
	FORCEINLINE static uint32 __PPO__IKFootLeftOffset() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, IKFootLeftOffset); } \
	FORCEINLINE static uint32 __PPO__IKPelvisBoneOffset() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, IKPelvisBoneOffset); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, Direction); } \
	FORCEINLINE static uint32 __PPO__bIsFalling() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsFalling); } \
	FORCEINLINE static uint32 __PPO__bIsCrouching() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsCrouching); } \
	FORCEINLINE static uint32 __PPO__bIsSprinting() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsSprinting); } \
	FORCEINLINE static uint32 __PPO__bIsOutOfStamina() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsOutOfStamina); } \
	FORCEINLINE static uint32 __PPO__bIsCrawling() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsCrawling); } \
	FORCEINLINE static uint32 __PPO__bIsSwimming() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsSwimming); } \
	FORCEINLINE static uint32 __PPO__bIsOnLadder() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsOnLadder); } \
	FORCEINLINE static uint32 __PPO__bIsOnZipline() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsOnZipline); } \
	FORCEINLINE static uint32 __PPO__bIsWallRunning() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsWallRunning); } \
	FORCEINLINE static uint32 __PPO__bIsSliding() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsSliding); } \
	FORCEINLINE static uint32 __PPO__bIsStrafing() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsStrafing); } \
	FORCEINLINE static uint32 __PPO__WallRunSide() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, WallRunSide); } \
	FORCEINLINE static uint32 __PPO__LadderSpeedRatio() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, LadderSpeedRatio); } \
	FORCEINLINE static uint32 __PPO__ZiplineSpeedRatio() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, ZiplineSpeedRatio); } \
	FORCEINLINE static uint32 __PPO__CurretnEquippedItemType() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, CurretnEquippedItemType); } \
	FORCEINLINE static uint32 __PPO__ForeGripSocketTransform() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, ForeGripSocketTransform); } \
	FORCEINLINE static uint32 __PPO__bIsAiming() { return STRUCT_OFFSET(UXYZCharacterAnimInstance, bIsAiming); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_14_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class UXYZCharacterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Characters_Animations_XYZCharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
