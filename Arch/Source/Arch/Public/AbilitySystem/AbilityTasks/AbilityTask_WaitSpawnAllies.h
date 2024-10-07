// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_WaitSpawnAllies.generated.h"


class AArchEnemyCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitSpawnAlliesDelegate, const TArray<AArchEnemyCharacter*>&, SpawnedAllies);

UCLASS()
class ARCH_API UAbilityTask_WaitSpawnAllies : public UAbilityTask
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Arch|AbilityTasks", meta=(DisplayName="Wait Gameplay Event and Spawn Allies",
		HidePin="OwnAbility", DefaultToSelf="OwnAbility", BlueprintInternalUseOnly="true", NumToSpawn="1", RandomRadius="200"))
	static UAbilityTask_WaitSpawnAllies* WaitSpawnAllies(UGameplayAbility* OwnAbility, FGameplayTag EventTag,
		TSoftClassPtr<AArchEnemyCharacter> EnemyClass, int32 NumToSpawn, const FVector& SpawnLocation, float RandomRadius);

	UPROPERTY(BlueprintAssignable)
	FWaitSpawnAlliesDelegate OnSpawnFinished;

	UPROPERTY(BlueprintAssignable)
	FWaitSpawnAlliesDelegate OnNotSpawned;
	
	virtual void Activate() override;
	virtual void OnDestroy(bool bInOwnerFinished) override;

private:
	FDelegateHandle DelegateHandle;
	FGameplayTag CachedEventTag;
	TSoftClassPtr<AArchEnemyCharacter> CachedEnemyClass;
	int32 CachedNumToSpawn;
	FVector CachedSpawnLocation;
	float CachedRandomSpawnRadius;

	void OnGameplayEventReceived(const FGameplayEventData* InPayload);
	void OnEnemyClassLoaded();
	void OnNotSpawnedHandler();
};
