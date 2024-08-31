// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ArchGameplayTags.h"
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

FActiveGameplayEffectHandle UArchGameplayAbility::NativeApplyEffectSpecHandleToTarget(AActor* TargetActor,
	const FGameplayEffectSpecHandle& SpecHandle) const
{
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	
	check(TargetASC && SpecHandle.IsValid());
	
	return GetArchAbilitySystemComponentFromActorInfo()->
		ApplyGameplayEffectSpecToTarget(*SpecHandle.Data, TargetASC);
}

FActiveGameplayEffectHandle UArchGameplayAbility::BP_ApplyEffectSpecHandleToTarget(AActor* TargetActor,
	const FGameplayEffectSpecHandle& SpecHandle, EArchSuccessType& OutSuccessType)
{
	const FActiveGameplayEffectHandle ActiveEffectHandle = NativeApplyEffectSpecHandleToTarget(TargetActor, SpecHandle);
	OutSuccessType = ActiveEffectHandle.WasSuccessfullyApplied() ? EArchSuccessType::Successful : EArchSuccessType::Failed;
	return ActiveEffectHandle;
}

FGameplayEffectSpecHandle UArchGameplayAbility::ApplySetByCallerMagnitudeByTag(const UGameplayAbility* Ability,
	TSubclassOf<UGameplayEffect> EffectClass, float Damage)
{
	check(EffectClass);
	
	const auto ArchASC = GetArchAbilitySystemComponentFromActorInfo();
	if (!ArchASC) return FGameplayEffectSpecHandle();
	
	FGameplayEffectContextHandle ContextHandle = ArchASC->MakeEffectContext();
	ContextHandle.SetAbility(Ability);
	ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo());
	ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo());

	FGameplayEffectSpecHandle EffectSpecHandle = ArchASC->MakeOutgoingSpec(EffectClass, GetAbilityLevel(),ContextHandle);
	EffectSpecHandle.Data->SetSetByCallerMagnitude(ArchGameplayTags::Shared_SetByCaller_BaseDamage, Damage);

	return EffectSpecHandle;
}
