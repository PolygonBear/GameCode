// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/SpiderPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiderPawn() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ASpiderPawn_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ASpiderPawn();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AHomeWorkBasePawn();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpiderPawn::execGetIKLeftRearFootOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIKLeftRearFootOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpiderPawn::execGetIKLeftFrontFootOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIKLeftFrontFootOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpiderPawn::execGetIKRightRearFootOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIKRightRearFootOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpiderPawn::execGetIKRightFrontFootOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIKRightFrontFootOffset();
		P_NATIVE_END;
	}
	void ASpiderPawn::StaticRegisterNativesASpiderPawn()
	{
		UClass* Class = ASpiderPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIKLeftFrontFootOffset", &ASpiderPawn::execGetIKLeftFrontFootOffset },
			{ "GetIKLeftRearFootOffset", &ASpiderPawn::execGetIKLeftRearFootOffset },
			{ "GetIKRightFrontFootOffset", &ASpiderPawn::execGetIKRightFrontFootOffset },
			{ "GetIKRightRearFootOffset", &ASpiderPawn::execGetIKRightRearFootOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics
	{
		struct SpiderPawn_eventGetIKLeftFrontFootOffset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderPawn_eventGetIKLeftFrontFootOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderPawn, nullptr, "GetIKLeftFrontFootOffset", nullptr, nullptr, sizeof(SpiderPawn_eventGetIKLeftFrontFootOffset_Parms), Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics
	{
		struct SpiderPawn_eventGetIKLeftRearFootOffset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderPawn_eventGetIKLeftRearFootOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderPawn, nullptr, "GetIKLeftRearFootOffset", nullptr, nullptr, sizeof(SpiderPawn_eventGetIKLeftRearFootOffset_Parms), Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics
	{
		struct SpiderPawn_eventGetIKRightFrontFootOffset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderPawn_eventGetIKRightFrontFootOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderPawn, nullptr, "GetIKRightFrontFootOffset", nullptr, nullptr, sizeof(SpiderPawn_eventGetIKRightFrontFootOffset_Parms), Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics
	{
		struct SpiderPawn_eventGetIKRightRearFootOffset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpiderPawn_eventGetIKRightRearFootOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpiderPawn, nullptr, "GetIKRightRearFootOffset", nullptr, nullptr, sizeof(SpiderPawn_eventGetIKRightRearFootOffset_Parms), Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpiderPawn_NoRegister()
	{
		return ASpiderPawn::StaticClass();
	}
	struct Z_Construct_UClass_ASpiderPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFrontFootSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightFrontFootSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRearFootSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightRearFootSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFrontFootSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftFrontFootSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRearFootSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftRearFootSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKTraceExtendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IKTraceExtendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IKInterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpiderPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHomeWorkBasePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpiderPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpiderPawn_GetIKLeftFrontFootOffset, "GetIKLeftFrontFootOffset" }, // 2268971933
		{ &Z_Construct_UFunction_ASpiderPawn_GetIKLeftRearFootOffset, "GetIKLeftRearFootOffset" }, // 148572465
		{ &Z_Construct_UFunction_ASpiderPawn_GetIKRightFrontFootOffset, "GetIKRightFrontFootOffset" }, // 2407895619
		{ &Z_Construct_UFunction_ASpiderPawn_GetIKRightRearFootOffset, "GetIKRightRearFootOffset" }, // 3422858684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/SpiderPawn.h" },
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderPawn_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Spider bot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpiderPawn_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderPawn, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightFrontFootSocketName_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightFrontFootSocketName = { "RightFrontFootSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderPawn, RightFrontFootSocketName), METADATA_PARAMS(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightFrontFootSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightFrontFootSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightRearFootSocketName_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightRearFootSocketName = { "RightRearFootSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderPawn, RightRearFootSocketName), METADATA_PARAMS(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightRearFootSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightRearFootSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftFrontFootSocketName_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftFrontFootSocketName = { "LeftFrontFootSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderPawn, LeftFrontFootSocketName), METADATA_PARAMS(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftFrontFootSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftFrontFootSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftRearFootSocketName_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftRearFootSocketName = { "LeftRearFootSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderPawn, LeftRearFootSocketName), METADATA_PARAMS(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftRearFootSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftRearFootSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKTraceExtendDistance_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKTraceExtendDistance = { "IKTraceExtendDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderPawn, IKTraceExtendDistance), METADATA_PARAMS(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKTraceExtendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKTraceExtendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKInterpSpeed_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/SpiderPawn.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKInterpSpeed = { "IKInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpiderPawn, IKInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKInterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpiderPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderPawn_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightFrontFootSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderPawn_Statics::NewProp_RightRearFootSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftFrontFootSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderPawn_Statics::NewProp_LeftRearFootSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKTraceExtendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderPawn_Statics::NewProp_IKInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpiderPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiderPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpiderPawn_Statics::ClassParams = {
		&ASpiderPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpiderPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpiderPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpiderPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpiderPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpiderPawn, 617401811);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<ASpiderPawn>()
	{
		return ASpiderPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpiderPawn(Z_Construct_UClass_ASpiderPawn, &ASpiderPawn::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("ASpiderPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
