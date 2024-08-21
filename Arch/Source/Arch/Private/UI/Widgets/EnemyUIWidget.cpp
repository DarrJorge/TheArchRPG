// DarrJorge All Rights Reserved.


#include "UI/Widgets/EnemyUIWidget.h"
#include "Components/UI/ArchEnemyUIComponent.h"
#include "Interfaces/PawnUIInterface.h"

void UEnemyUIWidget::InitEnemyCreatedWidget(AActor* OwningEnemyActor)
{
	if (const IPawnUIInterface* PawnUIInterface = Cast<IPawnUIInterface>(OwningEnemyActor))
	{
		if (UArchEnemyUIComponent* EnemyUIComponent = Cast<UArchEnemyUIComponent>(PawnUIInterface->GetUIComponentBase()))
		{
			OnOwningEnemyUIComponentInitialized(EnemyUIComponent);
			EnemyUIComponentInitialized(EnemyUIComponent);
		}
	}
}

void UEnemyUIWidget::EnemyUIComponentInitialized(UArchEnemyUIComponent* OwningEnemyUIComponent)
{
}
