// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIPatrollingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XYZ_HOMEWORK_API UAIPatrollingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	bool CanPatrol() const;
	FVector SelectClosestWaypoint();
	FVector SelectNextWaypoint();

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Path")
	class APatrollingPath* PatrollingPath = nullptr;
	
private:
	int32 CurrentWaypointIndex = -1;
};
