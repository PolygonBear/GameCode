// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/UI/Widget/AmmoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoWidget() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAmmoWidget_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAmmoWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	DEFINE_FUNCTION(UAmmoWidget::execUpdateGrenadesCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGrenades);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGrenadesCount(Z_Param_NewGrenades);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAmmoWidget::execUpdateAmmoCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewAmmo);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTotalAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAmmoCount(Z_Param_NewAmmo,Z_Param_NewTotalAmmo);
		P_NATIVE_END;
	}
	void UAmmoWidget::StaticRegisterNativesUAmmoWidget()
	{
		UClass* Class = UAmmoWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAmmoCount", &UAmmoWidget::execUpdateAmmoCount },
			{ "UpdateGrenadesCount", &UAmmoWidget::execUpdateGrenadesCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics
	{
		struct AmmoWidget_eventUpdateAmmoCount_Parms
		{
			int32 NewAmmo;
			int32 NewTotalAmmo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewAmmo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewTotalAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoWidget_eventUpdateAmmoCount_Parms, NewAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::NewProp_NewTotalAmmo = { "NewTotalAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoWidget_eventUpdateAmmoCount_Parms, NewTotalAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::NewProp_NewAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::NewProp_NewTotalAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/AmmoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmmoWidget, nullptr, "UpdateAmmoCount", nullptr, nullptr, sizeof(AmmoWidget_eventUpdateAmmoCount_Parms), Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics
	{
		struct AmmoWidget_eventUpdateGrenadesCount_Parms
		{
			int32 NewGrenades;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewGrenades;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::NewProp_NewGrenades = { "NewGrenades", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AmmoWidget_eventUpdateGrenadesCount_Parms, NewGrenades), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::NewProp_NewGrenades,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/AmmoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmmoWidget, nullptr, "UpdateGrenadesCount", nullptr, nullptr, sizeof(AmmoWidget_eventUpdateGrenadesCount_Parms), Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAmmoWidget_NoRegister()
	{
		return UAmmoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAmmoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grenades_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Grenades;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmmoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAmmoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmmoWidget_UpdateAmmoCount, "UpdateAmmoCount" }, // 3323816819
		{ &Z_Construct_UFunction_UAmmoWidget_UpdateGrenadesCount, "UpdateGrenadesCount" }, // 1552897667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widget/AmmoWidget.h" },
		{ "ModuleRelativePath", "UI/Widget/AmmoWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Grenades_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "UI/Widget/AmmoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Grenades = { "Grenades", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmmoWidget, Grenades), METADATA_PARAMS(Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Grenades_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Grenades_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "UI/Widget/AmmoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmmoWidget, Ammo), METADATA_PARAMS(Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoWidget_Statics::NewProp_TotalAmmo_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "UI/Widget/AmmoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmmoWidget_Statics::NewProp_TotalAmmo = { "TotalAmmo", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmmoWidget, TotalAmmo), METADATA_PARAMS(Z_Construct_UClass_UAmmoWidget_Statics::NewProp_TotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoWidget_Statics::NewProp_TotalAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmmoWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Grenades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoWidget_Statics::NewProp_Ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoWidget_Statics::NewProp_TotalAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmmoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmmoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAmmoWidget_Statics::ClassParams = {
		&UAmmoWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAmmoWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAmmoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmmoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAmmoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAmmoWidget, 1215220968);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UAmmoWidget>()
	{
		return UAmmoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAmmoWidget(Z_Construct_UClass_UAmmoWidget, &UAmmoWidget::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UAmmoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmmoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
