// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/AI/BTServices/BTService_Fire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Fire() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UBTService_Fire_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UBTService_Fire();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UBTService_Fire::StaticRegisterNativesUBTService_Fire()
	{
	}
	UClass* Z_Construct_UClass_UBTService_Fire_NoRegister()
	{
		return UBTService_Fire::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Fire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Fire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Fire_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTServices/BTService_Fire.h" },
		{ "ModuleRelativePath", "AI/BTServices/BTService_Fire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Fire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Fire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Fire_Statics::ClassParams = {
		&UBTService_Fire::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_Fire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Fire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_Fire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_Fire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_Fire, 622412813);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UBTService_Fire>()
	{
		return UBTService_Fire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_Fire(Z_Construct_UClass_UBTService_Fire, &UBTService_Fire::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UBTService_Fire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Fire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
