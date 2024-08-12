// DarrJorge All Rights Reserved.


#include "AbilitySystem/ExecCalc/ExecCalc_DamageTaken.h"
#include "ArchGameplayTags.h"
#include "AbilitySystem/ArchAttributeSet.h"

#include "Debug/ArchDebugHelper.h"

struct FArchDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(PhysicalAttackPower)
	DECLARE_ATTRIBUTE_CAPTUREDEF(DefensePower)
	DECLARE_ATTRIBUTE_CAPTUREDEF(DamageTaken)

	FArchDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UArchAttributeSet, PhysicalAttackPower, Source, false)
		DEFINE_ATTRIBUTE_CAPTUREDEF(UArchAttributeSet, DefensePower, Target, false)
		DEFINE_ATTRIBUTE_CAPTUREDEF(UArchAttributeSet, DamageTaken, Target, false)
	}
};

static const FArchDamageCapture& GetArchDamageCapture()
{
	static FArchDamageCapture ArchDamageCapture;
	return ArchDamageCapture;
}

UExecCalc_DamageTaken::UExecCalc_DamageTaken()
{
	/* Slow way of doing capture
	FProperty* AttackPowerProp = FindFieldChecked<FProperty>(
		UArchAttributeSet::StaticClass(),
		GET_MEMBER_NAME_CHECKED(UArchAttributeSet, PhysicalAttackPower));

	FGameplayEffectAttributeCaptureDefinition AttackPowerCapDef(
		AttackPowerProp,
		EGameplayEffectAttributeCaptureSource::Source,
		false);

	RelevantAttributesToCapture.Add(AttackPowerCapDef); */
	
	RelevantAttributesToCapture.Add(GetArchDamageCapture().PhysicalAttackPowerDef);
	RelevantAttributesToCapture.Add(GetArchDamageCapture().DefensePowerDef);
	RelevantAttributesToCapture.Add(GetArchDamageCapture().DamageTakenDef);
}

void UExecCalc_DamageTaken::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
	FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	const FGameplayEffectSpec& EffectSpec = ExecutionParams.GetOwningSpec();
	
	FAggregatorEvaluateParameters EvaluateParams;
	EvaluateParams.SourceTags = EffectSpec.CapturedSourceTags.GetAggregatedTags();
	EvaluateParams.TargetTags = EffectSpec.CapturedTargetTags.GetAggregatedTags();

	float SourcePhysAttackPower = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(
		GetArchDamageCapture().PhysicalAttackPowerDef,
		EvaluateParams,
		SourcePhysAttackPower
		);

	float BaseDamage = 0.f;
	int32 UsedLightAttackComboCount = 0;
	int32 UsedHeavyAttackComboCount = 0;
	
	for (const TPair<FGameplayTag, float>& TagMagnitude : EffectSpec.SetByCallerTagMagnitudes)
	{
		if (TagMagnitude.Key.MatchesTagExact(ArchGameplayTags::Shared_SetByCaller_BaseDamage))
		{
			BaseDamage = TagMagnitude.Value;
		}

		if (TagMagnitude.Key.MatchesTagExact(ArchGameplayTags::Player_SetByCaller_AttackType_Light))
		{
			UsedLightAttackComboCount = TagMagnitude.Value;
		}

		if (TagMagnitude.Key.MatchesTagExact(ArchGameplayTags::Player_SetByCaller_AttackType_Heavy))
		{
			UsedHeavyAttackComboCount = TagMagnitude.Value;
		}	
	}

	float TargetDefensePower = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(
		GetArchDamageCapture().DefensePowerDef,
		EvaluateParams,
		TargetDefensePower
		);

	if (UsedLightAttackComboCount > 0)
	{
		const float DamageIncreasePercentLight = (UsedLightAttackComboCount - 1) * 0.05f + 1.f;
		BaseDamage *= DamageIncreasePercentLight;
	}

	if (UsedHeavyAttackComboCount > 0)
	{
		const float DamageIncreasePercentHeavy = UsedHeavyAttackComboCount * 0.15f + 1.f;
		BaseDamage *= DamageIncreasePercentHeavy;
	}

	const float FinalDamageDone = BaseDamage * SourcePhysAttackPower / TargetDefensePower;
	//Debug::Print(TEXT("FinalDamageDone"), FinalDamageDone, FColor::Blue, 5.f);
	if (FinalDamageDone > 0.0f)
	{
		const FGameplayModifierEvaluatedData EvaluatedData(GetArchDamageCapture().DamageTakenProperty,
			EGameplayModOp::Override, FinalDamageDone);
		
		OutExecutionOutput.AddOutputModifier(EvaluatedData);
	}
}
