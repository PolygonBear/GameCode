// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Components/Weapon/MeleeHitRegistrator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeHitRegistrator() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UMeleeHitRegistrator_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UMeleeHitRegistrator();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UMeleeHitRegistrator::StaticRegisterNativesUMeleeHitRegistrator()
	{
	}
	UClass* Z_Construct_UClass_UMeleeHitRegistrator_NoRegister()
	{
		return UMeleeHitRegistrator::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeHitRegistrator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHitRegistrationEnabled_MetaData[];
#endif
		static void NewProp_bIsHitRegistrationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHitRegistrationEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeHitRegistrator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeHitRegistrator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/Weapon/MeleeHitRegistrator.h" },
		{ "ModuleRelativePath", "Components/Weapon/MeleeHitRegistrator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeHitRegistrator_Statics::NewProp_bIsHitRegistrationEnabled_MetaData[] = {
		{ "Category", "Melee hit registration" },
		{ "ModuleRelativePath", "Components/Weapon/MeleeHitRegistrator.h" },
	};
#endif
	void Z_Construct_UClass_UMeleeHitRegistrator_Statics::NewProp_bIsHitRegistrationEnabled_SetBit(void* Obj)
	{
		((UMeleeHitRegistrator*)Obj)->bIsHitRegistrationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeleeHitRegistrator_Statics::NewProp_bIsHitRegistrationEnabled = { "bIsHitRegistrationEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeleeHitRegistrator), &Z_Construct_UClass_UMeleeHitRegistrator_Statics::NewProp_bIsHitRegistrationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeleeHitRegistrator_Statics::NewProp_bIsHitRegistrationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeHitRegistrator_Statics::NewProp_bIsHitRegistrationEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeHitRegistrator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeHitRegistrator_Statics::NewProp_bIsHitRegistrationEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeHitRegistrator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeHitRegistrator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeleeHitRegistrator_Statics::ClassParams = {
		&UMeleeHitRegistrator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeleeHitRegistrator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeHitRegistrator_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMeleeHitRegistrator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeHitRegistrator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeleeHitRegistrator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeleeHitRegistrator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeleeHitRegistrator, 687857110);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UMeleeHitRegistrator>()
	{
		return UMeleeHitRegistrator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeleeHitRegistrator(Z_Construct_UClass_UMeleeHitRegistrator, &UMeleeHitRegistrator::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UMeleeHitRegistrator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeHitRegistrator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
