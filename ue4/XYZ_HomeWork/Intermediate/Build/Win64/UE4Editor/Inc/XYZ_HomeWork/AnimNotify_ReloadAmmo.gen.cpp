// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/Notifies/AnimNotify_ReloadAmmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ReloadAmmo() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_ReloadAmmo_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_ReloadAmmo();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UAnimNotify_ReloadAmmo::StaticRegisterNativesUAnimNotify_ReloadAmmo()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_ReloadAmmo_NoRegister()
	{
		return UAnimNotify_ReloadAmmo::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Characters/Animations/Notifies/AnimNotify_ReloadAmmo.h" },
		{ "ModuleRelativePath", "Characters/Animations/Notifies/AnimNotify_ReloadAmmo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::NewProp_NumberOfAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Characters/Animations/Notifies/AnimNotify_ReloadAmmo.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::NewProp_NumberOfAmmo = { "NumberOfAmmo", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_ReloadAmmo, NumberOfAmmo), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::NewProp_NumberOfAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::NewProp_NumberOfAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::NewProp_NumberOfAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ReloadAmmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::ClassParams = {
		&UAnimNotify_ReloadAmmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_ReloadAmmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_ReloadAmmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_ReloadAmmo, 1539699444);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UAnimNotify_ReloadAmmo>()
	{
		return UAnimNotify_ReloadAmmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_ReloadAmmo(Z_Construct_UClass_UAnimNotify_ReloadAmmo, &UAnimNotify_ReloadAmmo::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UAnimNotify_ReloadAmmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ReloadAmmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
