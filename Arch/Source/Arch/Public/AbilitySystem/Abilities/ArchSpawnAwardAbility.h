// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ArchEnemyGameplayAbility.h"
#include "ArchSpawnAwardAbility.generated.h"


class AArchPickUpBase;

UCLASS()
class ARCH_API UArchSpawnAwardAbility : public UArchEnemyGameplayAbility
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void SpawnAward(float ChanceToSpawn, const TArray<TSoftClassPtr<AArchPickUpBase>>& PickupItemsClasses);

private:
	FVector SpawnAwardLocation;

	bool TryFindSpawnLocation();
};
