// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Controllers/XYZPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZPlayerController() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZPlayerController_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
// End Cross Module References
	void AXYZPlayerController::StaticRegisterNativesAXYZPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AXYZPlayerController_NoRegister()
	{
		return AXYZPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AXYZPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerHUDWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXYZPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Characters/Controllers/XYZPlayerController.h" },
		{ "ModuleRelativePath", "Characters/Controllers/XYZPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZPlayerController_Statics::NewProp_PlayerHUDWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Characters/Controllers/XYZPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AXYZPlayerController_Statics::NewProp_PlayerHUDWidgetClass = { "PlayerHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZPlayerController, PlayerHUDWidgetClass), Z_Construct_UClass_UPlayerHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AXYZPlayerController_Statics::NewProp_PlayerHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerController_Statics::NewProp_PlayerHUDWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXYZPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZPlayerController_Statics::NewProp_PlayerHUDWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXYZPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXYZPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXYZPlayerController_Statics::ClassParams = {
		&AXYZPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AXYZPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXYZPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXYZPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXYZPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXYZPlayerController, 2841968193);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AXYZPlayerController>()
	{
		return AXYZPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXYZPlayerController(Z_Construct_UClass_AXYZPlayerController, &AXYZPlayerController::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AXYZPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXYZPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
