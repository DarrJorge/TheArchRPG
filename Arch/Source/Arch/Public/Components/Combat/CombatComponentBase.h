// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtensionComponentBase.h"
#include "GameplayTagContainer.h"
#include "CombatComponentBase.generated.h"

class AArchWeaponBase;

UENUM(BlueprintType)
enum class EToggleDamageType : uint8
{
	EquippedWeapon,
	LeftHand,
	RightHand
};

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

	UFUNCTION(BlueprintCallable, Category="Arch|Combat")
	void ToggleWeaponCollision(bool bShouldEnable, EToggleDamageType ToggleDamageType = EToggleDamageType::EquippedWeapon);
	
	UFUNCTION(BlueprintCallable, Category="Arch|Combat")
	float GetCurrentEquippedWeaponDamageAtLevel(float InLevel) const;
	
	UPROPERTY(BlueprintReadWrite, Category="Arch|Combat")
	FGameplayTag CurrentEquippedWeaponTag;


	virtual void OnHitTargetActor(AActor* HitActor);
	virtual void OnWeaponPulledFromTargetActor(AActor* InteractedActor);

protected:
	TArray<AActor*> OverlappedActors;

	virtual void ToggleEquippedWeaponCollision(bool bShouldEnable);
	virtual void ToggleLeftUnarmedCollision(bool bShouldEnable);
	virtual void ToggleRightUnarmedCollision(bool bShouldEnable);
	
private:
	TMap<FGameplayTag, AArchWeaponBase*> CharacterCarriedWeaponMap;
	
};
