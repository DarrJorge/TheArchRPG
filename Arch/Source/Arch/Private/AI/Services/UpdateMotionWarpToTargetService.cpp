// DarrJorge All Rights Reserved.


#include "AI/Services/UpdateMotionWarpToTargetService.h"

#include "AIController.h"
#include "MotionWarpingComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/ArchEnemyCharacter.h"

UUpdateMotionWarpToTargetService::UUpdateMotionWarpToTargetService()
{
	NodeName = TEXT("Update Motion Warping to Target");
	INIT_SERVICE_NODE_NOTIFY_FLAGS();
}

void UUpdateMotionWarpToTargetService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,
	float DeltaSeconds)
{
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
	
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}
