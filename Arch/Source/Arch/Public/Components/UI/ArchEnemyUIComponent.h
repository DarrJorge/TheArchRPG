// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/UI/ArchUIComponentBase.h"
#include "ArchEnemyUIComponent.generated.h"

class UArchUserWidget;

UCLASS()
class ARCH_API UArchEnemyUIComponent : public UArchUIComponentBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void RegisterEnemyWidget(UArchUserWidget* InWidgetToRegister);

	UFUNCTION(BlueprintCallable)
	void RemoveEnemyDrawnWidgets();

private:
	TArray<UArchUserWidget*> EnemyDrawnWidgets;
	
};
