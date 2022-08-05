// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/XYZGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZGameInstance() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZGameInstance_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UXYZGameInstance::StaticRegisterNativesUXYZGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UXYZGameInstance_NoRegister()
	{
		return UXYZGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UXYZGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXYZGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XYZGameInstance.h" },
		{ "ModuleRelativePath", "XYZGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXYZGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXYZGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXYZGameInstance_Statics::ClassParams = {
		&UXYZGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UXYZGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXYZGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXYZGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXYZGameInstance, 4216353433);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UXYZGameInstance>()
	{
		return UXYZGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXYZGameInstance(Z_Construct_UClass_UXYZGameInstance, &UXYZGameInstance::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UXYZGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXYZGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
