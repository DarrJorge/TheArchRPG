// DarrJorge All Rights Reserved.


#include "Components/Combat/CombatComponentBase.h"
#include "Components/BoxComponent.h"
#include "Items/Weapons/ArchWeaponBase.h"

#include "Debug/ArchDebugHelper.h"

void UCombatComponentBase::RegisterWeapon(FGameplayTag InWeaponTag, AArchWeaponBase* InWeapon, bool bRegisterAsEquippedWeapon)
{
	checkf(!CharacterCarriedWeaponMap.Contains(InWeaponTag), TEXT("A named %s has already been added as carried weapon"),
		*InWeaponTag.ToString());
	check(InWeapon);

	CharacterCarriedWeaponMap.Emplace(InWeaponTag, InWeapon);

	InWeapon->OnWeaponHitTarget.BindUObject(this, &UCombatComponentBase::OnHitTargetActor);
	InWeapon->OnWeaponPulledFromTarget.BindUObject(this, &UCombatComponentBase::OnWeaponPulledFromTargetActor);
	
	if (bRegisterAsEquippedWeapon)
	{
		CurrentEquippedWeaponTag = InWeaponTag;
	}
}

AArchWeaponBase* UCombatComponentBase::GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
	if (CharacterCarriedWeaponMap.Contains(InWeaponTag))
	{
		if (AArchWeaponBase* const* FoundWeapon = CharacterCarriedWeaponMap.Find(InWeaponTag))
		{
			return *FoundWeapon;
		}
	}
	return nullptr;
}

AArchWeaponBase* UCombatComponentBase::GetCharacterCurrentEquippedWeapon() const
{
	if (!CurrentEquippedWeaponTag.IsValid())
	{
		return nullptr;
	}
	return GetCharacterCarriedWeaponByTag(CurrentEquippedWeaponTag);
}

void UCombatComponentBase::ToggleWeaponCollision(bool bShouldEnable, EToggleDamageType ToggleDamageType)
{
	if (ToggleDamageType == EToggleDamageType::EquippedWeapon)
	{
		AArchWeaponBase* EquippedWeapon = GetCharacterCurrentEquippedWeapon();
		check(EquippedWeapon);

		EquippedWeapon->SetWeaponCollision(bShouldEnable);
		if (!bShouldEnable)
		{
			OverlappedActors.Empty();
		}
	}

	// TODO: Handle body collision boxes
}

float UCombatComponentBase::GetCurrentEquippedWeaponDamageAtLevel(float InLevel) const
{
	return GetCharacterCurrentEquippedWeapon()->WeaponData.WeaponBaseDamage.GetValueAtLevel(InLevel);
}

void UCombatComponentBase::OnHitTargetActor(AActor* HitActor)
{
}

void UCombatComponentBase::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
}
