// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeHitRegistrator.h"
#include "XYZ_HomeWork_Types.h"
#include "Utils/XYZTraceUtils.h"
#include "DrawDebugHelpers.h"
#include "Subsystems/DebugSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Characters/XYZBaseCharacter.h"

UMeleeHitRegistrator::UMeleeHitRegistrator()
{
	PrimaryComponentTick.bCanEverTick = true;
	SphereRadius = 1.0f;
	SetCollisionProfileName(CollisionProfileNoCollision);
}

void UMeleeHitRegistrator::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(bIsHitRegistrationEnabled)
	{
		ProcessHitRegistration();
	}
	PreviousComponentLocation = GetComponentLocation();
}

void UMeleeHitRegistrator::ProcessHitRegistration()
{
	//AXYZBaseCharacter* CachedBaseCharacter = StaticCast<AXYZBaseCharacter*>(CharacterOwner);
	FVector CurrentLocation = GetComponentLocation();
	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = true;
	//QueryParams.AddIgnoredActor(CharacterOwner);

#if ENABLE_DRAW_DEBUG
	UDebugSubsystem* DebugSubSystem = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UDebugSubsystem>();
	bool bIsDebugEnabled = DebugSubSystem->IsCategoryEnabled(DebugCategoryMeleeWeapon);
#else
	bool bIsDebugEnabled = false;
#endif

	bool bHasHit = XYZTraceUtils::SweepSphereSingleByChannel(GetWorld(), HitResult, PreviousComponentLocation, CurrentLocation, GetScaledSphereRadius(), ECC_Melee, QueryParams, FCollisionResponseParams::DefaultResponseParam, bIsDebugEnabled, 5.0f);

	if(bHasHit)
	{
		FVector Direction = (CurrentLocation - PreviousComponentLocation).GetSafeNormal();
		if(OnMeleeHitRegistred.IsBound())
		{
			OnMeleeHitRegistred.Broadcast(HitResult, Direction);
		}
	}
}

void UMeleeHitRegistrator::SetIsHitRegistrationEnabled(bool bIsEnables_In)
{
	bIsHitRegistrationEnabled = bIsEnables_In;
}
