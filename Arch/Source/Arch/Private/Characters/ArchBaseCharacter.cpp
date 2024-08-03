// DarrJorge All Rights Reserved.


#include "Characters/ArchBaseCharacter.h"

AArchBaseCharacter::AArchBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
	GetMesh()->bReceivesDecals = false;
}
