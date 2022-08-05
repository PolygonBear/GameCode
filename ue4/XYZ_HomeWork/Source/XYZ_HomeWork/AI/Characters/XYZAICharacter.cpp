// Fill out your copyright notice in the Description page of Project Settings.


#include "XYZAICharacter.h"
#include "Components/CharacterComponents/AIPAtrollingComponent.h"

AXYZAICharacter::AXYZAICharacter(const FObjectInitializer& ObjectInitializer) : 
	Super(ObjectInitializer)
{
	AIPatrollingComponent = CreateDefaultSubobject<UAIPatrollingComponent>(TEXT("AIPatrollingComponent"));
}

UAIPatrollingComponent* AXYZAICharacter::GetPatrollingComponent() const
{
	return AIPatrollingComponent;
}

UBehaviorTree* AXYZAICharacter::GetBehaviorTree() const
{
	return BehaviorTree;
}
