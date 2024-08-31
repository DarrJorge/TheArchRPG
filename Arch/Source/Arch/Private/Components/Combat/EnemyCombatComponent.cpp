// DarrJorge All Rights Reserved.


#include "Components/Combat/EnemyCombatComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ArchGameplayTags.h"

#include "Debug/ArchDebugHelper.h"

void UEnemyCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor)) return;

	OverlappedActors.AddUnique(HitActor);

	// TODO:: make later
	bool bIsValidBlock = false;
	bool bIsPlayerBlocking = false;
	bool bIsMyAttackUnblockable = false;

	if (bIsPlayerBlocking && !bIsMyAttackUnblockable)
	{
		// TODO:: check if the block is valid
	}

	if (bIsValidBlock)
	{
		// TODO:: Handle succesful block
	}
	else
	{
		FGameplayEventData PayloadData;
		PayloadData.Instigator = GetOwningPawn();
		PayloadData.Target = HitActor;
		
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			GetOwningPawn(),
			ArchGameplayTags::Event_Combat_MeleeHit,
			PayloadData);
	}
}
