// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AArchEnemyCharacter;
class UAbilityTask_WaitSpawnAllies;
class UGameplayAbility;
struct FGameplayTag;
#ifdef ARCH_AbilityTask_WaitSpawnAllies_generated_h
#error "AbilityTask_WaitSpawnAllies.generated.h already included, missing '#pragma once' in AbilityTask_WaitSpawnAllies.h"
#endif
#define ARCH_AbilityTask_WaitSpawnAllies_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_12_DELEGATE \
ARCH_API void FWaitSpawnAlliesDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitSpawnAlliesDelegate, TArray<AArchEnemyCharacter*> const& SpawnedAllies);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitSpawnAllies);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitSpawnAllies(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitSpawnAllies, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arch"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitSpawnAllies)


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitSpawnAllies(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitSpawnAllies(UAbilityTask_WaitSpawnAllies&&); \
	NO_API UAbilityTask_WaitSpawnAllies(const UAbilityTask_WaitSpawnAllies&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitSpawnAllies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitSpawnAllies); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitSpawnAllies) \
	NO_API virtual ~UAbilityTask_WaitSpawnAllies();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_14_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_INCLASS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class UAbilityTask_WaitSpawnAllies>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
