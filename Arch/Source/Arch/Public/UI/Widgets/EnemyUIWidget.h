// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/Widgets/ArchUserWidget.h"
#include "EnemyUIWidget.generated.h"

class UArchEnemyUIComponent;

UCLASS()
class ARCH_API UEnemyUIWidget : public UArchUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void InitEnemyCreatedWidget(AActor* OwningEnemyActor);

protected:
	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="On Owning Enemy UI Component Initialized"))
	void OnOwningEnemyUIComponentInitialized(UArchEnemyUIComponent* OwningEnemyUIComponent);

	virtual void EnemyUIComponentInitialized(UArchEnemyUIComponent* OwningEnemyUIComponent);
	
};
