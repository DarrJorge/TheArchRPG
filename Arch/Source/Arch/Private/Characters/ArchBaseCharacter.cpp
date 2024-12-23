// DarrJorge All Rights Reserved.


#include "Characters/ArchBaseCharacter.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "AbilitySystem/ArchAttributeSet.h"
#include "MotionWarpingComponent.h"

AArchBaseCharacter::AArchBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
	GetMesh()->bReceivesDecals = false;

	ArchAbilitySystemComponent = CreateDefaultSubobject<UArchAbilitySystemComponent>("ArchAbilitySystemComponent");
	ArchAttributeSet = CreateDefaultSubobject<UArchAttributeSet>("ArchAttributeSet");
	MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>("MotionWarping");
}

void AArchBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (ArchAbilitySystemComponent)
	{
		ArchAbilitySystemComponent->InitAbilityActorInfo(this, this);
		
		ensureMsgf(!CharacterStartUpData.IsNull(), TEXT("Forgot to assign start up data to %s"), *GetName());
	}
}

UAbilitySystemComponent* AArchBaseCharacter::GetAbilitySystemComponent() const
{
	return GetArchAbilitySystemComponent();
}

UCombatComponentBase* AArchBaseCharacter::GetPawnCombatComponent() const
{
	return nullptr;
}

UArchUIComponentBase* AArchBaseCharacter::GetUIComponentBase() const
{
	return nullptr;
}
