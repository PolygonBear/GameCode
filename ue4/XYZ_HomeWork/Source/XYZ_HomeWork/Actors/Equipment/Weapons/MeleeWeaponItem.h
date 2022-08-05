// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Equipment/EquipableItem.h"
#include "XYZ_HomeWork_Types.h"
#include "Components/Weapon/MeleeHitRegistrator.h"
#include "MeleeWeaponItem.generated.h"

USTRUCT(BlueprintType)
struct FMelleAttackDescription
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Melee attack")
	TSubclassOf<class UDamageType> DamageTypeClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Melee attack", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float DamageAmount = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Melee attack")
	class UAnimMontage* AttackMontage = nullptr;
};

class UMeleeHitRegistrator;

UCLASS(Blueprintable)
class XYZ_HOMEWORK_API AMeleeWeaponItem : public AEquipableItem
{
	GENERATED_BODY()

public:
	AMeleeWeaponItem();

	void StartAttack(EMeleeAttackTypes AttackType);
	
	void SetIsHitRegistrationEnabled(bool bIsregistrationEnabled);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Melee attack")
	TMap<EMeleeAttackTypes, FMelleAttackDescription> Attacks;

	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void PrecessHit(const FHitResult& HitResult, const FVector& HitDirection);
	
	void OnAttackTimerElapsed();
	
	TArray<UMeleeHitRegistrator*> HitRegistrators;
	TSet<AActor*> HitActors;
	
	FTimerHandle AttackTimer;
	
	FMelleAttackDescription* CurrentAttack;
};
