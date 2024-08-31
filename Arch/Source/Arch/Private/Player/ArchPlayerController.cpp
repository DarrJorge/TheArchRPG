// DarrJorge All Rights Reserved.


#include "Player/ArchPlayerController.h"

AArchPlayerController::AArchPlayerController() : Super()
{
	HeroTeamId = FGenericTeamId(0);
}

FGenericTeamId AArchPlayerController::GetGenericTeamId() const
{
	return HeroTeamId;
}
