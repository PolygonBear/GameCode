// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/UI/Widget/CharacterAttributesWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAttributesWidget() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UCharacterAttributesWidget_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UCharacterAttributesWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterAttributesWidget::execOxygenVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->OxygenVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAttributesWidget::execStaminaVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateVisibility*)Z_Param__Result=P_THIS->StaminaVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAttributesWidget::execUpdateOxygenPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OxygenPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOxygenPercent(Z_Param_OxygenPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAttributesWidget::execUpdateStaminaPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StaminaPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStaminaPercent(Z_Param_StaminaPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterAttributesWidget::execUpdateHealthPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealthPercent(Z_Param_HealthPercent);
		P_NATIVE_END;
	}
	void UCharacterAttributesWidget::StaticRegisterNativesUCharacterAttributesWidget()
	{
		UClass* Class = UCharacterAttributesWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OxygenVisibility", &UCharacterAttributesWidget::execOxygenVisibility },
			{ "StaminaVisibility", &UCharacterAttributesWidget::execStaminaVisibility },
			{ "UpdateHealthPercent", &UCharacterAttributesWidget::execUpdateHealthPercent },
			{ "UpdateOxygenPercent", &UCharacterAttributesWidget::execUpdateOxygenPercent },
			{ "UpdateStaminaPercent", &UCharacterAttributesWidget::execUpdateStaminaPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics
	{
		struct CharacterAttributesWidget_eventOxygenVisibility_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributesWidget_eventOxygenVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributesWidget, nullptr, "OxygenVisibility", nullptr, nullptr, sizeof(CharacterAttributesWidget_eventOxygenVisibility_Parms), Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics
	{
		struct CharacterAttributesWidget_eventStaminaVisibility_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributesWidget_eventStaminaVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributesWidget, nullptr, "StaminaVisibility", nullptr, nullptr, sizeof(CharacterAttributesWidget_eventStaminaVisibility_Parms), Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics
	{
		struct CharacterAttributesWidget_eventUpdateHealthPercent_Parms
		{
			float HealthPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributesWidget_eventUpdateHealthPercent_Parms, HealthPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::NewProp_HealthPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributesWidget, nullptr, "UpdateHealthPercent", nullptr, nullptr, sizeof(CharacterAttributesWidget_eventUpdateHealthPercent_Parms), Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics
	{
		struct CharacterAttributesWidget_eventUpdateOxygenPercent_Parms
		{
			float OxygenPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OxygenPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::NewProp_OxygenPercent = { "OxygenPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributesWidget_eventUpdateOxygenPercent_Parms, OxygenPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::NewProp_OxygenPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributesWidget, nullptr, "UpdateOxygenPercent", nullptr, nullptr, sizeof(CharacterAttributesWidget_eventUpdateOxygenPercent_Parms), Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics
	{
		struct CharacterAttributesWidget_eventUpdateStaminaPercent_Parms
		{
			float StaminaPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::NewProp_StaminaPercent = { "StaminaPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributesWidget_eventUpdateStaminaPercent_Parms, StaminaPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::NewProp_StaminaPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributesWidget, nullptr, "UpdateStaminaPercent", nullptr, nullptr, sizeof(CharacterAttributesWidget_eventUpdateStaminaPercent_Parms), Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterAttributesWidget_NoRegister()
	{
		return UCharacterAttributesWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAttributesWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealthPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealthPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStaminaPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentStaminaPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentOxygenPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentOxygenPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAttributesWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterAttributesWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAttributesWidget_OxygenVisibility, "OxygenVisibility" }, // 2220245087
		{ &Z_Construct_UFunction_UCharacterAttributesWidget_StaminaVisibility, "StaminaVisibility" }, // 2361790200
		{ &Z_Construct_UFunction_UCharacterAttributesWidget_UpdateHealthPercent, "UpdateHealthPercent" }, // 3453882932
		{ &Z_Construct_UFunction_UCharacterAttributesWidget_UpdateOxygenPercent, "UpdateOxygenPercent" }, // 3873424530
		{ &Z_Construct_UFunction_UCharacterAttributesWidget_UpdateStaminaPercent, "UpdateStaminaPercent" }, // 1773252932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributesWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Widget/CharacterAttributesWidget.h" },
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentHealthPercent_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentHealthPercent = { "CurrentHealthPercent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributesWidget, CurrentHealthPercent), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentHealthPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentHealthPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentStaminaPercent_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentStaminaPercent = { "CurrentStaminaPercent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributesWidget, CurrentStaminaPercent), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentStaminaPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentStaminaPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentOxygenPercent_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "UI/Widget/CharacterAttributesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentOxygenPercent = { "CurrentOxygenPercent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributesWidget, CurrentOxygenPercent), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentOxygenPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentOxygenPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAttributesWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentHealthPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentStaminaPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributesWidget_Statics::NewProp_CurrentOxygenPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAttributesWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAttributesWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAttributesWidget_Statics::ClassParams = {
		&UCharacterAttributesWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterAttributesWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributesWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributesWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributesWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterAttributesWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterAttributesWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterAttributesWidget, 2467577764);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UCharacterAttributesWidget>()
	{
		return UCharacterAttributesWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterAttributesWidget(Z_Construct_UClass_UCharacterAttributesWidget, &UCharacterAttributesWidget::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UCharacterAttributesWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAttributesWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
