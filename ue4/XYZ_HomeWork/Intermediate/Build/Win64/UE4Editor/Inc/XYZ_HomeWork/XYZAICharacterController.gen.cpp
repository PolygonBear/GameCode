// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/AI/Controllers/XYZAICharacterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZAICharacterController() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZAICharacterController_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZAICharacterController();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZAIController();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void AXYZAICharacterController::StaticRegisterNativesAXYZAICharacterController()
	{
	}
	UClass* Z_Construct_UClass_AXYZAICharacterController_NoRegister()
	{
		return AXYZAICharacterController::StaticClass();
	}
	struct Z_Construct_UClass_AXYZAICharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetReachRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetReachRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXYZAICharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXYZAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZAICharacterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/Controllers/XYZAICharacterController.h" },
		{ "ModuleRelativePath", "AI/Controllers/XYZAICharacterController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZAICharacterController_Statics::NewProp_TargetReachRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AI/Controllers/XYZAICharacterController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXYZAICharacterController_Statics::NewProp_TargetReachRadius = { "TargetReachRadius", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZAICharacterController, TargetReachRadius), METADATA_PARAMS(Z_Construct_UClass_AXYZAICharacterController_Statics::NewProp_TargetReachRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZAICharacterController_Statics::NewProp_TargetReachRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXYZAICharacterController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZAICharacterController_Statics::NewProp_TargetReachRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXYZAICharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXYZAICharacterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXYZAICharacterController_Statics::ClassParams = {
		&AXYZAICharacterController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AXYZAICharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AXYZAICharacterController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXYZAICharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZAICharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXYZAICharacterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXYZAICharacterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXYZAICharacterController, 3288769372);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AXYZAICharacterController>()
	{
		return AXYZAICharacterController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXYZAICharacterController(Z_Construct_UClass_AXYZAICharacterController, &AXYZAICharacterController::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AXYZAICharacterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXYZAICharacterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
