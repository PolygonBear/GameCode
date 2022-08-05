// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Components/CharacterComponents/CharacterEquipmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterEquipmentComponent() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UCharacterEquipmentComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UCharacterEquipmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AEquipableItem_NoRegister();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterEquipmentComponent::execOnCurrentThrowableItemAmmoChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Grenades);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentThrowableItemAmmoChanged(Z_Param_Grenades);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterEquipmentComponent::execOnCurrentWeaponAmmoChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrentWeaponAmmoChanged(Z_Param_Ammo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterEquipmentComponent::execOnWeaponReloadComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponReloadComplete();
		P_NATIVE_END;
	}
	void UCharacterEquipmentComponent::StaticRegisterNativesUCharacterEquipmentComponent()
	{
		UClass* Class = UCharacterEquipmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCurrentThrowableItemAmmoChanged", &UCharacterEquipmentComponent::execOnCurrentThrowableItemAmmoChanged },
			{ "OnCurrentWeaponAmmoChanged", &UCharacterEquipmentComponent::execOnCurrentWeaponAmmoChanged },
			{ "OnWeaponReloadComplete", &UCharacterEquipmentComponent::execOnWeaponReloadComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics
	{
		struct CharacterEquipmentComponent_eventOnCurrentThrowableItemAmmoChanged_Parms
		{
			int32 Grenades;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Grenades;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::NewProp_Grenades = { "Grenades", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterEquipmentComponent_eventOnCurrentThrowableItemAmmoChanged_Parms, Grenades), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::NewProp_Grenades,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterEquipmentComponent, nullptr, "OnCurrentThrowableItemAmmoChanged", nullptr, nullptr, sizeof(CharacterEquipmentComponent_eventOnCurrentThrowableItemAmmoChanged_Parms), Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics
	{
		struct CharacterEquipmentComponent_eventOnCurrentWeaponAmmoChanged_Parms
		{
			int32 Ammo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ammo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterEquipmentComponent_eventOnCurrentWeaponAmmoChanged_Parms, Ammo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::NewProp_Ammo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterEquipmentComponent, nullptr, "OnCurrentWeaponAmmoChanged", nullptr, nullptr, sizeof(CharacterEquipmentComponent_eventOnCurrentWeaponAmmoChanged_Parms), Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterEquipmentComponent_OnWeaponReloadComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterEquipmentComponent_OnWeaponReloadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterEquipmentComponent_OnWeaponReloadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterEquipmentComponent, nullptr, "OnWeaponReloadComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterEquipmentComponent_OnWeaponReloadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterEquipmentComponent_OnWeaponReloadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterEquipmentComponent_OnWeaponReloadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterEquipmentComponent_OnWeaponReloadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterEquipmentComponent_NoRegister()
	{
		return UCharacterEquipmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterEquipmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAmunitionAmount_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxAmunitionAmount_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxAmunitionAmount_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmunitionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaxAmunitionAmount;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemsLoadout_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemsLoadout_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemsLoadout_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemsLoadout;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IgnoreSlotsWhileSwitching_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IgnoreSlotsWhileSwitching_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreSlotsWhileSwitching_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IgnoreSlotsWhileSwitching;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoEquipItemInSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEquipItemInSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoEquipItemInSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterEquipmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterEquipmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentThrowableItemAmmoChanged, "OnCurrentThrowableItemAmmoChanged" }, // 301816565
		{ &Z_Construct_UFunction_UCharacterEquipmentComponent_OnCurrentWeaponAmmoChanged, "OnCurrentWeaponAmmoChanged" }, // 2470548841
		{ &Z_Construct_UFunction_UCharacterEquipmentComponent_OnWeaponReloadComplete, "OnWeaponReloadComplete" }, // 360164286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEquipmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
		{ "ModuleRelativePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_ValueProp = { "MaxAmunitionAmount", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_Key_KeyProp = { "MaxAmunitionAmount_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_MetaData[] = {
		{ "Category", "Loadout" },
		{ "ModuleRelativePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount = { "MaxAmunitionAmount", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterEquipmentComponent, MaxAmunitionAmount), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_ValueProp = { "ItemsLoadout", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AEquipableItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_Key_KeyProp = { "ItemsLoadout_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_MetaData[] = {
		{ "Category", "Loadout" },
		{ "ModuleRelativePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout = { "ItemsLoadout", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterEquipmentComponent, ItemsLoadout), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching_ElementProp = { "IgnoreSlotsWhileSwitching", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching_MetaData[] = {
		{ "Category", "Loadout" },
		{ "ModuleRelativePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching = { "IgnoreSlotsWhileSwitching", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterEquipmentComponent, IgnoreSlotsWhileSwitching), METADATA_PARAMS(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_AutoEquipItemInSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_AutoEquipItemInSlot_MetaData[] = {
		{ "Category", "Loadout" },
		{ "ModuleRelativePath", "Components/CharacterComponents/CharacterEquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_AutoEquipItemInSlot = { "AutoEquipItemInSlot", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterEquipmentComponent, AutoEquipItemInSlot), Z_Construct_UEnum_XYZ_HomeWork_EEquipmentSlots, METADATA_PARAMS(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_AutoEquipItemInSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_AutoEquipItemInSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterEquipmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_MaxAmunitionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_ItemsLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_IgnoreSlotsWhileSwitching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_AutoEquipItemInSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEquipmentComponent_Statics::NewProp_AutoEquipItemInSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterEquipmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterEquipmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterEquipmentComponent_Statics::ClassParams = {
		&UCharacterEquipmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterEquipmentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEquipmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterEquipmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterEquipmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterEquipmentComponent, 4102741221);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UCharacterEquipmentComponent>()
	{
		return UCharacterEquipmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterEquipmentComponent(Z_Construct_UClass_UCharacterEquipmentComponent, &UCharacterEquipmentComponent::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UCharacterEquipmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterEquipmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
