// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"
#include "AIController.h"
#include "GenericTeamAgentInterface.h"
#include "Components/Weapon/WeaponBarellComponent.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* TurretRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TurretRoot"));
	SetRootComponent(TurretRoot);

	TurretBaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TurretBase"));
	TurretBaseComponent->SetupAttachment(TurretRoot);

	TurretBarellComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TurretBarell"));
	TurretBarellComponent->SetupAttachment(TurretBaseComponent);

	WeaponBarellComponent = CreateDefaultSubobject<UWeaponBarellComponent>(TEXT("WeaponBarell"));
	WeaponBarellComponent->SetupAttachment(TurretBarellComponent);

}

void ATurret::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AAIController* AIController = Cast<AAIController>(NewController);

	if (IsValid(AIController))
	{
		FGenericTeamId TeamID((uint8)Team);
		AIController->SetGenericTeamId(TeamID);
	}
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (CurrentTurretState)
	{
	case ETurretState::Searching:
		SearchingMovement(DeltaTime);
		break;
	case ETurretState::Firing:
		FiringMovement(DeltaTime);
		break;
	}
}

FVector ATurret::GetPawnViewLocation() const
{
	return WeaponBarellComponent->GetComponentLocation();
}

FRotator ATurret::GetViewRotation() const
{
	return WeaponBarellComponent->GetComponentRotation();
}

void ATurret::SetCurrentTarget(AActor* NewTarget)
{
	CurrentTarget = NewTarget;
	ETurretState NewState = IsValid(CurrentTarget) ? ETurretState::Firing : ETurretState::Searching;
	SetCurrentTurretState(NewState);
}

void ATurret::SearchingMovement(float DeltaTime)
{
	FRotator TurretBaseRotation = TurretBaseComponent->GetRelativeRotation();
	TurretBaseRotation.Yaw += DeltaTime * BaseSearchingRotationRate;
	TurretBaseComponent->SetRelativeRotation(TurretBaseRotation);

	FRotator TurretBarellRotation = TurretBarellComponent->GetRelativeRotation();
	TurretBarellRotation.Pitch = FMath::FInterpTo(TurretBarellRotation.Pitch, 0.0f, DeltaTime, BarellPitchRotationRate);
	TurretBarellComponent->SetRelativeRotation(TurretBarellRotation);
}

void ATurret::FiringMovement(float DeltaTime)
{
	FVector BaseLookAtDirection = (CurrentTarget->GetActorLocation() - TurretBaseComponent->GetComponentLocation()).GetSafeNormal2D();
	FQuat LookAtQuat = BaseLookAtDirection.ToOrientationQuat();
	FQuat TargetQuat = FMath::QInterpTo(TurretBaseComponent->GetComponentQuat(), LookAtQuat, DeltaTime, BaseFiringInterpSpeed);
	TurretBaseComponent->SetWorldRotation(TargetQuat);

	FVector BarellLookAtDirection = (CurrentTarget->GetActorLocation() - TurretBarellComponent->GetComponentLocation()).GetSafeNormal();
	float LookAtPitchAngle = BarellLookAtDirection.ToOrientationRotator().Pitch;

	FRotator BarellRelativeRotation = TurretBarellComponent->GetRelativeRotation();
	BarellRelativeRotation.Pitch = FMath::FInterpTo(BarellRelativeRotation.Pitch, LookAtPitchAngle, DeltaTime, BarellPitchRotationRate);
	TurretBarellComponent->SetRelativeRotation(BarellRelativeRotation);
}

void ATurret::SetCurrentTurretState(ETurretState NewState)
{
	bool bIsStateChanged = NewState != CurrentTurretState;
	CurrentTurretState = NewState;
	if (!bIsStateChanged)
	{
		return;
	}

	switch (CurrentTurretState)
	{
	case ETurretState::Searching:
	{
		GetWorld()->GetTimerManager().ClearTimer(ShotTimer);
		break;
	}
	case ETurretState::Firing:
	{
		GetWorld()->GetTimerManager().SetTimer(ShotTimer, this, &ATurret::MakeShot, GetFireInterval(), true, FireDelayTime);
		break;
	}	
	}
}

void ATurret::MakeShot()
{
	FVector Shotlocation = WeaponBarellComponent->GetComponentLocation();
	FVector ShotDirection = WeaponBarellComponent->GetComponentRotation().RotateVector(FVector::ForwardVector);
	float SpreadAngle = FMath::DegreesToRadians(BulletSpreadAngle);
	WeaponBarellComponent->Shot(Shotlocation, ShotDirection, SpreadAngle);
}

float ATurret::GetFireInterval() const
{
	return 60.0f / RateOfFire;
}
