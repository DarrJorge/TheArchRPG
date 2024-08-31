// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ArchAIController.generated.h"

class UAIPerceptionComponent;
class UAISenseConfig_Sight;

UCLASS()
class ARCH_API AArchAIController : public AAIController
{
	GENERATED_BODY()

public:
	AArchAIController(const FObjectInitializer& ObjectInitializer);

	//~ Begin IGenericTeamAgentInterface Interface.
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	//~ End

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Arch|Components")
	UAIPerceptionComponent* EnemyPerceptionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Arch|Components")
	UAISenseConfig_Sight* AISenseSightConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	FName TargetKeyName = "TargetActor";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	FName DefaultMaxWalkSpeedKeyName = "DefaultMaxWalkSpeed";

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;

	UFUNCTION()
	virtual void OnEnemyPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

private:
	int32 EnemyGroupTeamId = 1;
	
	UPROPERTY(EditDefaultsOnly, Category="Detour Crowd Avoidance Config")
	bool bEnableDetourCrowdAvoidance = true;

	UPROPERTY(EditDefaultsOnly, Category="Detour Crowd Avoidance Config", meta=(EditCondition="bEnableDetourCrowdAvoidance", UIMin="1", UIMax="4"))
	int32 DetourCrowdAvoidanceQuality = 4;

	UPROPERTY(EditDefaultsOnly, Category="Detour Crowd Avoidance Config", meta=(EditCondition="bEnableDetourCrowdAvoidance"))
	float CollisionQueryRange = 600.f;
	
};
