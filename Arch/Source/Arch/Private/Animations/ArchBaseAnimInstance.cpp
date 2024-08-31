// DarrJorge All Rights Reserved.


#include "Animations/ArchBaseAnimInstance.h"
#include "ArchFunctionLibrary.h"

bool UArchBaseAnimInstance::DoesOwnerHaveGameplayTag(FGameplayTag InTag) const
{
	APawn* OwningPawn = TryGetPawnOwner();
	if (!OwningPawn) return false;
	return UArchFunctionLibrary::NativeActorHasTag(OwningPawn, InTag);
}
