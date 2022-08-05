// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/Interactive/Environment/Ladder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLadder() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ALadder_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ALadder();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AInteractiveActor();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ALadder::StaticRegisterNativesALadder()
	{
	}
	UClass* Z_Construct_UClass_ALadder_NoRegister()
	{
		return ALadder::StaticClass();
	}
	struct Z_Construct_UClass_ALadder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepsInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepsInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomStepOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BottomStepOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRailMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightRailMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRailMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftRailMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StepMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopInteractionVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopInteractionVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachFromTopAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachFromTopAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachFromTopAnimMontageInitialOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachFromTopAnimMontageInitialOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALadder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/Interactive/Environment/Ladder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_LadderHeight_MetaData[] = {
		{ "Category", "Ladder parameters" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_LadderHeight = { "LadderHeight", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, LadderHeight), METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_LadderHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_LadderHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_LadderWidth_MetaData[] = {
		{ "Category", "Ladder parameters" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_LadderWidth = { "LadderWidth", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, LadderWidth), METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_LadderWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_LadderWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_StepsInterval_MetaData[] = {
		{ "Category", "Ladder parameters" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_StepsInterval = { "StepsInterval", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, StepsInterval), METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_StepsInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_StepsInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_BottomStepOffset_MetaData[] = {
		{ "Category", "Ladder parameters" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_BottomStepOffset = { "BottomStepOffset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, BottomStepOffset), METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_BottomStepOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_BottomStepOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_RightRailMeshComponent_MetaData[] = {
		{ "Category", "Ladder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_RightRailMeshComponent = { "RightRailMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, RightRailMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_RightRailMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_RightRailMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_LeftRailMeshComponent_MetaData[] = {
		{ "Category", "Ladder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_LeftRailMeshComponent = { "LeftRailMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, LeftRailMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_LeftRailMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_LeftRailMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_StepMeshComponent_MetaData[] = {
		{ "Category", "Ladder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_StepMeshComponent = { "StepMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, StepMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_StepMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_StepMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_TopInteractionVolume_MetaData[] = {
		{ "Category", "Ladder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_TopInteractionVolume = { "TopInteractionVolume", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, TopInteractionVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_TopInteractionVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_TopInteractionVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontage_MetaData[] = {
		{ "Category", "Ladder parameters" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontage = { "AttachFromTopAnimMontage", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, AttachFromTopAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontageInitialOffset_MetaData[] = {
		{ "Category", "Ladder parameters" },
		{ "Comment", "// offset from ladder's top for starting anim montage\n" },
		{ "ModuleRelativePath", "Actors/Interactive/Environment/Ladder.h" },
		{ "ToolTip", "offset from ladder's top for starting anim montage" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontageInitialOffset = { "AttachFromTopAnimMontageInitialOffset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALadder, AttachFromTopAnimMontageInitialOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontageInitialOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontageInitialOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALadder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_LadderHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_LadderWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_StepsInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_BottomStepOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_RightRailMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_LeftRailMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_StepMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_TopInteractionVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_AttachFromTopAnimMontageInitialOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALadder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALadder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALadder_Statics::ClassParams = {
		&ALadder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALadder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALadder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALadder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALadder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALadder, 99177079);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<ALadder>()
	{
		return ALadder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALadder(Z_Construct_UClass_ALadder, &ALadder::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("ALadder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALadder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
