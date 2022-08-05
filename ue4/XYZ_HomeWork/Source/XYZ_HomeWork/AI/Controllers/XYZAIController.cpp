// Fill out your copyright notice in the Description page of Project Settings.


#include "XYZAIController.h"
#include "Perception/AISense.h"
#include "Perception/AIPerceptionComponent.h"

AXYZAIController::AXYZAIController()
{
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
}

AActor* AXYZAIController::GetClosestSensedActor(TSubclassOf<UAISense> SenseClass) const
{
	if (!IsValid(GetPawn()))
	{
		return nullptr;
	}

	TArray<AActor*> SebsedActors;
	PerceptionComponent->GetCurrentlyPerceivedActors(SenseClass, SebsedActors);

	AActor* ClosestActor = nullptr;
	float MinSquaredDistance = FLT_MAX;
	FVector PawnLocation = GetPawn()->GetActorLocation();

	for (AActor* SeenActor : SebsedActors)
	{
		float CurrentSquaredDistance = (PawnLocation - SeenActor->GetActorLocation()).SizeSquared();
		if (CurrentSquaredDistance < MinSquaredDistance)
		{
			MinSquaredDistance = CurrentSquaredDistance;
			ClosestActor = SeenActor;
		}
	}
	return ClosestActor;
}
