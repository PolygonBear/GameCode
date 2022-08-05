#include "EquipableItem.h"

void AEquipableItem::SetOwner(AActor* NewOwner)
{
	Super::SetOwner(NewOwner);
	if(IsValid(NewOwner))
	{
		checkf(GetOwner()->IsA<AXYZBaseCharacter>(), TEXT("AEquipableItem::SetOwner only character can be owner of an equipable item"));
		CachedCharacterOwner = StaticCast<AXYZBaseCharacter*>(GetOwner());
	}
	else
	{
		CachedCharacterOwner = nullptr;
	}
}

EEquipableItemType AEquipableItem::GetItemType() const
{
	return ItemType;
}

FName AEquipableItem::GetUnEquippedSocketName() const
{
	return UnEquippedSocketName;
}

FName AEquipableItem::GetEquippedSocketName() const
{
	return EquippedSocketName;
}

UAnimMontage* AEquipableItem::GetCharacterEquipAnimMontage() const
{
	return CharacterEquipAnimMontage;
}

void AEquipableItem::Equip()
{
	if(OnEquipmentStateChanged.IsBound())
	{
		OnEquipmentStateChanged.Broadcast(true);
	}
	
}

void AEquipableItem::UnEquip()
{
	if(OnEquipmentStateChanged.IsBound())
	{
		OnEquipmentStateChanged.Broadcast(false);
	}
}

EReticleType AEquipableItem::GetReticleType() const
{
	return ReticleType;
}

AXYZBaseCharacter* AEquipableItem::GetCharacterOwner() const
{
	return CachedCharacterOwner.IsValid() ? CachedCharacterOwner.Get() : nullptr;
}
