// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/Notifies/AnimNotify_EndSlide.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_EndSlide() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_EndSlide_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_EndSlide();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UAnimNotify_EndSlide::StaticRegisterNativesUAnimNotify_EndSlide()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_EndSlide_NoRegister()
	{
		return UAnimNotify_EndSlide::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_EndSlide_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_EndSlide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_EndSlide_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Characters/Animations/Notifies/AnimNotify_EndSlide.h" },
		{ "ModuleRelativePath", "Characters/Animations/Notifies/AnimNotify_EndSlide.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_EndSlide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_EndSlide>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_EndSlide_Statics::ClassParams = {
		&UAnimNotify_EndSlide::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_EndSlide_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_EndSlide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_EndSlide()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_EndSlide_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_EndSlide, 602313538);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UAnimNotify_EndSlide>()
	{
		return UAnimNotify_EndSlide::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_EndSlide(Z_Construct_UClass_UAnimNotify_EndSlide, &UAnimNotify_EndSlide::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UAnimNotify_EndSlide"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_EndSlide);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
