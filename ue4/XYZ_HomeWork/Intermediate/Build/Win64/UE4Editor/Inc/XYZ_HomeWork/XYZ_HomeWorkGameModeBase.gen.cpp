// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/XYZ_HomeWorkGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZ_HomeWorkGameModeBase() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZ_HomeWorkGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	void AXYZ_HomeWorkGameModeBase::StaticRegisterNativesAXYZ_HomeWorkGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_NoRegister()
	{
		return AXYZ_HomeWorkGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "XYZ_HomeWorkGameModeBase.h" },
		{ "ModuleRelativePath", "XYZ_HomeWorkGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXYZ_HomeWorkGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_Statics::ClassParams = {
		&AXYZ_HomeWorkGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXYZ_HomeWorkGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXYZ_HomeWorkGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXYZ_HomeWorkGameModeBase, 3869272858);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AXYZ_HomeWorkGameModeBase>()
	{
		return AXYZ_HomeWorkGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXYZ_HomeWorkGameModeBase(Z_Construct_UClass_AXYZ_HomeWorkGameModeBase, &AXYZ_HomeWorkGameModeBase::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AXYZ_HomeWorkGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXYZ_HomeWorkGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
