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
	UE_DEFINE_GAMEPLAY_TAG(Item_Weapon_GuardianWeapon, "Item.Weapon.GuardianWeapon");

	/** Player Ability Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe, "Player.Ability.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Axe, "Player.Ability.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe, "Player.Ability.Attack.Light.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe, "Player.Ability.Attack.Heavy.Axe");
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_JumpToFinisher, "Player.Status.JumpToFinisher");
	
	UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Light, "Player.SetByCaller.AttackType.Light");
	UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Heavy, "Player.SetByCaller.AttackType.Heavy");

	/** Enemy Ability Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_Unarmed, "Enemy.Ability.Combat.Unarmed");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_Weapon_Melee, "Enemy.Ability.Combat.Weapon.Melee");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_Weapon_Range, "Enemy.Ability.Combat.Weapon.Range");

	/** Game Events Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Event_Montage_Equip_Axe, "Event.Montage.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Event_Montage_Unequip_Axe, "Event.Montage.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Event_Combat_MeleeHit, "Event.Combat.MeleeHit");
	UE_DEFINE_GAMEPLAY_TAG(Event_Effect_HitReact, "Event.Effect.HitReact");

	/** Shared Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Shared_SetByCaller_BaseDamage, "Shared.SetByCaller.BaseDamage");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_Effect_HitReact, "Shared.Ability.Effect.HitReact");
	
	
}
