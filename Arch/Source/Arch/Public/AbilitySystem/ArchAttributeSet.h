// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "ArchAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

class IPawnUIInterface;

UCLASS()
class ARCH_API UArchAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UArchAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Health, Category="Vital Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxHealth, Category="Vital Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Mana, Category="Vital Attributes")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, Mana);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxMana, Category="Vital Attributes")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, MaxMana);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Rage, Category="Vital Attributes")
	FGameplayAttributeData Rage;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, Rage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxRage, Category="Vital Attributes")
	FGameplayAttributeData MaxRage;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, MaxRage);

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;
	
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldMana) const;
	
	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const;
	
	UFUNCTION()
	void OnRep_Rage(const FGameplayAttributeData& OldRage) const;

	UFUNCTION()
	void OnRep_MaxRage(const FGameplayAttributeData& OldMaxRage) const;


	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PhysicalAttackPower, Category="Secondary Attributes")
	FGameplayAttributeData PhysicalAttackPower;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, PhysicalAttackPower);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DefensePower, Category="Secondary Attributes")
	FGameplayAttributeData DefensePower;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, DefensePower);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DamageTaken, Category="Secondary Attributes")
	FGameplayAttributeData DamageTaken;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, DamageTaken);
	

	UFUNCTION()
	void OnRep_PhysicalAttackPower(const FGameplayAttributeData& OldPhysicalAttackPower) const;

	UFUNCTION()
	void OnRep_DefensePower(const FGameplayAttributeData& OldDefensePower) const;

	UFUNCTION()
	void OnRep_DamageTaken(const FGameplayAttributeData& OldDamageTaken) const;

private:
	TWeakInterfacePtr<IPawnUIInterface> CachedPawnUIInterface;
	
};
