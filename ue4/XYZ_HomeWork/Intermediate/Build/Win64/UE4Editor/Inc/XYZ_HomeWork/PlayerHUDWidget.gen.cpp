// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/UI/Widget/PlayerHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUDWidget() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UPlayerHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UPlayerHUDWidget::StaticRegisterNativesUPlayerHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleWidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReticleWidgetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoWidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AmmoWidgetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttributesWidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterAttributesWidgetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widget/PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "UI/Widget/PlayerHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReticleWidgetName_MetaData[] = {
		{ "Category", "Widge Names" },
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//float GetHealthPercent() const;\n" },
		{ "ModuleRelativePath", "UI/Widget/PlayerHUDWidget.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nfloat GetHealthPercent() const;" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReticleWidgetName = { "ReticleWidgetName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHUDWidget, ReticleWidgetName), METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReticleWidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReticleWidgetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_AmmoWidgetName_MetaData[] = {
		{ "Category", "Widge Names" },
		{ "ModuleRelativePath", "UI/Widget/PlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_AmmoWidgetName = { "AmmoWidgetName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHUDWidget, AmmoWidgetName), METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_AmmoWidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_AmmoWidgetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CharacterAttributesWidgetName_MetaData[] = {
		{ "Category", "Widge Names" },
		{ "ModuleRelativePath", "UI/Widget/PlayerHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CharacterAttributesWidgetName = { "CharacterAttributesWidgetName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHUDWidget, CharacterAttributesWidgetName), METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CharacterAttributesWidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CharacterAttributesWidgetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_ReticleWidgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_AmmoWidgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CharacterAttributesWidgetName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams = {
		&UPlayerHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerHUDWidget, 2790144657);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UPlayerHUDWidget>()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerHUDWidget(Z_Construct_UClass_UPlayerHUDWidget, &UPlayerHUDWidget::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UPlayerHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
