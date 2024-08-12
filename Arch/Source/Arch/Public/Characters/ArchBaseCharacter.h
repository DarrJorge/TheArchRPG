// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Interfaces/PawnCombatInterface.h"
#include "ArchBaseCharacter.generated.h"

class UDataAsset_StartUpDataBase;
class UArchAttributeSet;
class UArchAbilitySystemComponent;

UCLASS()
class ARCH_API AArchBaseCharacter : public ACharacter, public IAbilitySystemInterface, public IPawnCombatInterface
{
	GENERATED_BODY()

public:
	AArchBaseCharacter();

	FORCEINLINE UArchAbilitySystemComponent* GetArchAbilitySystemComponent() const { return ArchAbilitySystemComponent; }
	FORCEINLINE UArchAttributeSet* GetArchAttributeSet() const { return ArchAttributeSet; }
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	UArchAbilitySystemComponent* ArchAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AbilitySystem")
	UArchAttributeSet* ArchAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;
	

	virtual void PossessedBy(AController* NewController) override;

public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual UCombatComponentBase* GetPawnCombatComponent() const override;

};
