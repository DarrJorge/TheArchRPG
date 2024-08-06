// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/ArchWeaponBase.h"
#include "GameplayAbilitySpecHandle.h"
#include "ArchHeroWeapon.generated.h"


UCLASS()
class ARCH_API AArchHeroWeapon : public AArchWeaponBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandles);

	UFUNCTION(BlueprintPure)
	TArray<FGameplayAbilitySpecHandle> GetGrantedAbilitySpecHandles() const;

private:
	TArray<FGameplayAbilitySpecHandle> GrantedAbilitySpecHandles;
};
