// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Subsystems/DebugSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugSubsystem() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UDebugSubsystem_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UDebugSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
// End Cross Module References
	DEFINE_FUNCTION(UDebugSubsystem::execEnabledDebugCategory)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CategoryName);
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnabledDebugCategory(Z_Param_Out_CategoryName,Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	void UDebugSubsystem::StaticRegisterNativesUDebugSubsystem()
	{
		UClass* Class = UDebugSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnabledDebugCategory", &UDebugSubsystem::execEnabledDebugCategory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics
	{
		struct DebugSubsystem_eventEnabledDebugCategory_Parms
		{
			FName CategoryName;
			bool bIsEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugSubsystem_eventEnabledDebugCategory_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_CategoryName_MetaData)) };
	void Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((DebugSubsystem_eventEnabledDebugCategory_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DebugSubsystem_eventEnabledDebugCategory_Parms), &Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystems/DebugSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDebugSubsystem, nullptr, "EnabledDebugCategory", nullptr, nullptr, sizeof(DebugSubsystem_eventEnabledDebugCategory_Parms), Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDebugSubsystem_NoRegister()
	{
		return UDebugSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDebugSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDebugSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDebugSubsystem_EnabledDebugCategory, "EnabledDebugCategory" }, // 36426621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Subsystems/DebugSubsystem.h" },
		{ "ModuleRelativePath", "Subsystems/DebugSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDebugSubsystem_Statics::ClassParams = {
		&UDebugSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDebugSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDebugSubsystem, 4115021735);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UDebugSubsystem>()
	{
		return UDebugSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebugSubsystem(Z_Construct_UClass_UDebugSubsystem, &UDebugSubsystem::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UDebugSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
