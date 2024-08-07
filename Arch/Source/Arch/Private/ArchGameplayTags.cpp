// DarrJorge All Rights Reserved.


#include "ArchGameplayTags.h"

namespace ArchGameplayTags
{
	/** Input Tags **/
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Equip_Weapon, "InputTag.Equip.Weapon");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Unequip_Weapon, "InputTag.Unequip.Weapon");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_LightAttack, "InputTag.LightAttack");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_HeavyAttack, "InputTag.HeavyAttack");

	/** Items Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Item_Weapon_Axe, "Item.Weapon.Axe");

	/** Ability Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe, "Player.Ability.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Axe, "Player.Ability.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe, "Player.Ability.Attack.Light.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe, "Player.Ability.Attack.Heavy.Axe");
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_JumpToFinisher, "Player.Status.JumpToFinisher");

	/** Game Events Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Event_Montage_Equip_Axe, "Event.Montage.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Event_Montage_Unequip_Axe, "Event.Montage.Unequip.Axe");
	
}
