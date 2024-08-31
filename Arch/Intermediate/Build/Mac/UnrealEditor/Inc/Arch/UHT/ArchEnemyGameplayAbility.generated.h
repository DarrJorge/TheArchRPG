// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/ArchEnemyGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AArchEnemyCharacter;
class UEnemyCombatComponent;
class UGameplayEffect;
struct FGameplayEffectSpecHandle;
struct FScalableFloat;
#ifdef ARCH_ArchEnemyGameplayAbility_generated_h
#error "ArchEnemyGameplayAbility.generated.h already included, missing '#pragma once' in ArchEnemyGameplayAbility.h"
#endif
#define ARCH_ArchEnemyGameplayAbility_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeDamageEffectSpecHandle); \
	DECLARE_FUNCTION(execGetEnemyCombatComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetEnemyCharacterFromActorInfo);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchEnemyGameplayAbility(); \
	friend struct Z_Construct_UClass_UArchEnemyGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UArchEnemyGameplayAbility, UArchGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arch"), NO_API) \
	DECLARE_SERIALIZER(UArchEnemyGameplayAbility)


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchEnemyGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchEnemyGameplayAbility(UArchEnemyGameplayAbility&&); \
	NO_API UArchEnemyGameplayAbility(const UArchEnemyGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchEnemyGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchEnemyGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchEnemyGameplayAbility) \
	NO_API virtual ~UArchEnemyGameplayAbility();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_12_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class UArchEnemyGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
