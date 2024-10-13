// DarrJorge All Rights Reserved.


#include "Items/PickUps/ArchForceStoneBase.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"

void AArchForceStoneBase::ConsumePickUpItem(UArchAbilitySystemComponent* AbilitySystemComponent, int32 ApplyLevel)
{
	check(StoneGameplayEffectClass);

	auto* EffectCDO = StoneGameplayEffectClass->GetDefaultObject<UGameplayEffect>();
	AbilitySystemComponent->ApplyGameplayEffectToSelf(EffectCDO, ApplyLevel, AbilitySystemComponent->MakeEffectContext());

	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, PickUpFX, GetActorLocation());
	UGameplayStatics::PlaySoundAtLocation(this, PickUpSound, AbilitySystemComponent->GetAvatarActor()->GetActorLocation());

	Destroy();
}
