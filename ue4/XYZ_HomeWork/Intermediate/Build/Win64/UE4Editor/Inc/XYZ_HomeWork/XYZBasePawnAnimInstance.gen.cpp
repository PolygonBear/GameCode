// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/XYZBasePawnAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZBasePawnAnimInstance() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZBasePawnAnimInstance_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZBasePawnAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UXYZBasePawnAnimInstance::StaticRegisterNativesUXYZBasePawnAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UXYZBasePawnAnimInstance_NoRegister()
	{
		return UXYZBasePawnAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/Animations/XYZBasePawnAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/Animations/XYZBasePawnAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputForward_MetaData[] = {
		{ "Category", "Base pawn animation instance" },
		{ "ModuleRelativePath", "Characters/Animations/XYZBasePawnAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputForward = { "InputForward", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZBasePawnAnimInstance, InputForward), METADATA_PARAMS(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputRight_MetaData[] = {
		{ "Category", "Base pawn animation instance" },
		{ "ModuleRelativePath", "Characters/Animations/XYZBasePawnAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputRight = { "InputRight", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZBasePawnAnimInstance, InputRight), METADATA_PARAMS(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Base pawn animation instance" },
		{ "ModuleRelativePath", "Characters/Animations/XYZBasePawnAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UXYZBasePawnAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZBasePawnAnimInstance), &Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_InputRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::NewProp_bIsInAir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXYZBasePawnAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::ClassParams = {
		&UXYZBasePawnAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXYZBasePawnAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXYZBasePawnAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXYZBasePawnAnimInstance, 445380520);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UXYZBasePawnAnimInstance>()
	{
		return UXYZBasePawnAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXYZBasePawnAnimInstance(Z_Construct_UClass_UXYZBasePawnAnimInstance, &UXYZBasePawnAnimInstance::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UXYZBasePawnAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXYZBasePawnAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
