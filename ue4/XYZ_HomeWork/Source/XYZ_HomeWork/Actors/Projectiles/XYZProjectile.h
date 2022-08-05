// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "XYZProjectile.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProjectileHit, const FHitResult&, Hit, const FVector&, Direction);

UCLASS()
class XYZ_HOMEWORK_API AXYZProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXYZProjectile();

	UFUNCTION(BlueprintCallable)
	void LaunchProjectile(FVector Direction);

	UPROPERTY(BlueprintAssignable)
	FOnProjectileHit OnProjectileHit;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* CollisionComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UProjectileMovementComponent* ProjectileMovementComponent = nullptr;
	
	virtual void OnProjectileLaunched();
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void OnCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
