// DarrJorge All Rights Reserved.


#include "AI/Services/BTService_OrientToTargetActor.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackboardData.h"
#include "Kismet/KismetMathLibrary.h"

UBTService_OrientToTargetActor::UBTService_OrientToTargetActor()
{
	NodeName = TEXT("Native Orient Rotation To Target Actor");
	INIT_SERVICE_NODE_NOTIFY_FLAGS();

	RotationInterpSpeed = 5.0;
	Interval = 0.f;
	RandomDeviation = 0.f;
	
	InTargetActorKey.AddObjectFilter(this,
		GET_MEMBER_NAME_CHECKED(ThisClass, InTargetActorKey),
		AActor::StaticClass());
	
}

void UBTService_OrientToTargetActor::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	if (const UBlackboardData* BlackboardAsset = GetBlackboardAsset())
	{
		InTargetActorKey.ResolveSelectedKey(*BlackboardAsset);
	}
}

FString UBTService_OrientToTargetActor::GetStaticDescription() const
{
	const FString KeyDescription = InTargetActorKey.SelectedKeyName.ToString();
	return FString::Printf(TEXT("Orient rotation to %s Key %s"), *KeyDescription, *GetStaticServiceDescription());
}

void UBTService_OrientToTargetActor::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UObject* ActorObject = OwnerComp.GetBlackboardComponent()->GetValueAsObject(InTargetActorKey.SelectedKeyName);
	if (!ActorObject) return;
	
	const AActor* TargetActor = Cast<AActor>(ActorObject);
	APawn* OwningPawn = OwnerComp.GetAIOwner()->GetPawn();
	
	if (!TargetActor || !OwningPawn) return;

	const FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(
		OwningPawn->GetActorLocation(),
		TargetActor->GetActorLocation());
	
	const FRotator TargetRotation = FMath::RInterpTo(
		OwningPawn->GetActorRotation(),
		LookAtRotation,
		DeltaSeconds,
		RotationInterpSpeed);
	
	OwningPawn->SetActorRotation(TargetRotation);
}