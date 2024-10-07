// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArchTypes/ArchEnumTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCH_ArchEnumTypes_generated_h
#error "ArchEnumTypes.generated.h already included, missing '#pragma once' in ArchEnumTypes.h"
#endif
#define ARCH_ArchEnumTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h


#define FOREACH_ENUM_EARCHCONFIRMTYPE(op) \
	op(EArchConfirmType::Yes) \
	op(EArchConfirmType::No) 

enum class EArchConfirmType : uint8;
template<> struct TIsUEnumClass<EArchConfirmType> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EArchConfirmType>();

#define FOREACH_ENUM_EARCHVALIDTYPE(op) \
	op(EArchValidType::Valid) \
	op(EArchValidType::Invalid) 

enum class EArchValidType : uint8;
template<> struct TIsUEnumClass<EArchValidType> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EArchValidType>();

#define FOREACH_ENUM_EARCHSUCCESSTYPE(op) \
	op(EArchSuccessType::Successful) \
	op(EArchSuccessType::Failed) 

enum class EArchSuccessType : uint8;
template<> struct TIsUEnumClass<EArchSuccessType> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EArchSuccessType>();

#define FOREACH_ENUM_EARCHDECORATOROPERATIONTYPE(op) \
	op(EArchDecoratorOperationType::IsLessThan) \
	op(EArchDecoratorOperationType::IsLessThanOrEqualTo) \
	op(EArchDecoratorOperationType::IsEqualTo) \
	op(EArchDecoratorOperationType::IsGreaterOrEqualTo) \
	op(EArchDecoratorOperationType::IsGreaterThan) 

enum class EArchDecoratorOperationType : uint8;
template<> struct TIsUEnumClass<EArchDecoratorOperationType> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EArchDecoratorOperationType>();

#define FOREACH_ENUM_EARCHCOUNTDOWNACTIONINPUT(op) \
	op(EArchCountdownActionInput::Start) \
	op(EArchCountdownActionInput::Cancel) 

enum class EArchCountdownActionInput : uint8;
template<> struct TIsUEnumClass<EArchCountdownActionInput> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EArchCountdownActionInput>();

#define FOREACH_ENUM_EARCHCOUNTDOWNACTIONOUTPUT(op) \
	op(EArchCountdownActionOutput::Updated) \
	op(EArchCountdownActionOutput::Completed) \
	op(EArchCountdownActionOutput::Cancelled) 

enum class EArchCountdownActionOutput : uint8;
template<> struct TIsUEnumClass<EArchCountdownActionOutput> { enum { Value = true }; };
template<> ARCH_API UEnum* StaticEnum<EArchCountdownActionOutput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
