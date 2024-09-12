// DarrJorge All Rights Reserved.


#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "ArchGameplayTags.h"
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
	if (!InInputTag.IsValid() || !InInputTag.MatchesTag(ArchGameplayTags::InputTag_KeyMustBeHeld))
	{
		return;
	}

	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag) && AbilitySpec.IsActive())
		{
			CancelAbilityHandle(AbilitySpec.Handle);
		}
	}
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

bool UArchAbilitySystemComponent::TryActivateAbilityByTag(const FGameplayTag& InAbilityTag)
{
	check(InAbilityTag.IsValid());

	TArray<FGameplayAbilitySpec*> FoundAbilitySpecs;
	GetActivatableGameplayAbilitySpecsByAllMatchingTags(InAbilityTag.GetSingleTagContainer(), FoundAbilitySpecs);
	if (FoundAbilitySpecs.IsEmpty()) return false;
	
	const int32 RandomIndex = FMath::RandRange(0, FoundAbilitySpecs.Num() - 1);
	FGameplayAbilitySpec* AbilitySpec = FoundAbilitySpecs[RandomIndex];
	if (!AbilitySpec || AbilitySpec->IsActive()) return false;

	return TryActivateAbility(AbilitySpec->Handle);
}
