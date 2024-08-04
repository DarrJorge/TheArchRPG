// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"

class UArchGameplayAbility;
class UArchAbilitySystemComponent;

UCLASS()
class ARCH_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UArchAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);

protected:
	UPROPERTY(EditDefaultsOnly, Category="StartUpData")
	TArray<TSubclassOf<UArchGameplayAbility>> ActivateOnGivenAbilities;

	UPROPERTY(EditDefaultsOnly, Category="StartUpData")
	TArray<TSubclassOf<UArchGameplayAbility>> ReactiveAbilities;
	

	void GrantAbilities(const TArray<TSubclassOf<UArchGameplayAbility>>& InAbilitiesToGive,
		UArchAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
	
};
