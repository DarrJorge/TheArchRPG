// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchPickupAbility.h"
#include "Characters/ArchHeroCharacter.h"
#include "Components/UI/ArchHeroUIComponent.h"
#include "Items/PickUps/ArchPickUpBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Player/ArchPlayerController.h"

void UArchPickupAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                         const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	check(PickUpInputAction);

	FText InputKeyName;
	if (GetHeroControllerFromActorInfo()->TryGetInputActionDisplayName(PickUpInputAction, InputKeyName))
	{
		GetHeroUIComponentFromActorInfo()->OnPickUpItemInteracted.Broadcast(true, InputKeyName);
	}
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UArchPickupAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	GetHeroUIComponentFromActorInfo()->OnPickUpItemInteracted.Broadcast(false, FText());
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UArchPickupAbility::CollectItems()
{
	Items.Empty();
	TArray<FHitResult> TraceHits;

	const FVector StartLocation = GetHeroCharacterFromActorInfo()->GetActorLocation();
	const FVector EndLocation = StartLocation + (-GetHeroCharacterFromActorInfo()->GetActorUpVector() * TraceDistance);
	
	UKismetSystemLibrary::BoxTraceMultiForObjects(
		GetHeroCharacterFromActorInfo(),
		StartLocation,
		EndLocation,
		TraceBoxSize / 2.f,
		(-GetHeroCharacterFromActorInfo()->GetActorUpVector()).ToOrientationRotator(),
		PickupTraceChannel,
		false,
		TArray<AActor*>(),
		bDrawDebugShape ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None,
		TraceHits,
		true);

	
	for (const FHitResult& TraceHit : TraceHits)
	{
		if (auto* PickUpActor = Cast<AArchPickUpBase>(TraceHit.GetActor()))
		{
			Items.AddUnique(PickUpActor);
		}
	}

	if (Items.IsEmpty())
	{
		CancelAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), true);
	}
}

void UArchPickupAbility::ConsumeItems()
{
	if (Items.IsEmpty())
	{
		CancelAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), true);
		return;
	}

	for (auto* Item : Items)
	{
		if (Item)
		{
			Item->ConsumePickUpItem(GetArchAbilitySystemComponentFromActorInfo(), GetAbilityLevel());
		}
	}
}
