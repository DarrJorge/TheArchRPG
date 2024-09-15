// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/Abilities/ArchTargetLockAbility.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchTargetLockAbility() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchHeroGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchTargetLockAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchTargetLockAbility_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchTargetLockAbility::execSwitchTarget)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SwitchDirectionTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchTarget(Z_Param_Out_SwitchDirectionTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchTargetLockAbility::execOnTargetLockTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetLockTick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UArchTargetLockAbility::StaticRegisterNativesUArchTargetLockAbility()
	{
		UClass* Class = UArchTargetLockAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetLockTick", &UArchTargetLockAbility::execOnTargetLockTick },
			{ "SwitchTarget", &UArchTargetLockAbility::execSwitchTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics
	{
		struct ArchTargetLockAbility_eventOnTargetLockTick_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchTargetLockAbility_eventOnTargetLockTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchTargetLockAbility, nullptr, "OnTargetLockTick", nullptr, nullptr, Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::ArchTargetLockAbility_eventOnTargetLockTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::ArchTargetLockAbility_eventOnTargetLockTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics
	{
		struct ArchTargetLockAbility_eventSwitchTarget_Parms
		{
			FGameplayTag SwitchDirectionTag;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchDirectionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchDirectionTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::NewProp_SwitchDirectionTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::NewProp_SwitchDirectionTag = { "SwitchDirectionTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchTargetLockAbility_eventSwitchTarget_Parms, SwitchDirectionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::NewProp_SwitchDirectionTag_MetaData), Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::NewProp_SwitchDirectionTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::NewProp_SwitchDirectionTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchTargetLockAbility, nullptr, "SwitchTarget", nullptr, nullptr, Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::ArchTargetLockAbility_eventSwitchTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::ArchTargetLockAbility_eventSwitchTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchTargetLockAbility);
	UClass* Z_Construct_UClass_UArchTargetLockAbility_NoRegister()
	{
		return UArchTargetLockAbility::StaticClass();
	}
	struct Z_Construct_UClass_UArchTargetLockAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceBoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceBoxSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoxTraceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxTraceChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPersistentDebugShape_MetaData[];
#endif
		static void NewProp_bShowPersistentDebugShape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPersistentDebugShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetLockWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLockRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockMaxWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLockMaxWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPitchOffsetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPitchOffsetDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLockMappingContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableActorsToLock_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableActorsToLock_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableActorsToLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLockWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockWidgetSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLockWidgetSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDefaultMaxWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedDefaultMaxWalkSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchTargetLockAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchHeroGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchTargetLockAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchTargetLockAbility_OnTargetLockTick, "OnTargetLockTick" }, // 2426263415
		{ &Z_Construct_UFunction_UArchTargetLockAbility_SwitchTarget, "SwitchTarget" }, // 1374757643
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ArchTargetLockAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceDistance_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceBoxSize_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceBoxSize = { "TraceBoxSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, TraceBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceBoxSize_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceBoxSize_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_BoxTraceChannels_Inner = { "BoxTraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_BoxTraceChannels_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_BoxTraceChannels = { "BoxTraceChannels", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, BoxTraceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_BoxTraceChannels_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_BoxTraceChannels_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_bShowPersistentDebugShape_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	void Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_bShowPersistentDebugShape_SetBit(void* Obj)
	{
		((UArchTargetLockAbility*)Obj)->bShowPersistentDebugShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_bShowPersistentDebugShape = { "bShowPersistentDebugShape", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchTargetLockAbility), &Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_bShowPersistentDebugShape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_bShowPersistentDebugShape_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_bShowPersistentDebugShape_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetClass_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetClass = { "TargetLockWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, TargetLockWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UArchUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetClass_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockRotationSpeed_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockRotationSpeed = { "TargetLockRotationSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, TargetLockRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockRotationSpeed_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockRotationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMaxWalkSpeed_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMaxWalkSpeed = { "TargetLockMaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, TargetLockMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMaxWalkSpeed_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMaxWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CameraPitchOffsetDistance_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CameraPitchOffsetDistance = { "CameraPitchOffsetDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, CameraPitchOffsetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CameraPitchOffsetDistance_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CameraPitchOffsetDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMappingContext_MetaData[] = {
		{ "Category", "TargetLock" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMappingContext = { "TargetLockMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, TargetLockMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMappingContext_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMappingContext_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_AvailableActorsToLock_Inner = { "AvailableActorsToLock", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_AvailableActorsToLock_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_AvailableActorsToLock = { "AvailableActorsToLock", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, AvailableActorsToLock), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_AvailableActorsToLock_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_AvailableActorsToLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CurrentTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CurrentTargetActor = { "CurrentTargetActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, CurrentTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CurrentTargetActor_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CurrentTargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidget = { "TargetLockWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, TargetLockWidget), Z_Construct_UClass_UArchUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidget_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetSize = { "TargetLockWidgetSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, TargetLockWidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetSize_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CachedDefaultMaxWalkSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchTargetLockAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CachedDefaultMaxWalkSpeed = { "CachedDefaultMaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchTargetLockAbility, CachedDefaultMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CachedDefaultMaxWalkSpeed_MetaData), Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CachedDefaultMaxWalkSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchTargetLockAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TraceBoxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_BoxTraceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_BoxTraceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_bShowPersistentDebugShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMaxWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CameraPitchOffsetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_AvailableActorsToLock_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_AvailableActorsToLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CurrentTargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_TargetLockWidgetSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchTargetLockAbility_Statics::NewProp_CachedDefaultMaxWalkSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchTargetLockAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchTargetLockAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchTargetLockAbility_Statics::ClassParams = {
		&UArchTargetLockAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchTargetLockAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchTargetLockAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchTargetLockAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchTargetLockAbility()
	{
		if (!Z_Registration_Info_UClass_UArchTargetLockAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchTargetLockAbility.OuterSingleton, Z_Construct_UClass_UArchTargetLockAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchTargetLockAbility.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchTargetLockAbility>()
	{
		return UArchTargetLockAbility::StaticClass();
	}
	UArchTargetLockAbility::UArchTargetLockAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchTargetLockAbility);
	UArchTargetLockAbility::~UArchTargetLockAbility() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchTargetLockAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchTargetLockAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchTargetLockAbility, UArchTargetLockAbility::StaticClass, TEXT("UArchTargetLockAbility"), &Z_Registration_Info_UClass_UArchTargetLockAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchTargetLockAbility), 3568577716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchTargetLockAbility_h_3000110657(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchTargetLockAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchTargetLockAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
