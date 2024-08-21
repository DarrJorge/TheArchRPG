// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/Widgets/EnemyUIWidget.h"
#include "EnemyHealthBarWidget.generated.h"


UCLASS()
class ARCH_API UEnemyHealthBarWidget : public UEnemyUIWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category="UI")
	float TimeRateDisplayBar = 4.f;
	
	UFUNCTION(BlueprintImplementableEvent, Category="Arch|UI")
	void OnHealthChangedEvent(float NewValue);

	virtual void EnemyUIComponentInitialized(UArchEnemyUIComponent* OwningEnemyUIComponent) override;

private:
	FTimerHandle HideBarTimerHandle;
	bool bFirstRunWidget = true;

	UFUNCTION()
	void OnHealthChangedHandler(float NewValue);
	
	void OnTimerFired();
	
};
