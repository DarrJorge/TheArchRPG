// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/CombatComponentBase.h"
#include "EnemyCombatComponent.generated.h"

class UBoxComponent;

UCLASS()
class ARCH_API UEnemyCombatComponent : public UCombatComponentBase
{
	GENERATED_BODY()

public:
	virtual void OnHitTargetActor(AActor* HitActor) override;

protected:
	virtual void ToggleLeftUnarmedCollision(bool bShouldEnable) override;
	virtual void ToggleRightUnarmedCollision(bool bShouldEnable) override;
	
};
