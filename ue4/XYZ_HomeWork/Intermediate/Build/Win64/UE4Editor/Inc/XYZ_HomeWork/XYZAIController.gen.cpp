// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/AI/Controllers/XYZAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZAIController() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZAIController_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void AXYZAIController::StaticRegisterNativesAXYZAIController()
	{
	}
	UClass* Z_Construct_UClass_AXYZAIController_NoRegister()
	{
		return AXYZAIController::StaticClass();
	}
	struct Z_Construct_UClass_AXYZAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXYZAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/Controllers/XYZAIController.h" },
		{ "ModuleRelativePath", "AI/Controllers/XYZAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXYZAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXYZAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXYZAIController_Statics::ClassParams = {
		&AXYZAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXYZAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXYZAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXYZAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXYZAIController, 1193944608);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AXYZAIController>()
	{
		return AXYZAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXYZAIController(Z_Construct_UClass_AXYZAIController, &AXYZAIController::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AXYZAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXYZAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
