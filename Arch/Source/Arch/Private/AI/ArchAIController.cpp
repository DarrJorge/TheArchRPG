// DarrJorge All Rights Reserved.


#include "AI/ArchAIController.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/ArchEnemyCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

#include "Debug/ArchDebugHelper.h"
#include "GameFramework/CharacterMovementComponent.h"

AArchAIController::AArchAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>("PathFollowingComponent"))
{
	AISenseSightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>("UAISenseConfig_Sight");
	AISenseSightConfig->DetectionByAffiliation.bDetectEnemies = true;
	AISenseSightConfig->DetectionByAffiliation.bDetectFriendlies = false;
	AISenseSightConfig->DetectionByAffiliation.bDetectNeutrals = false;
	AISenseSightConfig->SightRadius = 5000.f;
	AISenseSightConfig->LoseSightRadius = 0.f;
	AISenseSightConfig->PeripheralVisionAngleDegrees = 180.f;

	EnemyPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("EnemyPerceptionComponent");
	EnemyPerceptionComponent->ConfigureSense(*AISenseSightConfig);
	EnemyPerceptionComponent->SetDominantSense(UAISenseConfig_Sight::StaticClass());
	EnemyPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AArchAIController::OnEnemyPerceptionUpdated);
}

void AArchAIController::BeginPlay()
{
	Super::BeginPlay();
	
	SetGenericTeamId(FGenericTeamId(EnemyGroupTeamId));

	if (const auto CrowdComp = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))
	{
		CrowdComp->SetCrowdSimulationState(bEnableDetourCrowdAvoidance
			? ECrowdSimulationState::Enabled
			: ECrowdSimulationState::ObstacleOnly);

		switch (DetourCrowdAvoidanceQuality)
		{
			case 1: CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Low); break;
			case 2: CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Medium); break;
			case 3: CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Good); break;
			case 4: CrowdComp->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::High); break;
			default:
				break;
		}

		CrowdComp->SetAvoidanceGroup(EnemyGroupTeamId);
		CrowdComp->SetGroupsToAvoid(EnemyGroupTeamId);
		CrowdComp->SetCrowdCollisionQueryRange(CollisionQueryRange);
	}
}

ETeamAttitude::Type AArchAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (const APawn* Pawn = Cast<const APawn>(&Other))
	{
		const auto* OtherTeamAgent = Cast<const IGenericTeamAgentInterface>(Pawn->GetController());
		if (OtherTeamAgent && OtherTeamAgent->GetGenericTeamId() < GetGenericTeamId())
		{
			return ETeamAttitude::Hostile;
		}
	}
	return ETeamAttitude::Friendly;
}

void AArchAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (const auto Character = Cast<AArchEnemyCharacter>(InPawn))
	{
		RunBehaviorTree(Character->BehaviourTreeAsset);

		if (const auto Blackboard = GetBlackboardComponent())
		{
			Blackboard->SetValueAsFloat(DefaultMaxWalkSpeedKeyName, Character->GetCharacterMovement()->MaxWalkSpeed);
		}
	}
}

void AArchAIController::OnEnemyPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (const auto Blackboard = GetBlackboardComponent())
	{
		if (!Blackboard->GetValueAsObject(TargetKeyName) && Stimulus.WasSuccessfullySensed() && Actor)
		{
			Blackboard->SetValueAsObject(TargetKeyName, Actor);
		}
	}
}
