// DarrJorge All Rights Reserved.


#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/ArchGameplayAbility.h"

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

void UArchAbilitySystemComponent::GrantCharacterWeaponAbilities(const TArray<FArchHeroAbilitySet>& InDefaultWeaponAbilities,
	int32 InLevel, TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitySpecHandles)
{
	if (InDefaultWeaponAbilities.IsEmpty()) return;

	for (const FArchHeroAbilitySet& AbilitySet : InDefaultWeaponAbilities)
	{
		if (!AbilitySet.IsValid()) continue;

		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = GetAvatarActor();
		AbilitySpec.Level = InLevel;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
		
		OutGrantedAbilitySpecHandles.AddUnique(GiveAbility(AbilitySpec));
	}
}

void UArchAbilitySystemComponent::RemoveGrantedCharacterWeaponAbilities(TArray<FGameplayAbilitySpecHandle>& InGrantedAbilitySpecHandles)
{
	if (InGrantedAbilitySpecHandles.IsEmpty()) return;

	for (const FGameplayAbilitySpecHandle& SpecHandle : InGrantedAbilitySpecHandles)
	{
		if (SpecHandle.IsValid())
		{
			ClearAbility(SpecHandle);
		}
	}
	InGrantedAbilitySpecHandles.Empty();
}
