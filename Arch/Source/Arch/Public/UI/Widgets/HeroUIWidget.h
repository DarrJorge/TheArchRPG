// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/Widgets/ArchUserWidget.h"
#include "HeroUIWidget.generated.h"

class UArchHeroUIComponent;

UCLASS()
class ARCH_API UHeroUIWidget : public UArchUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="On Owning Hero UI Component Initialized"))
	void OnOwningHeroUIComponentInitialized(UArchHeroUIComponent* OwningHeroUIComponent);

	virtual void HeroUIComponentInitialized(UArchHeroUIComponent* OwningHeroUIComponent);
	
};
