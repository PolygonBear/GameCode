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
struct FVector;
struct FHitResult;
#ifdef XYZ_HOMEWORK_XYZBaseCharacter_generated_h
#error "XYZBaseCharacter.generated.h already included, missing '#pragma once' in XYZBaseCharacter.h"
#endif
#define XYZ_HOMEWORK_XYZBaseCharacter_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMantlingSettings_Statics; \
	XYZ_HOMEWORK_API static class UScriptStruct* StaticStruct();


template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<struct FMantlingSettings>();

#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_RPC_WRAPPERS \
	virtual void OnStopAiming_Implementation(); \
	virtual void OnStartAiming_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPlayerCapsuleHit); \
	DECLARE_FUNCTION(execCanCrawl); \
	DECLARE_FUNCTION(execUnCrawl); \
	DECLARE_FUNCTION(execCrawl); \
	DECLARE_FUNCTION(execOnStopAiming); \
	DECLARE_FUNCTION(execOnStartAiming); \
	DECLARE_FUNCTION(execMantle);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStopAiming_Implementation(); \
	virtual void OnStartAiming_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPlayerCapsuleHit); \
	DECLARE_FUNCTION(execCanCrawl); \
	DECLARE_FUNCTION(execUnCrawl); \
	DECLARE_FUNCTION(execCrawl); \
	DECLARE_FUNCTION(execOnStopAiming); \
	DECLARE_FUNCTION(execOnStartAiming); \
	DECLARE_FUNCTION(execMantle);


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_EVENT_PARMS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_CALLBACK_WRAPPERS
#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXYZBaseCharacter(); \
	friend struct Z_Construct_UClass_AXYZBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AXYZBaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AXYZBaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AXYZBaseCharacter*>(this); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_INCLASS \
private: \
	static void StaticRegisterNativesAXYZBaseCharacter(); \
	friend struct Z_Construct_UClass_AXYZBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AXYZBaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(AXYZBaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AXYZBaseCharacter*>(this); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXYZBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXYZBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXYZBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXYZBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXYZBaseCharacter(AXYZBaseCharacter&&); \
	NO_API AXYZBaseCharacter(const AXYZBaseCharacter&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXYZBaseCharacter(AXYZBaseCharacter&&); \
	NO_API AXYZBaseCharacter(const AXYZBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXYZBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXYZBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXYZBaseCharacter)


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HardLandingHeight() { return STRUCT_OFFSET(AXYZBaseCharacter, HardLandingHeight); } \
	FORCEINLINE static uint32 __PPO__RightFootSocketName() { return STRUCT_OFFSET(AXYZBaseCharacter, RightFootSocketName); } \
	FORCEINLINE static uint32 __PPO__LeftFootSocketName() { return STRUCT_OFFSET(AXYZBaseCharacter, LeftFootSocketName); } \
	FORCEINLINE static uint32 __PPO__IKTraceDistance() { return STRUCT_OFFSET(AXYZBaseCharacter, IKTraceDistance); } \
	FORCEINLINE static uint32 __PPO__IKInterpSpeed() { return STRUCT_OFFSET(AXYZBaseCharacter, IKInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(AXYZBaseCharacter, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(AXYZBaseCharacter, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__OnDeathAnimMontage() { return STRUCT_OFFSET(AXYZBaseCharacter, OnDeathAnimMontage); } \
	FORCEINLINE static uint32 __PPO__FallDamageCurve() { return STRUCT_OFFSET(AXYZBaseCharacter, FallDamageCurve); } \
	FORCEINLINE static uint32 __PPO__CharacterEquipmentComponents() { return STRUCT_OFFSET(AXYZBaseCharacter, CharacterEquipmentComponents); } \
	FORCEINLINE static uint32 __PPO__Team() { return STRUCT_OFFSET(AXYZBaseCharacter, Team); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_55_PROLOG \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_EVENT_PARMS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_CALLBACK_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_CALLBACK_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class AXYZBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_Characters_XYZBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
