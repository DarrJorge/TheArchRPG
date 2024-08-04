// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "Components/Combat/CombatComponentBase.h"

void UArchGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	if (AbilityActivationPolicy == EArchAbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo && !Spec.IsActive())
		{
			ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle);
		}
	}
}

void UArchGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (AbilityActivationPolicy == EArchAbilityActivationPolicy::OnGiven)
	{
		if (ActorInfo)
		{
			ActorInfo->AbilitySystemComponent->ClearAbility(Handle);
		}
	}
}

UCombatComponentBase* UArchGameplayAbility::GetCombatComponentBaseFromActorInfo() const
{
	return GetAvatarActorFromActorInfo()->FindComponentByClass<UCombatComponentBase>();
}

UArchAbilitySystemComponent* UArchGameplayAbility::GetArchAbilitySystemComponentFromActorInfo() const
{
	return Cast<UArchAbilitySystemComponent>(CurrentActorInfo->AbilitySystemComponent);
}
