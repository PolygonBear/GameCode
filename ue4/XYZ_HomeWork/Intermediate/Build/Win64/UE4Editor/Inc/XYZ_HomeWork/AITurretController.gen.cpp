// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/AI/Controllers/AITurretController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITurretController() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AAITurretController_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AAITurretController();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZAIController();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void AAITurretController::StaticRegisterNativesAAITurretController()
	{
	}
	UClass* Z_Construct_UClass_AAITurretController_NoRegister()
	{
		return AAITurretController::StaticClass();
	}
	struct Z_Construct_UClass_AAITurretController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAITurretController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXYZAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITurretController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/Controllers/AITurretController.h" },
		{ "ModuleRelativePath", "AI/Controllers/AITurretController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAITurretController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAITurretController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAITurretController_Statics::ClassParams = {
		&AAITurretController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAITurretController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAITurretController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAITurretController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAITurretController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAITurretController, 237825776);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AAITurretController>()
	{
		return AAITurretController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAITurretController(Z_Construct_UClass_AAITurretController, &AAITurretController::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AAITurretController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAITurretController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
