// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/XYZ_HomeWork_Types.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXYZ_HomeWork_Types() {}
// Cross Module References
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_ETeams();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EMeleeAttackTypes();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EWeaponFireMode();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EReticleType();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType();
// End Cross Module References
	static UEnum* ETeams_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_ETeams, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("ETeams"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<ETeams>()
	{
		return ETeams_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeams(ETeams_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("ETeams"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_ETeams_Hash() { return 2598506523U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_ETeams()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeams"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_ETeams_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETeams::Player", (int64)ETeams::Player },
				{ "ETeams::Enemy", (int64)ETeams::Enemy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Enemy.Name", "ETeams::Enemy" },
				{ "ModuleRelativePath", "XYZ_HomeWork_Types.h" },
				{ "Player.Name", "ETeams::Player" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"ETeams",
				"ETeams",
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
	static UEnum* EMeleeAttackTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EMeleeAttackTypes, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EMeleeAttackTypes"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EMeleeAttackTypes>()
	{
		return EMeleeAttackTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeleeAttackTypes(EMeleeAttackTypes_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EMeleeAttackTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EMeleeAttackTypes_Hash() { return 3671229007U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EMeleeAttackTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeleeAttackTypes"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EMeleeAttackTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeleeAttackTypes::None", (int64)EMeleeAttackTypes::None },
				{ "EMeleeAttackTypes::PrimaryAttack", (int64)EMeleeAttackTypes::PrimaryAttack },
				{ "EMeleeAttackTypes::SecondaryAttack", (int64)EMeleeAttackTypes::SecondaryAttack },
				{ "EMeleeAttackTypes::MAX", (int64)EMeleeAttackTypes::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "EMeleeAttackTypes::MAX" },
				{ "ModuleRelativePath", "XYZ_HomeWork_Types.h" },
				{ "None.Name", "EMeleeAttackTypes::None" },
				{ "PrimaryAttack.Name", "EMeleeAttackTypes::PrimaryAttack" },
				{ "SecondaryAttack.Name", "EMeleeAttackTypes::SecondaryAttack" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EMeleeAttackTypes",
				"EMeleeAttackTypes",
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
	static UEnum* EWeaponFireMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EWeaponFireMode, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EWeaponFireMode"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EWeaponFireMode>()
	{
		return EWeaponFireMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponFireMode(EWeaponFireMode_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EWeaponFireMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EWeaponFireMode_Hash() { return 610697679U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EWeaponFireMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponFireMode"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EWeaponFireMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponFireMode::Single", (int64)EWeaponFireMode::Single },
				{ "EWeaponFireMode::FullAuto", (int64)EWeaponFireMode::FullAuto },
				{ "EWeaponFireMode::GrenadeLauncher", (int64)EWeaponFireMode::GrenadeLauncher },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FullAuto.Name", "EWeaponFireMode::FullAuto" },
				{ "GrenadeLauncher.Name", "EWeaponFireMode::GrenadeLauncher" },
				{ "ModuleRelativePath", "XYZ_HomeWork_Types.h" },
				{ "Single.Name", "EWeaponFireMode::Single" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EWeaponFireMode",
				"EWeaponFireMode",
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
	static UEnum* EReticleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EReticleType, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EReticleType"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EReticleType>()
	{
		return EReticleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReticleType(EReticleType_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EReticleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EReticleType_Hash() { return 2765926739U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EReticleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReticleType"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EReticleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReticleType::None", (int64)EReticleType::None },
				{ "EReticleType::Default", (int64)EReticleType::Default },
				{ "EReticleType::SniperRifle", (int64)EReticleType::SniperRifle },
				{ "EReticleType::Max", (int64)EReticleType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EReticleType::Default" },
				{ "Max.Hidden", "" },
				{ "Max.Name", "EReticleType::Max" },
				{ "ModuleRelativePath", "XYZ_HomeWork_Types.h" },
				{ "None.Name", "EReticleType::None" },
				{ "SniperRifle.Name", "EReticleType::SniperRifle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EReticleType",
				"EReticleType",
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
	static UEnum* EEquipmentSlots_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EEquipmentSlots"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EEquipmentSlots>()
	{
		return EEquipmentSlots_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipmentSlots(EEquipmentSlots_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EEquipmentSlots"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots_Hash() { return 400407807U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipmentSlots"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquipmentSlots::None", (int64)EEquipmentSlots::None },
				{ "EEquipmentSlots::SideArm", (int64)EEquipmentSlots::SideArm },
				{ "EEquipmentSlots::PrimaryWeapon", (int64)EEquipmentSlots::PrimaryWeapon },
				{ "EEquipmentSlots::SecondaryWeapon", (int64)EEquipmentSlots::SecondaryWeapon },
				{ "EEquipmentSlots::PrimaryItemSlot", (int64)EEquipmentSlots::PrimaryItemSlot },
				{ "EEquipmentSlots::MeleeWeapon", (int64)EEquipmentSlots::MeleeWeapon },
				{ "EEquipmentSlots::MAX", (int64)EEquipmentSlots::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "EEquipmentSlots::MAX" },
				{ "MeleeWeapon.Name", "EEquipmentSlots::MeleeWeapon" },
				{ "ModuleRelativePath", "XYZ_HomeWork_Types.h" },
				{ "None.Name", "EEquipmentSlots::None" },
				{ "PrimaryItemSlot.Name", "EEquipmentSlots::PrimaryItemSlot" },
				{ "PrimaryWeapon.Name", "EEquipmentSlots::PrimaryWeapon" },
				{ "SecondaryWeapon.Name", "EEquipmentSlots::SecondaryWeapon" },
				{ "SideArm.Name", "EEquipmentSlots::SideArm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EEquipmentSlots",
				"EEquipmentSlots",
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
	static UEnum* EAmunitionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EAmunitionType"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EAmunitionType>()
	{
		return EAmunitionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAmunitionType(EAmunitionType_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EAmunitionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType_Hash() { return 1437719549U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAmunitionType"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAmunitionType::None", (int64)EAmunitionType::None },
				{ "EAmunitionType::Pistol", (int64)EAmunitionType::Pistol },
				{ "EAmunitionType::Rifle", (int64)EAmunitionType::Rifle },
				{ "EAmunitionType::ShotgunShells", (int64)EAmunitionType::ShotgunShells },
				{ "EAmunitionType::FragGrenades", (int64)EAmunitionType::FragGrenades },
				{ "EAmunitionType::RifleGrenades", (int64)EAmunitionType::RifleGrenades },
				{ "EAmunitionType::MAX", (int64)EAmunitionType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FragGrenades.Name", "EAmunitionType::FragGrenades" },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "EAmunitionType::MAX" },
				{ "ModuleRelativePath", "XYZ_HomeWork_Types.h" },
				{ "None.Name", "EAmunitionType::None" },
				{ "Pistol.Name", "EAmunitionType::Pistol" },
				{ "Rifle.Name", "EAmunitionType::Rifle" },
				{ "RifleGrenades.Name", "EAmunitionType::RifleGrenades" },
				{ "ShotgunShells.Name", "EAmunitionType::ShotgunShells" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EAmunitionType",
				"EAmunitionType",
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
	static UEnum* EEquipableItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EEquipableItemType"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EEquipableItemType>()
	{
		return EEquipableItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipableItemType(EEquipableItemType_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EEquipableItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType_Hash() { return 1221730872U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipableItemType"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquipableItemType::None", (int64)EEquipableItemType::None },
				{ "EEquipableItemType::Pistol", (int64)EEquipableItemType::Pistol },
				{ "EEquipableItemType::Rifle", (int64)EEquipableItemType::Rifle },
				{ "EEquipableItemType::Throwable", (int64)EEquipableItemType::Throwable },
				{ "EEquipableItemType::Melee", (int64)EEquipableItemType::Melee },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Melee.Name", "EEquipableItemType::Melee" },
				{ "ModuleRelativePath", "XYZ_HomeWork_Types.h" },
				{ "None.Name", "EEquipableItemType::None" },
				{ "Pistol.Name", "EEquipableItemType::Pistol" },
				{ "Rifle.Name", "EEquipableItemType::Rifle" },
				{ "Throwable.Name", "EEquipableItemType::Throwable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EEquipableItemType",
				"EEquipableItemType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
