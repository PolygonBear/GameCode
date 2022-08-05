// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/Equipment/Weapons/RangeWeaponItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeWeaponItem() {}
// Cross Module References
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EReloadType();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMode();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EWeaponFireMode();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ARangeWeaponItem_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_ARangeWeaponItem();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AEquipableItem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UWeaponBarellComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EReticleType();
// End Cross Module References
	static UEnum* EReloadType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EReloadType, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EReloadType"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EReloadType>()
	{
		return EReloadType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReloadType(EReloadType_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EReloadType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EReloadType_Hash() { return 719617223U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EReloadType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReloadType"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EReloadType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReloadType::FullClip", (int64)EReloadType::FullClip },
				{ "EReloadType::ByBullet", (int64)EReloadType::ByBullet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ByBullet.Name", "EReloadType::ByBullet" },
				{ "FullClip.Name", "EReloadType::FullClip" },
				{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EReloadType",
				"EReloadType",
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
class UScriptStruct* FWeaponMode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern XYZ_HOMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FWeaponMode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponMode, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("WeaponMode"), sizeof(FWeaponMode), Get_Z_Construct_UScriptStruct_FWeaponMode_Hash());
	}
	return Singleton;
}
template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<FWeaponMode>()
{
	return FWeaponMode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponMode(FWeaponMode::StaticStruct, TEXT("/Script/XYZ_HomeWork"), TEXT("WeaponMode"), false, nullptr, nullptr);
static struct FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFWeaponMode
{
	FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFWeaponMode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponMode")),new UScriptStruct::TCppStructOps<FWeaponMode>);
	}
} ScriptStruct_XYZ_HomeWork_StaticRegisterNativesFWeaponMode;
	struct Z_Construct_UScriptStruct_FWeaponMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponFireMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFireMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponFireMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponMode>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_WeaponFireMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_WeaponFireMode_MetaData[] = {
		{ "Category", "WeaponMode" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_WeaponFireMode = { "WeaponFireMode", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponMode, WeaponFireMode), Z_Construct_UEnum_XYZ_HomeWork_EWeaponFireMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_WeaponFireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_WeaponFireMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "WeaponMode" },
		{ "ClampMin", "1.000000" },
		{ "Comment", "// Rate of fire in rounds per minute\n" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "ToolTip", "Rate of fire in rounds per minute" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponMode, RateOfFire), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_RateOfFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_RateOfFire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_WeaponFireMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_WeaponFireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMode_Statics::NewProp_RateOfFire,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
		nullptr,
		&NewStructOps,
		"WeaponMode",
		sizeof(FWeaponMode),
		alignof(FWeaponMode),
		Z_Construct_UScriptStruct_FWeaponMode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponMode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponMode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponMode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponMode"), sizeof(FWeaponMode), Get_Z_Construct_UScriptStruct_FWeaponMode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponMode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponMode_Hash() { return 2831981819U; }
	void ARangeWeaponItem::StaticRegisterNativesARangeWeaponItem()
	{
	}
	UClass* Z_Construct_UClass_ARangeWeaponItem_NoRegister()
	{
		return ARangeWeaponItem::StaticClass();
	}
	struct Z_Construct_UClass_ARangeWeaponItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBarell_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponBarell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterFireMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterFireMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterReloadMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterReloadMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFireMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponFireMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReloadType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReloadType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimTurnModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimTurnModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimLookUpModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimLookUpModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpreadAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpreadAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimMovementMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimMovementMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReload_MetaData[];
#endif
		static void NewProp_bAutoReload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReload;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AimReticleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimReticleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AimReticleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARangeWeaponItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipableItem,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponBarell_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponBarell = { "WeaponBarell", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, WeaponBarell), Z_Construct_UClass_UWeaponBarellComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponBarell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponBarell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMontage_MetaData[] = {
		{ "Category", "Animations | Weapon" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMontage = { "WeaponFireMontage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, WeaponFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponReloadMontage_MetaData[] = {
		{ "Category", "Animations | Weapon" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponReloadMontage = { "WeaponReloadMontage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, WeaponReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterFireMontage_MetaData[] = {
		{ "Category", "Animations | Character" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterFireMontage = { "CharacterFireMontage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, CharacterFireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterFireMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterFireMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterReloadMontage_MetaData[] = {
		{ "Category", "Animations | Character" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterReloadMontage = { "CharacterReloadMontage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, CharacterReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterReloadMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMode_MetaData[] = {
		{ "Category", "Weapon | Parameters" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMode = { "WeaponFireMode", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, WeaponFireMode), Z_Construct_UScriptStruct_FWeaponMode, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_ReloadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_ReloadType_MetaData[] = {
		{ "Category", "Weapon | Parameters" },
		{ "Comment", "// FullClip reload type adds ammo only when the whole reload animation is successfully played\n// ByBullet reload type requires section \"reloadEnd\" in character reload animation \n" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "ToolTip", "FullClip reload type adds ammo only when the whole reload animation is successfully played\nByBullet reload type requires section \"reloadEnd\" in character reload animation" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_ReloadType = { "ReloadType", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, ReloadType), Z_Construct_UEnum_XYZ_HomeWork_EReloadType, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_ReloadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_ReloadType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_SpreadAngle_MetaData[] = {
		{ "Category", "Weapon | Parameters" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Bullet spread half angle in degrees\n" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "ToolTip", "Bullet spread half angle in degrees" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, SpreadAngle), METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_SpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_SpreadAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimTurnModifier_MetaData[] = {
		{ "Category", "Weapon | Parameters" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimTurnModifier = { "AimTurnModifier", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, AimTurnModifier), METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimTurnModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimTurnModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimLookUpModifier_MetaData[] = {
		{ "Category", "Weapon | Parameters" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimLookUpModifier = { "AimLookUpModifier", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, AimLookUpModifier), METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimLookUpModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimLookUpModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimSpreadAngle_MetaData[] = {
		{ "Category", "Weapon | Parameters | Aiming" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimSpreadAngle = { "AimSpreadAngle", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, AimSpreadAngle), METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimSpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimSpreadAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimMovementMaxSpeed_MetaData[] = {
		{ "Category", "Weapon | Parameters | Aiming" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimMovementMaxSpeed = { "AimMovementMaxSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, AimMovementMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimMovementMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimMovementMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimFOV_MetaData[] = {
		{ "Category", "Weapon | Parameters | Aiming" },
		{ "ClampMax", "120.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "UIMax", "120.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimFOV = { "AimFOV", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, AimFOV), METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Weapon | Parameters | Ammo" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_bAutoReload_MetaData[] = {
		{ "Category", "Weapon | Parameters | Ammo" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
		{ "UIMin", "1" },
	};
#endif
	void Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_bAutoReload_SetBit(void* Obj)
	{
		((ARangeWeaponItem*)Obj)->bAutoReload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_bAutoReload = { "bAutoReload", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARangeWeaponItem), &Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_bAutoReload_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_bAutoReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_bAutoReload_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AmmoType_MetaData[] = {
		{ "Category", "Weapon | Parameters | Ammo" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, AmmoType), Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AmmoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AmmoType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimReticleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimReticleType_MetaData[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/RangeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimReticleType = { "AimReticleType", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARangeWeaponItem, AimReticleType), Z_Construct_UEnum_XYZ_HomeWork_EReticleType, METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimReticleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimReticleType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangeWeaponItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponBarell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterFireMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_CharacterReloadMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_WeaponFireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_ReloadType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_ReloadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_SpreadAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimTurnModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimLookUpModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimSpreadAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimMovementMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_bAutoReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AmmoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AmmoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimReticleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeWeaponItem_Statics::NewProp_AimReticleType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARangeWeaponItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangeWeaponItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARangeWeaponItem_Statics::ClassParams = {
		&ARangeWeaponItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARangeWeaponItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARangeWeaponItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARangeWeaponItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARangeWeaponItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARangeWeaponItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARangeWeaponItem, 3467148798);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<ARangeWeaponItem>()
	{
		return ARangeWeaponItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARangeWeaponItem(Z_Construct_UClass_ARangeWeaponItem, &ARangeWeaponItem::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("ARangeWeaponItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARangeWeaponItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
