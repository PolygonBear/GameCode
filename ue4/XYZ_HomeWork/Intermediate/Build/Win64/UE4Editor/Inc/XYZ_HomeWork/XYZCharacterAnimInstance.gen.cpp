// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Characters/Animations/XYZCharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZCharacterAnimInstance() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZCharacterAnimInstance_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EWallRunSide();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UXYZCharacterAnimInstance::StaticRegisterNativesUXYZCharacterAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UXYZCharacterAnimInstance_NoRegister()
	{
		return UXYZCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UXYZCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFootRightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFootRightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFootLeftOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFootLeftOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKPelvisBoneOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKPelvisBoneOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[];
#endif
		static void NewProp_bIsCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOutOfStamina_MetaData[];
#endif
		static void NewProp_bIsOutOfStamina_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOutOfStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrawling_MetaData[];
#endif
		static void NewProp_bIsCrawling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrawling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSwimming_MetaData[];
#endif
		static void NewProp_bIsSwimming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSwimming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnLadder_MetaData[];
#endif
		static void NewProp_bIsOnLadder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnLadder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnZipline_MetaData[];
#endif
		static void NewProp_bIsOnZipline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnZipline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWallRunning_MetaData[];
#endif
		static void NewProp_bIsWallRunning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWallRunning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSliding_MetaData[];
#endif
		static void NewProp_bIsSliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStrafing_MetaData[];
#endif
		static void NewProp_bIsStrafing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStrafing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WallRunSide_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallRunSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WallRunSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderSpeedRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderSpeedRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineSpeedRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineSpeedRatio;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurretnEquippedItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurretnEquippedItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurretnEquippedItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeGripSocketTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeGripSocketTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_AimRotation_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_AimRotation = { "AimRotation", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, AimRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_AimRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_AimRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootRightOffset_MetaData[] = {
		{ "Category", "Settings | IK Settings" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootRightOffset = { "IKFootRightOffset", nullptr, (EPropertyFlags)0x0020080000002015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, IKFootRightOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootRightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootRightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootLeftOffset_MetaData[] = {
		{ "Category", "Settings | IK Settings" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootLeftOffset = { "IKFootLeftOffset", nullptr, (EPropertyFlags)0x0020080000002015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, IKFootLeftOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootLeftOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootLeftOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKPelvisBoneOffset_MetaData[] = {
		{ "Category", "Settings | IK Settings" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKPelvisBoneOffset = { "IKPelvisBoneOffset", nullptr, (EPropertyFlags)0x0020080000002015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, IKPelvisBoneOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKPelvisBoneOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKPelvisBoneOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
		{ "UIMax", "500.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
		{ "UIMax", "180.000000" },
		{ "UIMin", "-180.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrouching_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOutOfStamina_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOutOfStamina_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsOutOfStamina = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOutOfStamina = { "bIsOutOfStamina", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOutOfStamina_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOutOfStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOutOfStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrawling_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrawling_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsCrawling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrawling = { "bIsCrawling", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrawling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrawling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSwimming_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSwimming_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsSwimming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSwimming = { "bIsSwimming", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSwimming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSwimming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSwimming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnLadder_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnLadder_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsOnLadder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnLadder = { "bIsOnLadder", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnLadder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnLadder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnLadder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnZipline_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnZipline_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsOnZipline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnZipline = { "bIsOnZipline", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnZipline_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnZipline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnZipline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsWallRunning_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsWallRunning_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsWallRunning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsWallRunning = { "bIsWallRunning", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsWallRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsWallRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsWallRunning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSliding_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSliding_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsSliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSliding = { "bIsSliding", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsStrafing_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsStrafing_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsStrafing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsStrafing = { "bIsStrafing", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsStrafing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_WallRunSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_WallRunSide_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_WallRunSide = { "WallRunSide", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, WallRunSide), Z_Construct_UEnum_XYZ_HomeWork_EWallRunSide, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_WallRunSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_WallRunSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_LadderSpeedRatio_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_LadderSpeedRatio = { "LadderSpeedRatio", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, LadderSpeedRatio), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_LadderSpeedRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_LadderSpeedRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ZiplineSpeedRatio_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ZiplineSpeedRatio = { "ZiplineSpeedRatio", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, ZiplineSpeedRatio), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ZiplineSpeedRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ZiplineSpeedRatio_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_CurretnEquippedItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_CurretnEquippedItemType_MetaData[] = {
		{ "Category", "Character animation" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_CurretnEquippedItemType = { "CurretnEquippedItemType", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, CurretnEquippedItemType), Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_CurretnEquippedItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_CurretnEquippedItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ForeGripSocketTransform_MetaData[] = {
		{ "Category", "Character animation | Weapon" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ForeGripSocketTransform = { "ForeGripSocketTransform", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterAnimInstance, ForeGripSocketTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ForeGripSocketTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ForeGripSocketTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Category", "Character animation | Weapon" },
		{ "ModuleRelativePath", "Characters/Animations/XYZCharacterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((UXYZCharacterAnimInstance*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterAnimInstance), &Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsAiming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_AimRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootRightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKFootLeftOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_IKPelvisBoneOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOutOfStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsCrawling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSwimming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnLadder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsOnZipline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsWallRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsSliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsStrafing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_WallRunSide_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_WallRunSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_LadderSpeedRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ZiplineSpeedRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_CurretnEquippedItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_CurretnEquippedItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_ForeGripSocketTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::NewProp_bIsAiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXYZCharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::ClassParams = {
		&UXYZCharacterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXYZCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXYZCharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXYZCharacterAnimInstance, 2035391381);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UXYZCharacterAnimInstance>()
	{
		return UXYZCharacterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXYZCharacterAnimInstance(Z_Construct_UClass_UXYZCharacterAnimInstance, &UXYZCharacterAnimInstance::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UXYZCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXYZCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
