// DarrJorge All Rights Reserved.


#include "AbilitySystem/Abilities/ArchTargetLockAbility.h"

#include "ArchFunctionLibrary.h"
#include "ArchGameplayTags.h"
#include "EnhancedInputSubsystems.h"
#include "Characters/ArchHeroCharacter.h"
#include "Debug/ArchDebugHelper.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "UI/Widgets/ArchUserWidget.h"
#include "Player/ArchPlayerController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Blueprint/WidgetTree.h"
#include "Components/SizeBox.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UArchTargetLockAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                             const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	TryLockOnTarget();
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UArchTargetLockAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	ResetTargetLockMovement();
	ResetTargetLockMappingContext();
	CleanUp();
	
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UArchTargetLockAbility::OnTargetLockTick(float DeltaTime)
{
	const bool bTargetIsDead = UArchFunctionLibrary::NativeActorHasTag(CurrentTargetActor, ArchGameplayTags::Shared_Status_Dead);
	const bool bHeroIsDead = UArchFunctionLibrary::NativeActorHasTag(GetHeroCharacterFromActorInfo(), ArchGameplayTags::Shared_Status_Dead);
	
	if (!CurrentTargetActor || bTargetIsDead || bHeroIsDead)
	{
		CancelTargetLockAbility();
		return;
	}
	
	SetTargetLockWidgetPosition();

	const bool bHeroIsRolling = UArchFunctionLibrary::NativeActorHasTag(GetHeroCharacterFromActorInfo(), ArchGameplayTags::Player_Status_Rolling);
	const bool bHeroIsBlocking = UArchFunctionLibrary::NativeActorHasTag(GetHeroCharacterFromActorInfo(), ArchGameplayTags::Player_Status_Blocking);

	if (!bHeroIsRolling && !bHeroIsBlocking) // override rotation
	{
		FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(
			GetHeroCharacterFromActorInfo()->GetActorLocation(),
			CurrentTargetActor->GetActorLocation());

		// add offset for camera
		TargetRotation -= FRotator(CameraPitchOffsetDistance, 0.f, 0.f);

		const FRotator CurrentRotation = GetHeroControllerFromActorInfo()->GetControlRotation();
		const FRotator FinalRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, TargetLockRotationSpeed);
		
		GetHeroControllerFromActorInfo()->SetControlRotation(FRotator(FinalRotation.Pitch, FinalRotation.Yaw, 0.f));
		GetHeroCharacterFromActorInfo()->SetActorRotation(FRotator(0.f, FinalRotation.Yaw, 0.f));
	}
}

void UArchTargetLockAbility::SwitchTarget(const FGameplayTag& SwitchDirectionTag)
{
	GetAvailableActorsToLock();

	TArray<AActor*> ActorsOnLeft;
	TArray<AActor*> ActorsOnRight;
	GetAvailableActorsAroundTarget(ActorsOnLeft, ActorsOnRight);

	AActor* NewTargetToLock = nullptr;
	
	if (!ActorsOnLeft.IsEmpty() && SwitchDirectionTag.MatchesTag(ArchGameplayTags::Event_Combat_SwitchTarget_Left))
	{
		NewTargetToLock = GetNearestTargetFromAvailableActors(ActorsOnLeft);
	}
	else if (!ActorsOnRight.IsEmpty() && SwitchDirectionTag.MatchesTag(ArchGameplayTags::Event_Combat_SwitchTarget_Right))
	{
		NewTargetToLock = GetNearestTargetFromAvailableActors(ActorsOnRight);
	}

	if (NewTargetToLock)
	{
		CurrentTargetActor = NewTargetToLock;
	}
}

void UArchTargetLockAbility::TryLockOnTarget()
{
	GetAvailableActorsToLock();

	if (AvailableActorsToLock.IsEmpty())
	{
		CancelTargetLockAbility();
		return;
	}

	InitTargetLockMovement();
	InitTargetLockMappingContext();

	CurrentTargetActor = GetNearestTargetFromAvailableActors(AvailableActorsToLock);
	if (CurrentTargetActor)
	{
		DrawTargetLockWidget();
	}
	else
	{
		CancelTargetLockAbility();
	}
}

void UArchTargetLockAbility::GetAvailableActorsToLock()
{
	AvailableActorsToLock.Empty();
	
	TArray<FHitResult> BoxTraceHits;
	
	UArchFunctionLibrary::GetActorsFromTraceMultiBox(
		GetHeroCharacterFromActorInfo(),
		GetHeroCharacterFromActorInfo()->GetActorLocation(),
		GetHeroCharacterFromActorInfo()->GetActorLocation() + GetHeroCharacterFromActorInfo()->GetActorForwardVector() * TraceDistance,
		TraceBoxSize,
		GetHeroCharacterFromActorInfo()->GetActorForwardVector().ToOrientationRotator(),
		BoxTraceChannels,
		false,
		TArray<AActor*>(),
		bShowPersistentDebugShape ? EDrawDebugTrace::Persistent : EDrawDebugTrace::None,
		GetHeroCharacterFromActorInfo(),
		AvailableActorsToLock
	);
}

