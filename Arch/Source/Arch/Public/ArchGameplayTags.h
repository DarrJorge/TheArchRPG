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

	/** Player Ability Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_HitPause);

	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Light);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Heavy);

	/** Enemy Ability Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Unarmed);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Weapon_Melee);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Weapon_Range);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Strafing);
	
	/** Game Events Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Montage_Equip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Montage_Unequip_Axe);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Combat_MeleeHit);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Combat_HitPause);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Effect_HitReact);

	/** Shared Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_SetByCaller_BaseDamage);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Ability_Effect_HitReact);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Ability_Death);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_Dead);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_DamageTaken);

	
}
