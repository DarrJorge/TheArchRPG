// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchHeroGameplayAbility.h"

#include "ArchGameplayTags.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "Characters/ArchHeroCharacter.h"
#include "Player/ArchPlayerController.h"

AArchHeroCharacter* UArchHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
	if (!CachedHeroCharacter.IsValid())
	{
		CachedHeroCharacter = Cast<AArchHeroCharacter>(CurrentActorInfo->AvatarActor);
	}
	return CachedHeroCharacter.IsValid() ? CachedHeroCharacter.Get() : nullptr;
}

AArchPlayerController* UArchHeroGameplayAbility::GetHeroControllerFromActorInfo()
{
	if (!CachedHeroController.IsValid())
	{
		CachedHeroController = Cast<AArchPlayerController>(CurrentActorInfo->PlayerController);
	}
	return CachedHeroController.IsValid() ? CachedHeroController.Get() : nullptr;
}

UHeroCombatComponent* UArchHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}

FGameplayEffectSpecHandle UArchHeroGameplayAbility::MakeDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass,
	float WeaponBaseDamage, FGameplayTag AttackTag, int32 UsedComboCount)
{
	auto EffectSpecHandle = ApplySetByCallerMagnitudeByTag(this, EffectClass, WeaponBaseDamage);

	if (AttackTag.IsValid())
	{
		EffectSpecHandle.Data->SetSetByCallerMagnitude(
			AttackTag,
			UsedComboCount);
	}
	
	return EffectSpecHandle;
}

bool UArchHeroGameplayAbility::GetAbilityRemainCooldownByTag(FGameplayTag InCooldownTag, float& TotalCooldownTime,
	float& RemainingCooldownTime)
{
	check(InCooldownTag.IsValid());

	const FGameplayEffectQuery EffectQuery = FGameplayEffectQuery::MakeQuery_MatchAnyOwningTags(InCooldownTag.GetSingleTagContainer());
	TArray<TPair<float, float>> TimesRemainingDuration = GetAbilitySystemComponentFromActorInfo()->GetActiveEffectsTimeRemainingAndDuration(EffectQuery);

	if (TimesRemainingDuration.IsEmpty()) return false;

	RemainingCooldownTime = TimesRemainingDuration[0].Key;
	TotalCooldownTime = TimesRemainingDuration[0].Value;

	return RemainingCooldownTime > 0.f;
}
