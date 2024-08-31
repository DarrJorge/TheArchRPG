// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/CombatComponentBase.h"
#include "EnemyCombatComponent.generated.h"


UCLASS()
class ARCH_API UEnemyCombatComponent : public UCombatComponentBase
{
	GENERATED_BODY()

public:
	virtual void OnHitTargetActor(AActor* HitActor) override;
	
};
