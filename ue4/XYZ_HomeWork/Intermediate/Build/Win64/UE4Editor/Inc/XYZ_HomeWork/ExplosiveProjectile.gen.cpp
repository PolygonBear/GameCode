// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/Projectiles/ExplosiveProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosiveProjectile() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AExplosiveProjectile_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AExplosiveProjectile();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZProjectile();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UExplosionComponent_NoRegister();
// End Cross Module References
	void AExplosiveProjectile::StaticRegisterNativesAExplosiveProjectile()
	{
	}
	UClass* Z_Construct_UClass_AExplosiveProjectile_NoRegister()
	{
		return AExplosiveProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AExplosiveProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetonaionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetonaionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosiveProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXYZProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Projectiles/ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "Actors/Projectiles/ExplosiveProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_ExplosionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Projectiles/ExplosiveProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_ExplosionComponent = { "ExplosionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveProjectile, ExplosionComponent), Z_Construct_UClass_UExplosionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_ExplosionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_ExplosionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_DetonaionTime_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "Actors/Projectiles/ExplosiveProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_DetonaionTime = { "DetonaionTime", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveProjectile, DetonaionTime), METADATA_PARAMS(Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_DetonaionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_DetonaionTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_ExplosionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp_DetonaionTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosiveProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveProjectile_Statics::ClassParams = {
		&AExplosiveProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosiveProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosiveProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosiveProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosiveProjectile, 4025134382);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AExplosiveProjectile>()
	{
		return AExplosiveProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosiveProjectile(Z_Construct_UClass_AExplosiveProjectile, &AExplosiveProjectile::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AExplosiveProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosiveProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
