// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UI/ArchHeroUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstance;
class UTexture2D;
struct FGameplayTag;
#ifdef ARCH_ArchHeroUIComponent_generated_h
#error "ArchHeroUIComponent.generated.h already included, missing '#pragma once' in ArchHeroUIComponent.h"
#endif
#define ARCH_ArchHeroUIComponent_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_10_DELEGATE \
ARCH_API void FOnEquippedWeaponChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChanged, const TSoftObjectPtr<UTexture2D>& WeaponIcon);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_11_DELEGATE \
ARCH_API void FOnAbilityIconSlotUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityIconSlotUpdated, FGameplayTag AbilityInputTag, const TSoftObjectPtr<UMaterialInstance>& AbilityIconMaterial);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_12_DELEGATE \
ARCH_API void FOnAbilityCooldownBegin_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownBegin, FGameplayTag AbilityInputTag, float TotalCooldownTime, float RemainingCooldownTime);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_13_DELEGATE \
ARCH_API void FOnPickUpItemInteracted_DelegateWrapper(const FMulticastScriptDelegate& OnPickUpItemInteracted, bool bShouldDisplayInputKeyWidget, const FText& InputKeyText);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchHeroUIComponent(); \
	friend struct Z_Construct_UClass_UArchHeroUIComponent_Statics; \
public: \
	DECLARE_CLASS(UArchHeroUIComponent, UArchUIComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arch"), NO_API) \
	DECLARE_SERIALIZER(UArchHeroUIComponent)


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchHeroUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchHeroUIComponent(UArchHeroUIComponent&&); \
	NO_API UArchHeroUIComponent(const UArchHeroUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchHeroUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchHeroUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchHeroUIComponent) \
	NO_API virtual ~UArchHeroUIComponent();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_15_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class UArchHeroUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
