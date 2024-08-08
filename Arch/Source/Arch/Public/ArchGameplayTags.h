// DarrJorge All Rights Reserved.

#pragma once

#include "NativeGameplayTags.h"

namespace ArchGameplayTags
{
	/** Input Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Equip_Weapon);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Unequip_Weapon);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_LightAttack);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_HeavyAttack);

	/** Items Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Item_Weapon_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Item_Weapon_GuardianWeapon);

	/** Ability Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);

	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);
	
	/** Game Events Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Montage_Equip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Montage_Unequip_Axe);

	
}
