// DarrJorge All Rights Reserved.


#include "Items/Projectiles/ArchProjectileBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "ArchFunctionLibrary.h"
#include "ArchGameplayTags.h"
#include "Components/BoxComponent.h"
#include "NiagaraComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

AArchProjectileBase::AArchProjectileBase():Super()
{
	PrimaryActorTick.bCanEverTick = false;

	ProjectileCollisionBox = CreateDefaultSubobject<UBoxComponent>("ProjectileCollisionBox");
	SetRootComponent(ProjectileCollisionBox);
	ProjectileCollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ProjectileCollisionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
	ProjectileCollisionBox->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	ProjectileCollisionBox->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);

	ProjectileVFX = CreateDefaultSubobject<UNiagaraComponent>("ProjectileNiagaraComponent");
	ProjectileVFX->SetupAttachment(GetRootComponent());

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovementComponent->InitialSpeed = 700.f;
	ProjectileMovementComponent->MaxSpeed = 900.f;
	ProjectileMovementComponent->Velocity = FVector(1.0, 0.f, 0.f);
	ProjectileMovementComponent->ProjectileGravityScale = 0.f;

	InitialLifeSpan = 4.f;
}

void AArchProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	if (ProjectileCollisionBox)
	{
		ProjectileCollisionBox->OnComponentHit.AddUniqueDynamic(this, &AArchProjectileBase::OnProjectileHit);
		ProjectileCollisionBox->OnComponentBeginOverlap.AddUniqueDynamic(this, &AArchProjectileBase::OnProjectileBeginOverlap);

		if (ProjectileDamagePolicy == EProjectileDamagePolicy::OnBeginOverlap)
		{
			ProjectileCollisionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
		}
	}
}

void AArchProjectileBase::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	OnSpawnProjectileHitFX(Hit.ImpactPoint);
	
	APawn* HitPawn = Cast<APawn>(OtherActor);
	if (!HitPawn || !UArchFunctionLibrary::IsTargetPawnHostile(GetInstigator(), HitPawn))
	{
		Destroy();
		return;
	}

	bool bIsValidBlock = false;
	bool bIsBlocking = UArchFunctionLibrary::NativeActorHasTag(HitPawn, ArchGameplayTags::Player_Status_Blocking);

	if (bIsBlocking)
	{
		bIsValidBlock = UArchFunctionLibrary::IsValidBlock(this, HitPawn);
	}

	FGameplayEventData PayloadData;
	PayloadData.Instigator = this;
	PayloadData.Target = HitPawn;

	if (bIsValidBlock)
	{
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			HitPawn,
			ArchGameplayTags::Event_Combat_SuccessfulBlock,
			PayloadData);
	}
	else
	{
		ApplyProjectileDamage(HitPawn, PayloadData);
	}
	Destroy();
}

void AArchProjectileBase::OnProjectileBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedActors.Contains(OtherActor)) return;

	OverlappedActors.AddUnique(OtherActor);

	if (APawn* HitPawn = Cast<APawn>(OtherActor))
	{
		if (UArchFunctionLibrary::IsTargetPawnHostile(GetInstigator(), HitPawn))
		{
			FGameplayEventData PayloadData;
			PayloadData.Instigator = GetInstigator();
			PayloadData.Target = HitPawn;
			
			ApplyProjectileDamage(HitPawn, PayloadData);
		}
	}
	
}

void AArchProjectileBase::ApplyProjectileDamage(APawn* HitPawn, const FGameplayEventData& InPayload)
{
	checkf(ProjectileDamageEffectSpecHandle.IsValid(),
		TEXT("Forgot to assign a valid spec handle to projectile: %s"), *GetActorNameOrLabel());

	const bool bWasApplied = UArchFunctionLibrary::ApplyGameplayEffectSpecHandleToTarget(GetInstigator(),
		HitPawn, ProjectileDamageEffectSpecHandle);

	if (bWasApplied)
	{
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			HitPawn,
			ArchGameplayTags::Event_Effect_HitReact,
			InPayload);
	}
}

