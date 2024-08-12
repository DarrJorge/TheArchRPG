// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/ArchAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ARCH_ArchAttributeSet_generated_h
#error "ArchAttributeSet.generated.h already included, missing '#pragma once' in ArchAttributeSet.h"
#endif
#define ARCH_ArchAttributeSet_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_DamageTaken); \
	DECLARE_FUNCTION(execOnRep_DefensePower); \
	DECLARE_FUNCTION(execOnRep_PhysicalAttackPower); \
	DECLARE_FUNCTION(execOnRep_MaxRage); \
	DECLARE_FUNCTION(execOnRep_Rage); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchAttributeSet(); \
	friend struct Z_Construct_UClass_UArchAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UArchAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arch"), NO_API) \
	DECLARE_SERIALIZER(UArchAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Rage, \
		MaxRage, \
		PhysicalAttackPower, \
		DefensePower, \
		DamageTaken, \
		NETFIELD_REP_END=DamageTaken	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UArchAttributeSet) \
public:


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchAttributeSet(UArchAttributeSet&&); \
	NO_API UArchAttributeSet(const UArchAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UArchAttributeSet) \
	NO_API virtual ~UArchAttributeSet();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_16_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_INCLASS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class UArchAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
