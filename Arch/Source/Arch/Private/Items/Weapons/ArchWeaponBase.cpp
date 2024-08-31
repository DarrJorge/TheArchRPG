// DarrJorge All Rights Reserved.


#include "Items/Weapons/ArchWeaponBase.h"

#include "ArchFunctionLibrary.h"
#include "Components/BoxComponent.h"

#include "Debug/ArchDebugHelper.h"

AArchWeaponBase::AArchWeaponBase() : Super()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("WeaponMesh");
	SetRootComponent(WeaponMesh);

	WeaponCollisionBox = CreateDefaultSubobject<UBoxComponent>("WeaponCollision");
	WeaponCollisionBox->SetupAttachment(GetRootComponent());
	WeaponCollisionBox->SetBoxExtent(FVector(20.f));
	WeaponCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	WeaponCollisionBox->OnComponentBeginOverlap.AddUniqueDynamic(this, &AArchWeaponBase::OnCollisionBoxBeginOverlap);
	WeaponCollisionBox->OnComponentEndOverlap.AddUniqueDynamic(this, &AArchWeaponBase::OnCollisionBoxEndOverlap);
}

void AArchWeaponBase::OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	const auto OwnerPawn = GetInstigator<APawn>();
	checkf(OwnerPawn, TEXT("Forgot to assign an instigator as the owning pawn for the weapon: %s"), *GetName());
	const auto TargetPawn = Cast<APawn>(OtherActor);
	if (!TargetPawn) return;

	if (UArchFunctionLibrary::IsTargetPawnHostile(OwnerPawn, TargetPawn))
	{
		OnWeaponHitTarget.ExecuteIfBound(OtherActor);
	}
}

void AArchWeaponBase::OnCollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	const auto OwnerPawn = GetInstigator<APawn>();
	checkf(OwnerPawn, TEXT("Forgot to assign an instigator as the owning pawn for the weapon: %s"), *GetName());
	const auto TargetPawn = Cast<APawn>(OtherActor);
	if (!TargetPawn) return;

	if (UArchFunctionLibrary::IsTargetPawnHostile(OwnerPawn, TargetPawn))
	{
		//OnWeaponHitTarget.ExecuteIfBound(OtherActor);
		OnWeaponPulledFromTarget.ExecuteIfBound(OtherActor);
	}
}

void AArchWeaponBase::SetWeaponCollision(bool bShouldEnable) const
{
	WeaponCollisionBox->SetCollisionEnabled(bShouldEnable
		? ECollisionEnabled::QueryOnly
		: ECollisionEnabled::NoCollision);
}

