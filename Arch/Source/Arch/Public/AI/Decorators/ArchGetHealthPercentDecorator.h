// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ArchTypes/ArchEnumTypes.h"
#include "ArchGetHealthPercentDecorator.generated.h"


UCLASS()
class ARCH_API UArchGetHealthPercentDecorator : public UBTDecorator
{
	GENERATED_BODY()

public:
	UArchGetHealthPercentDecorator();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	EArchDecoratorOperationType CheckOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(ClampMin="0", ClampMax="1"))
	float ThresholdToCheck;

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	
};
