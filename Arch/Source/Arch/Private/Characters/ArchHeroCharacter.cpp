// DarrJorge All Rights Reserved.


#include "Characters/ArchHeroCharacter.h"

#include "ArchGameplayTags.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAssets/Input/DataAsset_InputConfig.h"
#include "Components/Input/ArchInputComponent.h"
#include "InputActionValue.h"

#include "Debug/ArchDebugHelper.h"


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
		}
	}
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
