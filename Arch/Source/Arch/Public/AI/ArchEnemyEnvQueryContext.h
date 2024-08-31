// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "ArchEnemyEnvQueryContext.generated.h"


UCLASS()
class ARCH_API UArchEnemyEnvQueryContext : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	virtual void ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	FName TargetActorKeyName = "TargetActor";
	
};
