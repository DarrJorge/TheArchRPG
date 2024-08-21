// DarrJorge All Rights Reserved.


#include "UI/Widgets/ArchProgressBarWidget.h"
#include "Components/ProgressBar.h"

void UArchProgressBarWidget::SetProgressPercent(float InPercent) const
{
	if (!ProgressBar) return;

	ProgressBar->SetPercent(InPercent);

	if (!bChangeableColorInBar)
	{
		ProgressBar->SetFillColorAndOpacity(StatusColorPreview);
		return;
	}

	if (InPercent >= PercentWarningColorThreshold)
	{
		ProgressBar->SetFillColorAndOpacity(StatusColorDefault);
	}
	else if (InPercent >= PercentCriticalColorThreshold)
	{
		ProgressBar->SetFillColorAndOpacity(StatusColorWarning);
	}
	else
	{
		ProgressBar->SetFillColorAndOpacity(StatusColorCritical);
	}
}
