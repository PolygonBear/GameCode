// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/Equipment/EquipableItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipableItem() {}
// Cross Module References
	XYZ_HOMEWORK_API UFunction* Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AEquipableItem_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AEquipableItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EReticleType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics
	{
		struct _Script_XYZ_HomeWork_eventOnEquipmentStateChanged_Parms
		{
			bool bIsEquipped;
		};
		static void NewProp_bIsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
	{
		((_Script_XYZ_HomeWork_eventOnEquipmentStateChanged_Parms*)Obj)->bIsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::NewProp_bIsEquipped = { "bIsEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_XYZ_HomeWork_eventOnEquipmentStateChanged_Parms), &Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::NewProp_bIsEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Equipment/EquipableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork, nullptr, "OnEquipmentStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_XYZ_HomeWork_eventOnEquipmentStateChanged_Parms), Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AEquipableItem::StaticRegisterNativesAEquipableItem()
	{
	}
	UClass* Z_Construct_UClass_AEquipableItem_NoRegister()
	{
		return AEquipableItem::StaticClass();
	}
	struct Z_Construct_UClass_AEquipableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEquipmentStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipmentStateChanged;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnEquippedSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UnEquippedSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquippedSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEquipAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterEquipAnimMontage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReticleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReticleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEquipableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipableItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Equipment/EquipableItem.h" },
		{ "ModuleRelativePath", "Actors/Equipment/EquipableItem.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipableItem_Statics::NewProp_OnEquipmentStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Actors/Equipment/EquipableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEquipableItem_Statics::NewProp_OnEquipmentStateChanged = { "OnEquipmentStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipableItem, OnEquipmentStateChanged), Z_Construct_UDelegateFunction_XYZ_HomeWork_OnEquipmentStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEquipableItem_Statics::NewProp_OnEquipmentStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipableItem_Statics::NewProp_OnEquipmentStateChanged_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEquipableItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipableItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Equipable item" },
		{ "ModuleRelativePath", "Actors/Equipment/EquipableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEquipableItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipableItem, ItemType), Z_Construct_UEnum_XYZ_HomeWork_EEquipableItemType, METADATA_PARAMS(Z_Construct_UClass_AEquipableItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipableItem_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipableItem_Statics::NewProp_UnEquippedSocketName_MetaData[] = {
		{ "Category", "Equipable item" },
		{ "ModuleRelativePath", "Actors/Equipment/EquipableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEquipableItem_Statics::NewProp_UnEquippedSocketName = { "UnEquippedSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipableItem, UnEquippedSocketName), METADATA_PARAMS(Z_Construct_UClass_AEquipableItem_Statics::NewProp_UnEquippedSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipableItem_Statics::NewProp_UnEquippedSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipableItem_Statics::NewProp_EquippedSocketName_MetaData[] = {
		{ "Category", "Equipable item" },
		{ "ModuleRelativePath", "Actors/Equipment/EquipableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEquipableItem_Statics::NewProp_EquippedSocketName = { "EquippedSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipableItem, EquippedSocketName), METADATA_PARAMS(Z_Construct_UClass_AEquipableItem_Statics::NewProp_EquippedSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipableItem_Statics::NewProp_EquippedSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipableItem_Statics::NewProp_CharacterEquipAnimMontage_MetaData[] = {
		{ "Category", "Equipable item" },
		{ "ModuleRelativePath", "Actors/Equipment/EquipableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEquipableItem_Statics::NewProp_CharacterEquipAnimMontage = { "CharacterEquipAnimMontage", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipableItem, CharacterEquipAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEquipableItem_Statics::NewProp_CharacterEquipAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipableItem_Statics::NewProp_CharacterEquipAnimMontage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEquipableItem_Statics::NewProp_ReticleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEquipableItem_Statics::NewProp_ReticleType_MetaData[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Actors/Equipment/EquipableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEquipableItem_Statics::NewProp_ReticleType = { "ReticleType", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEquipableItem, ReticleType), Z_Construct_UEnum_XYZ_HomeWork_EReticleType, METADATA_PARAMS(Z_Construct_UClass_AEquipableItem_Statics::NewProp_ReticleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipableItem_Statics::NewProp_ReticleType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEquipableItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipableItem_Statics::NewProp_OnEquipmentStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipableItem_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipableItem_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipableItem_Statics::NewProp_UnEquippedSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipableItem_Statics::NewProp_EquippedSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipableItem_Statics::NewProp_CharacterEquipAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipableItem_Statics::NewProp_ReticleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEquipableItem_Statics::NewProp_ReticleType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEquipableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquipableItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEquipableItem_Statics::ClassParams = {
		&AEquipableItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEquipableItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEquipableItem_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AEquipableItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEquipableItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEquipableItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEquipableItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEquipableItem, 2159301511);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AEquipableItem>()
	{
		return AEquipableItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEquipableItem(Z_Construct_UClass_AEquipableItem, &AEquipableItem::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AEquipableItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEquipableItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
