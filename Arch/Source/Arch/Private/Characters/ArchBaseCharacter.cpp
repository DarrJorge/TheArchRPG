// DarrJorge All Rights Reserved.


#include "Characters/ArchBaseCharacter.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "AbilitySystem/ArchAttributeSet.h"

AArchBaseCharacter::AArchBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
	GetMesh()->bReceivesDecals = false;

	ArchAbilitySystemComponent = CreateDefaultSubobject<UArchAbilitySystemComponent>("ArchAbilitySystemComponent");
	ArchAttributeSet = CreateDefaultSubobject<UArchAttributeSet>("ArchAttributeSet");
}

void AArchBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (ArchAbilitySystemComponent)
	{
		ArchAbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}

UAbilitySystemComponent* AArchBaseCharacter::GetAbilitySystemComponent() const
{
	return GetArchAbilitySystemComponent();
}
