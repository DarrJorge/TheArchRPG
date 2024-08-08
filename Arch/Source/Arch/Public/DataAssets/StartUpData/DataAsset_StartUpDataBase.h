// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"

class UArchGameplayAbility;
class UArchAbilitySystemComponent;
class UGameplayEffect;

UCLASS()
class ARCH_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UArchAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);

protected:
	UPROPERTY(EditDefaultsOnly, Category="StartUpData|Abilities")
	TArray<TSubclassOf<UArchGameplayAbility>> ActivateOnGivenAbilities;

	UPROPERTY(EditDefaultsOnly, Category="StartUpData|Abilities")
	TArray<TSubclassOf<UArchGameplayAbility>> ReactiveAbilities;

	UPROPERTY(EditDefaultsOnly, Category="StartUpData|Effects")
	TArray<TSubclassOf<UGameplayEffect>> StartUpGameplayEffects;
	

	void GrantAbilities(const TArray<TSubclassOf<UArchGameplayAbility>>& InAbilitiesToGive,
		UArchAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
	
};
