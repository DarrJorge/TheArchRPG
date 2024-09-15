// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ArchHeroGameplayAbility.h"
#include "ArchTargetLockAbility.generated.h"


class UArchUserWidget;
class UInputMappingContext;

UCLASS()
class ARCH_API UArchTargetLockAbility : public UArchHeroGameplayAbility
{
	GENERATED_BODY()

protected:
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION(BlueprintCallable)
	void OnTargetLockTick(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	void SwitchTarget(const FGameplayTag& SwitchDirectionTag);

private:
	void TryLockOnTarget();
	void GetAvailableActorsToLock();
	void CancelTargetLockAbility();
	void CleanUp();

	AActor* GetNearestTargetFromAvailableActors(const TArray<AActor*>& InAvailableActors);
	
	void DrawTargetLockWidget();
	void SetTargetLockWidgetPosition();

	void InitTargetLockMovement();
	void ResetTargetLockMovement();

	void InitTargetLockMappingContext();
	void ResetTargetLockMappingContext();

	void GetAvailableActorsAroundTarget(TArray<AActor*>& OutActorsOnLeft, TArray<AActor*>& OutActorsOnRight);

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	float TraceDistance = 5000.f;

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	FVector TraceBoxSize = FVector(5000.f, 5000.f, 300.f);

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	TArray<TEnumAsByte<EObjectTypeQuery>> BoxTraceChannels;

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	bool bShowPersistentDebugShape = false;

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	TSubclassOf<UArchUserWidget> TargetLockWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	float TargetLockRotationSpeed = 5.f;

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	float TargetLockMaxWalkSpeed = 150.f;

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	float CameraPitchOffsetDistance = 20.f;

	UPROPERTY(EditDefaultsOnly, Category="TargetLock")
	UInputMappingContext* TargetLockMappingContext;
	
	UPROPERTY()
	TArray<AActor*> AvailableActorsToLock;

	UPROPERTY()
	AActor* CurrentTargetActor = nullptr;

	UPROPERTY()
	UArchUserWidget* TargetLockWidget = nullptr;

	UPROPERTY()
	FVector2D TargetLockWidgetSize = FVector2D();

	UPROPERTY()
	float CachedDefaultMaxWalkSpeed = 0.f;
};
