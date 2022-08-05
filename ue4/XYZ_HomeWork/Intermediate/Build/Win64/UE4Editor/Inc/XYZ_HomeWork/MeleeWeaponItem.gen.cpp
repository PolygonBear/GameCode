// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Actors/Equipment/Weapons/MeleeWeaponItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeWeaponItem() {}
// Cross Module References
	XYZ_HOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMelleAttackDescription();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AMeleeWeaponItem_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AMeleeWeaponItem();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AEquipableItem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EMeleeAttackTypes();
// End Cross Module References
class UScriptStruct* FMelleAttackDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern XYZ_HOMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FMelleAttackDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMelleAttackDescription, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("MelleAttackDescription"), sizeof(FMelleAttackDescription), Get_Z_Construct_UScriptStruct_FMelleAttackDescription_Hash());
	}
	return Singleton;
}
template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<FMelleAttackDescription>()
{
	return FMelleAttackDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMelleAttackDescription(FMelleAttackDescription::StaticStruct, TEXT("/Script/XYZ_HomeWork"), TEXT("MelleAttackDescription"), false, nullptr, nullptr);
static struct FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFMelleAttackDescription
{
	FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFMelleAttackDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MelleAttackDescription")),new UScriptStruct::TCppStructOps<FMelleAttackDescription>);
	}
} ScriptStruct_XYZ_HomeWork_StaticRegisterNativesFMelleAttackDescription;
	struct Z_Construct_UScriptStruct_FMelleAttackDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/MeleeWeaponItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMelleAttackDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Melee attack" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/MeleeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMelleAttackDescription, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Melee attack" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/MeleeWeaponItem.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMelleAttackDescription, DamageAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Melee attack" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/MeleeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMelleAttackDescription, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_AttackMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::NewProp_AttackMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
		nullptr,
		&NewStructOps,
		"MelleAttackDescription",
		sizeof(FMelleAttackDescription),
		alignof(FMelleAttackDescription),
		Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMelleAttackDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMelleAttackDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MelleAttackDescription"), sizeof(FMelleAttackDescription), Get_Z_Construct_UScriptStruct_FMelleAttackDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMelleAttackDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMelleAttackDescription_Hash() { return 2425104311U; }
	DEFINE_FUNCTION(AMeleeWeaponItem::execPrecessHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrecessHit(Z_Param_Out_HitResult,Z_Param_Out_HitDirection);
		P_NATIVE_END;
	}
	void AMeleeWeaponItem::StaticRegisterNativesAMeleeWeaponItem()
	{
		UClass* Class = AMeleeWeaponItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrecessHit", &AMeleeWeaponItem::execPrecessHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics
	{
		struct MeleeWeaponItem_eventPrecessHit_Parms
		{
			FHitResult HitResult;
			FVector HitDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeWeaponItem_eventPrecessHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeWeaponItem_eventPrecessHit_Parms, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::NewProp_HitDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/MeleeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeleeWeaponItem, nullptr, "PrecessHit", nullptr, nullptr, sizeof(MeleeWeaponItem_eventPrecessHit_Parms), Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMeleeWeaponItem_NoRegister()
	{
		return AMeleeWeaponItem::StaticClass();
	}
	struct Z_Construct_UClass_AMeleeWeaponItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attacks_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attacks_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attacks_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Attacks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeleeWeaponItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipableItem,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMeleeWeaponItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMeleeWeaponItem_PrecessHit, "PrecessHit" }, // 2344201706
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeaponItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actors/Equipment/Weapons/MeleeWeaponItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/MeleeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_ValueProp = { "Attacks", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMelleAttackDescription, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_Key_KeyProp = { "Attacks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_XYZ_HomeWork_EMeleeAttackTypes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_MetaData[] = {
		{ "Category", "Melee attack" },
		{ "ModuleRelativePath", "Actors/Equipment/Weapons/MeleeWeaponItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks = { "Attacks", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeleeWeaponItem, Attacks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeleeWeaponItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeaponItem_Statics::NewProp_Attacks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeleeWeaponItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeWeaponItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeleeWeaponItem_Statics::ClassParams = {
		&AMeleeWeaponItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMeleeWeaponItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeaponItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMeleeWeaponItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeaponItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeleeWeaponItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeleeWeaponItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeleeWeaponItem, 3725155873);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<AMeleeWeaponItem>()
	{
		return AMeleeWeaponItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeleeWeaponItem(Z_Construct_UClass_AMeleeWeaponItem, &AMeleeWeaponItem::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("AMeleeWeaponItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeWeaponItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
