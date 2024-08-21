// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/Widgets/ArchUserWidget.h"
#include "ArchProgressBarWidget.generated.h"

class UProgressBar;

UCLASS()
class ARCH_API UArchProgressBarWidget : public UArchUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Arch|UI")
	void SetProgressPercent(float InPercent) const;

protected:

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UProgressBar* ProgressBar;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	bool bChangeableColorInBar = true;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="UI")
	float PercentWarningColorThreshold = 0.55f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="UI")
	float PercentCriticalColorThreshold = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	FLinearColor StatusColorPreview = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	FLinearColor StatusColorDefault = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	FLinearColor StatusColorWarning = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="UI")
	FLinearColor StatusColorCritical = FLinearColor::White;
	
};
