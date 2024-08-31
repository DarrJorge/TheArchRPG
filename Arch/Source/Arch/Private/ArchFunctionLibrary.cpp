// DarrJorge All Rights Reserved.


#include "ArchFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "Interfaces/PawnCombatInterface.h"
#include "GenericTeamAgentInterface.h"

UArchAbilitySystemComponent* UArchFunctionLibrary::NativeGetArchASCFromActor(AActor* InActor)
{
	check(InActor);

	UAbilitySystemComponent* ArchASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(InActor);
	return CastChecked<UArchAbilitySystemComponent>(ArchASC);
}

void UArchFunctionLibrary::AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd)
{
	UArchAbilitySystemComponent* ArchASC = NativeGetArchASCFromActor(InActor);

	if (!ArchASC->HasMatchingGameplayTag(TagToAdd))
	{
		ArchASC->AddLooseGameplayTag(TagToAdd);
	}
}

void UArchFunctionLibrary::RemoveGameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove)
{
	UArchAbilitySystemComponent* ArchASC = NativeGetArchASCFromActor(InActor);

	if (ArchASC->HasMatchingGameplayTag(TagToRemove))
	{
		ArchASC->RemoveLooseGameplayTag(TagToRemove);
	}
}

bool UArchFunctionLibrary::NativeActorHasTag(AActor* InActor, FGameplayTag TagToCheck)
{
	return NativeGetArchASCFromActor(InActor)->HasMatchingGameplayTag(TagToCheck);
}

void UArchFunctionLibrary::BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, EArchConfirmType& OutConfirmType)
{
	OutConfirmType = NativeActorHasTag(InActor, TagToCheck) ? EArchConfirmType::Yes : EArchConfirmType::No;
}

UCombatComponentBase* UArchFunctionLibrary::NativeGetPawnCombatComponentFromActorInfo(AActor* InActor)
{
	if (!InActor) return nullptr;
	if (const auto PawnCombatInterface = Cast<IPawnCombatInterface>(InActor))
	{
		return PawnCombatInterface->GetPawnCombatComponent();
	}
	return nullptr;
}

UCombatComponentBase* UArchFunctionLibrary::BP_GetPawnCombatComponentFromActorInfo(AActor* InActor,
	EArchValidType& OutValidType)
{
	UCombatComponentBase* CombatComponent = NativeGetPawnCombatComponentFromActorInfo(InActor);
	OutValidType = CombatComponent ? EArchValidType::Valid : EArchValidType::Invalid;
	return CombatComponent;
}

bool UArchFunctionLibrary::IsTargetPawnHostile(APawn* InstigatorPawn, APawn* TargetPawn)
{
	check(InstigatorPawn && TargetPawn);
	
	const auto InstigatorTeamAgent = Cast<IGenericTeamAgentInterface>(InstigatorPawn->Controller);
	const auto TargetTeamAgent = Cast<IGenericTeamAgentInterface>(TargetPawn->Controller);
	if (!InstigatorTeamAgent || !TargetTeamAgent) return false;
	
	return InstigatorTeamAgent->GetGenericTeamId() != TargetTeamAgent->GetGenericTeamId();
}
