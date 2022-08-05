// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Components/LedgeDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLedgeDetectorComponent() {}
// Cross Module References
	XYZ_HOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLedgeDescription();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ULedgeDetectorComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ULedgeDetectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FLedgeDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern XYZ_HOMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FLedgeDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLedgeDescription, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("LedgeDescription"), sizeof(FLedgeDescription), Get_Z_Construct_UScriptStruct_FLedgeDescription_Hash());
	}
	return Singleton;
}
template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<FLedgeDescription>()
{
	return FLedgeDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLedgeDescription(FLedgeDescription::StaticStruct, TEXT("/Script/XYZ_HomeWork"), TEXT("LedgeDescription"), false, nullptr, nullptr);
static struct FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFLedgeDescription
{
	FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFLedgeDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LedgeDescription")),new UScriptStruct::TCppStructOps<FLedgeDescription>);
	}
} ScriptStruct_XYZ_HomeWork_StaticRegisterNativesFLedgeDescription;
	struct Z_Construct_UScriptStruct_FLedgeDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LedgeNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotaion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotaion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedgeDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLedgeDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Ledge description" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLedgeDescription, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_LedgeNormal_MetaData[] = {
		{ "Category", "Ledge description" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_LedgeNormal = { "LedgeNormal", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLedgeDescription, LedgeNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_LedgeNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_LedgeNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Rotaion_MetaData[] = {
		{ "Category", "Ledge description" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Rotaion = { "Rotaion", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLedgeDescription, Rotaion), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Rotaion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Rotaion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_TargetHeight_MetaData[] = {
		{ "Category", "Ledge description" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_TargetHeight = { "TargetHeight", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLedgeDescription, TargetHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_TargetHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_TargetHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLedgeDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_LedgeNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_Rotaion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedgeDescription_Statics::NewProp_TargetHeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLedgeDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
		nullptr,
		&NewStructOps,
		"LedgeDescription",
		sizeof(FLedgeDescription),
		alignof(FLedgeDescription),
		Z_Construct_UScriptStruct_FLedgeDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedgeDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLedgeDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedgeDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLedgeDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLedgeDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LedgeDescription"), sizeof(FLedgeDescription), Get_Z_Construct_UScriptStruct_FLedgeDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLedgeDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLedgeDescription_Hash() { return 2743884683U; }
	void ULedgeDetectorComponent::StaticRegisterNativesULedgeDetectorComponent()
	{
	}
	UClass* Z_Construct_UClass_ULedgeDetectorComponent_NoRegister()
	{
		return ULedgeDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULedgeDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimunLedgeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimunLedgeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximunLedgeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximunLedgeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardCheckDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardCheckDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULedgeDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULedgeDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/LedgeDetectorComponent.h" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MinimunLedgeHeight_MetaData[] = {
		{ "Category", "Detection settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MinimunLedgeHeight = { "MinimunLedgeHeight", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULedgeDetectorComponent, MinimunLedgeHeight), METADATA_PARAMS(Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MinimunLedgeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MinimunLedgeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MaximunLedgeHeight_MetaData[] = {
		{ "Category", "Detection settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MaximunLedgeHeight = { "MaximunLedgeHeight", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULedgeDetectorComponent, MaximunLedgeHeight), METADATA_PARAMS(Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MaximunLedgeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MaximunLedgeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_ForwardCheckDistance_MetaData[] = {
		{ "Category", "Detection settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/LedgeDetectorComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_ForwardCheckDistance = { "ForwardCheckDistance", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULedgeDetectorComponent, ForwardCheckDistance), METADATA_PARAMS(Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_ForwardCheckDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_ForwardCheckDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULedgeDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MinimunLedgeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_MaximunLedgeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULedgeDetectorComponent_Statics::NewProp_ForwardCheckDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULedgeDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULedgeDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULedgeDetectorComponent_Statics::ClassParams = {
		&ULedgeDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULedgeDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULedgeDetectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULedgeDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULedgeDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULedgeDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULedgeDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULedgeDetectorComponent, 2722639275);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<ULedgeDetectorComponent>()
	{
		return ULedgeDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULedgeDetectorComponent(Z_Construct_UClass_ULedgeDetectorComponent, &ULedgeDetectorComponent::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("ULedgeDetectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULedgeDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
