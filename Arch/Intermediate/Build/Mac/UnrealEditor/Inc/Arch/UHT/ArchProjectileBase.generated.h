// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Projectiles/ArchProjectileBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ARCH_ArchProjectileBase_generated_h
#error "ArchProjectileBase.generated.h already included, missing '#pragma once' in ArchProjectileBase.h"
#endif
#define ARCH_ArchProjectileBase_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileBeginOverlap); \
	DECLARE_FUNCTION(execOnProjectileHit);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_CALLBACK_WRAPPERS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArchProjectileBase(); \
	friend struct Z_Construct_UClass_AArchProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AArchProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arch"), NO_API) \
	DECLARE_SERIALIZER(AArchProjectileBase)


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArchProjectileBase(AArchProjectileBase&&); \
	NO_API AArchProjectileBase(const AArchProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArchProjectileBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArchProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArchProjectileBase) \
	NO_API virtual ~AArchProjectileBase();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_24_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_CALLBACK_WRAPPERS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class AArchProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h


#define FOREACH_ENUM_EPROJECTILEDAMAGEPOLICY(op) \
	op(EProjectileDamagePolicy::OnHit) \
	op(EProjectileDamagePolicy::OnBeginOverlap) 

enum class EProjectileDamagePolicy : uint8;
template<> struct TIsUEnumClass<EProjectileDamagePolicy> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EProjectileDamagePolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
