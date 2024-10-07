// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Components/UI/ArchHeroUIComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchHeroUIComponent() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchHeroUIComponent();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroUIComponent_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchUIComponentBase();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics
	{
		struct _Script_Arch_eventOnEquippedWeaponChanged_Parms
		{
			TSoftObjectPtr<UTexture2D> WeaponIcon;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::NewProp_WeaponIcon = { "WeaponIcon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnEquippedWeaponChanged_Parms, WeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::NewProp_WeaponIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arch, nullptr, "OnEquippedWeaponChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::_Script_Arch_eventOnEquippedWeaponChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::_Script_Arch_eventOnEquippedWeaponChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEquippedWeaponChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChanged, const TSoftObjectPtr<UTexture2D>& WeaponIcon)
{
	struct _Script_Arch_eventOnEquippedWeaponChanged_Parms
	{
		TSoftObjectPtr<UTexture2D> WeaponIcon;
	};
	_Script_Arch_eventOnEquippedWeaponChanged_Parms Parms;
	Parms.WeaponIcon=WeaponIcon;
	OnEquippedWeaponChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics
	{
		struct _Script_Arch_eventOnAbilityIconSlotUpdated_Parms
		{
			FGameplayTag AbilityInputTag;
			TSoftObjectPtr<UMaterialInstance> AbilityIconMaterial;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputTag;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AbilityIconMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::NewProp_AbilityInputTag = { "AbilityInputTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnAbilityIconSlotUpdated_Parms, AbilityInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::NewProp_AbilityIconMaterial = { "AbilityIconMaterial", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnAbilityIconSlotUpdated_Parms, AbilityIconMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::NewProp_AbilityInputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::NewProp_AbilityIconMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arch, nullptr, "OnAbilityIconSlotUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::_Script_Arch_eventOnAbilityIconSlotUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::_Script_Arch_eventOnAbilityIconSlotUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAbilityIconSlotUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityIconSlotUpdated, FGameplayTag AbilityInputTag, const TSoftObjectPtr<UMaterialInstance>& AbilityIconMaterial)
{
	struct _Script_Arch_eventOnAbilityIconSlotUpdated_Parms
	{
		FGameplayTag AbilityInputTag;
		TSoftObjectPtr<UMaterialInstance> AbilityIconMaterial;
	};
	_Script_Arch_eventOnAbilityIconSlotUpdated_Parms Parms;
	Parms.AbilityInputTag=AbilityInputTag;
	Parms.AbilityIconMaterial=AbilityIconMaterial;
	OnAbilityIconSlotUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics
	{
		struct _Script_Arch_eventOnAbilityCooldownBegin_Parms
		{
			FGameplayTag AbilityInputTag;
			float TotalCooldownTime;
			float RemainingCooldownTime;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalCooldownTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingCooldownTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::NewProp_AbilityInputTag = { "AbilityInputTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnAbilityCooldownBegin_Parms, AbilityInputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::NewProp_TotalCooldownTime = { "TotalCooldownTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnAbilityCooldownBegin_Parms, TotalCooldownTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::NewProp_RemainingCooldownTime = { "RemainingCooldownTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnAbilityCooldownBegin_Parms, RemainingCooldownTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::NewProp_AbilityInputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::NewProp_TotalCooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::NewProp_RemainingCooldownTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arch, nullptr, "OnAbilityCooldownBegin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::_Script_Arch_eventOnAbilityCooldownBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::_Script_Arch_eventOnAbilityCooldownBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAbilityCooldownBegin_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownBegin, FGameplayTag AbilityInputTag, float TotalCooldownTime, float RemainingCooldownTime)
{
	struct _Script_Arch_eventOnAbilityCooldownBegin_Parms
	{
		FGameplayTag AbilityInputTag;
		float TotalCooldownTime;
		float RemainingCooldownTime;
	};
	_Script_Arch_eventOnAbilityCooldownBegin_Parms Parms;
	Parms.AbilityInputTag=AbilityInputTag;
	Parms.TotalCooldownTime=TotalCooldownTime;
	Parms.RemainingCooldownTime=RemainingCooldownTime;
	OnAbilityCooldownBegin.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UArchHeroUIComponent::StaticRegisterNativesUArchHeroUIComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchHeroUIComponent);
	UClass* Z_Construct_UClass_UArchHeroUIComponent_NoRegister()
	{
		return UArchHeroUIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArchHeroUIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRageChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRageChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEquippedWeaponChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquippedWeaponChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityIconSlotUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityIconSlotUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCooldownBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCooldownBegin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchHeroUIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchUIComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/UI/ArchHeroUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged = { "OnRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroUIComponent, OnRageChanged), Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged_MetaData), Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged_MetaData) }; // 2939459743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnManaChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroUIComponent, OnManaChanged), Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnManaChanged_MetaData), Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnManaChanged_MetaData) }; // 2939459743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged = { "OnEquippedWeaponChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroUIComponent, OnEquippedWeaponChanged), Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged_MetaData), Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged_MetaData) }; // 75198451
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityIconSlotUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityIconSlotUpdated = { "OnAbilityIconSlotUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroUIComponent, OnAbilityIconSlotUpdated), Z_Construct_UDelegateFunction_Arch_OnAbilityIconSlotUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityIconSlotUpdated_MetaData), Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityIconSlotUpdated_MetaData) }; // 4184995534
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityCooldownBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityCooldownBegin = { "OnAbilityCooldownBegin", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroUIComponent, OnAbilityCooldownBegin), Z_Construct_UDelegateFunction_Arch_OnAbilityCooldownBegin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityCooldownBegin_MetaData), Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityCooldownBegin_MetaData) }; // 1208050388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchHeroUIComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnManaChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityIconSlotUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnAbilityCooldownBegin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchHeroUIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchHeroUIComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchHeroUIComponent_Statics::ClassParams = {
		&UArchHeroUIComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchHeroUIComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchHeroUIComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchHeroUIComponent()
	{
		if (!Z_Registration_Info_UClass_UArchHeroUIComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchHeroUIComponent.OuterSingleton, Z_Construct_UClass_UArchHeroUIComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchHeroUIComponent.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchHeroUIComponent>()
	{
		return UArchHeroUIComponent::StaticClass();
	}
	UArchHeroUIComponent::UArchHeroUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchHeroUIComponent);
	UArchHeroUIComponent::~UArchHeroUIComponent() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchHeroUIComponent, UArchHeroUIComponent::StaticClass, TEXT("UArchHeroUIComponent"), &Z_Registration_Info_UClass_UArchHeroUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchHeroUIComponent), 771369604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_206584908(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
