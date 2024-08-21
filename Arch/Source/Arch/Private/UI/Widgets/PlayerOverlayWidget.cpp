// DarrJorge All Rights Reserved.


#include "UI/Widgets/PlayerOverlayWidget.h"
#include "Components/UI/ArchHeroUIComponent.h"
#include "Components/UI/ArchUIComponentBase.h"

void UPlayerOverlayWidget::HeroUIComponentInitialized(UArchHeroUIComponent* OwningHeroUIComponent)
{
	Super::HeroUIComponentInitialized(OwningHeroUIComponent);

	OwningHeroUIComponent->OnHealthChanged.AddDynamic(this, &UPlayerOverlayWidget::OnHealthChangedHandler);
	OwningHeroUIComponent->OnRageChanged.AddDynamic(this, &UPlayerOverlayWidget::OnRageChangedHandler);
	OwningHeroUIComponent->OnEquippedWeaponChanged.AddDynamic(this, &UPlayerOverlayWidget::OnWeaponIconChangedHandler);

	// set full health and rage percent in time run game
	OnHealthChangedEvent(1.0);
	OnRageChangedEvent(1.0);
}

void UPlayerOverlayWidget::OnHealthChangedHandler(float NewValue)
{
	OnHealthChangedEvent(NewValue);
}

void UPlayerOverlayWidget::OnRageChangedHandler(float NewValue)
{
	OnRageChangedEvent(NewValue);
}

void UPlayerOverlayWidget::OnWeaponIconChangedHandler(TSoftObjectPtr<UTexture2D> InTexture)
{
	OnWeaponIconChanged(InTexture);
}
