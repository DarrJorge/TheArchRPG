// DarrJorge All Rights Reserved.


#include "Components/Combat/EnemyCombatComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ArchFunctionLibrary.h"
#include "ArchGameplayTags.h"
#include "Characters/ArchEnemyCharacter.h"
#include "Components/BoxComponent.h"

void UEnemyCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor)) return;

	OverlappedActors.AddUnique(HitActor);
	
	bool bIsValidBlock = false;
	const bool bIsPlayerBlocking = UArchFunctionLibrary::NativeActorHasTag(HitActor, ArchGameplayTags::Player_Status_Blocking);
	const bool bIsMyAttackUnblockable = UArchFunctionLibrary::NativeActorHasTag(GetOwningPawn(), ArchGameplayTags::Enemy_Status_Unblockable);

	if (bIsPlayerBlocking && !bIsMyAttackUnblockable)
	{
		bIsValidBlock = UArchFunctionLibrary::IsValidBlock(GetOwningPawn(), HitActor);
	}

	FGameplayEventData PayloadData;
	PayloadData.Instigator = GetOwningPawn();
	PayloadData.Target = HitActor;

	AActor* TargetActor = bIsValidBlock ? HitActor : GetOwningPawn();
	const FGameplayTag EventTag = bIsValidBlock
		? ArchGameplayTags::Event_Combat_SuccessfulBlock
		: ArchGameplayTags::Event_Combat_MeleeHit;

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		TargetActor,
		EventTag,
		PayloadData);
}

void UEnemyCombatComponent::ToggleLeftUnarmedCollision(bool bShouldEnable)
{
	const auto OwnerCharacter = GetOwningPawn<AArchEnemyCharacter>();
	if (!OwnerCharacter) return;

	const auto LeftHandCollisionBox = OwnerCharacter->GetLeftHandCollisionBox();
	if (!LeftHandCollisionBox) return;

	LeftHandCollisionBox->SetCollisionEnabled(bShouldEnable ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
}

void UEnemyCombatComponent::ToggleRightUnarmedCollision(bool bShouldEnable)
{
	const auto OwnerCharacter = GetOwningPawn<AArchEnemyCharacter>();
	if (!OwnerCharacter) return;

	const auto RightHandCollisionBox = OwnerCharacter->GetRightHandCollisionBox();
	if (!RightHandCollisionBox) return;

	RightHandCollisionBox->SetCollisionEnabled(bShouldEnable ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
}
