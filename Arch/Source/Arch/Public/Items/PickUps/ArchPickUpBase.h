// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArchPickUpBase.generated.h"

class USphereComponent;
class UArchAbilitySystemComponent;

UCLASS()
class ARCH_API AArchPickUpBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AArchPickUpBase();
	
	virtual void ConsumePickUpItem(UArchAbilitySystemComponent* AbilitySystemComponent, int32 ApplyLevel);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="PickUps")
	USphereComponent* PickupCollisionSphere;

	UFUNCTION()
	virtual void OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
