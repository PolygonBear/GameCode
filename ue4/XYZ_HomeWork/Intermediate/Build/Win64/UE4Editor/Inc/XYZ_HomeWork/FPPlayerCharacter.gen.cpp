// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/FPPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPPlayerCharacter() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AFPPlayerCharacter_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AFPPlayerCharacter();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZPlayerCharacter();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFPPlayerCharacter::StaticRegisterNativesAFPPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFPPlayerCharacter_NoRegister()
	{
		return AFPPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderCameraMinPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderCameraMinPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderCameraMaxPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderCameraMaxPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderCameraMinYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderCameraMinYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderCameraMaxYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderCameraMaxYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineCameraMinPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineCameraMinPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineCameraMaxPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineCameraMaxPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineCameraMinYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineCameraMinYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineCameraMaxYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineCameraMaxYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXYZPlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/FPPlayerCharacter.h" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonMeshComponent_MetaData[] = {
		{ "Category", "Character | First person" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonMeshComponent = { "FirstPersonMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, FirstPersonMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "Category", "Character | First person" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinPitch_MetaData[] = {
		{ "Category", "Character | First person | Camera | Ladder | Pitch" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "UIMax", "89.000000" },
		{ "UIMn", "-89.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinPitch = { "LadderCameraMinPitch", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, LadderCameraMinPitch), METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxPitch_MetaData[] = {
		{ "Category", "Character | First person | Camera | Ladder | Pitch" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "UIMax", "89.000000" },
		{ "UIMn", "-89.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxPitch = { "LadderCameraMaxPitch", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, LadderCameraMaxPitch), METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinYaw_MetaData[] = {
		{ "Category", "Character | First person | Camera | Ladder | Yaw" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "UIMax", "180.000000" },
		{ "UIMn", "-180.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinYaw = { "LadderCameraMinYaw", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, LadderCameraMinYaw), METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxYaw_MetaData[] = {
		{ "Category", "Character | First person | Camera | Ladder | Yaw" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "UIMax", "180.000000" },
		{ "UIMn", "-180.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxYaw = { "LadderCameraMaxYaw", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, LadderCameraMaxYaw), METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinPitch_MetaData[] = {
		{ "Category", "Character | First person | Camera | Zipline | Pitch" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "UIMax", "89.000000" },
		{ "UIMn", "-89.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinPitch = { "ZiplineCameraMinPitch", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, ZiplineCameraMinPitch), METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxPitch_MetaData[] = {
		{ "Category", "Character | First person | Camera | Zipline | Pitch" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "UIMax", "89.000000" },
		{ "UIMn", "-89.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxPitch = { "ZiplineCameraMaxPitch", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, ZiplineCameraMaxPitch), METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinYaw_MetaData[] = {
		{ "Category", "Character | First person | Camera | Zipline | Yaw" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "UIMax", "180.000000" },
		{ "UIMn", "-180.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinYaw = { "ZiplineCameraMinYaw", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, ZiplineCameraMinYaw), METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxYaw_MetaData[] = {
		{ "Category", "Character | First person | Camera | Zipline | Yaw" },
		{ "ModuleRelativePath", "Characters/FPPlayerCharacter.h" },
		{ "UIMax", "180.000000" },
		{ "UIMn", "-180.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxYaw = { "ZiplineCameraMaxYaw", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPPlayerCharacter, ZiplineCameraMaxYaw), METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMinYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_LadderCameraMaxYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMinYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPPlayerCharacter_Statics::NewProp_ZiplineCameraMaxYaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPPlayerCharacter_Statics::ClassParams = {
		&AFPPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPPlayerCharacter, 2038843828);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AFPPlayerCharacter>()
	{
		return AFPPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPPlayerCharacter(Z_Construct_UClass_AFPPlayerCharacter, &AFPPlayerCharacter::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AFPPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
