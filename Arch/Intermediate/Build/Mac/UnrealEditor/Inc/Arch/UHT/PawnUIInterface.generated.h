// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/PawnUIInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCH_PawnUIInterface_generated_h
#error "PawnUIInterface.generated.h already included, missing '#pragma once' in PawnUIInterface.h"
#endif
#define ARCH_PawnUIInterface_generated_h

#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_SPARSE_DATA
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_ACCESSORS
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCH_API UPawnUIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCH_API UPawnUIInterface(UPawnUIInterface&&); \
	ARCH_API UPawnUIInterface(const UPawnUIInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCH_API, UPawnUIInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnUIInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnUIInterface) \
	ARCH_API virtual ~UPawnUIInterface();


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPawnUIInterface(); \
	friend struct Z_Construct_UClass_UPawnUIInterface_Statics; \
public: \
	DECLARE_CLASS(UPawnUIInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Arch"), ARCH_API) \
	DECLARE_SERIALIZER(UPawnUIInterface)


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPawnUIInterface() {} \
public: \
	typedef UPawnUIInterface UClassType; \
	typedef IPawnUIInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_12_PROLOG
#define FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_SPARSE_DATA \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_ACCESSORS \
	FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCH_API UClass* StaticClass<class UPawnUIInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
