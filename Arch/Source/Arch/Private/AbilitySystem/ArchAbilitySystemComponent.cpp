// DarrJorge All Rights Reserved.


#include "AbilitySystem/ArchAbilitySystemComponent.h"


void UArchAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid()) return;

	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag)) continue;
		TryActivateAbility(AbilitySpec.Handle);
	}
}

void UArchAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
}
