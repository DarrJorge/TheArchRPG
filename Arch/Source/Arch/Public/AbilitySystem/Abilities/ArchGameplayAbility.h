// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
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
};
