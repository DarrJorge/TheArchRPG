// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "CheckTargetActorDeadDecorator.generated.h"


UCLASS()
class ARCH_API UCheckTargetActorDeadDecorator : public UBTDecorator
{
	GENERATED_BODY()

public:
	UCheckTargetActorDeadDecorator();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	FBlackboardKeySelector TargetActorKey;

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	
};
