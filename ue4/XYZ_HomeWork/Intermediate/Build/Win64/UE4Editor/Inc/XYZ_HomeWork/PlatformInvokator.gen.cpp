// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/PlatformInvokator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformInvokator() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_APlatformInvokator_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_APlatformInvokator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ABasePlatform_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlatformInvokator::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APlatformInvokator::StaticRegisterNativesAPlatformInvokator()
	{
		UClass* Class = APlatformInvokator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &APlatformInvokator::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics
	{
		struct PlatformInvokator_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformInvokator_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformInvokator_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformInvokator_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformInvokator_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PlatformInvokator_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformInvokator_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlatformInvokator_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/PlatformInvokator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformInvokator, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(PlatformInvokator_eventOnOverlapBegin_Parms), Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlatformInvokator_NoRegister()
	{
		return APlatformInvokator::StaticClass();
	}
	struct Z_Construct_UClass_APlatformInvokator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Platforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformInvokator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformInvokator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformInvokator_OnOverlapBegin, "OnOverlapBegin" }, // 2087064667
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformInvokator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PlatformInvokator.h" },
		{ "ModuleRelativePath", "Actors/PlatformInvokator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformInvokator_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Platforms" },
		{ "ModuleRelativePath", "Actors/PlatformInvokator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformInvokator_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformInvokator, Platforms), Z_Construct_UClass_ABasePlatform_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatformInvokator_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformInvokator_Statics::NewProp_Platforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformInvokator_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "PlatformInvokator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/PlatformInvokator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformInvokator_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformInvokator, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatformInvokator_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformInvokator_Statics::NewProp_BoxCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformInvokator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformInvokator_Statics::NewProp_Platforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformInvokator_Statics::NewProp_BoxCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformInvokator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformInvokator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformInvokator_Statics::ClassParams = {
		&APlatformInvokator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlatformInvokator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformInvokator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformInvokator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformInvokator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformInvokator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformInvokator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformInvokator, 2164399110);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<APlatformInvokator>()
	{
		return APlatformInvokator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformInvokator(Z_Construct_UClass_APlatformInvokator, &APlatformInvokator::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("APlatformInvokator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformInvokator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
