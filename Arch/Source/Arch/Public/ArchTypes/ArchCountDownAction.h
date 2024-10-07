// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ArchTypes/ArchEnumTypes.h"

class FArchCountDownAction : public FPendingLatentAction
{
public:
	FArchCountDownAction(float InTotalCountDownTime, float InUpdateInterval, float& InOutRemainingTime,
		EArchCountdownActionOutput& InCountDownOutput, const FLatentActionInfo& LatentInfo) :
			bNeedToCancel(false),
			TotalCountDownTime(InTotalCountDownTime),
			UpdateInterval(InUpdateInterval),
			OutRemainingTime(InOutRemainingTime),
			ElapsedInterval(0.f),
			ElapsedTimeSinceStart(0.f),
			OutputLink(LatentInfo.Linkage),
			CountDownOutput(InCountDownOutput),
			ExecutionFunction(LatentInfo.ExecutionFunction),
			CallbackTarget(LatentInfo.CallbackTarget)
	{
	}

	void CancelAction();

	virtual void UpdateOperation(FLatentResponse& Response) override;

private:
	bool bNeedToCancel;
	float TotalCountDownTime;
	float UpdateInterval;
	float& OutRemainingTime;
	float ElapsedInterval;
	float ElapsedTimeSinceStart;
	int32 OutputLink;

	EArchCountdownActionOutput& CountDownOutput;
	FName ExecutionFunction;
	TObjectPtr<UObject> CallbackTarget;
};