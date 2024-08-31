// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "ArchTypes/ArchStructTypes.h"
#include "ArchAbilitySystemComponent.generated.h"

UCLASS()
class ARCH_API UArchAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	void OnAbilityInputPressed(const FGameplayTag& InInputTag);
	void OnAbilityInputReleased(const FGameplayTag& InInputTag);

	UFUNCTION(BlueprintCallable, Category="Arch|Ability", meta=(InLevel="1"))
	void GrantCharacterWeaponAbilities(const TArray<FArchHeroAbilitySet>& InDefaultWeaponAbilities, int32 InLevel,
		TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitySpecHandles);

	UFUNCTION(BlueprintCallable, Category="Arch|Ability")
	void RemoveGrantedCharacterWeaponAbilities(UPARAM(ref) TArray<FGameplayAbilitySpecHandle>& InGrantedAbilitySpecHandles);
	
	UFUNCTION(BlueprintCallable, Category="Arch|Ability")
	bool TryActivateAbilityByTag(const FGameplayTag& InAbilityTag);
};
