// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animations/ArchBaseAnimInstance.h"
#include "ArchCharacterAnimInstance.generated.h"

class UCharacterMovementComponent;
class AArchBaseCharacter;

UCLASS()
class ARCH_API UArchCharacterAnimInstance : public UArchBaseAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY()
	AArchBaseCharacter* OwningCharacter;

	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category="AnimData|LocomotionData")
	float GroundSpeed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category="AnimData|LocomotionData")
	bool bHasAcceleration;
	
};
