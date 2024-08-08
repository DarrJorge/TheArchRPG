// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "DataAsset_EnemyStartUpData.generated.h"

class UArchEnemyGameplayAbility;

UCLASS()
class ARCH_API UDataAsset_EnemyStartUpData : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UArchAbilitySystemComponent* InASCToGive, int32 ApplyLevel) override;

private:
	UPROPERTY(EditDefaultsOnly, Category="StartUpData|Abilities")
	TArray<TSubclassOf<UArchEnemyGameplayAbility>> CombatAbilities;
};
