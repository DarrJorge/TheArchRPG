// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchSpawnAwardAbility.h"
#include "Characters/ArchEnemyCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/AssetManager.h"
#include "Items/PickUps/ArchPickUpBase.h"

void UArchSpawnAwardAbility::SpawnAward(float ChanceToSpawn, const TArray<TSoftClassPtr<AArchPickUpBase>>& PickupItemsClasses)
{
	if (!GetWorld() || !TryFindSpawnLocation()) return;

	const bool bCanSpawn = UKismetMathLibrary::RandomBoolWithWeight(ChanceToSpawn);
	if (!bCanSpawn || PickupItemsClasses.IsEmpty()) return;

	const int32 RandomIndex = FMath::RandRange(0, PickupItemsClasses.Num()-1);
	auto RandomPickUpsItem = PickupItemsClasses[RandomIndex];

	UAssetManager::GetStreamableManager().RequestAsyncLoad(
		RandomPickUpsItem.ToSoftObjectPath(),
		FStreamableDelegate::CreateLambda(
			[this, RandomPickUpsItem]()
			{
				if (auto* AsyncLoadedClass = RandomPickUpsItem.Get())
				{
					if (auto* PickupItemClass = Cast<UClass>(AsyncLoadedClass))
					{
						GetWorld()->SpawnActor<AArchPickUpBase>(PickupItemClass, SpawnAwardLocation, FRotator());
					}
				}
			})
	);
}

bool UArchSpawnAwardAbility::TryFindSpawnLocation()
{
	FCollisionObjectQueryParams Params;
	Params.AddObjectTypesToQuery(ECC_WorldStatic);

	const FVector StartLocation = GetEnemyCharacterFromActorInfo()->GetActorLocation();
	const FVector EndLocation = StartLocation + (GetEnemyCharacterFromActorInfo()->GetActorUpVector() * (-200.0));

	FHitResult Hit;
	GetWorld()->LineTraceSingleByObjectType(Hit, StartLocation, EndLocation, Params);

	if (Hit.bBlockingHit)
	{
		SpawnAwardLocation = Hit.ImpactPoint;
		return true;
	}
	return false;
}
