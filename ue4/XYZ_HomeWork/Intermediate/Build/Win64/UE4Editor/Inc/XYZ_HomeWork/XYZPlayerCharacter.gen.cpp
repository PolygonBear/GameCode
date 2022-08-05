// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/XYZPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZPlayerCharacter() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZPlayerCharacter_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZPlayerCharacter();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AXYZPlayerCharacter::execAimingFOVTimeLineFloatReturn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AimingFOVTimeLineFloatReturn(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZPlayerCharacter::execTimelineFloatReturn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineFloatReturn(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZPlayerCharacter::execOnSprintEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSprintEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZPlayerCharacter::execOnSprintStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSprintStart_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AXYZPlayerCharacter_OnSprintEnd = FName(TEXT("OnSprintEnd"));
	void AXYZPlayerCharacter::OnSprintEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_AXYZPlayerCharacter_OnSprintEnd),NULL);
	}
	static FName NAME_AXYZPlayerCharacter_OnSprintStart = FName(TEXT("OnSprintStart"));
	void AXYZPlayerCharacter::OnSprintStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AXYZPlayerCharacter_OnSprintStart),NULL);
	}
	void AXYZPlayerCharacter::StaticRegisterNativesAXYZPlayerCharacter()
	{
		UClass* Class = AXYZPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AimingFOVTimeLineFloatReturn", &AXYZPlayerCharacter::execAimingFOVTimeLineFloatReturn },
			{ "OnSprintEnd", &AXYZPlayerCharacter::execOnSprintEnd },
			{ "OnSprintStart", &AXYZPlayerCharacter::execOnSprintStart },
			{ "TimelineFloatReturn", &AXYZPlayerCharacter::execTimelineFloatReturn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics
	{
		struct XYZPlayerCharacter_eventAimingFOVTimeLineFloatReturn_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XYZPlayerCharacter_eventAimingFOVTimeLineFloatReturn_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZPlayerCharacter, nullptr, "AimingFOVTimeLineFloatReturn", nullptr, nullptr, sizeof(XYZPlayerCharacter_eventAimingFOVTimeLineFloatReturn_Parms), Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character | Movement" },
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZPlayerCharacter, nullptr, "OnSprintEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character | Movement" },
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZPlayerCharacter, nullptr, "OnSprintStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics
	{
		struct XYZPlayerCharacter_eventTimelineFloatReturn_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XYZPlayerCharacter_eventTimelineFloatReturn_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZPlayerCharacter, nullptr, "TimelineFloatReturn", nullptr, nullptr, sizeof(XYZPlayerCharacter_eventTimelineFloatReturn_Parms), Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AXYZPlayerCharacter_NoRegister()
	{
		return AXYZPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AXYZPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimingFOVCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimingFOVCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXYZPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXYZBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AXYZPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AXYZPlayerCharacter_AimingFOVTimeLineFloatReturn, "AimingFOVTimeLineFloatReturn" }, // 3658691030
		{ &Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintEnd, "OnSprintEnd" }, // 258343209
		{ &Z_Construct_UFunction_AXYZPlayerCharacter_OnSprintStart, "OnSprintStart" }, // 821934418
		{ &Z_Construct_UFunction_AXYZPlayerCharacter_TimelineFloatReturn, "TimelineFloatReturn" }, // 2987401508
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/XYZPlayerCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZPlayerCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZPlayerCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SprintArmLength_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SprintArmLength = { "SprintArmLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZPlayerCharacter, SprintArmLength), METADATA_PARAMS(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SprintArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SprintArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmCurve_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmCurve = { "SpringArmCurve", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZPlayerCharacter, SpringArmCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_AimingFOVCurve_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "ModuleRelativePath", "Characters/XYZPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_AimingFOVCurve = { "AimingFOVCurve", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZPlayerCharacter, AimingFOVCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_AimingFOVCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_AimingFOVCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXYZPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SprintArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_SpringArmCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZPlayerCharacter_Statics::NewProp_AimingFOVCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXYZPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXYZPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXYZPlayerCharacter_Statics::ClassParams = {
		&AXYZPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AXYZPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXYZPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXYZPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXYZPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXYZPlayerCharacter, 2146639332);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AXYZPlayerCharacter>()
	{
		return AXYZPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXYZPlayerCharacter(Z_Construct_UClass_AXYZPlayerCharacter, &AXYZPlayerCharacter::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AXYZPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXYZPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
