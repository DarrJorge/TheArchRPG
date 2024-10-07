#include "ArchTypes/ArchCountDownAction.h"


void FArchCountDownAction::CancelAction()
{
	bNeedToCancel = true;
}

void FArchCountDownAction::UpdateOperation(FLatentResponse& Response)
{
	if (bNeedToCancel)
	{
		CountDownOutput = EArchCountdownActionOutput::Cancelled;
		Response.FinishAndTriggerIf(true, ExecutionFunction, OutputLink, CallbackTarget);
		return;
	}

	if (ElapsedTimeSinceStart >= TotalCountDownTime)
	{
		CountDownOutput = EArchCountdownActionOutput::Completed;
		Response.FinishAndTriggerIf(true, ExecutionFunction, OutputLink, CallbackTarget);
		return;
	}

	if (ElapsedInterval < UpdateInterval)
	{
		ElapsedInterval += Response.ElapsedTime();
	}
	else
	{
		ElapsedTimeSinceStart += UpdateInterval > 0.f ? UpdateInterval : Response.ElapsedTime();
		OutRemainingTime = TotalCountDownTime - ElapsedTimeSinceStart;
		CountDownOutput = EArchCountdownActionOutput::Updated;
		Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);
		ElapsedInterval = 0.f;
	}
}
