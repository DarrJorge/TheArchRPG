// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/ArchGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UArchAbilitySystemComponent;
class UCombatComponentBase;
enum class EArchSuccessType : uint8;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
struct FHitResult;
#ifdef ARCH_ArchGameplayAbility_generated_h
#error "ArchGameplayAbility.generated.h already included, missing '#pragma once' in ArchGameplayAbility.h"
#endif
#define ARCH_ArchGameplayAbility_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyEffectSpecHandleToHitResults); \
	DECLARE_FUNCTION(execBP_ApplyEffectSpecHandleToTarget); \
	DECLARE_FUNCTION(execGetArchAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetCombatComponentBaseFromActorInfo);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchGameplayAbility(); \
	friend struct Z_Construct_UClass_UArchGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UArchGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arch"), NO_API) \
	DECLARE_SERIALIZER(UArchGameplayAbility)


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchGameplayAbility(UArchGameplayAbility&&); \
	NO_API UArchGameplayAbility(const UArchGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchGameplayAbility) \
	NO_API virtual ~UArchGameplayAbility();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_20_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_INCLASS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class UArchGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h


#define FOREACH_ENUM_EARCHABILITYACTIVATIONPOLICY(op) \
	op(EArchAbilityActivationPolicy::OnTriggered) \
	op(EArchAbilityActivationPolicy::OnGiven) 

enum class EArchAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EArchAbilityActivationPolicy> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EArchAbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
