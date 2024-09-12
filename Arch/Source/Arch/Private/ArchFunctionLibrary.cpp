// DarrJorge All Rights Reserved.


#include "ArchFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ArchGameplayTags.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "Interfaces/PawnCombatInterface.h"
#include "GenericTeamAgentInterface.h"
#include "Kismet/KismetMathLibrary.h"

#include "Debug/ArchDebugHelper.h"

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

float UArchFunctionLibrary::GetScalableFloatValueAtLevel(const FScalableFloat& InScalableFloat, float InLevel)
{
	return InScalableFloat.GetValueAtLevel(InLevel);
}

FVector UArchFunctionLibrary::GetRollingLocation(AActor* SourceActor, const FVector& Direction, float Distance)
{
	if (!SourceActor) return FVector();
	
	const FVector Start = SourceActor->GetActorLocation() + Direction * Distance;
	const FVector End = Start + (SourceActor->GetActorUpVector() * (-1)) * Distance;
	
	FCollisionObjectQueryParams QueryParams;
	QueryParams.AddObjectTypesToQuery(ECC_WorldStatic);
	
	FHitResult OutResult;
	SourceActor->GetWorld()->LineTraceSingleByObjectType(OutResult, Start, End, QueryParams);

	return OutResult.bBlockingHit ? OutResult.ImpactPoint : FVector();
}

FGameplayTag UArchFunctionLibrary::ComputeHitReactDirectionTag(AActor* Attacker, AActor* Victim, float& OutAngleDifference)
{
	ComputeNormalizeAngleBetweenTwoActors(Attacker, Victim, OutAngleDifference);

	if (OutAngleDifference <= -45.f && OutAngleDifference >= -135.f)
	{
		return ArchGameplayTags::Shared_Status_HitReact_Left;
	}

	if (OutAngleDifference < -135.f || OutAngleDifference >= 135.f)
	{
		return ArchGameplayTags::Shared_Status_HitReact_Back;
	}

	if (OutAngleDifference >= 45.f && OutAngleDifference < 135.f)
	{
		return ArchGameplayTags::Shared_Status_HitReact_Right;
	}

	// by default and if angle > -45.f && angle < 45.f
	return ArchGameplayTags::Shared_Status_HitReact_Front;
}

bool UArchFunctionLibrary::IsValidBlock(AActor* Attacker, AActor* Victim)
{
	float AngleDifference = 0.f;
	ComputeNormalizeAngleBetweenTwoActors(Attacker, Victim, AngleDifference);
	return AngleDifference >= -30.f && AngleDifference <= 55.f;
}

void UArchFunctionLibrary::ComputeNormalizeAngleBetweenTwoActors(AActor* Source, AActor* Target, float& OutAngleDifference)
{
	check(Source && Target);

	const FVector TargetForward = Target->GetActorForwardVector();
	const FVector DifferenceNormalized = (Source->GetActorLocation() - Target->GetActorLocation()).GetSafeNormal();

	const float DotResult = FVector::DotProduct(TargetForward, DifferenceNormalized);
	OutAngleDifference = UKismetMathLibrary::DegAcos(DotResult);

	const FVector CrossResult = FVector::CrossProduct(TargetForward, DifferenceNormalized);
	if (CrossResult.Z < 0.f)
	{
		OutAngleDifference *= -1;
	}
}
