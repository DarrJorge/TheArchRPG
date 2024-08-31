// DarrJorge All Rights Reserved.


#include "AI/Decorators/CheckTargetActorDeadDecorator.h"
#include "AIController.h"
#include "ArchFunctionLibrary.h"
#include "ArchGameplayTags.h"
#include "BehaviorTree/BlackboardComponent.h"

UCheckTargetActorDeadDecorator::UCheckTargetActorDeadDecorator()
{
	NodeName = TEXT("Check Target Actor If Dead");
}

bool UCheckTargetActorDeadDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory) const
{
	const auto Controller = OwnerComp.GetAIOwner();
	const auto Blackboard = OwnerComp.GetBlackboardComponent();
	if (!Controller || !Blackboard) return false;

	const auto TargetObject = Blackboard->GetValueAsObject(TargetActorKey.SelectedKeyName);
	const auto TargetActor = Cast<AActor>(TargetObject);
	
	if (!TargetActor) return false;

	const bool bTargetDead = UArchFunctionLibrary::NativeActorHasTag(TargetActor, ArchGameplayTags::Shared_Status_Dead);
	const bool bOwningDead = UArchFunctionLibrary::NativeActorHasTag(Controller->GetPawn(), ArchGameplayTags::Shared_Status_Dead);
	
	return bTargetDead || bOwningDead;
}
