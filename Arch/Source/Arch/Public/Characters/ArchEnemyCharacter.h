// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Characters/ArchBaseCharacter.h"
#include "ArchEnemyCharacter.generated.h"


class UEnemyCombatComponent;
class UArchEnemyUIComponent;
class UWidgetComponent;

UCLASS()
class ARCH_API AArchEnemyCharacter : public AArchBaseCharacter
{
	GENERATED_BODY()

public:
	AArchEnemyCharacter();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|Combat|Components")
	UEnemyCombatComponent* EnemyCombatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|UI|Components")
	UArchEnemyUIComponent* EnemyUIComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|UI|Components")
	UWidgetComponent* HealthWidgetComponent;

	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;

private:
	void InitStartUpData();

public:
	FORCEINLINE UEnemyCombatComponent* GetEnemyCombatComponent() const { return EnemyCombatComponent; }

	//~ Begin IPawnCombatInterface Interface
	virtual UCombatComponentBase* GetPawnCombatComponent() const override;

	//~ Begin IPawnUIInterface Interface
	virtual UArchUIComponentBase* GetUIComponentBase() const override;
	
};
