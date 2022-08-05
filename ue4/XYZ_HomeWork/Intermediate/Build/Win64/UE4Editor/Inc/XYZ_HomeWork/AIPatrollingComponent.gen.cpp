// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Components/CharacterComponents/AIPatrollingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPatrollingComponent() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAIPatrollingComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UAIPatrollingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_APatrollingPath_NoRegister();
// End Cross Module References
	void UAIPatrollingComponent::StaticRegisterNativesUAIPatrollingComponent()
	{
	}
	UClass* Z_Construct_UClass_UAIPatrollingComponent_NoRegister()
	{
		return UAIPatrollingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAIPatrollingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrollingPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrollingPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPatrollingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPatrollingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CharacterComponents/AIPatrollingComponent.h" },
		{ "ModuleRelativePath", "Components/CharacterComponents/AIPatrollingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPatrollingComponent_Statics::NewProp_PatrollingPath_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Components/CharacterComponents/AIPatrollingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPatrollingComponent_Statics::NewProp_PatrollingPath = { "PatrollingPath", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIPatrollingComponent, PatrollingPath), Z_Construct_UClass_APatrollingPath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIPatrollingComponent_Statics::NewProp_PatrollingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPatrollingComponent_Statics::NewProp_PatrollingPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPatrollingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPatrollingComponent_Statics::NewProp_PatrollingPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPatrollingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPatrollingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIPatrollingComponent_Statics::ClassParams = {
		&UAIPatrollingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIPatrollingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIPatrollingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIPatrollingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPatrollingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPatrollingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIPatrollingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPatrollingComponent, 1816887420);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UAIPatrollingComponent>()
	{
		return UAIPatrollingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPatrollingComponent(Z_Construct_UClass_UAIPatrollingComponent, &UAIPatrollingComponent::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UAIPatrollingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPatrollingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
