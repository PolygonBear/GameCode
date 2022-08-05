#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XYZ_HomeWork_Types.h"
#include "Characters/XYZBaseCharacter.h"
#include "EquipableItem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipmentStateChanged, bool, bIsEquipped);

class UAnimMontage;
class AXYZBaseCharacter;

UCLASS(Abstract, NotBlueprintType)
class XYZ_HOMEWORK_API AEquipableItem : public AActor
{
	GENERATED_BODY()
public:
	virtual void SetOwner(AActor* NewOwner) override;	
	
	EEquipableItemType GetItemType() const;

	FName GetUnEquippedSocketName() const;
	FName GetEquippedSocketName() const;

	UAnimMontage* GetCharacterEquipAnimMontage() const;

	virtual  void Equip();
	virtual  void UnEquip();
	virtual EReticleType GetReticleType() const;
protected:
	UPROPERTY(BlueprintAssignable)
	FOnEquipmentStateChanged OnEquipmentStateChanged;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipable item")
	EEquipableItemType ItemType = EEquipableItemType::None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipable item")
	FName UnEquippedSocketName = NAME_None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipable item")
	FName EquippedSocketName = NAME_None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipable item")
	UAnimMontage* CharacterEquipAnimMontage = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Reticle")
	EReticleType ReticleType = EReticleType::None;

	AXYZBaseCharacter* GetCharacterOwner() const;

private:
	TWeakObjectPtr<AXYZBaseCharacter> CachedCharacterOwner;
};