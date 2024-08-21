// DarrJorge All Rights Reserved.


#include "Characters/ArchEnemyCharacter.h"

#include "Components/WidgetComponent.h"
#include "Components/Combat/EnemyCombatComponent.h"
#include "Components/UI/ArchEnemyUIComponent.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/AssetManager.h"
#include "UI/Widgets/EnemyUIWidget.h"

AArchEnemyCharacter::AArchEnemyCharacter()
{
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 180.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 300.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 1000.f;

	EnemyCombatComponent = CreateDefaultSubobject<UEnemyCombatComponent>("EnemyCombatComponent");
	EnemyUIComponent = CreateDefaultSubobject<UArchEnemyUIComponent>("EnemyUIComponent");
	
	HealthWidgetComponent = CreateDefaultSubobject<UWidgetComponent>("HealthWidgetComponent");
	HealthWidgetComponent->SetupAttachment(GetMesh());
}

void AArchEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (UEnemyUIWidget* HealthWidget = Cast<UEnemyUIWidget>(HealthWidgetComponent->GetUserWidgetObject()))
	{
		HealthWidget->InitEnemyCreatedWidget(this);
	}
}

void AArchEnemyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitStartUpData();
}

void AArchEnemyCharacter::InitStartUpData()
{
	if (CharacterStartUpData.IsNull()) return;

	UAssetManager::GetStreamableManager().RequestAsyncLoad(
		CharacterStartUpData.ToSoftObjectPath(),
		FStreamableDelegate::CreateLambda(
			[this]()
			{
				if (UDataAsset_StartUpDataBase* AsyncLoadedData = CharacterStartUpData.Get())
				{
					AsyncLoadedData->GiveToAbilitySystemComponent(ArchAbilitySystemComponent);
				}
			})
	);
}

UCombatComponentBase* AArchEnemyCharacter::GetPawnCombatComponent() const
{
	return EnemyCombatComponent;
}

UArchUIComponentBase* AArchEnemyCharacter::GetUIComponentBase() const
{
	return EnemyUIComponent;
}
