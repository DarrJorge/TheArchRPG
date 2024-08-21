// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/UI/ArchUIComponentBase.h"
#include "ArchHeroUIComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquippedWeaponChanged, TSoftObjectPtr<UTexture2D>, WeaponIcon);

UCLASS()
class ARCH_API UArchHeroUIComponent : public UArchUIComponentBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnPercentChangedDelegate OnRageChanged;

	UPROPERTY(BlueprintCallable, BlueprintAssignable)
	FOnEquippedWeaponChanged OnEquippedWeaponChanged;
};
