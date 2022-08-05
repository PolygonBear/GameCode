// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/Equipment/Throwables/ThrowableItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableItem() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AThrowableItem_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AThrowableItem();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AEquipableItem();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZProjectile_NoRegister();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType();
// End Cross Module References
	void AThrowableItem::StaticRegisterNativesAThrowableItem()
	{
	}
	UClass* Z_Construct_UClass_AThrowableItem_NoRegister()
	{
		return AThrowableItem::StaticClass();
	}
	struct Z_Construct_UClass_AThrowableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipableItem,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/Equipment/Throwables/ThrowableItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Actors/Equipment/Throwables/ThrowableItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableItem_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Throwbles" },
		{ "ModuleRelativePath", "Actors/Equipment/Throwables/ThrowableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowableItem_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableItem, ProjectileClass), Z_Construct_UClass_AXYZProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThrowableItem_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableItem_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableItem_Statics::NewProp_ThrowAngle_MetaData[] = {
		{ "Category", "Throwbles" },
		{ "ClampMax", "90.000000" },
		{ "ClampMin", "-90.000000" },
		{ "ModuleRelativePath", "Actors/Equipment/Throwables/ThrowableItem.h" },
		{ "UIMax", "90.000000" },
		{ "UIMin", "-90.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowableItem_Statics::NewProp_ThrowAngle = { "ThrowAngle", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableItem, ThrowAngle), METADATA_PARAMS(Z_Construct_UClass_AThrowableItem_Statics::NewProp_ThrowAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableItem_Statics::NewProp_ThrowAngle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThrowableItem_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableItem_Statics::NewProp_AmmoType_MetaData[] = {
		{ "Category", "Throwbles | Parameters | Ammo" },
		{ "ModuleRelativePath", "Actors/Equipment/Throwables/ThrowableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThrowableItem_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowableItem, AmmoType), Z_Construct_UEnum_XYZ_HomeWork_EAmunitionType, METADATA_PARAMS(Z_Construct_UClass_AThrowableItem_Statics::NewProp_AmmoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableItem_Statics::NewProp_AmmoType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableItem_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableItem_Statics::NewProp_ThrowAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableItem_Statics::NewProp_AmmoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableItem_Statics::NewProp_AmmoType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThrowableItem_Statics::ClassParams = {
		&AThrowableItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThrowableItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowableItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowableItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThrowableItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThrowableItem, 1809695866);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AThrowableItem>()
	{
		return AThrowableItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThrowableItem(Z_Construct_UClass_AThrowableItem, &AThrowableItem::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AThrowableItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
