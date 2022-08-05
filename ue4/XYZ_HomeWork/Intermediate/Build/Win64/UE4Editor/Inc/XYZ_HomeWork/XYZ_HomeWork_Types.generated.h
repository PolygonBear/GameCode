// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XYZ_HOMEWORK_XYZ_HomeWork_Types_generated_h
#error "XYZ_HomeWork_Types.generated.h already included, missing '#pragma once' in XYZ_HomeWork_Types.h"
#endif
#define XYZ_HOMEWORK_XYZ_HomeWork_Types_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID XYZ_HomeWork_Source_XYZ_HomeWork_XYZ_HomeWork_Types_h


#define FOREACH_ENUM_ETEAMS(op) \
	op(ETeams::Player) \
	op(ETeams::Enemy) 

enum class ETeams : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<ETeams>();

#define FOREACH_ENUM_EMELEEATTACKTYPES(op) \
	op(EMeleeAttackTypes::None) \
	op(EMeleeAttackTypes::PrimaryAttack) \
	op(EMeleeAttackTypes::SecondaryAttack) 

enum class EMeleeAttackTypes : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EMeleeAttackTypes>();

#define FOREACH_ENUM_EWEAPONFIREMODE(op) \
	op(EWeaponFireMode::Single) \
	op(EWeaponFireMode::FullAuto) \
	op(EWeaponFireMode::GrenadeLauncher) 

enum class EWeaponFireMode : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EWeaponFireMode>();

#define FOREACH_ENUM_ERETICLETYPE(op) \
	op(EReticleType::None) \
	op(EReticleType::Default) \
	op(EReticleType::SniperRifle) \
	op(EReticleType::Max) 

enum class EReticleType : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EReticleType>();

#define FOREACH_ENUM_EEQUIPMENTSLOTS(op) \
	op(EEquipmentSlots::None) \
	op(EEquipmentSlots::SideArm) \
	op(EEquipmentSlots::PrimaryWeapon) \
	op(EEquipmentSlots::SecondaryWeapon) \
	op(EEquipmentSlots::PrimaryItemSlot) \
	op(EEquipmentSlots::MeleeWeapon) 

enum class EEquipmentSlots : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EEquipmentSlots>();

#define FOREACH_ENUM_EAMUNITIONTYPE(op) \
	op(EAmunitionType::None) \
	op(EAmunitionType::Pistol) \
	op(EAmunitionType::Rifle) \
	op(EAmunitionType::ShotgunShells) \
	op(EAmunitionType::FragGrenades) \
	op(EAmunitionType::RifleGrenades) 

enum class EAmunitionType : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EAmunitionType>();

#define FOREACH_ENUM_EEQUIPABLEITEMTYPE(op) \
	op(EEquipableItemType::None) \
	op(EEquipableItemType::Pistol) \
	op(EEquipableItemType::Rifle) \
	op(EEquipableItemType::Throwable) \
	op(EEquipableItemType::Melee) 

enum class EEquipableItemType : uint8;
template<> XYZ_HOMEWORK_API UEnum* StaticEnum<EEquipableItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
