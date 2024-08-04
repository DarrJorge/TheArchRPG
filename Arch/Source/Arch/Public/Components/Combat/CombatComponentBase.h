// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtensionComponentBase.h"
#include "GameplayTagContainer.h"
#include "CombatComponentBase.generated.h"

class AArchWeaponBase;

UCLASS()
class ARCH_API UCombatComponentBase : public UPawnExtensionComponentBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category="Arch|Combat")
	void RegisterWeapon(FGameplayTag InWeaponTag, AArchWeaponBase* InWeapon, bool bRegisterAsEquippedWeapon = false);

	UFUNCTION(BlueprintCallable, Category="Arch|Combat")
	AArchWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponTag) const;

	UFUNCTION(BlueprintCallable, Category="Arch|Combat")
	AArchWeaponBase* GetCharacterCurrentEquippedWeapon() const;

	UPROPERTY(BlueprintReadWrite, Category="Arch|Combat")
	FGameplayTag CurrentEquippedWeaponTag;
	
private:
	TMap<FGameplayTag, AArchWeaponBase*> CharacterCarriedWeaponMap;
	
};
