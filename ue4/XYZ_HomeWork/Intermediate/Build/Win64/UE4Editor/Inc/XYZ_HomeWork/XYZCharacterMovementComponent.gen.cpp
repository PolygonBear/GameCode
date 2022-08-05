// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Components/MovementComponents/XYZCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZCharacterMovementComponent() {}
// Cross Module References
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EWallRunSide();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EDetachFromZiplineMethod();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EDetachFromLadderMethod();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_ECustomMovementMode();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZCharacterMovementComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UXYZCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
// End Cross Module References
	static UEnum* EWallRunSide_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EWallRunSide, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EWallRunSide"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EWallRunSide>()
	{
		return EWallRunSide_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWallRunSide(EWallRunSide_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EWallRunSide"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EWallRunSide_Hash() { return 1284993057U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EWallRunSide()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWallRunSide"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EWallRunSide_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWallRunSide::None", (int64)EWallRunSide::None },
				{ "EWallRunSide::Left", (int64)EWallRunSide::Left },
				{ "EWallRunSide::Right", (int64)EWallRunSide::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "EWallRunSide::Left" },
				{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
				{ "None.Name", "EWallRunSide::None" },
				{ "Right.Name", "EWallRunSide::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EWallRunSide",
				"EWallRunSide",
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
	static UEnum* EDetachFromZiplineMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EDetachFromZiplineMethod, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EDetachFromZiplineMethod"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EDetachFromZiplineMethod>()
	{
		return EDetachFromZiplineMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDetachFromZiplineMethod(EDetachFromZiplineMethod_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EDetachFromZiplineMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EDetachFromZiplineMethod_Hash() { return 2327434537U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EDetachFromZiplineMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDetachFromZiplineMethod"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EDetachFromZiplineMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDetachFromZiplineMethod::Fall", (int64)EDetachFromZiplineMethod::Fall },
				{ "EDetachFromZiplineMethod::JumpOff", (int64)EDetachFromZiplineMethod::JumpOff },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Fall.Name", "EDetachFromZiplineMethod::Fall" },
				{ "JumpOff.Name", "EDetachFromZiplineMethod::JumpOff" },
				{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EDetachFromZiplineMethod",
				"EDetachFromZiplineMethod",
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
	static UEnum* EDetachFromLadderMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EDetachFromLadderMethod, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EDetachFromLadderMethod"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EDetachFromLadderMethod>()
	{
		return EDetachFromLadderMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDetachFromLadderMethod(EDetachFromLadderMethod_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EDetachFromLadderMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EDetachFromLadderMethod_Hash() { return 411673730U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EDetachFromLadderMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDetachFromLadderMethod"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EDetachFromLadderMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDetachFromLadderMethod::Fall", (int64)EDetachFromLadderMethod::Fall },
				{ "EDetachFromLadderMethod::ReachingFromTop", (int64)EDetachFromLadderMethod::ReachingFromTop },
				{ "EDetachFromLadderMethod::ReachingFromBottom", (int64)EDetachFromLadderMethod::ReachingFromBottom },
				{ "EDetachFromLadderMethod::JumpOff", (int64)EDetachFromLadderMethod::JumpOff },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Fall.Name", "EDetachFromLadderMethod::Fall" },
				{ "JumpOff.Name", "EDetachFromLadderMethod::JumpOff" },
				{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
				{ "ReachingFromBottom.Name", "EDetachFromLadderMethod::ReachingFromBottom" },
				{ "ReachingFromTop.Name", "EDetachFromLadderMethod::ReachingFromTop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EDetachFromLadderMethod",
				"EDetachFromLadderMethod",
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
	static UEnum* ECustomMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_ECustomMovementMode, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("ECustomMovementMode"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<ECustomMovementMode>()
	{
		return ECustomMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMovementMode(ECustomMovementMode_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("ECustomMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_ECustomMovementMode_Hash() { return 357299532U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_ECustomMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMovementMode"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_ECustomMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomMovementMode::CMOVE_None", (int64)ECustomMovementMode::CMOVE_None },
				{ "ECustomMovementMode::CMOVE_Mantling", (int64)ECustomMovementMode::CMOVE_Mantling },
				{ "ECustomMovementMode::CMOVE_Ladder", (int64)ECustomMovementMode::CMOVE_Ladder },
				{ "ECustomMovementMode::CMOVE_Zipline", (int64)ECustomMovementMode::CMOVE_Zipline },
				{ "ECustomMovementMode::CMOVE_WallRun", (int64)ECustomMovementMode::CMOVE_WallRun },
				{ "ECustomMovementMode::CMOVE_Max", (int64)ECustomMovementMode::CMOVE_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CMOVE_Ladder.DisplayName", "Ladder" },
				{ "CMOVE_Ladder.Name", "ECustomMovementMode::CMOVE_Ladder" },
				{ "CMOVE_Mantling.DisplayName", "Mantling" },
				{ "CMOVE_Mantling.Name", "ECustomMovementMode::CMOVE_Mantling" },
				{ "CMOVE_Max.Hidden", "" },
				{ "CMOVE_Max.Name", "ECustomMovementMode::CMOVE_Max" },
				{ "CMOVE_None.DisplayName", "None" },
				{ "CMOVE_None.Name", "ECustomMovementMode::CMOVE_None" },
				{ "CMOVE_WallRun.DisplayName", "WallRun" },
				{ "CMOVE_WallRun.Name", "ECustomMovementMode::CMOVE_WallRun" },
				{ "CMOVE_Zipline.DisplayName", "Zipline" },
				{ "CMOVE_Zipline.Name", "ECustomMovementMode::CMOVE_Zipline" },
				{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"ECustomMovementMode",
				"ECustomMovementMode",
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
	void UXYZCharacterMovementComponent::StaticRegisterNativesUXYZCharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UXYZCharacterMovementComponent_NoRegister()
	{
		return UXYZCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UXYZCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOutOfStamina_MetaData[];
#endif
		static void NewProp_bIsOutOfStamina_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOutOfStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToCrawl_MetaData[];
#endif
		static void NewProp_bWantsToCrawl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToCrawl;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentWallRunSide_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWallRunSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentWallRunSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWallRunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWallRunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwimingCapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwimingCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwimingCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwimingCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrawlCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrawlCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrawlCapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrawlCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbingOnLadderMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbingOnLadderMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderToCharacterOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LadderToCharacterOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClimbingOnLadderBrakingDecelartion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClimbingOnLadderBrakingDecelartion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOfStaminaSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutOfStaminaSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCrawlSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCrawlSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLadderTopOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLadderTopOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLadderBottomOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinLadderBottomOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpOffFromLadderSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpOffFromLadderSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineDirectionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineDirectionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpOffFromZiplineSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpOffFromZiplineSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZiplineSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWallRunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWallRunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlidingCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingCapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlidingCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlidingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSlidingSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bIsOutOfStamina_MetaData[] = {
		{ "Category", "Character movement" },
		{ "Comment", "/** Stamina **/" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "ToolTip", "Stamina *" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bIsOutOfStamina_SetBit(void* Obj)
	{
		((UXYZCharacterMovementComponent*)Obj)->bIsOutOfStamina = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bIsOutOfStamina = { "bIsOutOfStamina", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterMovementComponent), &Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bIsOutOfStamina_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bIsOutOfStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bIsOutOfStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bWantsToCrawl_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "Comment", "/** Crawling **/" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "ToolTip", "Crawling *" },
	};
#endif
	void Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bWantsToCrawl_SetBit(void* Obj)
	{
		((UXYZCharacterMovementComponent*)Obj)->bWantsToCrawl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bWantsToCrawl = { "bWantsToCrawl", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXYZCharacterMovementComponent), &Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bWantsToCrawl_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bWantsToCrawl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bWantsToCrawl_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CurrentWallRunSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CurrentWallRunSide_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CurrentWallRunSide = { "CurrentWallRunSide", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, CurrentWallRunSide), Z_Construct_UEnum_XYZ_HomeWork_EWallRunSide, METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CurrentWallRunSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CurrentWallRunSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunTime_MetaData[] = {
		{ "Category", "WallRun" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunTime = { "MaxWallRunTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxWallRunTime), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleRadius_MetaData[] = {
		{ "Category", "Character Movement: Swimming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleRadius = { "SwimingCapsuleRadius", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, SwimingCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleHalfHeight_MetaData[] = {
		{ "Category", "Character Movement: Swimming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleHalfHeight = { "SwimingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, SwimingCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleHalfHeight_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleHalfHeight = { "CrawlCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, CrawlCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleRadius_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleRadius = { "CrawlCapsuleRadius", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, CrawlCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderMaxSpeed_MetaData[] = {
		{ "Category", "Character Movement: Ladder" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderMaxSpeed = { "ClimbingOnLadderMaxSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, ClimbingOnLadderMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_LadderToCharacterOffset_MetaData[] = {
		{ "Category", "Character Movement: Ladder" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_LadderToCharacterOffset = { "LadderToCharacterOffset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, LadderToCharacterOffset), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_LadderToCharacterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_LadderToCharacterOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderBrakingDecelartion_MetaData[] = {
		{ "Category", "Character Movement: Ladder" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderBrakingDecelartion = { "ClimbingOnLadderBrakingDecelartion", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, ClimbingOnLadderBrakingDecelartion), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderBrakingDecelartion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderBrakingDecelartion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Character movement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_OutOfStaminaSpeed_MetaData[] = {
		{ "Category", "Character movement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_OutOfStaminaSpeed = { "OutOfStaminaSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, OutOfStaminaSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_OutOfStaminaSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_OutOfStaminaSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxCrawlSpeed_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "ClampMin", "0.000000" },
		{ "IUMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxCrawlSpeed = { "MaxCrawlSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxCrawlSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxCrawlSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxCrawlSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxLadderTopOffset_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "ClampMin", "0.000000" },
		{ "IUMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxLadderTopOffset = { "MaxLadderTopOffset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxLadderTopOffset), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxLadderTopOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxLadderTopOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MinLadderBottomOffset_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "ClampMin", "0.000000" },
		{ "IUMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MinLadderBottomOffset = { "MinLadderBottomOffset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, MinLadderBottomOffset), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MinLadderBottomOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MinLadderBottomOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromLadderSpeed_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "ClampMin", "0.000000" },
		{ "IUMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromLadderSpeed = { "JumpOffFromLadderSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, JumpOffFromLadderSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromLadderSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromLadderSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineDirectionOffset_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "ClampMin", "0.000000" },
		{ "IUMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineDirectionOffset = { "ZiplineDirectionOffset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, ZiplineDirectionOffset), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineDirectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineDirectionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromZiplineSpeed_MetaData[] = {
		{ "Category", "Character Movement" },
		{ "ClampMin", "0.000000" },
		{ "IUMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromZiplineSpeed = { "JumpOffFromZiplineSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, JumpOffFromZiplineSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromZiplineSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromZiplineSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineSpeed_MetaData[] = {
		{ "Category", "Character movement : Zipline" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineSpeed = { "ZiplineSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, ZiplineSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_TopOffset_MetaData[] = {
		{ "Category", "Character movement : Zipline" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_TopOffset = { "TopOffset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, TopOffset), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_TopOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_TopOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunSpeed_MetaData[] = {
		{ "Category", "Character movement" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunSpeed = { "MaxWallRunSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxWallRunSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleHalfHeight_MetaData[] = {
		{ "Category", "Character movement : Slide" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleHalfHeight = { "SlidingCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, SlidingCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleRadius_MetaData[] = {
		{ "Category", "Character movement : Slide" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleRadius = { "SlidingCapsuleRadius", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, SlidingCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxSlidingSpeed_MetaData[] = {
		{ "Category", "Character movement : Slide" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Components/MovementComponents/XYZCharacterMovementComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxSlidingSpeed = { "MaxSlidingSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXYZCharacterMovementComponent, MaxSlidingSpeed), METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxSlidingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxSlidingSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bIsOutOfStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_bWantsToCrawl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CurrentWallRunSide_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CurrentWallRunSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SwimingCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_CrawlCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_LadderToCharacterOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ClimbingOnLadderBrakingDecelartion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_OutOfStaminaSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxCrawlSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxLadderTopOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MinLadderBottomOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromLadderSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineDirectionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_JumpOffFromZiplineSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_ZiplineSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_TopOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxWallRunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_SlidingCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::NewProp_MaxSlidingSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXYZCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::ClassParams = {
		&UXYZCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXYZCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXYZCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXYZCharacterMovementComponent, 4132184023);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UXYZCharacterMovementComponent>()
	{
		return UXYZCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXYZCharacterMovementComponent(Z_Construct_UClass_UXYZCharacterMovementComponent, &UXYZCharacterMovementComponent::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UXYZCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXYZCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
