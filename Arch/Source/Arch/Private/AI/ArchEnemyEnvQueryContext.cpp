// DarrJorge All Rights Reserved.


#include "AI/ArchEnemyEnvQueryContext.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

void UArchEnemyEnvQueryContext::ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const
{
	const auto QueryOwner = Cast<AActor>(QueryInstance.Owner.Get());
	const auto Blackboard = UAIBlueprintHelperLibrary::GetBlackboard(QueryOwner);
	if (!Blackboard) return;

	const UObject* ContextActor = Blackboard->GetValueAsObject(TargetActorKeyName);
	UEnvQueryItemType_Actor::SetContextHelper(ContextData, Cast<AActor>(ContextActor));
}
