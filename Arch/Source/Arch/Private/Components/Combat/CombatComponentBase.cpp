// DarrJorge All Rights Reserved.


#include "Components/Combat/CombatComponentBase.h"
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
	switch (ToggleDamageType)
	{
	case EToggleDamageType::EquippedWeapon:
		ToggleEquippedWeaponCollision(bShouldEnable);
		break;

	case EToggleDamageType::LeftHand:
		ToggleLeftUnarmedCollision(bShouldEnable);
		break;

	case EToggleDamageType::RightHand:
		ToggleRightUnarmedCollision(bShouldEnable);
		break;
	}

	if (!bShouldEnable)
	{
		OverlappedActors.Empty();
	}
}

float UCombatComponentBase::GetCurrentEquippedWeaponDamageAtLevel(float InLevel) const
{
	return GetCharacterCurrentEquippedWeapon()->WeaponData.WeaponBaseDamage.GetValueAtLevel(InLevel);
}

void UCombatComponentBase::OnHitTargetActor(AActor* HitActor)
{
	// implementation in derived classes
}

void UCombatComponentBase::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
	// implementation in derived classes
}

void UCombatComponentBase::ToggleEquippedWeaponCollision(bool bShouldEnable)
{
	const AArchWeaponBase* EquippedWeapon = GetCharacterCurrentEquippedWeapon();
	if (!EquippedWeapon) return;
	EquippedWeapon->SetWeaponCollision(bShouldEnable);
}

void UCombatComponentBase::ToggleLeftUnarmedCollision(bool bShouldEnable)
{
	// implementation in derived classes
}

void UCombatComponentBase::ToggleRightUnarmedCollision(bool bShouldEnable)
{
	// implementation in derived classes
}
