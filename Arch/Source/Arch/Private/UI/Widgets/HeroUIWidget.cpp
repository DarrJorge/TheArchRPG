// DarrJorge All Rights Reserved.


#include "UI/Widgets/HeroUIWidget.h"
#include "Components/UI/ArchHeroUIComponent.h"
#include "Interfaces/PawnUIInterface.h"

void UHeroUIWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (const IPawnUIInterface* PawnUIInterface = Cast<IPawnUIInterface>(GetOwningPlayerPawn()))
	{
		if (UArchHeroUIComponent* HeroUIComponent = Cast<UArchHeroUIComponent>(PawnUIInterface->GetUIComponentBase()))
		{
			OnOwningHeroUIComponentInitialized(HeroUIComponent);
			HeroUIComponentInitialized(HeroUIComponent);
		};
	}
}

void UHeroUIWidget::HeroUIComponentInitialized(UArchHeroUIComponent* OwningHeroUIComponent)
{
}
