// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/AI/BTTasks/BTTask_RandomPointAroundTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RandomPointAroundTarget() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UBTTask_RandomPointAroundTarget_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UBTTask_RandomPointAroundTarget();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_RandomPointAroundTarget::StaticRegisterNativesUBTTask_RandomPointAroundTarget()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RandomPointAroundTarget_NoRegister()
	{
		return UBTTask_RandomPointAroundTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTasks/BTTask_RandomPointAroundTarget.h" },
		{ "ModuleRelativePath", "AI/BTTasks/BTTask_RandomPointAroundTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/BTTasks/BTTask_RandomPointAroundTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RandomPointAroundTarget, Radius), METADATA_PARAMS(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/BTTasks/BTTask_RandomPointAroundTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RandomPointAroundTarget, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_TargetKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_TargetKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_LocationKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/BTTasks/BTTask_RandomPointAroundTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_LocationKey = { "LocationKey", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RandomPointAroundTarget, LocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_LocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_LocationKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_TargetKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::NewProp_LocationKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RandomPointAroundTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::ClassParams = {
		&UBTTask_RandomPointAroundTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RandomPointAroundTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_RandomPointAroundTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_RandomPointAroundTarget, 3528680995);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UBTTask_RandomPointAroundTarget>()
	{
		return UBTTask_RandomPointAroundTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RandomPointAroundTarget(Z_Construct_UClass_UBTTask_RandomPointAroundTarget, &UBTTask_RandomPointAroundTarget::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UBTTask_RandomPointAroundTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RandomPointAroundTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
