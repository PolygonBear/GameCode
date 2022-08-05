// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/Navigation/PatrollingPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrollingPath() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_APatrollingPath_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_APatrollingPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APatrollingPath::StaticRegisterNativesAPatrollingPath()
	{
	}
	UClass* Z_Construct_UClass_APatrollingPath_NoRegister()
	{
		return APatrollingPath::StaticClass();
	}
	struct Z_Construct_UClass_APatrollingPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatrollingPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrollingPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Navigation/PatrollingPath.h" },
		{ "ModuleRelativePath", "Actors/Navigation/PatrollingPath.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APatrollingPath_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrollingPath_Statics::NewProp_Waypoints_MetaData[] = {
		{ "Category", "Path" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Actors/Navigation/PatrollingPath.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APatrollingPath_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrollingPath, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APatrollingPath_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatrollingPath_Statics::NewProp_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrollingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrollingPath_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrollingPath_Statics::NewProp_Waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatrollingPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrollingPath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatrollingPath_Statics::ClassParams = {
		&APatrollingPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APatrollingPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APatrollingPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APatrollingPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatrollingPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatrollingPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatrollingPath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatrollingPath, 1854295462);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<APatrollingPath>()
	{
		return APatrollingPath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatrollingPath(Z_Construct_UClass_APatrollingPath, &APatrollingPath::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("APatrollingPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrollingPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
