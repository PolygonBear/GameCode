// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GC_BasePawnMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class XYZ_HOMEWORK_API UGC_BasePawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

		virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
public:
	void JumpStar();

	virtual bool IsFalling() const override;

protected:
	UPROPERTY(EditAnywhere)
	float MaxSpeed = 1200.0f;

	UPROPERTY(EditAnywhere)
    bool bEnableGravity;

	UPROPERTY(EditAnywhere)
	float InitialJumpVelocity = 500.0f;


private:
	FVector VerticalVelocity = FVector::ZeroVector;
	bool bIsFalling = false;
};
