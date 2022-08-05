// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/BasePlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlatform() {}
// Cross Module References
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EMovementType();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ABasePlatform_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ABasePlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* EMovementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EMovementType, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EMovementType"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EMovementType>()
	{
		return EMovementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementType(EMovementType_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EMovementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EMovementType_Hash() { return 1327879247U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EMovementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementType"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EMovementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementType::OnDeamnd", (int64)EMovementType::OnDeamnd },
				{ "EMovementType::Loop", (int64)EMovementType::Loop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Loop.Name", "EMovementType::Loop" },
				{ "ModuleRelativePath", "Actors/BasePlatform.h" },
				{ "OnDeamnd.Name", "EMovementType::OnDeamnd" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EMovementType",
				"EMovementType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABasePlatform::execOnTimelineFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTimelineFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasePlatform::execMovePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasePlatform::execTimelineFloatReturn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineFloatReturn(Z_Param_Value);
		P_NATIVE_END;
	}
	void ABasePlatform::StaticRegisterNativesABasePlatform()
	{
		UClass* Class = ABasePlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovePlatform", &ABasePlatform::execMovePlatform },
			{ "OnTimelineFinished", &ABasePlatform::execOnTimelineFinished },
			{ "TimelineFloatReturn", &ABasePlatform::execTimelineFloatReturn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasePlatform_MovePlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlatform_MovePlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlatform_MovePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlatform, nullptr, "MovePlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlatform_MovePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_MovePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlatform_MovePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlatform_MovePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlatform_OnTimelineFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlatform_OnTimelineFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlatform_OnTimelineFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlatform, nullptr, "OnTimelineFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlatform_OnTimelineFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_OnTimelineFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlatform_OnTimelineFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlatform_OnTimelineFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics
	{
		struct BasePlatform_eventTimelineFloatReturn_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasePlatform_eventTimelineFloatReturn_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlatform, nullptr, "TimelineFloatReturn", nullptr, nullptr, sizeof(BasePlatform_eventTimelineFloatReturn_Parms), Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePlatform_NoRegister()
	{
		return ABasePlatform::StaticClass();
	}
	struct Z_Construct_UClass_ABasePlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformMovementCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformMovementCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeedRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeedRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardSpeedRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackwardSpeedRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasePlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlatform_MovePlatform, "MovePlatform" }, // 3773636291
		{ &Z_Construct_UFunction_ABasePlatform_OnTimelineFinished, "OnTimelineFinished" }, // 2856680650
		{ &Z_Construct_UFunction_ABasePlatform_TimelineFloatReturn, "TimelineFloatReturn" }, // 1609672729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BasePlatform.h" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_MovementType_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, MovementType), Z_Construct_UEnum_XYZ_HomeWork_EMovementType, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_MovementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_MovementType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMeshComponent_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMeshComponent = { "PlatformMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, PlatformMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMovementCurve_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMovementCurve = { "PlatformMovementCurve", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, PlatformMovementCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMovementCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMovementCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_CooldownTimer_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_CooldownTimer = { "CooldownTimer", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, CooldownTimer), METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_CooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_CooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_ForwardSpeedRate_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_ForwardSpeedRate = { "ForwardSpeedRate", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, ForwardSpeedRate), METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_ForwardSpeedRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_ForwardSpeedRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_BackwardSpeedRate_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_BackwardSpeedRate = { "BackwardSpeedRate", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, BackwardSpeedRate), METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_BackwardSpeedRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_BackwardSpeedRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Platform settings" },
		{ "ModuleRelativePath", "Actors/BasePlatform.h" },
	};
#endif
	void Z_Construct_UClass_ABasePlatform_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((ABasePlatform*)Obj)->bReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABasePlatform), &Z_Construct_UClass_ABasePlatform_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_bReverse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_MovementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_MovementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMovementCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_CooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_ForwardSpeedRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_BackwardSpeedRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_bReverse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePlatform_Statics::ClassParams = {
		&ABasePlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasePlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePlatform, 1570312166);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<ABasePlatform>()
	{
		return ABasePlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePlatform(Z_Construct_UClass_ABasePlatform, &ABasePlatform::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("ABasePlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
