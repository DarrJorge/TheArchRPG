// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animations/ArchBaseAnimInstance.h"
#include "ArchHeroLinkedAnimLayer.generated.h"

class UArchHeroAnimInstance;

UCLASS()
class ARCH_API UArchHeroLinkedAnimLayer : public UArchBaseAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta=(NotBlueprintThreadSafe))
	UArchHeroAnimInstance* GetHeroAnimInstance() const;
};
