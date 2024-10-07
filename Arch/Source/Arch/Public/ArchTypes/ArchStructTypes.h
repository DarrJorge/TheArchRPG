// DarrJorge All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
#include "ArchStructTypes.generated.h"

class UInputMappingContext;
class UArchHeroLinkedAnimLayer;
class UArchGameplayAbility;

USTRUCT(BlueprintType)
struct FArchHeroAbilitySet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(Categories = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UArchGameplayAbility> AbilityToGrant;

	bool IsValid() const;
};

USTRUCT(BlueprintType)
struct FArchHeroSpecialAbilitySet : public FArchHeroAbilitySet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UMaterialInstance> AbilityIconMaterial;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(Categories = "Player.Cooldown"))
	FGameplayTag AbilityCooldownTag;
};


USTRUCT(BlueprintType)
struct FArchWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UArchHeroLinkedAnimLayer> WeaponAnimLayer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputMappingContext* WeaponMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(TitleProperty="InputTag"))
	TArray<FArchHeroAbilitySet> DefaultWeaponAbilities;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(TitleProperty="InputTag"))
	TArray<FArchHeroSpecialAbilitySet> SpecialWeaponAbilities;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FScalableFloat WeaponBaseDamage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> WeaponIconTexture;
	
};

