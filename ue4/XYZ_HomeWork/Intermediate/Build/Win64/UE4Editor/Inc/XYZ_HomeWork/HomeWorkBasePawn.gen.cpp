// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/HomeWorkBasePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomeWorkBasePawn() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AHomeWorkBasePawn_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AHomeWorkBasePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHomeWorkBasePawn::execOnBlendComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlendComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHomeWorkBasePawn::execGetInputRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHomeWorkBasePawn::execGetInputForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputForward();
		P_NATIVE_END;
	}
	void AHomeWorkBasePawn::StaticRegisterNativesAHomeWorkBasePawn()
	{
		UClass* Class = AHomeWorkBasePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputForward", &AHomeWorkBasePawn::execGetInputForward },
			{ "GetInputRight", &AHomeWorkBasePawn::execGetInputRight },
			{ "OnBlendComplete", &AHomeWorkBasePawn::execOnBlendComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics
	{
		struct HomeWorkBasePawn_eventGetInputForward_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HomeWorkBasePawn_eventGetInputForward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHomeWorkBasePawn, nullptr, "GetInputForward", nullptr, nullptr, sizeof(HomeWorkBasePawn_eventGetInputForward_Parms), Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics
	{
		struct HomeWorkBasePawn_eventGetInputRight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HomeWorkBasePawn_eventGetInputRight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHomeWorkBasePawn, nullptr, "GetInputRight", nullptr, nullptr, sizeof(HomeWorkBasePawn_eventGetInputRight_Parms), Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHomeWorkBasePawn_OnBlendComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHomeWorkBasePawn_OnBlendComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHomeWorkBasePawn_OnBlendComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHomeWorkBasePawn, nullptr, "OnBlendComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHomeWorkBasePawn_OnBlendComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHomeWorkBasePawn_OnBlendComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHomeWorkBasePawn_OnBlendComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHomeWorkBasePawn_OnBlendComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHomeWorkBasePawn_NoRegister()
	{
		return AHomeWorkBasePawn::StaticClass();
	}
	struct Z_Construct_UClass_AHomeWorkBasePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionSphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentViewActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentViewActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHomeWorkBasePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHomeWorkBasePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHomeWorkBasePawn_GetInputForward, "GetInputForward" }, // 3436813102
		{ &Z_Construct_UFunction_AHomeWorkBasePawn_GetInputRight, "GetInputRight" }, // 1569579853
		{ &Z_Construct_UFunction_AHomeWorkBasePawn_OnBlendComplete, "OnBlendComplete" }, // 3682295397
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWorkBasePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/HomeWorkBasePawn.h" },
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "HomeWorkBasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHomeWorkBasePawn, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "HomeWorkBasePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHomeWorkBasePawn, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionSphereRadius_MetaData[] = {
		{ "Category", "Base pawn" },
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionSphereRadius = { "CollisionSphereRadius", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHomeWorkBasePawn, CollisionSphereRadius), METADATA_PARAMS(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionSphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionSphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Base pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHomeWorkBasePawn, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Base pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHomeWorkBasePawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "Base pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x00200808000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHomeWorkBasePawn, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CurrentViewActor_MetaData[] = {
		{ "ModuleRelativePath", "Characters/HomeWorkBasePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CurrentViewActor = { "CurrentViewActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHomeWorkBasePawn, CurrentViewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CurrentViewActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CurrentViewActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHomeWorkBasePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CollisionSphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CameraComponent,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHomeWorkBasePawn_Statics::NewProp_CurrentViewActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHomeWorkBasePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHomeWorkBasePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHomeWorkBasePawn_Statics::ClassParams = {
		&AHomeWorkBasePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHomeWorkBasePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHomeWorkBasePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHomeWorkBasePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHomeWorkBasePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHomeWorkBasePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHomeWorkBasePawn, 777565250);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AHomeWorkBasePawn>()
	{
		return AHomeWorkBasePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHomeWorkBasePawn(Z_Construct_UClass_AHomeWorkBasePawn, &AHomeWorkBasePawn::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AHomeWorkBasePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHomeWorkBasePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
