// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimInstance.h"
#include "ArchBaseAnimInstance.generated.h"


UCLASS()
class ARCH_API UArchBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure, meta=(BlueprintThreadSafe))
	bool DoesOwnerHaveGameplayTag(FGameplayTag InTag) const;
	
};
