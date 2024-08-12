// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Characters/ArchBaseCharacter.h"
#include "ArchEnemyCharacter.generated.h"


class UEnemyCombatComponent;

UCLASS()
class ARCH_API AArchEnemyCharacter : public AArchBaseCharacter
{
	GENERATED_BODY()

public:
	AArchEnemyCharacter();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|Combat")
	UEnemyCombatComponent* EnemyCombatComponent;

	virtual void PossessedBy(AController* NewController) override;

private:
	void InitStartUpData();

public:
	FORCEINLINE UEnemyCombatComponent* GetEnemyCombatComponent() const { return EnemyCombatComponent; }

	virtual UCombatComponentBase* GetPawnCombatComponent() const override;
	
};
