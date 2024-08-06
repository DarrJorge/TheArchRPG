// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "ArchTypes/ArchStructTypes.h"
#include "DataAsset_HeroStartUpData.generated.h"


UCLASS()
class ARCH_API UDataAsset_HeroStartUpData : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UArchAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1) override;

private:
	UPROPERTY(EditDefaultsOnly, Category="Arch|StartUpData", meta=(TitleProperty="InputTag"))
	TArray<FArchHeroAbilitySet> HeroStartUpAbilitySets;
	
};
