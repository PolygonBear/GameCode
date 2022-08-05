// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/Notifies/AnimNotify_AtachEquippedItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_AtachEquippedItem() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_AtachEquippedItem_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_AtachEquippedItem();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UAnimNotify_AtachEquippedItem::StaticRegisterNativesUAnimNotify_AtachEquippedItem()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_AtachEquippedItem_NoRegister()
	{
		return UAnimNotify_AtachEquippedItem::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_AtachEquippedItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_AtachEquippedItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_AtachEquippedItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Characters/Animations/Notifies/AnimNotify_AtachEquippedItem.h" },
		{ "ModuleRelativePath", "Characters/Animations/Notifies/AnimNotify_AtachEquippedItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_AtachEquippedItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_AtachEquippedItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_AtachEquippedItem_Statics::ClassParams = {
		&UAnimNotify_AtachEquippedItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_AtachEquippedItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_AtachEquippedItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_AtachEquippedItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_AtachEquippedItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_AtachEquippedItem, 2726386312);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UAnimNotify_AtachEquippedItem>()
	{
		return UAnimNotify_AtachEquippedItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_AtachEquippedItem(Z_Construct_UClass_UAnimNotify_AtachEquippedItem, &UAnimNotify_AtachEquippedItem::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UAnimNotify_AtachEquippedItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_AtachEquippedItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
