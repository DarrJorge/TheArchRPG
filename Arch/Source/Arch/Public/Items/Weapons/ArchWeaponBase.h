// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArchTypes/ArchStructTypes.h"
#include "ArchWeaponBase.generated.h"

class UBoxComponent;

DECLARE_DELEGATE_OneParam(FOnTargetInteractedDelegate, AActor*);


UCLASS()
class ARCH_API AArchWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AArchWeaponBase();

	FOnTargetInteractedDelegate OnWeaponHitTarget;
	FOnTargetInteractedDelegate OnWeaponPulledFromTarget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Arch|WeaponData")
	FArchWeaponData WeaponData;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|Weapon")
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|Weapon")
	UBoxComponent* WeaponCollisionBox;

	UFUNCTION()
	virtual void OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnCollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	
	FORCEINLINE UBoxComponent* GetWeaponCollisionBox() const { return WeaponCollisionBox; }

	void SetWeaponCollision(bool bShouldEnable) const;
	
};