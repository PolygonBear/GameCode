// Fill out your copyright notice in the Description page of Project Settings.


#include "XYZAICharacterController.h"
#include "Perception/AISense_Sight.h"
#include "AI/Characters/XYZAICharacter.h"
#include "Components/CharacterComponents/AIPatrollingComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "XYZ_HomeWork_Types.h"

void AXYZAICharacterController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	if (IsValid(InPawn))
	{
		checkf(InPawn->IsA<AXYZAICharacter>(), TEXT("AXYZAICharacterController::SetPawn AICharacterController can pessess only XYZAICharacter"));
		CachedAICharacter = StaticCast<AXYZAICharacter*>(InPawn);
		RunBehaviorTree(CachedAICharacter->GetBehaviorTree());
	}
	else
	{
		CachedAICharacter = nullptr;
	}
}

void AXYZAICharacterController::ActorsPerceptionUpdated(const TArray<AActor*>& UpdateActors)
{
	Super::ActorsPerceptionUpdated(UpdateActors);
	if (!CachedAICharacter.IsValid())
	{
		return;
	}
	TryMoveToNextTarget();
}

void AXYZAICharacterController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);
	if (!Result.IsSuccess())
	{
		return;
	}
	TryMoveToNextTarget();
}

void AXYZAICharacterController::BeginPlay()
{
	Super::BeginPlay();
	UAIPatrollingComponent* PatrollingComponent = CachedAICharacter->GetPatrollingComponent();
	if (PatrollingComponent->CanPatrol())
	{
		FVector ClosesWaypoint = PatrollingComponent->SelectClosestWaypoint();
		if (IsValid(Blackboard))
		{
			Blackboard->SetValueAsVector(BB_NextLocation, ClosesWaypoint);
			Blackboard->SetValueAsObject(BB_CurrentTarget, nullptr);
		}
		bIsPatrolling = true;
	}
}

void AXYZAICharacterController::TryMoveToNextTarget()
{
	UAIPatrollingComponent* PatrollingComponent = CachedAICharacter->GetPatrollingComponent();
	AActor* ClosestActor = GetClosestSensedActor(UAISense_Sight::StaticClass());
	if (IsValid(ClosestActor))
	{
		if (IsValid(Blackboard))
		{
			Blackboard->SetValueAsObject(BB_CurrentTarget, ClosestActor);
		}
		bIsPatrolling = false;
	}
	else if(PatrollingComponent->CanPatrol())
	{
		FVector Waypoint = bIsPatrolling ? PatrollingComponent->SelectNextWaypoint() : PatrollingComponent->SelectClosestWaypoint();
		if (IsValid(Blackboard))
		{
			Blackboard->SetValueAsVector(BB_NextLocation, Waypoint);
			Blackboard->SetValueAsObject(BB_CurrentTarget, nullptr);
		}
		bIsPatrolling = true;
	}
}

bool AXYZAICharacterController::IsTargetReached(FVector TargetLocation) const
{
	return (TargetLocation - CachedAICharacter->GetActorLocation()).SizeSquared() <= FMath::Square(TargetReachRadius);
}
