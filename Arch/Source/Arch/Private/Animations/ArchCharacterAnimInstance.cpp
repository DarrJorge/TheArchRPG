// DarrJorge All Rights Reserved.


#include "Animations/ArchCharacterAnimInstance.h"
#include "Characters/ArchBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"


void UArchCharacterAnimInstance::NativeInitializeAnimation()
{
	OwningCharacter = Cast<AArchBaseCharacter>(TryGetPawnOwner());
	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

void UArchCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent) return;

	GroundSpeed = OwningCharacter->GetVelocity().Size2D();
	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 0.f;
}
