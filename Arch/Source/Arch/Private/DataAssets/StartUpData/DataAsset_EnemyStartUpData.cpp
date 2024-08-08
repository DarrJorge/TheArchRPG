// DarrJorge All Rights Reserved.


#include "DataAssets/StartUpData/DataAsset_EnemyStartUpData.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/ArchEnemyGameplayAbility.h"
#include "GameplayAbilitySpec.h"

void UDataAsset_EnemyStartUpData::GiveToAbilitySystemComponent(UArchAbilitySystemComponent* InASCToGive,
                                                               int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InASCToGive, ApplyLevel);

	if (CombatAbilities.IsEmpty()) return;

	for (const TSubclassOf<UArchEnemyGameplayAbility>& AbilityClass : CombatAbilities)
	{
		if (!AbilityClass) continue;
		
		FGameplayAbilitySpec AbilitySpec(AbilityClass);
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;

		InASCToGive->GiveAbility(AbilitySpec);
	}
}
