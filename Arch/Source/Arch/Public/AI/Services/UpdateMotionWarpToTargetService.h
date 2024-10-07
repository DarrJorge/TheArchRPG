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