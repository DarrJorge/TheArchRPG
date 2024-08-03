// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "ArchBaseCharacter.generated.h"

class UArchAttributeSet;
class UArchAbilitySystemComponent;

UCLASS()
class ARCH_API AArchBaseCharacter : public ACharacter, public IAbilitySystemInterface
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

	virtual void PossessedBy(AController* NewController) override;

public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

};
