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

	UPROPERTY(BlueprintReadOnly, Category="Vital Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly, Category="Vital Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadOnly, Category="Secondary Attributes")
	FGameplayAttributeData Rage;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, Rage);

	UPROPERTY(BlueprintReadOnly, Category="Secondary Attributes")
	FGameplayAttributeData MaxRage;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, MaxRage);

	UPROPERTY(BlueprintReadOnly, Category="Secondary Attributes")
	FGameplayAttributeData PhysicalAttackPower;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, PhysicalAttackPower);

	UPROPERTY(BlueprintReadOnly, Category="Secondary Attributes")
	FGameplayAttributeData DefensePower;
	ATTRIBUTE_ACCESSORS(UArchAttributeSet, DefensePower);
	
};
