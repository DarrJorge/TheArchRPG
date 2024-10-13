// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/Abilities/ArchGameplayAbility.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchGameplayAbility() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchAbilitySystemComponent_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UCombatComponentBase_NoRegister();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchSuccessType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchAbilityActivationPolicy;
	static UEnum* EArchAbilityActivationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EArchAbilityActivationPolicy"));
		}
		return Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EArchAbilityActivationPolicy>()
	{
		return EArchAbilityActivationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enumerators[] = {
		{ "EArchAbilityActivationPolicy::OnTriggered", (int64)EArchAbilityActivationPolicy::OnTriggered },
		{ "EArchAbilityActivationPolicy::OnGiven", (int64)EArchAbilityActivationPolicy::OnGiven },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
		{ "OnGiven.Name", "EArchAbilityActivationPolicy::OnGiven" },
		{ "OnTriggered.Name", "EArchAbilityActivationPolicy::OnTriggered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EArchAbilityActivationPolicy",
		"EArchAbilityActivationPolicy",
		Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.InnerSingleton;
	}
	DEFINE_FUNCTION(UArchGameplayAbility::execApplyEffectSpecHandleToHitResults)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_SpecHandle);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_HitResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEffectSpecHandleToHitResults(Z_Param_Out_SpecHandle,Z_Param_Out_HitResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchGameplayAbility::execBP_ApplyEffectSpecHandleToTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_SpecHandle);
		P_GET_ENUM_REF(EArchSuccessType,Z_Param_Out_OutSuccessType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->BP_ApplyEffectSpecHandleToTarget(Z_Param_TargetActor,Z_Param_Out_SpecHandle,(EArchSuccessType&)(Z_Param_Out_OutSuccessType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchGameplayAbility::execGetArchAbilitySystemComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UArchAbilitySystemComponent**)Z_Param__Result=P_THIS->GetArchAbilitySystemComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchGameplayAbility::execGetCombatComponentBaseFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCombatComponentBase**)Z_Param__Result=P_THIS->GetCombatComponentBaseFromActorInfo();
		P_NATIVE_END;
	}
	void UArchGameplayAbility::StaticRegisterNativesUArchGameplayAbility()
	{
		UClass* Class = UArchGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffectSpecHandleToHitResults", &UArchGameplayAbility::execApplyEffectSpecHandleToHitResults },
			{ "BP_ApplyEffectSpecHandleToTarget", &UArchGameplayAbility::execBP_ApplyEffectSpecHandleToTarget },
			{ "GetArchAbilitySystemComponentFromActorInfo", &UArchGameplayAbility::execGetArchAbilitySystemComponentFromActorInfo },
			{ "GetCombatComponentBaseFromActorInfo", &UArchGameplayAbility::execGetCombatComponentBaseFromActorInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics
	{
		struct ArchGameplayAbility_eventApplyEffectSpecHandleToHitResults_Parms
		{
			FGameplayEffectSpecHandle SpecHandle;
			TArray<FHitResult> HitResults;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_SpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_SpecHandle = { "SpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchGameplayAbility_eventApplyEffectSpecHandleToHitResults_Parms, SpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_SpecHandle_MetaData), Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_SpecHandle_MetaData) }; // 2882128022
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_HitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchGameplayAbility_eventApplyEffectSpecHandleToHitResults_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_HitResults_MetaData), Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_HitResults_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_SpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_HitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::NewProp_HitResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchGameplayAbility, nullptr, "ApplyEffectSpecHandleToHitResults", nullptr, nullptr, Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::ArchGameplayAbility_eventApplyEffectSpecHandleToHitResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::ArchGameplayAbility_eventApplyEffectSpecHandleToHitResults_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics
	{
		struct ArchGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms
		{
			AActor* TargetActor;
			FGameplayEffectSpecHandle SpecHandle;
			EArchSuccessType OutSuccessType;
			FActiveGameplayEffectHandle ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutSuccessType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSuccessType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_SpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_SpecHandle = { "SpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, SpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_SpecHandle_MetaData), Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_SpecHandle_MetaData) }; // 2882128022
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType = { "OutSuccessType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, OutSuccessType), Z_Construct_UEnum_Arch_EArchSuccessType, METADATA_PARAMS(0, nullptr) }; // 3024437275
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_SpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "DisplayName", "Apply Gameplay Effect Spec To Target Actor" },
		{ "ExpandEnumAsExecs", "OutSuccessType" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchGameplayAbility, nullptr, "BP_ApplyEffectSpecHandleToTarget", nullptr, nullptr, Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::ArchGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::ArchGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics
	{
		struct ArchGameplayAbility_eventGetArchAbilitySystemComponentFromActorInfo_Parms
		{
			UArchAbilitySystemComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchGameplayAbility_eventGetArchAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UArchAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchGameplayAbility, nullptr, "GetArchAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::ArchGameplayAbility_eventGetArchAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::ArchGameplayAbility_eventGetArchAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics
	{
		struct ArchGameplayAbility_eventGetCombatComponentBaseFromActorInfo_Parms
		{
			UCombatComponentBase* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchGameplayAbility_eventGetCombatComponentBaseFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UCombatComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchGameplayAbility, nullptr, "GetCombatComponentBaseFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::ArchGameplayAbility_eventGetCombatComponentBaseFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::ArchGameplayAbility_eventGetCombatComponentBaseFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchGameplayAbility);
	UClass* Z_Construct_UClass_UArchGameplayAbility_NoRegister()
	{
		return UArchGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UArchGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityActivationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityActivationPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchGameplayAbility_ApplyEffectSpecHandleToHitResults, "ApplyEffectSpecHandleToHitResults" }, // 1373197429
		{ &Z_Construct_UFunction_UArchGameplayAbility_BP_ApplyEffectSpecHandleToTarget, "BP_ApplyEffectSpecHandleToTarget" }, // 1373283229
		{ &Z_Construct_UFunction_UArchGameplayAbility_GetArchAbilitySystemComponentFromActorInfo, "GetArchAbilitySystemComponentFromActorInfo" }, // 4274797000
		{ &Z_Construct_UFunction_UArchGameplayAbility_GetCombatComponentBaseFromActorInfo, "GetCombatComponentBaseFromActorInfo" }, // 1824281351
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ArchGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_MetaData[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy = { "AbilityActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchGameplayAbility, AbilityActivationPolicy), Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_MetaData), Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_MetaData) }; // 4013725859
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchGameplayAbility_Statics::ClassParams = {
		&UArchGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UArchGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchGameplayAbility.OuterSingleton, Z_Construct_UClass_UArchGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchGameplayAbility.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchGameplayAbility>()
	{
		return UArchGameplayAbility::StaticClass();
	}
	UArchGameplayAbility::UArchGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchGameplayAbility);
	UArchGameplayAbility::~UArchGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::EnumInfo[] = {
		{ EArchAbilityActivationPolicy_StaticEnum, TEXT("EArchAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EArchAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4013725859U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchGameplayAbility, UArchGameplayAbility::StaticClass, TEXT("UArchGameplayAbility"), &Z_Registration_Info_UClass_UArchGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchGameplayAbility), 6410994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_410700340(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
