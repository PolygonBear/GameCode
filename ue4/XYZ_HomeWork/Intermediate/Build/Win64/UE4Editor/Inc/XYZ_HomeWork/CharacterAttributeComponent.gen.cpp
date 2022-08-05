// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XYZ_HomeWork/Components/Attributes/CharacterAttributeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAttributeComponent() {}
// Cross Module References
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UCharacterAttributeComponent_NoRegister();
	XYZ_HOMEWORK_API UClass* Z_Construct_UClass_UCharacterAttributeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_XYZ_HomeWork();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterAttributeComponent::execOnTakeDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamagedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	void UCharacterAttributeComponent::StaticRegisterNativesUCharacterAttributeComponent()
	{
		UClass* Class = UCharacterAttributeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTakeDamage", &UCharacterAttributeComponent::execOnTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics
	{
		struct CharacterAttributeComponent_eventOnTakeDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributeComponent_eventOnTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributeComponent_eventOnTakeDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributeComponent_eventOnTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributeComponent_eventOnTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterAttributeComponent_eventOnTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeComponent, nullptr, "OnTakeDamage", nullptr, nullptr, sizeof(CharacterAttributeComponent_eventOnTakeDamage_Parms), Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterAttributeComponent_NoRegister()
	{
		return UCharacterAttributeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterAttributeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaRestoreVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaRestoreVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintStaminaConsumptionVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintStaminaConsumptionVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOxygen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOxygen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OxygenRestoreVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OxygenRestoreVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwimOxygenConsumptionVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwimOxygenConsumptionVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OxygenOverDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OxygenOverDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OxygenDamageInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OxygenDamageInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterAttributeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XYZ_HomeWork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterAttributeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAttributeComponent_OnTakeDamage, "OnTakeDamage" }, // 1141253098
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "/** Stamina **/" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "ToolTip", "Stamina *" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_StaminaRestoreVelocity_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_StaminaRestoreVelocity = { "StaminaRestoreVelocity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, StaminaRestoreVelocity), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_StaminaRestoreVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_StaminaRestoreVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SprintStaminaConsumptionVelocity_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SprintStaminaConsumptionVelocity = { "SprintStaminaConsumptionVelocity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, SprintStaminaConsumptionVelocity), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SprintStaminaConsumptionVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SprintStaminaConsumptionVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxOxygen_MetaData[] = {
		{ "Category", "Oxygen" },
		{ "Comment", "/** Oxygen **/" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "ToolTip", "Oxygen *" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxOxygen = { "MaxOxygen", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, MaxOxygen), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxOxygen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxOxygen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenRestoreVelocity_MetaData[] = {
		{ "Category", "Oxygen" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenRestoreVelocity = { "OxygenRestoreVelocity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, OxygenRestoreVelocity), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenRestoreVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenRestoreVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SwimOxygenConsumptionVelocity_MetaData[] = {
		{ "Category", "Oxygen" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SwimOxygenConsumptionVelocity = { "SwimOxygenConsumptionVelocity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, SwimOxygenConsumptionVelocity), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SwimOxygenConsumptionVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SwimOxygenConsumptionVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenOverDamage_MetaData[] = {
		{ "Category", "Oxygen" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenOverDamage = { "OxygenOverDamage", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, OxygenOverDamage), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenOverDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenOverDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenDamageInterval_MetaData[] = {
		{ "Category", "Oxygen" },
		{ "ModuleRelativePath", "Components/Attributes/CharacterAttributeComponent.h" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenDamageInterval = { "OxygenDamageInterval", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterAttributeComponent, OxygenDamageInterval), METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenDamageInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenDamageInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAttributeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_StaminaRestoreVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SprintStaminaConsumptionVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_MaxOxygen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenRestoreVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_SwimOxygenConsumptionVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenOverDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeComponent_Statics::NewProp_OxygenDamageInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterAttributeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAttributeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAttributeComponent_Statics::ClassParams = {
		&UCharacterAttributeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterAttributeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterAttributeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterAttributeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterAttributeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterAttributeComponent, 1723388483);
	template<> XYZ_HOMEWORK_API UClass* StaticClass<UCharacterAttributeComponent>()
	{
		return UCharacterAttributeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterAttributeComponent(Z_Construct_UClass_UCharacterAttributeComponent, &UCharacterAttributeComponent::StaticClass, TEXT("/Script/XYZ_HomeWork"), TEXT("UCharacterAttributeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAttributeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
