// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "ArchPlayerController.generated.h"


UCLASS()
class ARCH_API AArchPlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	AArchPlayerController();
	
	virtual FGenericTeamId GetGenericTeamId() const override;

private:
	FGenericTeamId HeroTeamId;
	
};
