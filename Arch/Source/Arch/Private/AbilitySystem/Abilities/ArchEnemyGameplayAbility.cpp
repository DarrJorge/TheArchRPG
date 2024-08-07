// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchEnemyGameplayAbility.h"
#include "Characters/ArchEnemyCharacter.h"
#include "Components/Combat/EnemyCombatComponent.h"

AArchEnemyCharacter* UArchEnemyGameplayAbility::GetEnemyCharacterFromActorInfo()
{
	if (!CachedEnemyCharacter.IsValid())
	{
		CachedEnemyCharacter = Cast<AArchEnemyCharacter>(CurrentActorInfo->AvatarActor);
	}
	return CachedEnemyCharacter.IsValid() ? CachedEnemyCharacter.Get() : nullptr;
}

UEnemyCombatComponent* UArchEnemyGameplayAbility::GetEnemyCombatComponentFromActorInfo()
{
	if (GetEnemyCharacterFromActorInfo() != nullptr)
		return GetEnemyCharacterFromActorInfo()->GetEnemyCombatComponent();

	return nullptr;
}
