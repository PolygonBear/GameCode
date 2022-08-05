// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/Notifies/AnimNotify_SetMeleeHitRegEnabled.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_SetMeleeHitRegEnabled() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UAnimNotify_SetMeleeHitRegEnabled::StaticRegisterNativesUAnimNotify_SetMeleeHitRegEnabled()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_NoRegister()
	{
		return UAnimNotify_SetMeleeHitRegEnabled::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHitregistrationEnabled_MetaData[];
#endif
		static void NewProp_bIsHitregistrationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHitregistrationEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Characters/Animations/Notifies/AnimNotify_SetMeleeHitRegEnabled.h" },
		{ "ModuleRelativePath", "Characters/Animations/Notifies/AnimNotify_SetMeleeHitRegEnabled.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::NewProp_bIsHitregistrationEnabled_MetaData[] = {
		{ "Category", "Melee weapon" },
		{ "ModuleRelativePath", "Characters/Animations/Notifies/AnimNotify_SetMeleeHitRegEnabled.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::NewProp_bIsHitregistrationEnabled_SetBit(void* Obj)
	{
		((UAnimNotify_SetMeleeHitRegEnabled*)Obj)->bIsHitregistrationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::NewProp_bIsHitregistrationEnabled = { "bIsHitregistrationEnabled", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotify_SetMeleeHitRegEnabled), &Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::NewProp_bIsHitregistrationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::NewProp_bIsHitregistrationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::NewProp_bIsHitregistrationEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::NewProp_bIsHitregistrationEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_SetMeleeHitRegEnabled>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::ClassParams = {
		&UAnimNotify_SetMeleeHitRegEnabled::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_SetMeleeHitRegEnabled, 1654353172);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UAnimNotify_SetMeleeHitRegEnabled>()
	{
		return UAnimNotify_SetMeleeHitRegEnabled::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_SetMeleeHitRegEnabled(Z_Construct_UClass_UAnimNotify_SetMeleeHitRegEnabled, &UAnimNotify_SetMeleeHitRegEnabled::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UAnimNotify_SetMeleeHitRegEnabled"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_SetMeleeHitRegEnabled);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
