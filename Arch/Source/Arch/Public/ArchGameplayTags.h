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

	/** Items Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Item_Weapon_Axe);

	/** Montages Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Montage_Event_EquipWeapon);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Montage_Event_UnequipWeapon);
	
}
