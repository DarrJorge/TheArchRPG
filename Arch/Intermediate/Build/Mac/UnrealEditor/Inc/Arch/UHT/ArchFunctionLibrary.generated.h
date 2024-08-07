// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArchFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EArchConfirmType : uint8;
struct FGameplayTag;
#ifdef ARCH_ArchFunctionLibrary_generated_h
#error "ArchFunctionLibrary.generated.h already included, missing '#pragma once' in ArchFunctionLibrary.h"
#endif
#define ARCH_ArchFunctionLibrary_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_DoesActorHaveTag); \
	DECLARE_FUNCTION(execRemoveGameplayTagFromActorIfFound); \
	DECLARE_FUNCTION(execAddGameplayTagToActorIfNone);


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchFunctionLibrary(); \
	friend struct Z_Construct_UClass_UArchFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UArchFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Arch"), NO_API) \
	DECLARE_SERIALIZER(UArchFunctionLibrary)


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchFunctionLibrary(UArchFunctionLibrary&&); \
	NO_API UArchFunctionLibrary(const UArchFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchFunctionLibrary) \
	NO_API virtual ~UArchFunctionLibrary();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_19_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class UArchFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h


#define FOREACH_ENUM_EARCHCONFIRMTYPE(op) \
	op(EArchConfirmType::Yes) \
	op(EArchConfirmType::No) 

enum class EArchConfirmType : uint8;
template<> struct TIsUEnumClass<EArchConfirmType> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EArchConfirmType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
