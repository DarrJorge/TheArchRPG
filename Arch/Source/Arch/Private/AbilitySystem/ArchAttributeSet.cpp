// DarrJorge All Rights Reserved.


#include "AbilitySystem/ArchAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"
#include "ArchFunctionLibrary.h"
#include "ArchGameplayTags.h"
#include "Components/UI/ArchHeroUIComponent.h"
#include "Components/UI/ArchUIComponentBase.h"
#include "Interfaces/PawnUIInterface.h"

#include "Debug/ArchDebugHelper.h"

UArchAttributeSet::UArchAttributeSet()
{
	InitHealth(1.f);
	InitMaxHealth(1.f);
	InitRage(1.f);
	InitMaxRage(1.f);
	InitPhysicalAttackPower(1.f);
	InitDefensePower(1.f);
}

void UArchAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UArchAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UArchAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UArchAttributeSet, Rage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UArchAttributeSet, MaxRage, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UArchAttributeSet, PhysicalAttackPower, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UArchAttributeSet, DefensePower, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UArchAttributeSet, DamageTaken, COND_None, REPNOTIFY_Always);
}

void UArchAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	if (!CachedPawnUIInterface.IsValid())
	{
		CachedPawnUIInterface = TWeakInterfacePtr<IPawnUIInterface>(Data.Target.GetAvatarActor());
	}

	checkf(CachedPawnUIInterface.IsValid(), TEXT("%s didn't implement IPawnInterface"), *Data.Target.GetAvatarActor()->GetActorNameOrLabel());
	UArchUIComponentBase* BaseUIComponent = CachedPawnUIInterface->GetUIComponentBase();
	checkf(BaseUIComponent, TEXT("Couldn't extract a UIComponentBase from %s"), *Data.Target.GetAvatarActor()->GetActorNameOrLabel());
	
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		const float NewHealth = FMath::Clamp(GetHealth(), 0.f, GetMaxHealth());
		SetHealth(NewHealth);
		BaseUIComponent->OnHealthChanged.Broadcast(GetHealth()/GetMaxHealth());
	}

	if (Data.EvaluatedData.Attribute == GetRageAttribute())
	{
		const float NewRage = FMath::Clamp(GetRage(), 0.f, GetMaxRage());
		SetRage(NewRage);

		if (UArchHeroUIComponent* HeroUIComponent = Cast<UArchHeroUIComponent>(BaseUIComponent))
		{
			HeroUIComponent->OnRageChanged.Broadcast(GetRage()/GetMaxRage());
		}
	}

	if (Data.EvaluatedData.Attribute == GetDamageTakenAttribute())
	{
		const float NewHealth = FMath::Clamp(GetHealth()-GetDamageTaken(), 0.f, GetMaxHealth());
		
		SetHealth(NewHealth);
		SetDamageTaken(0.f);

		//const FString bugString = FString::Printf(TEXT("OldHealth: %f, DamageDone: %f, NewHealth: %f"),
		//	OldHealth, DamageDone, NewHealth);
		//Debug::Print(bugString);

		// notify UI about change health value
		BaseUIComponent->OnHealthChanged.Broadcast(GetHealth()/GetMaxHealth());
		
		if (GetHealth() == 0.f)
		{
			UArchFunctionLibrary::AddGameplayTagToActorIfNone(Data.Target.GetAvatarActor(),
				ArchGameplayTags::Shared_Status_Dead);
		}
	}
}

void UArchAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArchAttributeSet, Health, OldHealth)
}

void UArchAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArchAttributeSet, MaxHealth, OldMaxHealth)
}

void UArchAttributeSet::OnRep_Rage(const FGameplayAttributeData& OldRage) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArchAttributeSet, Rage, OldRage)
}

void UArchAttributeSet::OnRep_MaxRage(const FGameplayAttributeData& OldMaxRage) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArchAttributeSet, MaxRage, OldMaxRage)
}

void UArchAttributeSet::OnRep_PhysicalAttackPower(const FGameplayAttributeData& OldPhysicalAttackPower) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArchAttributeSet, PhysicalAttackPower, OldPhysicalAttackPower)
}

void UArchAttributeSet::OnRep_DefensePower(const FGameplayAttributeData& OldDefensePower) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArchAttributeSet, DefensePower, OldDefensePower)
}

void UArchAttributeSet::OnRep_DamageTaken(const FGameplayAttributeData& OldDamageTaken) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UArchAttributeSet, DamageTaken, OldDamageTaken)
}
