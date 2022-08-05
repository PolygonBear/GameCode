// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/InterectiveCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterectiveCameraActor() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AInterectiveCameraActor_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AInterectiveCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInterectiveCameraActor::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInterectiveCameraActor::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AInterectiveCameraActor::StaticRegisterNativesAInterectiveCameraActor()
	{
		UClass* Class = AInterectiveCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AInterectiveCameraActor::execOnBeginOverlap },
			{ "OnEndOverlap", &AInterectiveCameraActor::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics
	{
		struct InterectiveCameraActor_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((InterectiveCameraActor_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InterectiveCameraActor_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/InterectiveCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInterectiveCameraActor, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(InterectiveCameraActor_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics
	{
		struct InterectiveCameraActor_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InterectiveCameraActor_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/InterectiveCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInterectiveCameraActor, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(InterectiveCameraActor_eventOnEndOverlap_Parms), Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInterectiveCameraActor_NoRegister()
	{
		return AInterectiveCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AInterectiveCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionToCameraTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionToCameraTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionToPawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionToPawnTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInterectiveCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInterectiveCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInterectiveCameraActor_OnBeginOverlap, "OnBeginOverlap" }, // 4238053044
		{ &Z_Construct_UFunction_AInterectiveCameraActor_OnEndOverlap, "OnEndOverlap" }, // 291769107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterectiveCameraActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "Actors/InterectiveCameraActor.h" },
		{ "ModuleRelativePath", "Actors/InterectiveCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "InterectiveCameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/InterectiveCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInterectiveCameraActor, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToCameraTime_MetaData[] = {
		{ "Category", "Transition settings" },
		{ "ModuleRelativePath", "Actors/InterectiveCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToCameraTime = { "TransitionToCameraTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInterectiveCameraActor, TransitionToCameraTime), METADATA_PARAMS(Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToCameraTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToCameraTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToPawnTime_MetaData[] = {
		{ "Category", "Transition settings" },
		{ "ModuleRelativePath", "Actors/InterectiveCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToPawnTime = { "TransitionToPawnTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInterectiveCameraActor, TransitionToPawnTime), METADATA_PARAMS(Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToPawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToPawnTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInterectiveCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToCameraTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInterectiveCameraActor_Statics::NewProp_TransitionToPawnTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInterectiveCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInterectiveCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInterectiveCameraActor_Statics::ClassParams = {
		&AInterectiveCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInterectiveCameraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInterectiveCameraActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInterectiveCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInterectiveCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInterectiveCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInterectiveCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInterectiveCameraActor, 2098847766);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AInterectiveCameraActor>()
	{
		return AInterectiveCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInterectiveCameraActor(Z_Construct_UClass_AInterectiveCameraActor, &AInterectiveCameraActor::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AInterectiveCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInterectiveCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
