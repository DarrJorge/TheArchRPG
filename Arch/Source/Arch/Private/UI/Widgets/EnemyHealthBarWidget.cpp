// DarrJorge All Rights Reserved.


#include "UI/Widgets/EnemyHealthBarWidget.h"
#include "Components/UI/ArchEnemyUIComponent.h"
#include "TimerManager.h"

void UEnemyHealthBarWidget::EnemyUIComponentInitialized(UArchEnemyUIComponent* OwningEnemyUIComponent)
{
	Super::EnemyUIComponentInitialized(OwningEnemyUIComponent);
	
	OwningEnemyUIComponent->OnHealthChanged.AddDynamic(this, &UEnemyHealthBarWidget::OnHealthChangedHandler);
	
	SetVisibility(ESlateVisibility::Hidden);
}

void UEnemyHealthBarWidget::OnHealthChangedHandler(float NewValue)
{
	if (!GetWorld()) return;

	GetWorld()->GetTimerManager().ClearTimer(HideBarTimerHandle);
	OnHealthChangedEvent(NewValue);

	const bool bIsHideWidget = bFirstRunWidget || NewValue == 0.0f;
	SetVisibility(bIsHideWidget ? ESlateVisibility::Hidden : ESlateVisibility::Visible);
	bFirstRunWidget = false;

	GetWorld()->GetTimerManager().SetTimer(HideBarTimerHandle,
		this,
		&UEnemyHealthBarWidget::OnTimerFired,
		TimeRateDisplayBar,
		false);
}

void UEnemyHealthBarWidget::OnTimerFired()
{
	SetVisibility(ESlateVisibility::Hidden);
}
