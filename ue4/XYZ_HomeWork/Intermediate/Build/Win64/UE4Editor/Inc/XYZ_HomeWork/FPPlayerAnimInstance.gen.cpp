// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/FPPlayerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPPlayerAnimInstance() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UFPPlayerAnimInstance_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UFPPlayerAnimInstance();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZCharacterAnimInstance();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UFPPlayerAnimInstance::StaticRegisterNativesUFPPlayerAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UFPPlayerAnimInstance_NoRegister()
	{
		return UFPPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFPPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerCameraPitchAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXYZCharacterAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/Animations/FPPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/Animations/FPPlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPPlayerAnimInstance_Statics::NewProp_PlayerCameraPitchAngle_MetaData[] = {
		{ "Category", "Character | Animations | FiratPerson" },
		{ "ModuleRelativePath", "Characters/Animations/FPPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPPlayerAnimInstance_Statics::NewProp_PlayerCameraPitchAngle = { "PlayerCameraPitchAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPPlayerAnimInstance, PlayerCameraPitchAngle), METADATA_PARAMS(Z_Construct_UClass_UFPPlayerAnimInstance_Statics::NewProp_PlayerCameraPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPPlayerAnimInstance_Statics::NewProp_PlayerCameraPitchAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPPlayerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPPlayerAnimInstance_Statics::NewProp_PlayerCameraPitchAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPPlayerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPPlayerAnimInstance_Statics::ClassParams = {
		&UFPPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFPPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFPPlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPPlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPPlayerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPPlayerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPPlayerAnimInstance, 2941957001);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UFPPlayerAnimInstance>()
	{
		return UFPPlayerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPPlayerAnimInstance(Z_Construct_UClass_UFPPlayerAnimInstance, &UFPPlayerAnimInstance::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UFPPlayerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPPlayerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
