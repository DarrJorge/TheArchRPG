// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Combat/CombatComponentBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AArchWeaponBase;
enum class EToggleDamageType : uint8;
struct FGameplayTag;
#ifdef ARCH_CombatComponentBase_generated_h
#error "CombatComponentBase.generated.h already included, missing '#pragma once' in CombatComponentBase.h"
#endif
#define ARCH_CombatComponentBase_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentEquippedWeaponDamageAtLevel); \
	DECLARE_FUNCTION(execToggleWeaponCollision); \
	DECLARE_FUNCTION(execGetCharacterCurrentEquippedWeapon); \
	DECLARE_FUNCTION(execGetCharacterCarriedWeaponByTag); \
	DECLARE_FUNCTION(execRegisterWeapon);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponentBase(); \
	friend struct Z_Construct_UClass_UCombatComponentBase_Statics; \
public: \
	DECLARE_CLASS(UCombatComponentBase, UPawnExtensionComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arch"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponentBase)


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponentBase(UCombatComponentBase&&); \
	NO_API UCombatComponentBase(const UCombatComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComponentBase) \
	NO_API virtual ~UCombatComponentBase();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_20_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class UCombatComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h


#define FOREACH_ENUM_ETOGGLEDAMAGETYPE(op) \
	op(EToggleDamageType::EquippedWeapon) \
	op(EToggleDamageType::LeftHand) \
	op(EToggleDamageType::RightHand) 

enum class EToggleDamageType : uint8;
template<> struct TIsUEnumClass<EToggleDamageType> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EToggleDamageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
