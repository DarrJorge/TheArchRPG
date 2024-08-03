// DarrJorge All Rights Reserved.


#include "DataAssets/Input/DataAsset_InputConfig.h"

UInputAction* UDataAsset_InputConfig::FindNativeInputActionByTag(const FGameplayTag& InInputTag) const
{
	for (const FArchInputActionConfig& InputConfig : NativeInputActions)
	{
		if (InputConfig.InputTag.MatchesTagExact(InInputTag))
		{
			return InputConfig.InputAction;
		}
	}
	return nullptr;
}
