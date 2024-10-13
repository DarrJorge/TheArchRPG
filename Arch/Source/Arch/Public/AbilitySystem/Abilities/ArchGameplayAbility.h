// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ArchTypes/ArchEnumTypes.h"
#include "ArchGameplayAbility.generated.h"

class UCombatComponentBase;
class UArchAbilitySystemComponent;

UENUM(BlueprintType)
enum class EArchAbilityActivationPolicy : uint8
{
	OnTriggered,
	OnGiven
};

UCLASS()
class ARCH_API UArchGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category="Arch|Ability")
	EArchAbilityActivationPolicy AbilityActivationPolicy = EArchAbilityActivationPolicy::OnTriggered;

	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	
	UFUNCTION(BlueprintPure, Category="Arch|Ability")
	UCombatComponentBase* GetCombatComponentBaseFromActorInfo() const;

	UFUNCTION(BlueprintPure, Category="Arch|Ability")
	UArchAbilitySystemComponent* GetArchAbilitySystemComponentFromActorInfo() const;

	FActiveGameplayEffectHandle NativeApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& SpecHandle) const;

	UFUNCTION(BlueprintCallable, Category="Arch|Ability", meta=(DisplayName="Apply Gameplay Effect Spec To Target Actor", ExpandEnumAsExecs="OutSuccessType"))
	FActiveGameplayEffectHandle BP_ApplyEffectSpecHandleToTarget(AActor* TargetActor, const FGameplayEffectSpecHandle& SpecHandle,
		EArchSuccessType& OutSuccessType);

	FGameplayEffectSpecHandle ApplySetByCallerMagnitudeByTag(const UGameplayAbility* Ability, TSubclassOf<UGameplayEffect> EffectClass, float Damage);

	UFUNCTION(BlueprintCallable, Category="Arch|Ability")
	void ApplyEffectSpecHandleToHitResults(const FGameplayEffectSpecHandle& SpecHandle, const TArray<FHitResult>& HitResults);
};
