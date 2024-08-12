// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Characters/ArchBaseCharacter.h"
#include "GameplayTagContainer.h"
#include "ArchHeroCharacter.generated.h"


class UDataAsset_InputConfig;
class UCameraComponent;
class USpringArmComponent;
class UHeroCombatComponent;
struct FInputActionValue;

UCLASS()
class ARCH_API AArchHeroCharacter : public AArchBaseCharacter
{
	GENERATED_BODY()

public:
	AArchHeroCharacter();

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera")
	UCameraComponent* Camera;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UHeroCombatComponent* HeroCombatComponent;

	
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void PossessedBy(AController* NewController) override;

public:
	FORCEINLINE UHeroCombatComponent* GetHeroCombatComponent() const { return HeroCombatComponent; }

	virtual UCombatComponentBase* GetPawnCombatComponent() const override;

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input", meta=(AllowPrivateAccess="true"))
	UDataAsset_InputConfig* InputConfigDataAsset;

	void InputMove(const FInputActionValue& Value);
	void InputLook(const FInputActionValue& Value);
	void InputAbilityInputPressed(FGameplayTag InInputTag);
	void InputAbilityInputReleased(FGameplayTag InInputTag);
};
