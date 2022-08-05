// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
#ifdef XYZ_HOMEWORK_ExplosionComponent_generated_h
#error "ExplosionComponent.generated.h already included, missing '#pragma once' in ExplosionComponent.h"
#endif
#define XYZ_HOMEWORK_ExplosionComponent_generated_h

#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_9_DELEGATE \
static inline void FOnExplosion_DelegateWrapper(const FMulticastScriptDelegate& OnExplosion) \
{ \
	OnExplosion.ProcessMulticastDelegate<UObject>(NULL); \
}


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_SPARSE_DATA
#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplode);


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplode);


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExplosionComponent(); \
	friend struct Z_Construct_UClass_UExplosionComponent_Statics; \
public: \
	DECLARE_CLASS(UExplosionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UExplosionComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUExplosionComponent(); \
	friend struct Z_Construct_UClass_UExplosionComponent_Statics; \
public: \
	DECLARE_CLASS(UExplosionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XYZ_HomeWork"), NO_API) \
	DECLARE_SERIALIZER(UExplosionComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExplosionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExplosionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExplosionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExplosionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExplosionComponent(UExplosionComponent&&); \
	NO_API UExplosionComponent(const UExplosionComponent&); \
public:


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExplosionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExplosionComponent(UExplosionComponent&&); \
	NO_API UExplosionComponent(const UExplosionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExplosionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExplosionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExplosionComponent)


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxDamage() { return STRUCT_OFFSET(UExplosionComponent, MaxDamage); } \
	FORCEINLINE static uint32 __PPO__MinDamage() { return STRUCT_OFFSET(UExplosionComponent, MinDamage); } \
	FORCEINLINE static uint32 __PPO__DamageFalloff() { return STRUCT_OFFSET(UExplosionComponent, DamageFalloff); } \
	FORCEINLINE static uint32 __PPO__DamageTypeClass() { return STRUCT_OFFSET(UExplosionComponent, DamageTypeClass); } \
	FORCEINLINE static uint32 __PPO__InnerRadius() { return STRUCT_OFFSET(UExplosionComponent, InnerRadius); } \
	FORCEINLINE static uint32 __PPO__OuterRadius() { return STRUCT_OFFSET(UExplosionComponent, OuterRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionVFX() { return STRUCT_OFFSET(UExplosionComponent, ExplosionVFX); }


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_11_PROLOG
#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_RPC_WRAPPERS \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_INCLASS \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_SPARSE_DATA \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_INCLASS_NO_PURE_DECLS \
	XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XYZ_HOMEWORK_API UClass* StaticClass<class UExplosionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_ExplosionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
