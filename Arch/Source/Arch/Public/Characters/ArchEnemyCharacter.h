// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Characters/ArchBaseCharacter.h"
#include "ArchEnemyCharacter.generated.h"


class UBoxComponent;
class UEnemyCombatComponent;
class UArchEnemyUIComponent;
class UWidgetComponent;
class UBehaviorTree;

UCLASS()
class ARCH_API AArchEnemyCharacter : public AArchBaseCharacter
{
	GENERATED_BODY()

public:
	AArchEnemyCharacter();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="AI")
	UBehaviorTree* BehaviourTreeAsset;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|Combat|Components")
	UEnemyCombatComponent* EnemyCombatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|UI|Components")
	UArchEnemyUIComponent* EnemyUIComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|UI|Components")
	UWidgetComponent* HealthWidgetComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|UI|Components")
	UBoxComponent* LeftHandCollisionBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Arch|UI|Components")
	UBoxComponent* RightHandCollisionBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Arch|UI|Components")
	FName LeftHandAttachBoneName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Arch|UI|Components")
	FName RightHandAttachBoneName;

	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;

	UFUNCTION()
	virtual void OnUnarmedCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

#if WITH_EDITOR	
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
private:
	void InitStartUpData();

public:
	FORCEINLINE UEnemyCombatComponent* GetEnemyCombatComponent() const { return EnemyCombatComponent; }
	FORCEINLINE UBoxComponent* GetLeftHandCollisionBox() const { return LeftHandCollisionBox; }
	FORCEINLINE UBoxComponent* GetRightHandCollisionBox() const { return RightHandCollisionBox; }

	//~ Begin IPawnCombatInterface Interface
	virtual UCombatComponentBase* GetPawnCombatComponent() const override;

	//~ Begin IPawnUIInterface Interface
	virtual UArchUIComponentBase* GetUIComponentBase() const override;
	
};
