// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/ExplosionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosionComponent() {}
// Cross Module References
	XYZ_HOMEWORK_API UFunction* Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UExplosionComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UExplosionComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork, nullptr, "OnExplosion__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UExplosionComponent::execExplode)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explode(Z_Param_Controller);
		P_NATIVE_END;
	}
	void UExplosionComponent::StaticRegisterNativesUExplosionComponent()
	{
		UClass* Class = UExplosionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Explode", &UExplosionComponent::execExplode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExplosionComponent_Explode_Statics
	{
		struct ExplosionComponent_eventExplode_Parms
		{
			AController* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExplosionComponent_Explode_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExplosionComponent_eventExplode_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExplosionComponent_Explode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExplosionComponent_Explode_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExplosionComponent_Explode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExplosionComponent_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExplosionComponent, nullptr, "Explode", nullptr, nullptr, sizeof(ExplosionComponent_eventExplode_Parms), Z_Construct_UFunction_UExplosionComponent_Explode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExplosionComponent_Explode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExplosionComponent_Explode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExplosionComponent_Explode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExplosionComponent_Explode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExplosionComponent_Explode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExplosionComponent_NoRegister()
	{
		return UExplosionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExplosionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnExplosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExplosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionVFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionVFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExplosionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExplosionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExplosionComponent_Explode, "Explode" }, // 942961609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ExplosionComponent.h" },
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OnExplosion_MetaData[] = {
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OnExplosion = { "OnExplosion", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExplosionComponent, OnExplosion), Z_Construct_UDelegateFunction_XYZ_HomeWork_OnExplosion__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OnExplosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OnExplosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MaxDamage_MetaData[] = {
		{ "Category", "Explosion | Damage" },
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MaxDamage = { "MaxDamage", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExplosionComponent, MaxDamage), METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MaxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MaxDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MinDamage_MetaData[] = {
		{ "Category", "Explosion | Damage" },
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MinDamage = { "MinDamage", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExplosionComponent, MinDamage), METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MinDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MinDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageFalloff_MetaData[] = {
		{ "Category", "Explosion | Damage" },
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageFalloff = { "DamageFalloff", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExplosionComponent, DamageFalloff), METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Explosion | Damage" },
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExplosionComponent, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "Explosion | Radius" },
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExplosionComponent_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExplosionComponent, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "Category", "Explosion | Radius" },
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExplosionComponent, OuterRadius), METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExplosionComponent_Statics::NewProp_ExplosionVFX_MetaData[] = {
		{ "Category", "Explosion | VFX" },
		{ "ModuleRelativePath", "ExplosionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosionComponent_Statics::NewProp_ExplosionVFX = { "ExplosionVFX", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExplosionComponent, ExplosionVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_ExplosionVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::NewProp_ExplosionVFX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExplosionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OnExplosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MaxDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosionComponent_Statics::NewProp_MinDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosionComponent_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosionComponent_Statics::NewProp_InnerRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosionComponent_Statics::NewProp_OuterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosionComponent_Statics::NewProp_ExplosionVFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExplosionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExplosionComponent_Statics::ClassParams = {
		&UExplosionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExplosionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExplosionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExplosionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExplosionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExplosionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExplosionComponent, 4212298219);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UExplosionComponent>()
	{
		return UExplosionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExplosionComponent(Z_Construct_UClass_UExplosionComponent, &UExplosionComponent::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UExplosionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExplosionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
