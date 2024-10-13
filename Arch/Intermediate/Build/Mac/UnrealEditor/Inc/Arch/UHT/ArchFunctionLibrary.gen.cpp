// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/ArchFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchFunctionLibrary() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchFunctionLibrary();
	ARCH_API UClass* Z_Construct_UClass_UArchFunctionLibrary_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UCombatComponentBase_NoRegister();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchConfirmType();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchCountdownActionInput();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchCountdownActionOutput();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchValidType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchFunctionLibrary::execCountDown)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TotalTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateInterval);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRemainingTime);
		P_GET_ENUM(EArchCountdownActionInput,Z_Param_CountDownInput);
		P_GET_ENUM_REF(EArchCountdownActionOutput,Z_Param_Out_CountDownOutput);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::CountDown(Z_Param_WorldContextObject,Z_Param_TotalTime,Z_Param_UpdateInterval,Z_Param_Out_OutRemainingTime,EArchCountdownActionInput(Z_Param_CountDownInput),(EArchCountdownActionOutput&)(Z_Param_Out_CountDownOutput),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execApplyGameplayEffectSpecHandleToTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_InInstigator);
		P_GET_OBJECT(AActor,Z_Param_InTargetActor);
		P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_InSpecHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UArchFunctionLibrary::ApplyGameplayEffectSpecHandleToTarget(Z_Param_InInstigator,Z_Param_InTargetActor,Z_Param_Out_InSpecHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execGetActorsFromTraceMultiBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfSize);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutAvailableActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::GetActorsFromTraceMultiBox(Z_Param_WorldContextObject,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_HalfSize,Z_Param_Out_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_SelfActor,Z_Param_Out_OutAvailableActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execIsValidBlock)
	{
		P_GET_OBJECT(AActor,Z_Param_Attacker);
		P_GET_OBJECT(AActor,Z_Param_Victim);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UArchFunctionLibrary::IsValidBlock(Z_Param_Attacker,Z_Param_Victim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execComputeHitReactDirectionTag)
	{
		P_GET_OBJECT(AActor,Z_Param_Attacker);
		P_GET_OBJECT(AActor,Z_Param_Victim);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngleDifference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UArchFunctionLibrary::ComputeHitReactDirectionTag(Z_Param_Attacker,Z_Param_Victim,Z_Param_Out_OutAngleDifference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execGetRollingLocation)
	{
		P_GET_OBJECT(AActor,Z_Param_SourceActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UArchFunctionLibrary::GetRollingLocation(Z_Param_SourceActor,Z_Param_Out_Direction,Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execGetScalableFloatValueAtLevel)
	{
		P_GET_STRUCT_REF(FScalableFloat,Z_Param_Out_InScalableFloat);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UArchFunctionLibrary::GetScalableFloatValueAtLevel(Z_Param_Out_InScalableFloat,Z_Param_InLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execIsTargetPawnHostile)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_GET_OBJECT(APawn,Z_Param_TargetPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UArchFunctionLibrary::IsTargetPawnHostile(Z_Param_InstigatorPawn,Z_Param_TargetPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execBP_GetPawnCombatComponentFromActorInfo)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_ENUM_REF(EArchValidType,Z_Param_Out_OutValidType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCombatComponentBase**)Z_Param__Result=UArchFunctionLibrary::BP_GetPawnCombatComponentFromActorInfo(Z_Param_InActor,(EArchValidType&)(Z_Param_Out_OutValidType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execBP_DoesActorHaveTag)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_GET_ENUM_REF(EArchConfirmType,Z_Param_Out_OutConfirmType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::BP_DoesActorHaveTag(Z_Param_InActor,Z_Param_TagToCheck,(EArchConfirmType&)(Z_Param_Out_OutConfirmType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execRemoveGameplayTagsFromActorIfFound)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_TagsToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::RemoveGameplayTagsFromActorIfFound(Z_Param_InActor,Z_Param_Out_TagsToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execRemoveGameplayTagFromActorIfFound)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::RemoveGameplayTagFromActorIfFound(Z_Param_InActor,Z_Param_TagToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execAddGameplayTagToActorIfNone)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::AddGameplayTagToActorIfNone(Z_Param_InActor,Z_Param_TagToAdd);
		P_NATIVE_END;
	}
	void UArchFunctionLibrary::StaticRegisterNativesUArchFunctionLibrary()
	{
		UClass* Class = UArchFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayTagToActorIfNone", &UArchFunctionLibrary::execAddGameplayTagToActorIfNone },
			{ "ApplyGameplayEffectSpecHandleToTarget", &UArchFunctionLibrary::execApplyGameplayEffectSpecHandleToTarget },
			{ "BP_DoesActorHaveTag", &UArchFunctionLibrary::execBP_DoesActorHaveTag },
			{ "BP_GetPawnCombatComponentFromActorInfo", &UArchFunctionLibrary::execBP_GetPawnCombatComponentFromActorInfo },
			{ "ComputeHitReactDirectionTag", &UArchFunctionLibrary::execComputeHitReactDirectionTag },
			{ "CountDown", &UArchFunctionLibrary::execCountDown },
			{ "GetActorsFromTraceMultiBox", &UArchFunctionLibrary::execGetActorsFromTraceMultiBox },
			{ "GetRollingLocation", &UArchFunctionLibrary::execGetRollingLocation },
			{ "GetScalableFloatValueAtLevel", &UArchFunctionLibrary::execGetScalableFloatValueAtLevel },
			{ "IsTargetPawnHostile", &UArchFunctionLibrary::execIsTargetPawnHostile },
			{ "IsValidBlock", &UArchFunctionLibrary::execIsValidBlock },
			{ "RemoveGameplayTagFromActorIfFound", &UArchFunctionLibrary::execRemoveGameplayTagFromActorIfFound },
			{ "RemoveGameplayTagsFromActorIfFound", &UArchFunctionLibrary::execRemoveGameplayTagsFromActorIfFound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics
	{
		struct ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms
		{
			AActor* InActor;
			FGameplayTag TagToAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "AddGameplayTagToActorIfNone", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics
	{
		struct ArchFunctionLibrary_eventApplyGameplayEffectSpecHandleToTarget_Parms
		{
			AActor* InInstigator;
			AActor* InTargetActor;
			FGameplayEffectSpecHandle InSpecHandle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInstigator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InInstigator = { "InInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventApplyGameplayEffectSpecHandleToTarget_Parms, InInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InTargetActor = { "InTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventApplyGameplayEffectSpecHandleToTarget_Parms, InTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle = { "InSpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventApplyGameplayEffectSpecHandleToTarget_Parms, InSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle_MetaData) }; // 2882128022
	void Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArchFunctionLibrary_eventApplyGameplayEffectSpecHandleToTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchFunctionLibrary_eventApplyGameplayEffectSpecHandleToTarget_Parms), &Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InInstigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InTargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "ApplyGameplayEffectSpecHandleToTarget", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::ArchFunctionLibrary_eventApplyGameplayEffectSpecHandleToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::ArchFunctionLibrary_eventApplyGameplayEffectSpecHandleToTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics
	{
		struct ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms
		{
			AActor* InActor;
			FGameplayTag TagToCheck;
			EArchConfirmType OutConfirmType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutConfirmType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutConfirmType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType = { "OutConfirmType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms, OutConfirmType), Z_Construct_UEnum_Arch_EArchConfirmType, METADATA_PARAMS(0, nullptr) }; // 2389398289
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "DisplayName", "Does Actor Have Tag" },
		{ "ExpandEnumAsExecs", "OutConfirmType" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "BP_DoesActorHaveTag", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics
	{
		struct ArchFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms
		{
			AActor* InActor;
			EArchValidType OutValidType;
			UCombatComponentBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutValidType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutValidType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_OutValidType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_OutValidType = { "OutValidType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms, OutValidType), Z_Construct_UEnum_Arch_EArchValidType, METADATA_PARAMS(0, nullptr) }; // 2743403886
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UCombatComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_OutValidType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_OutValidType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "DisplayName", "Get Pawn Combat Component From Actor" },
		{ "ExpandEnumAsExecs", "OutValidType" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "BP_GetPawnCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::ArchFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::ArchFunctionLibrary_eventBP_GetPawnCombatComponentFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics
	{
		struct ArchFunctionLibrary_eventComputeHitReactDirectionTag_Parms
		{
			AActor* Attacker;
			AActor* Victim;
			float OutAngleDifference;
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngleDifference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventComputeHitReactDirectionTag_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventComputeHitReactDirectionTag_Parms, Victim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_OutAngleDifference = { "OutAngleDifference", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventComputeHitReactDirectionTag_Parms, OutAngleDifference), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventComputeHitReactDirectionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_Attacker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_Victim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_OutAngleDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "ComputeHitReactDirectionTag", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::ArchFunctionLibrary_eventComputeHitReactDirectionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::ArchFunctionLibrary_eventComputeHitReactDirectionTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics
	{
		struct ArchFunctionLibrary_eventCountDown_Parms
		{
			const UObject* WorldContextObject;
			float TotalTime;
			float UpdateInterval;
			float OutRemainingTime;
			EArchCountdownActionInput CountDownInput;
			EArchCountdownActionOutput CountDownOutput;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRemainingTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CountDownInput_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CountDownInput;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CountDownOutput_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountDownOutput_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CountDownOutput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventCountDown_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventCountDown_Parms, TotalTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventCountDown_Parms, UpdateInterval), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_OutRemainingTime = { "OutRemainingTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventCountDown_Parms, OutRemainingTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownInput = { "CountDownInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventCountDown_Parms, CountDownInput), Z_Construct_UEnum_Arch_EArchCountdownActionInput, METADATA_PARAMS(0, nullptr) }; // 59850139
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput_MetaData[] = {
		{ "DisplayName", "Out" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput = { "CountDownOutput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventCountDown_Parms, CountDownOutput), Z_Construct_UEnum_Arch_EArchCountdownActionOutput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput_MetaData) }; // 3259838962
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventCountDown_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_TotalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_UpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_OutRemainingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownInput_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_CountDownOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ExpandEnumAsExecs", "CountDownInput|CountDownOutput" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
		{ "TotalTime", "1.0" },
		{ "UpdateInterval", "0.1" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "CountDown", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::ArchFunctionLibrary_eventCountDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::ArchFunctionLibrary_eventCountDown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_CountDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_CountDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics
	{
		struct ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms
		{
			const UObject* WorldContextObject;
			FVector Start;
			FVector End;
			FVector HalfSize;
			FRotator Orientation;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			const AActor* SelfActor;
			TArray<AActor*> OutAvailableActors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HalfSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAvailableActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAvailableActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_End_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_HalfSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_HalfSize = { "HalfSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, HalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_HalfSize_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_HalfSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Orientation_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Orientation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ObjectTypes_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ObjectTypes_MetaData) }; // 3930035403
	void Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms), &Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ActorsToIgnore_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ActorsToIgnore_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 739760662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_SelfActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_SelfActor_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_SelfActor_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_OutAvailableActors_Inner = { "OutAvailableActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_OutAvailableActors = { "OutAvailableActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms, OutAvailableActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_HalfSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_OutAvailableActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::NewProp_OutAvailableActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "GetActorsFromTraceMultiBox", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::ArchFunctionLibrary_eventGetActorsFromTraceMultiBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics
	{
		struct ArchFunctionLibrary_eventGetRollingLocation_Parms
		{
			AActor* SourceActor;
			FVector Direction;
			float Distance;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetRollingLocation_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetRollingLocation_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetRollingLocation_Parms, Distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetRollingLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "GetRollingLocation", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::ArchFunctionLibrary_eventGetRollingLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::ArchFunctionLibrary_eventGetRollingLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics
	{
		struct ArchFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms
		{
			FScalableFloat InScalableFloat;
			float InLevel;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InScalableFloat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InScalableFloat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat = { "InScalableFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, InScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat_MetaData) }; // 4070660376
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InScalableFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_InLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "CompactNodeTitle", "Get Value At Level" },
		{ "CPP_Default_InLevel", "1.000000" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "GetScalableFloatValueAtLevel", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::ArchFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::ArchFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics
	{
		struct ArchFunctionLibrary_eventIsTargetPawnHostile_Parms
		{
			APawn* InstigatorPawn;
			APawn* TargetPawn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventIsTargetPawnHostile_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventIsTargetPawnHostile_Parms, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArchFunctionLibrary_eventIsTargetPawnHostile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchFunctionLibrary_eventIsTargetPawnHostile_Parms), &Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_InstigatorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "IsTargetPawnHostile", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::ArchFunctionLibrary_eventIsTargetPawnHostile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::ArchFunctionLibrary_eventIsTargetPawnHostile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics
	{
		struct ArchFunctionLibrary_eventIsValidBlock_Parms
		{
			AActor* Attacker;
			AActor* Victim;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventIsValidBlock_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventIsValidBlock_Parms, Victim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArchFunctionLibrary_eventIsValidBlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchFunctionLibrary_eventIsValidBlock_Parms), &Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::NewProp_Attacker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::NewProp_Victim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "IsValidBlock", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::ArchFunctionLibrary_eventIsValidBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::ArchFunctionLibrary_eventIsValidBlock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics
	{
		struct ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms
		{
			AActor* InActor;
			FGameplayTag TagToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "RemoveGameplayTagFromActorIfFound", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics
	{
		struct ArchFunctionLibrary_eventRemoveGameplayTagsFromActorIfFound_Parms
		{
			AActor* InActor;
			TArray<FGameplayTag> TagsToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToRemove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagsToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventRemoveGameplayTagsFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_TagsToRemove_Inner = { "TagsToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_TagsToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_TagsToRemove = { "TagsToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventRemoveGameplayTagsFromActorIfFound_Parms, TagsToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_TagsToRemove_MetaData), Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_TagsToRemove_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_TagsToRemove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::NewProp_TagsToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "RemoveGameplayTagsFromActorIfFound", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::ArchFunctionLibrary_eventRemoveGameplayTagsFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::ArchFunctionLibrary_eventRemoveGameplayTagsFromActorIfFound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchFunctionLibrary);
	UClass* Z_Construct_UClass_UArchFunctionLibrary_NoRegister()
	{
		return UArchFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UArchFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone, "AddGameplayTagToActorIfNone" }, // 2167640235
		{ &Z_Construct_UFunction_UArchFunctionLibrary_ApplyGameplayEffectSpecHandleToTarget, "ApplyGameplayEffectSpecHandleToTarget" }, // 33853188
		{ &Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag, "BP_DoesActorHaveTag" }, // 3648760990
		{ &Z_Construct_UFunction_UArchFunctionLibrary_BP_GetPawnCombatComponentFromActorInfo, "BP_GetPawnCombatComponentFromActorInfo" }, // 2941388908
		{ &Z_Construct_UFunction_UArchFunctionLibrary_ComputeHitReactDirectionTag, "ComputeHitReactDirectionTag" }, // 3594461624
		{ &Z_Construct_UFunction_UArchFunctionLibrary_CountDown, "CountDown" }, // 4127116964
		{ &Z_Construct_UFunction_UArchFunctionLibrary_GetActorsFromTraceMultiBox, "GetActorsFromTraceMultiBox" }, // 4101237975
		{ &Z_Construct_UFunction_UArchFunctionLibrary_GetRollingLocation, "GetRollingLocation" }, // 3215945004
		{ &Z_Construct_UFunction_UArchFunctionLibrary_GetScalableFloatValueAtLevel, "GetScalableFloatValueAtLevel" }, // 3692080335
		{ &Z_Construct_UFunction_UArchFunctionLibrary_IsTargetPawnHostile, "IsTargetPawnHostile" }, // 2736353021
		{ &Z_Construct_UFunction_UArchFunctionLibrary_IsValidBlock, "IsValidBlock" }, // 2341234815
		{ &Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound, "RemoveGameplayTagFromActorIfFound" }, // 436120141
		{ &Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagsFromActorIfFound, "RemoveGameplayTagsFromActorIfFound" }, // 3003612425
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchFunctionLibrary_Statics::ClassParams = {
		&UArchFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UArchFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchFunctionLibrary.OuterSingleton, Z_Construct_UClass_UArchFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchFunctionLibrary.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchFunctionLibrary>()
	{
		return UArchFunctionLibrary::StaticClass();
	}
	UArchFunctionLibrary::UArchFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchFunctionLibrary);
	UArchFunctionLibrary::~UArchFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchFunctionLibrary, UArchFunctionLibrary::StaticClass, TEXT("UArchFunctionLibrary"), &Z_Registration_Info_UClass_UArchFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchFunctionLibrary), 4214779758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_122624229(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
