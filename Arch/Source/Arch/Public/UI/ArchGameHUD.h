// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ArchGameHUD.generated.h"

class UPlayerOverlayWidget;

UCLASS()
class ARCH_API AArchGameHUD : public AHUD
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="UI")
	TSubclassOf<UUserWidget> PlayerHUDClass;

	virtual void BeginPlay() override;

private:
	UPROPERTY()
	TObjectPtr<UPlayerOverlayWidget> PlayerOverlayWidget;
	
};
