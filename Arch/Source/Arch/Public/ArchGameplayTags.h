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
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Roll);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_SwitchTarget);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_KeyMustBeHeld);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_KeyMustBeHeld_Block);

	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Toggleable);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Toggleable_TargetLock);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Toggleable_Rage);

	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_SpecialWeaponAbility_Light);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_SpecialWeaponAbility_Heavy);

	/** Items Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Item_Weapon_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Item_Weapon_GuardianWeapon);

	/** Player Ability Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_HitPause);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Roll);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Block);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_TargetLock);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Rage);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_SpecialWeaponAbility_Light);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_SpecialWeaponAbility_Heavy);

	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Cooldown_SpecialWeaponAbility_Light);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Cooldown_SpecialWeaponAbility_Heavy);

	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_Rolling);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_Blocking);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_TargetLock);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_Rage_None);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_Rage_Full);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_Rage_Activating);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_Rage_Active);

	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_ActivateRage);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Light);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Heavy);

	/** Enemy Ability Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Unarmed);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Weapon_Melee);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Weapon_Range);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Strafing);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Combat_Summon);

	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Status_Unblockable);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Event_SummonEnemies);
	
	/** Game Events Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Montage_Equip_Axe);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Montage_Unequip_Axe);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Combat_MeleeHit);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Combat_HitPause);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Combat_SuccessfulBlock);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Combat_SwitchTarget_Left);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Combat_SwitchTarget_Right);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Combat_SpawnProjectile);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Effect_HitReact);

	/** Shared Tags **/
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_SetByCaller_BaseDamage);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Ability_Effect_HitReact);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Ability_Death);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_Dead);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_DamageTaken);
	
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_HitReact_Front);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_HitReact_Left);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_HitReact_Right);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_HitReact_Back);
	ARCH_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_Invincible);
	
}
