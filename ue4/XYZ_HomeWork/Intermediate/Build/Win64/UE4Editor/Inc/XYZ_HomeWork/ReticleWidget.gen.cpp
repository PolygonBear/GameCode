// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/UI/Widget/ReticleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReticleWidget() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UReticleWidget_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UReticleWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AEquipableItem_NoRegister();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EReticleType();
// End Cross Module References
	DEFINE_FUNCTION(UReticleWidget::execOnEquippedItemChanged)
	{
		P_GET_OBJECT(AEquipableItem,Z_Param_EquippedItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquippedItemChanged_Implementation(Z_Param_EquippedItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReticleWidget::execOnAimingStateChanged)
	{
		P_GET_UBOOL(Z_Param_bIsAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAimingStateChanged_Implementation(Z_Param_bIsAiming);
		P_NATIVE_END;
	}
	static FName NAME_UReticleWidget_OnAimingStateChanged = FName(TEXT("OnAimingStateChanged"));
	void UReticleWidget::OnAimingStateChanged(bool bIsAiming)
	{
		ReticleWidget_eventOnAimingStateChanged_Parms Parms;
		Parms.bIsAiming=bIsAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UReticleWidget_OnAimingStateChanged),&Parms);
	}
	static FName NAME_UReticleWidget_OnEquippedItemChanged = FName(TEXT("OnEquippedItemChanged"));
	void UReticleWidget::OnEquippedItemChanged(const AEquipableItem* EquippedItem)
	{
		ReticleWidget_eventOnEquippedItemChanged_Parms Parms;
		Parms.EquippedItem=EquippedItem;
		ProcessEvent(FindFunctionChecked(NAME_UReticleWidget_OnEquippedItemChanged),&Parms);
	}
	void UReticleWidget::StaticRegisterNativesUReticleWidget()
	{
		UClass* Class = UReticleWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAimingStateChanged", &UReticleWidget::execOnAimingStateChanged },
			{ "OnEquippedItemChanged", &UReticleWidget::execOnEquippedItemChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics
	{
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((ReticleWidget_eventOnAimingStateChanged_Parms*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReticleWidget_eventOnAimingStateChanged_Parms), &Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::NewProp_bIsAiming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/ReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReticleWidget, nullptr, "OnAimingStateChanged", nullptr, nullptr, sizeof(ReticleWidget_eventOnAimingStateChanged_Parms), Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::NewProp_EquippedItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::NewProp_EquippedItem = { "EquippedItem", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReticleWidget_eventOnEquippedItemChanged_Parms, EquippedItem), Z_Construct_UClass_AEquipableItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::NewProp_EquippedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::NewProp_EquippedItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::NewProp_EquippedItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/ReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReticleWidget, nullptr, "OnEquippedItemChanged", nullptr, nullptr, sizeof(ReticleWidget_eventOnEquippedItemChanged_Parms), Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReticleWidget_NoRegister()
	{
		return UReticleWidget::StaticClass();
	}
	struct Z_Construct_UClass_UReticleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentReticle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentReticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentReticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReticleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReticleWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReticleWidget_OnAimingStateChanged, "OnAimingStateChanged" }, // 3807967192
		{ &Z_Construct_UFunction_UReticleWidget_OnEquippedItemChanged, "OnEquippedItemChanged" }, // 1765686352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReticleWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widget/ReticleWidget.h" },
		{ "ModuleRelativePath", "UI/Widget/ReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReticleWidget_Statics::NewProp_CurrentReticle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReticleWidget_Statics::NewProp_CurrentReticle_MetaData[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "UI/Widget/ReticleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReticleWidget_Statics::NewProp_CurrentReticle = { "CurrentReticle", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReticleWidget, CurrentReticle), Z_Construct_UEnum_XYZ_HomeWork_EReticleType, METADATA_PARAMS(Z_Construct_UClass_UReticleWidget_Statics::NewProp_CurrentReticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReticleWidget_Statics::NewProp_CurrentReticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReticleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReticleWidget_Statics::NewProp_CurrentReticle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReticleWidget_Statics::NewProp_CurrentReticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReticleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReticleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReticleWidget_Statics::ClassParams = {
		&UReticleWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReticleWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReticleWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReticleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReticleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReticleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReticleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReticleWidget, 3947772995);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UReticleWidget>()
	{
		return UReticleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReticleWidget(Z_Construct_UClass_UReticleWidget, &UReticleWidget::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UReticleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReticleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
