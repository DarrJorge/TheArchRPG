// DarrJorge All Rights Reserved.


#include "Components/Combat/HeroCombatComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ArchGameplayTags.h"

#include "Debug/ArchDebugHelper.h"

void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor)) return;

	OverlappedActors.AddUnique(HitActor);

	FGameplayEventData PayloadData;
	PayloadData.Instigator = GetOwningPawn();
	PayloadData.Target = HitActor;
	
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		GetOwningPawn(),
		ArchGameplayTags::Event_Combat_MeleeHit,
		PayloadData);
}

void UHeroCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
}
