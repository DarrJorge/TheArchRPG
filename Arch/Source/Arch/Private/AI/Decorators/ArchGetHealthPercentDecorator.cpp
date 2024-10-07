// DarrJorge All Rights Reserved.


#include "AI/Decorators/ArchGetHealthPercentDecorator.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AIController.h"
#include "AbilitySystem/ArchAttributeSet.h"


UArchGetHealthPercentDecorator::UArchGetHealthPercentDecorator()
{
	NodeName = TEXT("Get Current Health Percent");
}

bool UArchGetHealthPercentDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory) const
{
	const AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController) return false;

	APawn* ControlledPawn = AIController->GetPawn();
	if (!ControlledPawn) return false;

	const auto OwnerASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(ControlledPawn);
	if (!OwnerASC) return false;

	bool bFoundHealthAttribute;
	const float Health = OwnerASC->GetGameplayAttributeValue(UArchAttributeSet::GetHealthAttribute(),bFoundHealthAttribute);

	bool bFoundMaxHealthAttribute;
	const float MaxHealth = OwnerASC->GetGameplayAttributeValue(UArchAttributeSet::GetMaxHealthAttribute(),bFoundMaxHealthAttribute);
	
	if (!bFoundHealthAttribute || !bFoundMaxHealthAttribute || 	FMath::IsNearlyZero(MaxHealth)) return false;
	const float HealthPercent = Health / MaxHealth;

	switch (CheckOperation)
	{
	case EArchDecoratorOperationType::IsLessThan:
		if (HealthPercent < ThresholdToCheck) return true;
		break;

	case EArchDecoratorOperationType::IsLessThanOrEqualTo:
		if (HealthPercent <= ThresholdToCheck) return true;
		break;
		
	case EArchDecoratorOperationType::IsEqualTo:
		if (HealthPercent == ThresholdToCheck) return true;
		break;
		
	case EArchDecoratorOperationType::IsGreaterOrEqualTo:
		if (HealthPercent >= ThresholdToCheck) return true;
		break;
		
	case EArchDecoratorOperationType::IsGreaterThan:
		if (HealthPercent > ThresholdToCheck) return true;
		break;	
	}

	return false;
}
