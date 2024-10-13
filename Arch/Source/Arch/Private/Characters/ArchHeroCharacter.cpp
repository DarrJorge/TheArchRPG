// DarrJorge All Rights Reserved.


#include "Characters/ArchHeroCharacter.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "ArchGameplayTags.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAssets/Input/DataAsset_InputConfig.h"
#include "Components/Input/ArchInputComponent.h"
#include "InputActionValue.h"
#include "AbilitySystem/ArchAbilitySystemComponent.h"
#include "DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "Components/Combat/HeroCombatComponent.h"
#include "Components/UI/ArchHeroUIComponent.h"


AArchHeroCharacter::AArchHeroCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 200.f;
	CameraBoom->SocketOffset = FVector(0.f, 55.f, 65.f);
	CameraBoom->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>("FollowCamera");
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 400.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	HeroCombatComponent = CreateDefaultSubobject<UHeroCombatComponent>("HeroCombatComponent");
	HeroUIComponent = CreateDefaultSubobject<UArchHeroUIComponent>("HeroUIComponent");
}

void AArchHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AArchHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	checkf(InputConfigDataAsset, TEXT("Forgot to assign a valid data asset as input config."));

	if (UEnhancedInputLocalPlayerSubsystem* SubSystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetController<APlayerController>()->GetLocalPlayer()))
	{
		SubSystem->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

		if (UArchInputComponent* ArchInputComponent = Cast<UArchInputComponent>(PlayerInputComponent))
		{
			ArchInputComponent->BindNativeInputAction(InputConfigDataAsset, ArchGameplayTags::InputTag_Move,
				ETriggerEvent::Triggered, this, &AArchHeroCharacter::InputMove);

			ArchInputComponent->BindNativeInputAction(InputConfigDataAsset, ArchGameplayTags::InputTag_Look,
				ETriggerEvent::Triggered, this, &AArchHeroCharacter::InputLook);

			ArchInputComponent->BindAbilityInputAction(InputConfigDataAsset, this,
				&AArchHeroCharacter::InputAbilityInputPressed, &AArchHeroCharacter::InputAbilityInputReleased);

			ArchInputComponent->BindNativeInputAction(InputConfigDataAsset, ArchGameplayTags::InputTag_SwitchTarget,
				ETriggerEvent::Triggered, this, &AArchHeroCharacter::InputSwitchTargetTriggered);

			ArchInputComponent->BindNativeInputAction(InputConfigDataAsset, ArchGameplayTags::InputTag_SwitchTarget,
				ETriggerEvent::Completed, this, &AArchHeroCharacter::InputSwitchTargetCompleted);

			ArchInputComponent->BindNativeInputAction(InputConfigDataAsset, ArchGameplayTags::InputTag_PickUp,
				ETriggerEvent::Started, this, &AArchHeroCharacter::InputPickupStarted);
		}
	}
}

void AArchHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (!CharacterStartUpData.IsNull())
	{
		if (UDataAsset_StartUpDataBase* LoadedStartUpData = CharacterStartUpData.LoadSynchronous())
		{
			LoadedStartUpData->GiveToAbilitySystemComponent(ArchAbilitySystemComponent);
		}
	}
}

UCombatComponentBase* AArchHeroCharacter::GetPawnCombatComponent() const
{
	return HeroCombatComponent;
}

UArchUIComponentBase* AArchHeroCharacter::GetUIComponentBase() const
{
	return HeroUIComponent;
}

void AArchHeroCharacter::InputMove(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();
	const FRotator MovementRotation = FRotator(0.f, Controller->GetControlRotation().Yaw, 0.f);

	if (MovementVector.Y != 0.f)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardDirection, MovementVector.Y);
	}

	if (MovementVector.X != 0.f)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AArchHeroCharacter::InputLook(const FInputActionValue& Value)
{
	const FVector2D LookVector = Value.Get<FVector2D>();

	if (LookVector.X != 0) AddControllerYawInput(LookVector.X);
	if (LookVector.Y != 0) AddControllerPitchInput(LookVector.Y);
}

void AArchHeroCharacter::InputAbilityInputPressed(FGameplayTag InInputTag)
{
	ArchAbilitySystemComponent->OnAbilityInputPressed(InInputTag);
}

void AArchHeroCharacter::InputAbilityInputReleased(FGameplayTag InInputTag)
{
	ArchAbilitySystemComponent->OnAbilityInputReleased(InInputTag);
}

void AArchHeroCharacter::InputSwitchTargetTriggered(const FInputActionValue& Value)
{
	SwitchDirection = Value.Get<FVector2D>();
}

void AArchHeroCharacter::InputSwitchTargetCompleted(const FInputActionValue& Value)
{
	const FGameplayTag EventTag = SwitchDirection.X > 0.f
		? ArchGameplayTags::Event_Combat_SwitchTarget_Right
		: ArchGameplayTags::Event_Combat_SwitchTarget_Left;
	
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(this, EventTag, FGameplayEventData());
}

void AArchHeroCharacter::InputPickupStarted(const FInputActionValue& Value)
{
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		this,
		ArchGameplayTags::Player_Event_ConsumeItems,
		FGameplayEventData());
}
