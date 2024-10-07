// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameFramework/Actor.h"
#include "ArchProjectileBase.generated.h"

struct FGameplayEventData;
class UNiagaraSystem;
class UBoxComponent;
class UNiagaraComponent;
class UProjectileMovementComponent;

UENUM(BlueprintType)
enum class EProjectileDamagePolicy : uint8
{
	OnHit,
	OnBeginOverlap
};


UCLASS()
class ARCH_API AArchProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AArchProjectileBase();

protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category="Projectile")
	UBoxComponent* ProjectileCollisionBox;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category="Projectile")
	UNiagaraComponent* ProjectileVFX;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category="Projectile")
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Projectile")
	EProjectileDamagePolicy ProjectileDamagePolicy = EProjectileDamagePolicy::OnHit;

	UPROPERTY(BlueprintReadOnly, Category="Projectile", meta=(ExposeOnSpawn="true"))
	FGameplayEffectSpecHandle ProjectileDamageEffectSpecHandle;
	
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	virtual void OnProjectileBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintImplementableEvent)
	void OnSpawnProjectileHitFX(const FVector& HitLocation);

private:
	TArray<AActor*> OverlappedActors;
	
	void ApplyProjectileDamage(APawn* HitPawn, const FGameplayEventData& InPayload);
	
};
