// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ArchGameplayAbility.h"
#include "ArchHeroGameplayAbility.generated.h"

class UHeroCombatComponent;
class AArchHeroCharacter;
class AArchPlayerController;

UCLASS()
class ARCH_API UArchHeroGameplayAbility : public UArchGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="Arch|Ability")
	AArchHeroCharacter* GetHeroCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category="Arch|Ability")
	AArchPlayerController* GetHeroControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category="Arch|Ability")
	UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();

	UFUNCTION(BlueprintPure, Category="Arch|Ability")
	FGameplayEffectSpecHandle MakeDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, float WeaponBaseDamage,
		FGameplayTag AttackTag, int32 UsedComboCount);

private:
	TWeakObjectPtr<AArchHeroCharacter> CachedHeroCharacter;
	TWeakObjectPtr<AArchPlayerController> CachedHeroController;
};
