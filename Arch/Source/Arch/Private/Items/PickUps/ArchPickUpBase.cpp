// DarrJorge All Rights Reserved.


#include "Items/PickUps/ArchPickUpBase.h"
#include "ArchGameplayTags.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "Characters/ArchHeroCharacter.h"
#include "Components/SphereComponent.h"

AArchPickUpBase::AArchPickUpBase() : Super()
{
	PrimaryActorTick.bCanEverTick = false;

	PickupCollisionSphere = CreateDefaultSubobject<USphereComponent>("PickupCollisionSphere");
	SetRootComponent(PickupCollisionSphere);
	PickupCollisionSphere->InitSphereRadius(50.f);
	PickupCollisionSphere->OnComponentBeginOverlap.AddUniqueDynamic(this, &AArchPickUpBase::OnCollisionBeginOverlap);
}

void AArchPickUpBase::ConsumePickUpItem(UArchAbilitySystemComponent* AbilitySystemComponent, int32 ApplyLevel)
{
}

void AArchPickUpBase::OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                              UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (const auto* HeroCharacter = Cast<AArchHeroCharacter>(OtherActor))
	{
		HeroCharacter->GetArchAbilitySystemComponent()->TryActivateAbilityByTag(ArchGameplayTags::Player_Ability_PickUp);
	}
}
