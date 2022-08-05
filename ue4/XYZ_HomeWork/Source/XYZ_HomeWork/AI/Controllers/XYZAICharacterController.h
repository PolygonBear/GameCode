// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AI/Controllers/XYZAIController.h"
#include "XYZAICharacterController.generated.h"

class AXYZAICharacter;

UCLASS()
class XYZ_HOMEWORK_API AXYZAICharacterController : public AXYZAIController
{
	GENERATED_BODY()

public:
	virtual void SetPawn(APawn* InPawn) override;
	virtual void ActorsPerceptionUpdated(const TArray<AActor*>& UpdateActors) override;
	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
		float TargetReachRadius = 100.0f;

	virtual void BeginPlay() override;

private:
	void TryMoveToNextTarget();

	bool IsTargetReached(FVector TargetLocation) const;
	bool bIsPatrolling = false;
	
	TWeakObjectPtr<AXYZAICharacter> CachedAICharacter;
};
