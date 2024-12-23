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
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Roll, "InputTag.Roll");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_SwitchTarget, "InputTag.SwitchTarget");
	
	UE_DEFINE_GAMEPLAY_TAG(InputTag_KeyMustBeHeld, "InputTag.KeyMustBeHeld");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_KeyMustBeHeld_Block, "InputTag.KeyMustBeHeld.Block");
	
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Toggleable, "InputTag.Toggleable");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Toggleable_TargetLock, "InputTag.Toggleable.TargetLock");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Toggleable_Rage, "InputTag.Toggleable.Rage");

	UE_DEFINE_GAMEPLAY_TAG(InputTag_SpecialWeaponAbility_Light, "InputTag.SpecialWeaponAbility.Light");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_SpecialWeaponAbility_Heavy, "InputTag.SpecialWeaponAbility.Heavy");
	
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PickUp, "InputTag.PickUp");

	/** Items Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Item_Weapon_Axe, "Item.Weapon.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Item_Weapon_GuardianWeapon, "Item.Weapon.GuardianWeapon");

	/** Player Ability Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe, "Player.Ability.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Axe, "Player.Ability.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe, "Player.Ability.Attack.Light.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe, "Player.Ability.Attack.Heavy.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_HitPause, "Player.Ability.HitPause");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Roll, "Player.Ability.Roll");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Block, "Player.Ability.Block");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_TargetLock, "Player.Ability.TargetLock");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Rage, "Player.Ability.Rage");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_PickUp, "Player.Ability.PickUp");
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_SpecialWeaponAbility_Light, "Player.Ability.SpecialWeaponAbility.Light");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_SpecialWeaponAbility_Heavy, "Player.Ability.SpecialWeaponAbility.Heavy");

	UE_DEFINE_GAMEPLAY_TAG(Player_Cooldown_SpecialWeaponAbility_Light, "Player.Cooldown.SpecialWeaponAbility.Light");
	UE_DEFINE_GAMEPLAY_TAG(Player_Cooldown_SpecialWeaponAbility_Heavy, "Player.Cooldown.SpecialWeaponAbility.Heavy");
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_JumpToFinisher, "Player.Status.JumpToFinisher");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Rolling, "Player.Status.Rolling");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Blocking, "Player.Status.Blocking");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_TargetLock, "Player.Status.TargetLock");
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_ActivateRage, "Player.Event.ActivateRage");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_AOE, "Player.Event.AOE");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_ConsumeItems, "Player.Event.ConsumeItems");
	
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Rage_None, "Player.Status.Rage.None");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Rage_Full, "Player.Status.Rage.Full");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Rage_Activating, "Player.Status.Rage.Activating");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Rage_Active, "Player.Status.Rage.Active");
	
	UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Light, "Player.SetByCaller.AttackType.Light");
	UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Heavy, "Player.SetByCaller.AttackType.Heavy");

	/** Enemy Ability Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_Unarmed, "Enemy.Ability.Combat.Unarmed");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_Weapon_Melee, "Enemy.Ability.Combat.Weapon.Melee");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_Weapon_Range, "Enemy.Ability.Combat.Weapon.Range");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_Strafing, "Enemy.Ability.Combat.Strafing");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_Summon, "Enemy.Ability.Combat.Summon");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Combat_SpawnAward, "Enemy.Ability.SpawnAward");
	
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Status_Unblockable, "Enemy.Status.Unblockable");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Event_SummonEnemies, "Enemy.Event.SummonEnemies");

	/** Game Events Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Event_Montage_Equip_Axe, "Event.Montage.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Event_Montage_Unequip_Axe, "Event.Montage.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Event_Combat_MeleeHit, "Event.Combat.MeleeHit");
	UE_DEFINE_GAMEPLAY_TAG(Event_Combat_HitPause, "Event.Combat.HitPause");
	UE_DEFINE_GAMEPLAY_TAG(Event_Combat_SuccessfulBlock, "Event.Combat.SuccessfulBlock");
	UE_DEFINE_GAMEPLAY_TAG(Event_Combat_SwitchTarget_Left, "Event.Combat.SwitchTarget.Left");
	UE_DEFINE_GAMEPLAY_TAG(Event_Combat_SwitchTarget_Right, "Event.Combat.SwitchTarget.Right");
	UE_DEFINE_GAMEPLAY_TAG(Event_Combat_SpawnProjectile, "Event.Combat.SpawnProjectile");

	
	UE_DEFINE_GAMEPLAY_TAG(Event_Effect_HitReact, "Event.Effect.HitReact");

	/** Shared Tags **/
	UE_DEFINE_GAMEPLAY_TAG(Shared_SetByCaller_BaseDamage, "Shared.SetByCaller.BaseDamage");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_Effect_HitReact, "Shared.Ability.Effect.HitReact");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_Death, "Shared.Ability.Death");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_Dead, "Shared.Status.Dead");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_DamageTaken, "Shared.Status.DamageTaken");
	
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Front, "Shared.Status.HitReact.Front");	
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Left, "Shared.Status.HitReact.Left");	
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Right, "Shared.Status.HitReact.Right");	
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Back, "Shared.Status.HitReact.Back");	
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_Invincible, "Shared.Status.Invincible");	
	
}
