// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "ArchPlayerController.generated.h"

class UInputAction;

UCLASS()
class ARCH_API AArchPlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	AArchPlayerController();
	
	virtual FGenericTeamId GetGenericTeamId() const override;
	bool TryGetInputActionDisplayName(const UInputAction* Action, FText& InputKeyName) const;

protected:
	UFUNCTION(BlueprintCallable)
	void SetIsUseGamepad(bool bUsingGamepad);

private:
	FGenericTeamId HeroTeamId;
	bool bGamepadIsActive;
};
