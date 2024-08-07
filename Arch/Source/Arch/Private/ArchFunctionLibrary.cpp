// DarrJorge All Rights Reserved.


#include "ArchFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"

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
