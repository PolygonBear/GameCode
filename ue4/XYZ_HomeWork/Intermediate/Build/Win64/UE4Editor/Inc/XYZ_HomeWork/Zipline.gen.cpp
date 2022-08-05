// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/Interactive/Environment/Zipline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZipline() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AZipline_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AZipline();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AInteractiveActor();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AZipline::StaticRegisterNativesAZipline()
	{
	}
	UClass* Z_Construct_UClass_AZipline_NoRegister()
	{
		return AZipline::StaticClass();
	}
	struct Z_Construct_UClass_AZipline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPoleBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondPoleBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPoleStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPoleStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPoleStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondPoleStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableStaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CableStaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZipline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/Interactive/Environment/Zipline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Zipline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleBottom_MetaData[] = {
		{ "Category", "Zipline parameters" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Zipline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleBottom = { "SecondPoleBottom", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZipline, SecondPoleBottom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::NewProp_FirstPoleStaticMeshComponent_MetaData[] = {
		{ "Category", "Zipline parameters" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Zipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZipline_Statics::NewProp_FirstPoleStaticMeshComponent = { "FirstPoleStaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZipline, FirstPoleStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::NewProp_FirstPoleStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::NewProp_FirstPoleStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleStaticMeshComponent_MetaData[] = {
		{ "Category", "Zipline parameters" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Zipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleStaticMeshComponent = { "SecondPoleStaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZipline, SecondPoleStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::NewProp_CableStaticMeshComponent_MetaData[] = {
		{ "Category", "Zipline parameters" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Zipline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZipline_Statics::NewProp_CableStaticMeshComponent = { "CableStaticMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZipline, CableStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::NewProp_CableStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::NewProp_CableStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZipline_Statics::NewProp_DirectionVector_MetaData[] = {
		{ "Category", "Zipline parameters" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Zipline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZipline_Statics::NewProp_DirectionVector = { "DirectionVector", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZipline, DirectionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::NewProp_DirectionVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::NewProp_DirectionVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZipline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZipline_Statics::NewProp_FirstPoleStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZipline_Statics::NewProp_SecondPoleStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZipline_Statics::NewProp_CableStaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZipline_Statics::NewProp_DirectionVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZipline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZipline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZipline_Statics::ClassParams = {
		&AZipline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZipline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZipline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZipline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZipline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZipline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZipline, 19162355);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AZipline>()
	{
		return AZipline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZipline(Z_Construct_UClass_AZipline, &AZipline::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AZipline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZipline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