void UArchTargetLockAbility::CancelTargetLockAbility()
{
	CancelAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), true);
}

void UArchTargetLockAbility::CleanUp()
{
	AvailableActorsToLock.Empty();
	CurrentTargetActor = nullptr;
	
	if (TargetLockWidget)
	{
		TargetLockWidget->RemoveFromParent();
		TargetLockWidget = nullptr;
	}
	
	TargetLockWidgetSize = FVector2D::ZeroVector;
	CachedDefaultMaxWalkSpeed = 0.f;
}

AActor* UArchTargetLockAbility::GetNearestTargetFromAvailableActors(const TArray<AActor*>& InAvailableActors)
{
	float NearestDistance = 0.f;
	return UGameplayStatics::FindNearestActor(GetHeroCharacterFromActorInfo()->GetActorLocation(),
		InAvailableActors,
		NearestDistance);
}

void UArchTargetLockAbility::DrawTargetLockWidget()
{
	if (TargetLockWidget) return;
	
	checkf(TargetLockWidgetClass, TEXT("Forgot to assign a valid widget class in Blueprint."));

	TargetLockWidget = CreateWidget<UArchUserWidget>(GetHeroControllerFromActorInfo(), TargetLockWidgetClass);

	if (TargetLockWidget)
	{
		TargetLockWidget->AddToViewport();
	}
	SetTargetLockWidgetPosition();
}

void UArchTargetLockAbility::SetTargetLockWidgetPosition()
{
	if (!TargetLockWidget || !CurrentTargetActor)
	{
		CancelTargetLockAbility();
		return;
	}

	FVector2D ScreenPosition;

	UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(
		GetHeroControllerFromActorInfo(),
		CurrentTargetActor->GetActorLocation(),
		ScreenPosition,
		true);

	if (TargetLockWidgetSize == FVector2D::ZeroVector)
	{
		TargetLockWidget->WidgetTree->ForEachWidget(
			[this](UWidget* FoundWidget)
			{
				if (const auto FoundSizeBox = Cast<USizeBox>(FoundWidget))
				{
					TargetLockWidgetSize.X = FoundSizeBox->GetWidthOverride();
					TargetLockWidgetSize.Y = FoundSizeBox->GetHeightOverride();
				}
			});		
	}

	ScreenPosition -= (TargetLockWidgetSize / 2.f);
	TargetLockWidget->SetPositionInViewport(ScreenPosition, false);
}

void UArchTargetLockAbility::InitTargetLockMovement()
{
	CachedDefaultMaxWalkSpeed = GetHeroCharacterFromActorInfo()->GetCharacterMovement()->MaxWalkSpeed;
	GetHeroCharacterFromActorInfo()->GetCharacterMovement()->MaxWalkSpeed = TargetLockMaxWalkSpeed;
}

void UArchTargetLockAbility::ResetTargetLockMovement()
{
	if (CachedDefaultMaxWalkSpeed > 0.f)
	{
		GetHeroCharacterFromActorInfo()->GetCharacterMovement()->MaxWalkSpeed = CachedDefaultMaxWalkSpeed;
	}
}

void UArchTargetLockAbility::InitTargetLockMappingContext()
{
	const auto LocalPlayer = GetHeroControllerFromActorInfo()->GetLocalPlayer();
	auto SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);

	check(SubSystem);

	SubSystem->AddMappingContext(TargetLockMappingContext, 3);
}

void UArchTargetLockAbility::ResetTargetLockMappingContext()
{
	if (!GetHeroControllerFromActorInfo()) return;
	const auto LocalPlayer = GetHeroControllerFromActorInfo()->GetLocalPlayer();
	auto SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);

	check(SubSystem);

	SubSystem->RemoveMappingContext(TargetLockMappingContext);
}

void UArchTargetLockAbility::GetAvailableActorsAroundTarget(TArray<AActor*>& OutActorsOnLeft,
	TArray<AActor*>& OutActorsOnRight)
{
	if (!CurrentTargetActor || AvailableActorsToLock.IsEmpty())
	{
		CancelTargetLockAbility();
		return;
	}

	const FVector PlayerLocation = GetHeroCharacterFromActorInfo()->GetActorLocation();
	const FVector PlayerToCurrentNormalized = (CurrentTargetActor->GetActorLocation() - PlayerLocation).GetSafeNormal();

	for (AActor* AvailableActor : AvailableActorsToLock)
	{
		if (!AvailableActor || AvailableActor == CurrentTargetActor) continue;

		const FVector PlayerToAvailableNormalized = (AvailableActor->GetActorLocation() - PlayerLocation).GetSafeNormal();
		const FVector CrossResult = FVector::CrossProduct(PlayerToCurrentNormalized, PlayerToAvailableNormalized);

		if (CrossResult.Z > 0.f)
		{
			OutActorsOnRight.AddUnique(AvailableActor);
		}
		else
		{
			OutActorsOnLeft.AddUnique(AvailableActor);
		}
	}
}
