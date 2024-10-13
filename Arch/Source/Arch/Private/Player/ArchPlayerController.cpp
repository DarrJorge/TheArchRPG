// DarrJorge All Rights Reserved.


#include "Player/ArchPlayerController.h"
#include "EnhancedInputSubsystems.h"

AArchPlayerController::AArchPlayerController() : Super()
{
	HeroTeamId = FGenericTeamId(0);
}

FGenericTeamId AArchPlayerController::GetGenericTeamId() const
{
	return HeroTeamId;
}

bool AArchPlayerController::TryGetInputActionDisplayName(const UInputAction* Action, FText& InputKeyName) const
{
	if (const auto* SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		const TArray<FKey> Keys = SubSystem->QueryKeysMappedToAction(Action);
		if (!Keys.IsEmpty())
		{
			for (auto Key : Keys)
			{
				if (Key.IsGamepadKey() && !bGamepadIsActive) continue;
				InputKeyName = Key.GetDisplayName();
				break;
			}
			return true;
		}
	}
	return false;
}

void AArchPlayerController::SetIsUseGamepad(bool bUsingGamepad)
{
	bGamepadIsActive = bUsingGamepad;
}
