// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/AI/Characters/Turret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}
// Cross Module References
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_ETurretState();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ATurret_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ATurret();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UWeaponBarellComponent_NoRegister();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_ETeams();
// End Cross Module References
	static UEnum* ETurretState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_ETurretState, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("ETurretState"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<ETurretState>()
	{
		return ETurretState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETurretState(ETurretState_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("ETurretState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_ETurretState_Hash() { return 1824992960U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_ETurretState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETurretState"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_ETurretState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETurretState::Searching", (int64)ETurretState::Searching },
				{ "ETurretState::Firing", (int64)ETurretState::Firing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Firing.Name", "ETurretState::Firing" },
				{ "ModuleRelativePath", "AI/Characters/Turret.h" },
				{ "Searching.Name", "ETurretState::Searching" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"ETurretState",
				"ETurretState",
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
	void ATurret::StaticRegisterNativesATurret()
	{
	}
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	struct Z_Construct_UClass_ATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretBaseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretBaseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretBarellComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretBarellComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBarellComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponBarellComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSearchingRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSearchingRotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarellPitchRotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarellPitchRotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBarellPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBarellPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBarellPitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinBarellPitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFiringInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFiringInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpreadAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpreadAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireDelayTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/Characters/Turret.h" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TurretBaseComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TurretBaseComponent = { "TurretBaseComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, TurretBaseComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_TurretBaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TurretBaseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TurretBarellComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TurretBarellComponent = { "TurretBarellComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, TurretBarellComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_TurretBarellComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TurretBarellComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_WeaponBarellComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_WeaponBarellComponent = { "WeaponBarellComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, WeaponBarellComponent), Z_Construct_UClass_UWeaponBarellComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_WeaponBarellComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_WeaponBarellComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_BaseSearchingRotationRate_MetaData[] = {
		{ "Category", "Turret parametres" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_BaseSearchingRotationRate = { "BaseSearchingRotationRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, BaseSearchingRotationRate), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_BaseSearchingRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_BaseSearchingRotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_BarellPitchRotationRate_MetaData[] = {
		{ "Category", "Turret parametres" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_BarellPitchRotationRate = { "BarellPitchRotationRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, BarellPitchRotationRate), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_BarellPitchRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_BarellPitchRotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_MaxBarellPitchAngle_MetaData[] = {
		{ "Category", "Turret parametres" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_MaxBarellPitchAngle = { "MaxBarellPitchAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, MaxBarellPitchAngle), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_MaxBarellPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_MaxBarellPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_MinBarellPitchAngle_MetaData[] = {
		{ "Category", "Turret parametres" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_MinBarellPitchAngle = { "MinBarellPitchAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, MinBarellPitchAngle), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_MinBarellPitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_MinBarellPitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_BaseFiringInterpSpeed_MetaData[] = {
		{ "Category", "Turret parametres" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_BaseFiringInterpSpeed = { "BaseFiringInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, BaseFiringInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_BaseFiringInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_BaseFiringInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Turret parametres | Fire" },
		{ "ClampMin", "1.000000" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, RateOfFire), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_RateOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_BulletSpreadAngle_MetaData[] = {
		{ "Category", "Turret parametres | Fire" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_BulletSpreadAngle = { "BulletSpreadAngle", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, BulletSpreadAngle), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_BulletSpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_BulletSpreadAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_FireDelayTime_MetaData[] = {
		{ "Category", "Turret parametres | Fire" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_FireDelayTime = { "FireDelayTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, FireDelayTime), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_FireDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_FireDelayTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "Turret parametres | Team" },
		{ "ModuleRelativePath", "AI/Characters/Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, Team), Z_Construct_UEnum_XYZ_HomeWork_ETeams, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_TurretBaseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_TurretBarellComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_WeaponBarellComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_BaseSearchingRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_BarellPitchRotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_MaxBarellPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_MinBarellPitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_BaseFiringInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_RateOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_BulletSpreadAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_FireDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_Team_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
		&ATurret::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurret, 4268415368);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<ATurret>()
	{
		return ATurret::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurret(Z_Construct_UClass_ATurret, &ATurret::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("ATurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
