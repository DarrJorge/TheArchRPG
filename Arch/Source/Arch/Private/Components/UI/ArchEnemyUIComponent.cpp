// DarrJorge All Rights Reserved.


#include "Components/UI/ArchEnemyUIComponent.h"
#include "UI/Widgets/ArchUserWidget.h"

void UArchEnemyUIComponent::RegisterEnemyWidget(UArchUserWidget* InWidgetToRegister)
{
	EnemyDrawnWidgets.Add(InWidgetToRegister);
}

void UArchEnemyUIComponent::RemoveEnemyDrawnWidgets()
{
	if (EnemyDrawnWidgets.IsEmpty()) return;

	for (const auto DrawnWidget : EnemyDrawnWidgets)
	{
		if (!DrawnWidget) continue;
		DrawnWidget->RemoveFromParent();
	}
	EnemyDrawnWidgets.Empty();
}
