// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Components/Weapon/WeaponBarellComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBarellComponent() {}
// Cross Module References
	XYZ_HOMEWORK_API UEnum* Z_Construct_UEnum_XYZ_HomeWork_EHitRegistrationType();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	XYZ_HOMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDecalInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UWeaponBarellComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UWeaponBarellComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_AXYZProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	static UEnum* EHitRegistrationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_XYZ_HomeWork_EHitRegistrationType, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("EHitRegistrationType"));
		}
		return Singleton;
	}
	template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EHitRegistrationType>()
	{
		return EHitRegistrationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHitRegistrationType(EHitRegistrationType_StaticEnum, TEXT("/Script/XYZ_HomeWork"), TEXT("EHitRegistrationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_XYZ_HomeWork_EHitRegistrationType_Hash() { return 2616550857U; }
	UEnum* Z_Construct_UEnum_XYZ_HomeWork_EHitRegistrationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHitRegistrationType"), 0, Get_Z_Construct_UEnum_XYZ_HomeWork_EHitRegistrationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHitRegistrationType::HitScan", (int64)EHitRegistrationType::HitScan },
				{ "EHitRegistrationType::Projectile", (int64)EHitRegistrationType::Projectile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HitScan.Name", "EHitRegistrationType::HitScan" },
				{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
				{ "Projectile.Name", "EHitRegistrationType::Projectile" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
				nullptr,
				"EHitRegistrationType",
				"EHitRegistrationType",
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
class UScriptStruct* FDecalInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern XYZ_HOMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FDecalInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecalInfo, Z_Construct_UPackage__Script_XYZ_HomeWork(), TEXT("DecalInfo"), sizeof(FDecalInfo), Get_Z_Construct_UScriptStruct_FDecalInfo_Hash());
	}
	return Singleton;
}
template<> XYZ_HOMEWORK_API UScriptStruct* StaticStruct<FDecalInfo>()
{
	return FDecalInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDecalInfo(FDecalInfo::StaticStruct, TEXT("/Script/XYZ_HomeWork"), TEXT("DecalInfo"), false, nullptr, nullptr);
static struct FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFDecalInfo
{
	FScriptStruct_XYZ_HomeWork_StaticRegisterNativesFDecalInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DecalInfo")),new UScriptStruct::TCppStructOps<FDecalInfo>);
	}
} ScriptStruct_XYZ_HomeWork_StaticRegisterNativesFDecalInfo;
	struct Z_Construct_UScriptStruct_FDecalInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalFadeOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecalInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecalInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decal info" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalInfo, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalSize_MetaData[] = {
		{ "Category", "Decal info" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalInfo, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalLifeTime_MetaData[] = {
		{ "Category", "Decal info" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalLifeTime = { "DecalLifeTime", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalInfo, DecalLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalFadeOutTime_MetaData[] = {
		{ "Category", "Decal info" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalFadeOutTime = { "DecalFadeOutTime", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalInfo, DecalFadeOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalFadeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalFadeOutTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecalInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalInfo_Statics::NewProp_DecalFadeOutTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecalInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
		nullptr,
		&NewStructOps,
		"DecalInfo",
		sizeof(FDecalInfo),
		alignof(FDecalInfo),
		Z_Construct_UScriptStruct_FDecalInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDecalInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDecalInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_XYZ_HomeWork();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DecalInfo"), sizeof(FDecalInfo), Get_Z_Construct_UScriptStruct_FDecalInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDecalInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDecalInfo_Hash() { return 3001110444U; }
	DEFINE_FUNCTION(UWeaponBarellComponent::execProcessHit)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessHit(Z_Param_Out_HitResult,Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	void UWeaponBarellComponent::StaticRegisterNativesUWeaponBarellComponent()
	{
		UClass* Class = UWeaponBarellComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProcessHit", &UWeaponBarellComponent::execProcessHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics
	{
		struct WeaponBarellComponent_eventProcessHit_Parms
		{
			FHitResult HitResult;
			FVector Direction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBarellComponent_eventProcessHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBarellComponent_eventProcessHit_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponBarellComponent, nullptr, "ProcessHit", nullptr, nullptr, sizeof(WeaponBarellComponent_eventProcessHit_Parms), Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponBarellComponent_NoRegister()
	{
		return UWeaponBarellComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponBarellComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiringRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletsPerShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BulletsPerShot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitRegistration_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitRegistration_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HitRegistration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalloffDiagramCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FalloffDiagramCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDecalInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultDecalInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponBarellComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponBarellComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponBarellComponent_ProcessHit, "ProcessHit" }, // 3768262762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/Weapon/WeaponBarellComponent.h" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FiringRange_MetaData[] = {
		{ "Category", "Barell atributes" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FiringRange = { "FiringRange", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, FiringRange), METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FiringRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FiringRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_BulletsPerShot_MetaData[] = {
		{ "Category", "Barell atributes" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_BulletsPerShot = { "BulletsPerShot", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, BulletsPerShot), METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_BulletsPerShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_BulletsPerShot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_HitRegistration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_HitRegistration_MetaData[] = {
		{ "Category", "Barell atributes | Hit registration" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_HitRegistration = { "HitRegistration", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, HitRegistration), Z_Construct_UEnum_XYZ_HomeWork_EHitRegistrationType, METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_HitRegistration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_HitRegistration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Barell atributes | Hit registration" },
		{ "EditCondition", "HitRegistration == EHitRegistrationType::Projectile" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, ProjectileClass), Z_Construct_UClass_AXYZProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Barell atributes | Damage" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Barell atributes | Damage" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, DamageTypeClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FalloffDiagramCurve_MetaData[] = {
		{ "Category", "Barell atributes | Damage" },
		{ "Comment", "// Damage depending from distance  (in meters)\n" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
		{ "ToolTip", "Damage depending from distance  (in meters)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FalloffDiagramCurve = { "FalloffDiagramCurve", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, FalloffDiagramCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FalloffDiagramCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FalloffDiagramCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_MuzzleFlashFX_MetaData[] = {
		{ "Category", "Barell atributes | VFX" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_MuzzleFlashFX = { "MuzzleFlashFX", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, MuzzleFlashFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_MuzzleFlashFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_MuzzleFlashFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_TraceFX_MetaData[] = {
		{ "Category", "Barell atributes | VFX" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_TraceFX = { "TraceFX", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, TraceFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_TraceFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_TraceFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DefaultDecalInfo_MetaData[] = {
		{ "Category", "Barell atributes | Decals" },
		{ "ModuleRelativePath", "Components/Weapon/WeaponBarellComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DefaultDecalInfo = { "DefaultDecalInfo", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBarellComponent, DefaultDecalInfo), Z_Construct_UScriptStruct_FDecalInfo, METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DefaultDecalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DefaultDecalInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponBarellComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FiringRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_BulletsPerShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_HitRegistration_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_HitRegistration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_FalloffDiagramCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_MuzzleFlashFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_TraceFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBarellComponent_Statics::NewProp_DefaultDecalInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponBarellComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponBarellComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponBarellComponent_Statics::ClassParams = {
		&UWeaponBarellComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponBarellComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponBarellComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBarellComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponBarellComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponBarellComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponBarellComponent, 3421428004);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UWeaponBarellComponent>()
	{
		return UWeaponBarellComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponBarellComponent(Z_Construct_UClass_UWeaponBarellComponent, &UWeaponBarellComponent::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UWeaponBarellComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponBarellComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
