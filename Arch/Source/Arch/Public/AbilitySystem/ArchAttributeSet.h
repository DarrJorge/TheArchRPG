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

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;
	
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Rage, Category="Secondary Attributes")
	FGameplayAttributeData Rage;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, Rage);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxRage, Category="Secondary Attributes")
	FGameplayAttributeData MaxRage;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, MaxRage);

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
	void OnRep_Rage(const FGameplayAttributeData& OldRage) const;

	UFUNCTION()
	void OnRep_MaxRage(const FGameplayAttributeData& OldMaxRage) const;

	UFUNCTION()
	void OnRep_PhysicalAttackPower(const FGameplayAttributeData& OldPhysicalAttackPower) const;

	UFUNCTION()
	void OnRep_DefensePower(const FGameplayAttributeData& OldDefensePower) const;

	UFUNCTION()
	void OnRep_DamageTaken(const FGameplayAttributeData& OldDamageTaken) const;
	
};
