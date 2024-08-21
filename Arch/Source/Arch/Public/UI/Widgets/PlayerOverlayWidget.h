// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/Widgets/HeroUIWidget.h"
#include "PlayerOverlayWidget.generated.h"

UCLASS()
class ARCH_API UPlayerOverlayWidget : public UHeroUIWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent, Category="Arch|UI")
	void OnHealthChangedEvent(float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category="Arch|UI")
	void OnRageChangedEvent(float NewValue);

	UFUNCTION(BlueprintImplementableEvent, Category="Arch|UI")
	void OnWeaponIconChanged(const TSoftObjectPtr<UTexture2D>& NewTexture);
	
	virtual void HeroUIComponentInitialized(UArchHeroUIComponent* OwningHeroUIComponent) override;

private:
	UFUNCTION()
	void OnHealthChangedHandler(float NewValue);

	UFUNCTION()
	void OnRageChangedHandler(float NewValue);

	UFUNCTION()
	void OnWeaponIconChangedHandler(TSoftObjectPtr<UTexture2D> InTexture);
	
};
