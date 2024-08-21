// DarrJorge All Rights Reserved.


#include "UI/ArchGameHUD.h"
#include "UI/Widgets/PlayerOverlayWidget.h"

void AArchGameHUD::BeginPlay()
{
	Super::BeginPlay();

	PlayerOverlayWidget = CreateWidget<UPlayerOverlayWidget>(GetWorld(), PlayerHUDClass);
	if (PlayerOverlayWidget)
	{
	 	PlayerOverlayWidget->AddToViewport();
	}
}
