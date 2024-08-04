// DarrJorge All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "GameplayTagContainer.h"
#include "DataAssets/Input/DataAsset_InputConfig.h"
#include "ArchInputComponent.generated.h"


UCLASS()
class ARCH_API UArchInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	template<class UserObject, typename CallbackFunc>
	void BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig, const FGameplayTag& InInputTag, ETriggerEvent TriggerEvent,
		UserObject* ContextObject, CallbackFunc Func);

	template<class UserObject, typename CallbackFunc>
	void BindAbilityInputAction(const UDataAsset_InputConfig* InInputConfig, UserObject* ContextObject,
		CallbackFunc InputPressedFunc, CallbackFunc InputReleasedFunc);
	
};

template <class UserObject, typename CallbackFunc>
void UArchInputComponent::BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig,
	const FGameplayTag& InInputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallbackFunc Func)
{
	checkf(InInputConfig, TEXT("Input config data asset is null, can't proceed with binding."));

	if (UInputAction* FoundAction = InInputConfig->FindNativeInputActionByTag(InInputTag))
	{
		BindAction(FoundAction, TriggerEvent, ContextObject, Func);
	}
}

template <class UserObject, typename CallbackFunc>
void UArchInputComponent::BindAbilityInputAction(const UDataAsset_InputConfig* InInputConfig, UserObject* ContextObject,
	CallbackFunc InputPressedFunc, CallbackFunc InputReleasedFunc)
{
	checkf(InInputConfig, TEXT("Input config data asset is null, can't proceed with binding."));

	for (const FArchInputActionConfig& AbilityInputAction : InInputConfig->AbilityInputActions)
	{
		if (!AbilityInputAction.IsValid()) continue;

		BindAction(AbilityInputAction.InputAction, ETriggerEvent::Started, ContextObject, InputPressedFunc, AbilityInputAction.InputTag);
		BindAction(AbilityInputAction.InputAction, ETriggerEvent::Completed, ContextObject, InputReleasedFunc, AbilityInputAction.InputTag);
	}
}
