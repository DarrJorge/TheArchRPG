// DarrJorge All Rights Reserved.


#include "AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h"
#include "AbilitySystemComponent.h"
#include "Engine/AssetManager.h"
#include "Characters/ArchEnemyCharacter.h"
#include "NavigationSystem.h"


UAbilityTask_WaitSpawnAllies* UAbilityTask_WaitSpawnAllies::WaitSpawnAllies(UGameplayAbility* OwnAbility,
	FGameplayTag EventTag, TSoftClassPtr<AArchEnemyCharacter> EnemyClass, int32 NumToSpawn,
	const FVector& SpawnLocation, float RandomRadius)
{
	UAbilityTask_WaitSpawnAllies* Node = NewAbilityTask<UAbilityTask_WaitSpawnAllies>(OwnAbility);
	Node->CachedEventTag = EventTag;
	Node->CachedEnemyClass = EnemyClass;
	Node->CachedNumToSpawn = NumToSpawn;
	Node->CachedSpawnLocation = SpawnLocation;
	Node->CachedRandomSpawnRadius = RandomRadius;
	
	return Node;
}

void UAbilityTask_WaitSpawnAllies::Activate()
{
	FGameplayEventMulticastDelegate& Delegate = AbilitySystemComponent->GenericGameplayEventCallbacks.FindOrAdd(CachedEventTag);
	DelegateHandle = Delegate.AddUObject(this, &UAbilityTask_WaitSpawnAllies::OnGameplayEventReceived);
}

void UAbilityTask_WaitSpawnAllies::OnDestroy(bool bInOwnerFinished)
{
	FGameplayEventMulticastDelegate& Delegate = AbilitySystemComponent->GenericGameplayEventCallbacks.FindOrAdd(CachedEventTag);
	Delegate.Remove(DelegateHandle);
	
	Super::OnDestroy(bInOwnerFinished);
}

void UAbilityTask_WaitSpawnAllies::OnGameplayEventReceived(const FGameplayEventData* InPayload)
{
	if (ensure(!CachedEnemyClass.IsNull()))
	{
		UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
			CachedEnemyClass.ToSoftObjectPath(),
			FStreamableDelegate::CreateUObject(this, &UAbilityTask_WaitSpawnAllies::OnEnemyClassLoaded)
		);
	}
	else 
	{
		OnNotSpawnedHandler();
	}

}

void UAbilityTask_WaitSpawnAllies::OnEnemyClassLoaded()
{
	UClass* LoadedClass = CachedEnemyClass.Get();
	UWorld* World = GetWorld();

	if (!LoadedClass || !World)
	{
		OnNotSpawnedHandler();
		return;
	}

	TArray<AArchEnemyCharacter*> SpawnedEnemies;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	for (int32 i = 0; i < CachedNumToSpawn; i++)
	{
		FVector RandomLocation;
		UNavigationSystemV1::K2_GetRandomReachablePointInRadius(this,
			CachedSpawnLocation,
			RandomLocation,
			CachedRandomSpawnRadius);

		RandomLocation += FVector(0.f, 0.f, 150.f);
		const auto FacingRotation = AbilitySystemComponent->GetAvatarActor()->GetActorForwardVector().ToOrientationRotator();

		if (auto SpawnedEnemy = World->SpawnActor<AArchEnemyCharacter>(LoadedClass, RandomLocation, FacingRotation, SpawnParams))
		{
			SpawnedEnemies.Add(SpawnedEnemy);
		}
	}

	if (ShouldBroadcastAbilityTaskDelegates())
	{
		if (!SpawnedEnemies.IsEmpty())
		{
			OnSpawnFinished.Broadcast(SpawnedEnemies);
		}
		else
		{
			// broadcast SpawnedEnemies because its an empty array
			OnNotSpawned.Broadcast(SpawnedEnemies);
		}
	}
	EndTask();
}

void UAbilityTask_WaitSpawnAllies::OnNotSpawnedHandler()
{
	if (ShouldBroadcastAbilityTaskDelegates())
	{
		OnNotSpawned.Broadcast(TArray<AArchEnemyCharacter*>());
	}
	EndTask();
}
