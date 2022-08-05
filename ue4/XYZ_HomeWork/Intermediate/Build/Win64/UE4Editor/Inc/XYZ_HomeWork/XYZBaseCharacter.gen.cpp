// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/XYZBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZBaseCharacter() {}
// Cross Module References
	XYZ_HOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMantlingSettings();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZBaseCharacter_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ULedgeDetectorComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UCharacterAttributeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UCharacterEquipmentComponent_NoRegister();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_ETeams();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FMantlingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern XYZ_HOMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FMantlingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMantlingSettings, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("MantlingSettings"), sizeof(FMantlingSettings), Get_Z_Construct_UScriptStruct_FMantlingSettings_Hash());
	}
	return Singleton;
}
template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<FMantlingSettings>()
{
	return FMantlingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMantlingSettings(FMantlingSettings::StaticStruct, TEXT("/Script/XYZ_HomeWork"), TEXT("MantlingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFMantlingSettings
{
	FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFMantlingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MantlingSettings")),new UScriptStruct::TCppStructOps<FMantlingSettings>);
	}
} ScriptStruct_XYZ_HomeWork_StaticRegisterNativesFMantlingSettings;
	struct Z_Construct_UScriptStruct_FMantlingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantlingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantlingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPMantlingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPMantlingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantlingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantlingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCorrectionXY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationCorrectionXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCorrectionZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationCorrectionZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeightStarTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeightStarTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeightStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHeightStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMantlingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingMontage_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingMontage = { "MantlingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, MantlingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_FPMantlingMontage_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_FPMantlingMontage = { "FPMantlingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, FPMantlingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_FPMantlingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_FPMantlingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingCurve_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingCurve = { "MantlingCurve", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, MantlingCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionXY_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionXY = { "AnimationCorrectionXY", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, AnimationCorrectionXY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionZ_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionZ = { "AnimationCorrectionZ", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, AnimationCorrectionZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, MinHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeightStarTime_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeightStarTime = { "MaxHeightStarTime", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, MaxHeightStarTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeightStarTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeightStarTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeightStartTime_MetaData[] = {
		{ "Category", "MantlingSettings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeightStartTime = { "MinHeightStartTime", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMantlingSettings, MinHeightStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeightStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeightStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMantlingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_FPMantlingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MantlingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_AnimationCorrectionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MaxHeightStarTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantlingSettings_Statics::NewProp_MinHeightStartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMantlingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
		nullptr,
		&NewStructOps,
		"MantlingSettings",
		sizeof(FMantlingSettings),
		alignof(FMantlingSettings),
		Z_Construct_UScriptStruct_FMantlingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMantlingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantlingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMantlingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMantlingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MantlingSettings"), sizeof(FMantlingSettings), Get_Z_Construct_UScriptStruct_FMantlingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMantlingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMantlingSettings_Hash() { return 3362270686U; }
	DEFINE_FUNCTION(AXYZBaseCharacter::execOnPlayerCapsuleHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerCapsuleHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZBaseCharacter::execCanCrawl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCrawl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZBaseCharacter::execUnCrawl)
	{
		P_GET_UBOOL(Z_Param_bClientSimulation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnCrawl(Z_Param_bClientSimulation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZBaseCharacter::execCrawl)
	{
		P_GET_UBOOL(Z_Param_bClientSimulation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Crawl(Z_Param_bClientSimulation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZBaseCharacter::execOnStopAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopAiming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZBaseCharacter::execOnStartAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartAiming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXYZBaseCharacter::execMantle)
	{
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Mantle(Z_Param_bForce);
		P_NATIVE_END;
	}
	static FName NAME_AXYZBaseCharacter_OnStartAiming = FName(TEXT("OnStartAiming"));
	void AXYZBaseCharacter::OnStartAiming()
	{
		ProcessEvent(FindFunctionChecked(NAME_AXYZBaseCharacter_OnStartAiming),NULL);
	}
	static FName NAME_AXYZBaseCharacter_OnStopAiming = FName(TEXT("OnStopAiming"));
	void AXYZBaseCharacter::OnStopAiming()
	{
		ProcessEvent(FindFunctionChecked(NAME_AXYZBaseCharacter_OnStopAiming),NULL);
	}
	void AXYZBaseCharacter::StaticRegisterNativesAXYZBaseCharacter()
	{
		UClass* Class = AXYZBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanCrawl", &AXYZBaseCharacter::execCanCrawl },
			{ "Crawl", &AXYZBaseCharacter::execCrawl },
			{ "Mantle", &AXYZBaseCharacter::execMantle },
			{ "OnPlayerCapsuleHit", &AXYZBaseCharacter::execOnPlayerCapsuleHit },
			{ "OnStartAiming", &AXYZBaseCharacter::execOnStartAiming },
			{ "OnStopAiming", &AXYZBaseCharacter::execOnStopAiming },
			{ "UnCrawl", &AXYZBaseCharacter::execUnCrawl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics
	{
		struct XYZBaseCharacter_eventCanCrawl_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XYZBaseCharacter_eventCanCrawl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XYZBaseCharacter_eventCanCrawl_Parms), &Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZBaseCharacter, nullptr, "CanCrawl", nullptr, nullptr, sizeof(XYZBaseCharacter_eventCanCrawl_Parms), Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics
	{
		struct XYZBaseCharacter_eventCrawl_Parms
		{
			bool bClientSimulation;
		};
		static void NewProp_bClientSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientSimulation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::NewProp_bClientSimulation_SetBit(void* Obj)
	{
		((XYZBaseCharacter_eventCrawl_Parms*)Obj)->bClientSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::NewProp_bClientSimulation = { "bClientSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XYZBaseCharacter_eventCrawl_Parms), &Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::NewProp_bClientSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::NewProp_bClientSimulation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "CPP_Default_bClientSimulation", "false" },
		{ "HidePin", "bClientSimulation" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZBaseCharacter, nullptr, "Crawl", nullptr, nullptr, sizeof(XYZBaseCharacter_eventCrawl_Parms), Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZBaseCharacter_Crawl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZBaseCharacter_Crawl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics
	{
		struct XYZBaseCharacter_eventMantle_Parms
		{
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((XYZBaseCharacter_eventMantle_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XYZBaseCharacter_eventMantle_Parms), &Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZBaseCharacter, nullptr, "Mantle", nullptr, nullptr, sizeof(XYZBaseCharacter_eventMantle_Parms), Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZBaseCharacter_Mantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZBaseCharacter_Mantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics
	{
		struct XYZBaseCharacter_eventOnPlayerCapsuleHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XYZBaseCharacter_eventOnPlayerCapsuleHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XYZBaseCharacter_eventOnPlayerCapsuleHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XYZBaseCharacter_eventOnPlayerCapsuleHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XYZBaseCharacter_eventOnPlayerCapsuleHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XYZBaseCharacter_eventOnPlayerCapsuleHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZBaseCharacter, nullptr, "OnPlayerCapsuleHit", nullptr, nullptr, sizeof(XYZBaseCharacter_eventOnPlayerCapsuleHit_Parms), Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZBaseCharacter_OnStartAiming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_OnStartAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZBaseCharacter_OnStartAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZBaseCharacter, nullptr, "OnStartAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_OnStartAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_OnStartAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZBaseCharacter_OnStartAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZBaseCharacter_OnStartAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZBaseCharacter_OnStopAiming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_OnStopAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZBaseCharacter_OnStopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZBaseCharacter, nullptr, "OnStopAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_OnStopAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_OnStopAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZBaseCharacter_OnStopAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZBaseCharacter_OnStopAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics
	{
		struct XYZBaseCharacter_eventUnCrawl_Parms
		{
			bool bClientSimulation;
		};
		static void NewProp_bClientSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientSimulation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::NewProp_bClientSimulation_SetBit(void* Obj)
	{
		((XYZBaseCharacter_eventUnCrawl_Parms*)Obj)->bClientSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::NewProp_bClientSimulation = { "bClientSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XYZBaseCharacter_eventUnCrawl_Parms), &Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::NewProp_bClientSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::NewProp_bClientSimulation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "CPP_Default_bClientSimulation", "false" },
		{ "HidePin", "bClientSimulation" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXYZBaseCharacter, nullptr, "UnCrawl", nullptr, nullptr, sizeof(XYZBaseCharacter_eventUnCrawl_Parms), Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AXYZBaseCharacter_NoRegister()
	{
		return AXYZBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AXYZBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlidingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardLandingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HardLandingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPHardLandingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPHardLandingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeDetectorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LedgeDetectorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAttributeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterAttributeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighMantlingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighMantlingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowMantlingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowMantlingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowMantleMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowMantleMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrawled_MetaData[];
#endif
		static void NewProp_bIsCrawled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrawled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighMantleMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HighMantleMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardLandingHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardLandingHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightFootSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftFootSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IKTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IKInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeathAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnDeathAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallDamageCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FallDamageCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEquipmentComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterEquipmentComponents;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXYZBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AXYZBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AXYZBaseCharacter_CanCrawl, "CanCrawl" }, // 510136110
		{ &Z_Construct_UFunction_AXYZBaseCharacter_Crawl, "Crawl" }, // 3707262859
		{ &Z_Construct_UFunction_AXYZBaseCharacter_Mantle, "Mantle" }, // 3172865092
		{ &Z_Construct_UFunction_AXYZBaseCharacter_OnPlayerCapsuleHit, "OnPlayerCapsuleHit" }, // 4294229935
		{ &Z_Construct_UFunction_AXYZBaseCharacter_OnStartAiming, "OnStartAiming" }, // 2229491890
		{ &Z_Construct_UFunction_AXYZBaseCharacter_OnStopAiming, "OnStopAiming" }, // 2958440719
		{ &Z_Construct_UFunction_AXYZBaseCharacter_UnCrawl, "UnCrawl" }, // 2334101138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/XYZBaseCharacter.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_SlidingMontage_MetaData[] = {
		{ "Category", "XYZBaseCharacter" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_SlidingMontage = { "SlidingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, SlidingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_SlidingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_SlidingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingMontage_MetaData[] = {
		{ "Category", "Character | Hard landing" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingMontage = { "HardLandingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, HardLandingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FPHardLandingMontage_MetaData[] = {
		{ "Category", "Character | Hard landing" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FPHardLandingMontage = { "FPHardLandingMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, FPHardLandingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FPHardLandingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FPHardLandingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LedgeDetectorComponent_MetaData[] = {
		{ "Category", "Character | Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LedgeDetectorComponent = { "LedgeDetectorComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, LedgeDetectorComponent), Z_Construct_UClass_ULedgeDetectorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LedgeDetectorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LedgeDetectorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterAttributeComponent_MetaData[] = {
		{ "Category", "Character | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterAttributeComponent = { "CharacterAttributeComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, CharacterAttributeComponent), Z_Construct_UClass_UCharacterAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterAttributeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterAttributeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantlingSettings_MetaData[] = {
		{ "Category", "Character | Movement | Mantling" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantlingSettings = { "HighMantlingSettings", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, HighMantlingSettings), Z_Construct_UScriptStruct_FMantlingSettings, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantlingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantlingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantlingSettings_MetaData[] = {
		{ "Category", "Character | Movement | Mantling" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantlingSettings = { "LowMantlingSettings", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, LowMantlingSettings), Z_Construct_UScriptStruct_FMantlingSettings, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantlingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantlingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantleMaxHeight_MetaData[] = {
		{ "Category", "Character | Movement | Mantling" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantleMaxHeight = { "LowMantleMaxHeight", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, LowMantleMaxHeight), METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantleMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantleMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_bIsCrawled_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_bIsCrawled_SetBit(void* Obj)
	{
		((AXYZBaseCharacter*)Obj)->bIsCrawled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_bIsCrawled = { "bIsCrawled", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AXYZBaseCharacter), &Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_bIsCrawled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_bIsCrawled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_bIsCrawled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantleMontage_MetaData[] = {
		{ "Category", "XYZBaseCharacter" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantleMontage = { "HighMantleMontage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, HighMantleMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantleMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantleMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingHeight_MetaData[] = {
		{ "Category", "Character | Hard landing" },
		{ "Comment", "/* Hard Landing */" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "ToolTip", "Hard Landing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingHeight = { "HardLandingHeight", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, HardLandingHeight), METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_RightFootSocketName_MetaData[] = {
		{ "Category", "Character | IK settings" },
		{ "Comment", "/* Start IK */" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "ToolTip", "Start IK" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_RightFootSocketName = { "RightFootSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, RightFootSocketName), METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_RightFootSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_RightFootSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LeftFootSocketName_MetaData[] = {
		{ "Category", "Character | IK settings" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LeftFootSocketName = { "LeftFootSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, LeftFootSocketName), METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LeftFootSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LeftFootSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKTraceDistance_MetaData[] = {
		{ "Category", "Character | IK settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKTraceDistance = { "IKTraceDistance", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, IKTraceDistance), METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKInterpSpeed_MetaData[] = {
		{ "Category", "Character | IK settings" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKInterpSpeed = { "IKInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, IKInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Character | Controls" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Character | Controls" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_OnDeathAnimMontage_MetaData[] = {
		{ "Category", "Character | Animations" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_OnDeathAnimMontage = { "OnDeathAnimMontage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, OnDeathAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_OnDeathAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_OnDeathAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FallDamageCurve_MetaData[] = {
		{ "Category", "Character | Attributes" },
		{ "Comment", "// Damage depending from fall height  (in meters)\n" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
		{ "ToolTip", "Damage depending from fall height  (in meters)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FallDamageCurve = { "FallDamageCurve", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, FallDamageCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FallDamageCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FallDamageCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterEquipmentComponents_MetaData[] = {
		{ "Category", "Character | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterEquipmentComponents = { "CharacterEquipmentComponents", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, CharacterEquipmentComponents), Z_Construct_UClass_UCharacterEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterEquipmentComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterEquipmentComponents_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "Character | Team" },
		{ "ModuleRelativePath", "Characters/XYZBaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXYZBaseCharacter, Team), Z_Construct_UEnum_XYZ_HomeWork_ETeams, METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXYZBaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_SlidingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FPHardLandingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LedgeDetectorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterAttributeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantlingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantlingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LowMantleMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_bIsCrawled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HighMantleMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_HardLandingHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_RightFootSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_LeftFootSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_IKInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_OnDeathAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_FallDamageCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_CharacterEquipmentComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_Team_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXYZBaseCharacter_Statics::NewProp_Team,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AXYZBaseCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AXYZBaseCharacter, IGenericTeamAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXYZBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXYZBaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXYZBaseCharacter_Statics::ClassParams = {
		&AXYZBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AXYZBaseCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AXYZBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXYZBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXYZBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXYZBaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXYZBaseCharacter, 1989375677);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AXYZBaseCharacter>()
	{
		return AXYZBaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXYZBaseCharacter(Z_Construct_UClass_AXYZBaseCharacter, &AXYZBaseCharacter::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AXYZBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXYZBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
