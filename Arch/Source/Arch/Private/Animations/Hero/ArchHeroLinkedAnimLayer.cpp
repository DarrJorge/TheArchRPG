// DarrJorge All Rights Reserved.


#include "Animations/Hero/ArchHeroLinkedAnimLayer.h"
#include "Animations/Hero/ArchHeroAnimInstance.h"

UArchHeroAnimInstance* UArchHeroLinkedAnimLayer::GetHeroAnimInstance() const
{
	return Cast<UArchHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
