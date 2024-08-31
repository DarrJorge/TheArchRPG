// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UpdateMotionWarpToTargetService.generated.h"


UCLASS()
class ARCH_API UUpdateMotionWarpToTargetService : public UBTService
{
	GENERATED_BODY()

public:
	UUpdateMotionWarpToTargetService();

protected:
	UPROPERTY(EditAnywhere, Category="Target")
	FBlackboardKeySelector TargetActorKey;

	UPROPERTY(EditAnywhere, Category="Target")
	FName WarpTargetName;
	
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};

/**
const auto OwnerCharacter = Cast<AArchEnemyCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	const auto Blackboard = OwnerComp.GetBlackboardComponent();

	if (OwnerCharacter && Blackboard)
	{
		if (const auto TargetActor = Cast<AActor>(Blackboard->GetValueAsObject(TargetActorKey.SelectedKeyName)))
		{
			OwnerCharacter->GetMotionWarpingComponent()->AddOrUpdateWarpTargetFromLocation(
				WarpTargetName,
				TargetActor->GetActorLocation());
		}
	}
 */
