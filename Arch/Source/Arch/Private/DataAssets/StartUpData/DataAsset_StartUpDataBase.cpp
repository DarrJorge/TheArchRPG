// DarrJorge All Rights Reserved.


#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/ArchGameplayAbility.h"

void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UArchAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	GrantAbilities(ActivateOnGivenAbilities, InASCToGive, ApplyLevel);
	GrantAbilities(ReactiveAbilities, InASCToGive, ApplyLevel);

	if (!StartUpGameplayEffects.IsEmpty())
	{
		for (const TSubclassOf<UGameplayEffect>& EffectClass : StartUpGameplayEffects)
		{
			if (!EffectClass) continue;
			const UGameplayEffect* GameplayEffectCDO = EffectClass->GetDefaultObject<UGameplayEffect>();
			
			InASCToGive->ApplyGameplayEffectToSelf(
				GameplayEffectCDO,
				ApplyLevel,
				InASCToGive->MakeEffectContext());
		}
	}
}

void UDataAsset_StartUpDataBase::GrantAbilities(const TArray<TSubclassOf<UArchGameplayAbility>>& InAbilitiesToGive,
	UArchAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	if (InAbilitiesToGive.IsEmpty()) return;

	for (const TSubclassOf<UArchGameplayAbility>& Ability : InAbilitiesToGive)
	{
		if (!Ability) continue;
		
		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		
		InASCToGive->GiveAbility(AbilitySpec);
	}
}
