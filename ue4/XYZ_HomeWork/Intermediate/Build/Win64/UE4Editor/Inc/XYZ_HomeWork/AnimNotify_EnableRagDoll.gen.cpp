// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/Notifies/AnimNotify_EnableRagDoll.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_EnableRagDoll() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_EnableRagDoll_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_EnableRagDoll();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UAnimNotify_EnableRagDoll::StaticRegisterNativesUAnimNotify_EnableRagDoll()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_EnableRagDoll_NoRegister()
	{
		return UAnimNotify_EnableRagDoll::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_EnableRagDoll_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_EnableRagDoll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_EnableRagDoll_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Characters/Animations/Notifies/AnimNotify_EnableRagDoll.h" },
		{ "ModuleRelativePath", "Characters/Animations/Notifies/AnimNotify_EnableRagDoll.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_EnableRagDoll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_EnableRagDoll>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_EnableRagDoll_Statics::ClassParams = {
		&UAnimNotify_EnableRagDoll::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_EnableRagDoll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_EnableRagDoll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_EnableRagDoll()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_EnableRagDoll_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_EnableRagDoll, 543228429);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UAnimNotify_EnableRagDoll>()
	{
		return UAnimNotify_EnableRagDoll::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_EnableRagDoll(Z_Construct_UClass_UAnimNotify_EnableRagDoll, &UAnimNotify_EnableRagDoll::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UAnimNotify_EnableRagDoll"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_EnableRagDoll);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
