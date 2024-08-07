// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArchFunctionLibrary.generated.h"

UENUM()
enum class EArchConfirmType : uint8
{
	Yes,
	No
};

class UArchAbilitySystemComponent;

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

	static bool NativeActorHasTag(AActor* InActor, FGameplayTag TagToCheck);

	UFUNCTION(BlueprintCallable, Category="Arch|BlueprintFunctionLibrary", meta=(DisplayName="Does Actor Have Tag", ExpandEnumAsExecs="OutConfirmType"))
	static void BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, EArchConfirmType& OutConfirmType);
};
