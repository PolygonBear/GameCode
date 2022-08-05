// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeWeaponItem.h"
#include "Components/Weapon/MeleeHitRegistrator.h"

AMeleeWeaponItem::AMeleeWeaponItem()
{
	EquippedSocketName = SocketCharacterWeapon;
}

void AMeleeWeaponItem::StartAttack(EMeleeAttackTypes AttackType)
{
	AXYZBaseCharacter* CharacterOwner = GetCharacterOwner();
	if(!IsValid(CharacterOwner))
	{
		return;
	}

	HitActors.Empty();
	CurrentAttack = Attacks.Find(AttackType);
	if(CurrentAttack && IsValid(CurrentAttack->AttackMontage))
	{
		UAnimInstance* CharacterAnimInstance = CharacterOwner->GetMesh()->GetAnimInstance();
		if(IsValid(CharacterAnimInstance))
		{
			SetIsHitRegistrationEnabled(true);
			float Duration  = CharacterAnimInstance->Montage_Play(CurrentAttack->AttackMontage, 1.0f, EMontagePlayReturnType::Duration);
			GetWorld()->GetTimerManager().SetTimer(AttackTimer, this, &AMeleeWeaponItem::OnAttackTimerElapsed, Duration, false);
		}
		else
		{
			OnAttackTimerElapsed();
		}
	}
}

void AMeleeWeaponItem::SetIsHitRegistrationEnabled(bool bIsregistrationEnabled)
{
	HitActors.Empty();
	for(UMeleeHitRegistrator* HitRegistrator : HitRegistrators)
	{
		HitRegistrator->SetIsHitRegistrationEnabled(bIsregistrationEnabled);
	}
}

void AMeleeWeaponItem::BeginPlay()
{
	Super::BeginPlay();
	GetComponents<UMeleeHitRegistrator>(HitRegistrators);
	for(UMeleeHitRegistrator* HitRegistrator : HitRegistrators)
	{
		HitRegistrator->OnMeleeHitRegistred.AddUFunction(this, FName("PrecessHit"));
	}
}

void AMeleeWeaponItem::PrecessHit(const FHitResult& HitResult, const FVector& HitDirection)
{
	if(CurrentAttack ==nullptr)
	{
		return;
	}
	
	AActor* HitActor = HitResult.GetActor();
	if(!IsValid(HitActor))
	{
		return;
	}

	if(HitActors.Contains(GetOwner()))
	{
		return;
	}

	FPointDamageEvent DamageEvent;
	DamageEvent.HitInfo = HitResult;
	DamageEvent.ShotDirection = HitDirection;
	DamageEvent.DamageTypeClass = CurrentAttack->DamageTypeClass;

	AXYZBaseCharacter* CharacterOwner = GetCharacterOwner();
	AController* Controller = IsValid(CharacterOwner) ? CharacterOwner->GetController<AController>() : nullptr;
	HitActor->TakeDamage(CurrentAttack->DamageAmount, DamageEvent, Controller, GetOwner());	
	
	HitActors.Add(HitActor);
}

void AMeleeWeaponItem::OnAttackTimerElapsed()
{
	CurrentAttack = nullptr;
	SetIsHitRegistrationEnabled(false);
}
