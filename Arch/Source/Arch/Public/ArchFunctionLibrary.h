// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArchTypes/ArchEnumTypes.h"
#include "ArchFunctionLibrary.generated.h"

struct FGameplayEffectSpecHandle;

namespace EDrawDebugTrace
{
	enum Type : int;
}

class UCombatComponentBase;
class UArchAbilitySystemComponent;
struct FScalableFloat;


UCLASS()
class ARCH_API UArchFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static UArchAbilitySystemComponent* NativeGetArchASCFromActor(AActor* InActor);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary")
	static void AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary")
	static void RemoveGameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary")
	static void RemoveGameplayTagsFromActorIfFound(AActor* InActor, const TArray<FGameplayTag>& TagsToRemove);

	static bool NativeActorHasTag(AActor* InActor, FGameplayTag TagToCheck);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary", meta=(DisplayName="Does Actor Have Tag", ExpandEnumAsExecs="OutConfirmType"))
	static void BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, EArchConfirmType& OutConfirmType);

	static UCombatComponentBase* NativeGetPawnCombatComponentFromActorInfo(AActor* InActor);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary", meta=(DisplayName="Get Pawn Combat Component From Actor", ExpandEnumAsExecs="OutValidType"))
	static UCombatComponentBase* BP_GetPawnCombatComponentFromActorInfo(AActor* InActor, EArchValidType& OutValidType);

	UFUNCTION(BlueprintPure, Category="Arch|BlueprintFunctionLibrary")
	static bool IsTargetPawnHostile(APawn* InstigatorPawn, APawn* TargetPawn);

	UFUNCTION(BlueprintPure, Category="Arch|BlueprintFunctionLibrary", meta=(CompactNodeTitle="Get Value At Level"))
	static float GetScalableFloatValueAtLevel(const FScalableFloat& InScalableFloat, float InLevel = 1.f);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary")
	static FVector GetRollingLocation(AActor* SourceActor, const FVector& Direction, float Distance);

	UFUNCTION(BlueprintPure, Category="Arch|BlueprintFunctionLibrary")
	static FGameplayTag ComputeHitReactDirectionTag(AActor* Attacker, AActor* Victim, float& OutAngleDifference);

	UFUNCTION(BlueprintPure, Category="Arch|BlueprintFunctionLibrary")
	static bool IsValidBlock(AActor* Attacker, AActor* Victim);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary")
	static void GetActorsFromTraceMultiBox(const UObject* WorldContextObject, const FVector& Start, const FVector& End, const FVector& HalfSize,
		const FRotator& Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore,
		EDrawDebugTrace::Type DrawDebugType, const AActor* SelfActor, TArray<AActor*>& OutAvailableActors);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary")
	static bool ApplyGameplayEffectSpecHandleToTarget(AActor* InInstigator, AActor* InTargetActor, const FGameplayEffectSpecHandle& InSpecHandle);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary", meta=(Latent, WorldContext = "WorldContextObject", LatentInfo="LatentInfo", ExpandEnumAsExecs="CountDownInput|CountDownOutput", TotalTime="1.0", UpdateInterval="0.1"))
	static void CountDown(const UObject* WorldContextObject, float TotalTime, float UpdateInterval, float& OutRemainingTime,
		EArchCountdownActionInput CountDownInput, UPARAM(DisplayName="Out") EArchCountdownActionOutput& CountDownOutput, FLatentActionInfo LatentInfo);

private:
	static void ComputeNormalizeAngleBetweenTwoActors(AActor* Source, AActor* Target, float& OutAngleDifference);
};
