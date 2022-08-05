// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/SpiderPawnAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiderPawnAnimInstance() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_USpiderPawnAnimInstance_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_USpiderPawnAnimInstance();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZBasePawnAnimInstance();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USpiderPawnAnimInstance::StaticRegisterNativesUSpiderPawnAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_USpiderPawnAnimInstance_NoRegister()
	{
		return USpiderPawnAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USpiderPawnAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFrontFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFrontFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFrontFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFrontFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRearFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightRearFootEffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRearFootEffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftRearFootEffectorLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiderPawnAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXYZBasePawnAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderPawnAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/Animations/SpiderPawnAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/Animations/SpiderPawnAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightFrontFootEffectorLocation_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ModuleRelativePath", "Characters/Animations/SpiderPawnAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightFrontFootEffectorLocation = { "RightFrontFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderPawnAnimInstance, RightFrontFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightFrontFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightFrontFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftFrontFootEffectorLocation_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ModuleRelativePath", "Characters/Animations/SpiderPawnAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftFrontFootEffectorLocation = { "LeftFrontFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderPawnAnimInstance, LeftFrontFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftFrontFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftFrontFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightRearFootEffectorLocation_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ModuleRelativePath", "Characters/Animations/SpiderPawnAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightRearFootEffectorLocation = { "RightRearFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderPawnAnimInstance, RightRearFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightRearFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightRearFootEffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftRearFootEffectorLocation_MetaData[] = {
		{ "Category", "Spider bot|IK settings" },
		{ "ModuleRelativePath", "Characters/Animations/SpiderPawnAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftRearFootEffectorLocation = { "LeftRearFootEffectorLocation", nullptr, (EPropertyFlags)0x0020080000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiderPawnAnimInstance, LeftRearFootEffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftRearFootEffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftRearFootEffectorLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiderPawnAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightFrontFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftFrontFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_RightRearFootEffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiderPawnAnimInstance_Statics::NewProp_LeftRearFootEffectorLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiderPawnAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiderPawnAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiderPawnAnimInstance_Statics::ClassParams = {
		&USpiderPawnAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiderPawnAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiderPawnAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiderPawnAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiderPawnAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiderPawnAnimInstance, 2079835072);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<USpiderPawnAnimInstance>()
	{
		return USpiderPawnAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiderPawnAnimInstance(Z_Construct_UClass_USpiderPawnAnimInstance, &USpiderPawnAnimInstance::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("USpiderPawnAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiderPawnAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
