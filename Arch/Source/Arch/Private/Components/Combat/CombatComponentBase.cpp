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
	if (bRegisterAsEquippedWeapon)
	{
		CurrentEquippedWeaponTag = InWeaponTag;
	}

	const FString WeaponStr = FString::Printf(TEXT("Weapon named: %s has been registered using the tag %s"),
		*InWeapon->GetName(), *InWeaponTag.ToString());
	Debug::Print(WeaponStr);
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
