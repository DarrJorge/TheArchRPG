// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/PickUps/ArchPickUpBase.h"
#include "ArchForceStoneBase.generated.h"


class UNiagaraSystem;
class UGameplayEffect;
class UArchAbilitySystemComponent;
class USoundBase;

UCLASS()
class ARCH_API AArchForceStoneBase : public AArchPickUpBase
{
	GENERATED_BODY()

public:
	virtual void ConsumePickUpItem(UArchAbilitySystemComponent* AbilitySystemComponent, int32 ApplyLevel) override;

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> StoneGameplayEffectClass;

	UPROPERTY(EditDefaultsOnly, Category="PickUps Effects FX")
	USoundBase* PickUpSound;

	UPROPERTY(EditDefaultsOnly, Category="PickUps Effects FX")
	UNiagaraSystem* PickUpFX;

};
