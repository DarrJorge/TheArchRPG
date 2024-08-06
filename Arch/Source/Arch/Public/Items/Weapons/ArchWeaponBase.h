// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArchTypes/ArchStructTypes.h"
#include "ArchWeaponBase.generated.h"

class UBoxComponent;


UCLASS()
class ARCH_API AArchWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AArchWeaponBase();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Arch|WeaponData")
	FArchWeaponData WeaponData;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|Weapon")
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|Weapon")
	UBoxComponent* WeaponCollisionBox;

public:
	FORCEINLINE UBoxComponent* GetWeaponCollisionBox() const { return WeaponCollisionBox; }
	
};