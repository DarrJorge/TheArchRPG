// DarrJorge All Rights Reserved.


#include "ArchTypes/ArchStructTypes.h"
#include "AbilitySystem/Abilities/ArchGameplayAbility.h"

bool FArchHeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}
