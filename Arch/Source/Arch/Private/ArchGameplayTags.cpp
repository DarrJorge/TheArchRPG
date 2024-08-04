// DarrJorge All Rights Reserved.


#include "ArchGameplayTags.h"

namespace ArchGameplayTags
{
	/** Input Tags **/
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Equip_Weapon, "InputTag.Equip.Weapon");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Unequip_Weapon, "InputTag.Unequip.Weapon");

	/** Items Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Item_Weapon_Axe, "Item.Weapon.Axe");

	/** Montages Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Montage_Event_EquipWeapon, "Montage.Event.EquipWeapon");
	UE_DEFINE_GAMEPLAY_TAG(Montage_Event_UnequipWeapon, "Montage.Event.UnequipWeapon");
	
}
