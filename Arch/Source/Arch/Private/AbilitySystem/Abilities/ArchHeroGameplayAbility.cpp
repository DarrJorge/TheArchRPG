// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchHeroGameplayAbility.h"
#include "Characters/ArchHeroCharacter.h"
#include "Player/ArchPlayerController.h"

AArchHeroCharacter* UArchHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
	if (!CachedHeroCharacter.IsValid())
	{
		CachedHeroCharacter = Cast<AArchHeroCharacter>(CurrentActorInfo->AvatarActor);
	}
	return CachedHeroCharacter.IsValid() ? CachedHeroCharacter.Get() : nullptr;
}

AArchPlayerController* UArchHeroGameplayAbility::GetHeroControllerFromActorInfo()
{
	if (!CachedHeroController.IsValid())
	{
		CachedHeroController = Cast<AArchPlayerController>(CurrentActorInfo->PlayerController);
	}
	return CachedHeroController.IsValid() ? CachedHeroController.Get() : nullptr;
}

UHeroCombatComponent* UArchHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}
