// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Components/MovementComponents/GC_BasePawnMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGC_BasePawnMovementComponent() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UGC_BasePawnMovementComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UGC_BasePawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void UGC_BasePawnMovementComponent::StaticRegisterNativesUGC_BasePawnMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UGC_BasePawnMovementComponent_NoRegister()
	{
		return UGC_BasePawnMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGravity_MetaData[];
#endif
		static void NewProp_bEnableGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialJumpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialJumpVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/MovementComponents/GC_BasePawnMovementComponent.h" },
		{ "ModuleRelativePath", "Components/MovementComponents/GC_BasePawnMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "GC_BasePawnMovementComponent" },
		{ "ModuleRelativePath", "Components/MovementComponents/GC_BasePawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_BasePawnMovementComponent, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_bEnableGravity_MetaData[] = {
		{ "Category", "GC_BasePawnMovementComponent" },
		{ "ModuleRelativePath", "Components/MovementComponents/GC_BasePawnMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
	{
		((UGC_BasePawnMovementComponent*)Obj)->bEnableGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_BasePawnMovementComponent), &Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_bEnableGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_bEnableGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_InitialJumpVelocity_MetaData[] = {
		{ "Category", "GC_BasePawnMovementComponent" },
		{ "ModuleRelativePath", "Components/MovementComponents/GC_BasePawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_InitialJumpVelocity = { "InitialJumpVelocity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_BasePawnMovementComponent, InitialJumpVelocity), METADATA_PARAMS(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_InitialJumpVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_InitialJumpVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_bEnableGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::NewProp_InitialJumpVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGC_BasePawnMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::ClassParams = {
		&UGC_BasePawnMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGC_BasePawnMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGC_BasePawnMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGC_BasePawnMovementComponent, 1286025978);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UGC_BasePawnMovementComponent>()
	{
		return UGC_BasePawnMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGC_BasePawnMovementComponent(Z_Construct_UClass_UGC_BasePawnMovementComponent, &UGC_BasePawnMovementComponent::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UGC_BasePawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGC_BasePawnMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
