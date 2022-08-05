// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/AI/Characters/XYZAICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZAICharacter() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZAICharacter_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZAICharacter();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAIPatrollingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AXYZAICharacter::StaticRegisterNativesAXYZAICharacter()
	{
	}
	UClass* Z_Construct_UClass_AXYZAICharacter_NoRegister()
	{
		return AXYZAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AXYZAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPatrollingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPatrollingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXYZAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXYZBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZAICharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/Characters/XYZAICharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/Characters/XYZAICharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_AIPatrollingComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Characters/XYZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_AIPatrollingComponent = { "AIPatrollingComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZAICharacter, AIPatrollingComponent), Z_Construct_UClass_UAIPatrollingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_AIPatrollingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_AIPatrollingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/Characters/XYZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZAICharacter, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_BehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXYZAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_AIPatrollingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZAICharacter_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXYZAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXYZAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXYZAICharacter_Statics::ClassParams = {
		&AXYZAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AXYZAICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AXYZAICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXYZAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXYZAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXYZAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXYZAICharacter, 958198034);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AXYZAICharacter>()
	{
		return AXYZAICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXYZAICharacter(Z_Construct_UClass_AXYZAICharacter, &AXYZAICharacter::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AXYZAICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXYZAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
