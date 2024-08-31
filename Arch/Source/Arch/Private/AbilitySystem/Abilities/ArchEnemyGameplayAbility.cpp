// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchEnemyGameplayAbility.h"

#include "ArchGameplayTags.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "Characters/ArchEnemyCharacter.h"
#include "Components/Combat/EnemyCombatComponent.h"

AArchEnemyCharacter* UArchEnemyGameplayAbility::GetEnemyCharacterFromActorInfo()
{
	if (!CachedEnemyCharacter.IsValid())
	{
		CachedEnemyCharacter = CastChecked<AArchEnemyCharacter>(CurrentActorInfo->AvatarActor);
	}
	return CachedEnemyCharacter.IsValid() ? CachedEnemyCharacter.Get() : nullptr;
}

UEnemyCombatComponent* UArchEnemyGameplayAbility::GetEnemyCombatComponentFromActorInfo()
{
	return GetEnemyCharacterFromActorInfo()->GetEnemyCombatComponent();
}

FGameplayEffectSpecHandle UArchEnemyGameplayAbility::MakeDamageEffectSpecHandle(
	TSubclassOf<UGameplayEffect> EffectClass, const FScalableFloat& InDamageScalableFloat)
{
	const float ApplyDamage = InDamageScalableFloat.GetValueAtLevel(GetAbilityLevel());
	return ApplySetByCallerMagnitudeByTag(this, EffectClass, ApplyDamage);
}
