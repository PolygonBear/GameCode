// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "XYZ_HomeWork_Types.h"
#include "Turret.generated.h"

UENUM(BlueprintType)
enum class ETurretState : uint8
{
	Searching,
	Firing
};

class UWeaponBarellComponent;

UCLASS()
class XYZ_HOMEWORK_API ATurret : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATurret();
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void Tick(float DeltaTime) override;
	virtual FVector GetPawnViewLocation() const override;
	virtual FRotator GetViewRotation() const override;

	void SetCurrentTarget(AActor* NewTarget);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* TurretBaseComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* TurretBarellComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UWeaponBarellComponent* WeaponBarellComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float BaseSearchingRotationRate = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float BarellPitchRotationRate = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float MaxBarellPitchAngle = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float MinBarellPitchAngle = -30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float BaseFiringInterpSpeed = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres | Fire", meta = (ClampMin = 1.0f, UIMin = 1.0f))
	float RateOfFire = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres | Fire", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float BulletSpreadAngle = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres | Fire", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float FireDelayTime = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametres | Team")
	ETeams Team = ETeams::Enemy;

private:
	void SearchingMovement(float DeltaTime);
	void FiringMovement(float DeltaTime);
	void SetCurrentTurretState(ETurretState NewState);
	void MakeShot();

	ETurretState CurrentTurretState = ETurretState::Searching;

	AActor* CurrentTarget = nullptr;
	
	float GetFireInterval() const;
	 
	FTimerHandle ShotTimer;
};
