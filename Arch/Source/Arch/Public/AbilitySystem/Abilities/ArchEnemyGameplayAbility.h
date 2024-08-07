// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ArchGameplayAbility.h"
#include "ArchEnemyGameplayAbility.generated.h"

class AArchEnemyCharacter;
class UEnemyCombatComponent;

UCLASS()
class ARCH_API UArchEnemyGameplayAbility : public UArchGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="Arch|Ability")
	AArchEnemyCharacter* GetEnemyCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category="Arch|Ability")
	UEnemyCombatComponent* GetEnemyCombatComponentFromActorInfo();

private:
	TWeakObjectPtr<AArchEnemyCharacter> CachedEnemyCharacter;
	
};
