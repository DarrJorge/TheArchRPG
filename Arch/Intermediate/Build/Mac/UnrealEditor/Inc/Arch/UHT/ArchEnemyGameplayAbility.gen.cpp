// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/Abilities/ArchEnemyGameplayAbility.h"
#include "GameplayEffectTypes.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchEnemyGameplayAbility() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchEnemyCharacter_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyGameplayAbility_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchEnemyGameplayAbility::execMakeDamageEffectSpecHandle)
	{
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_GET_STRUCT_REF(FScalableFloat,Z_Param_Out_InDamageScalableFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectSpecHandle*)Z_Param__Result=P_THIS->MakeDamageEffectSpecHandle(Z_Param_EffectClass,Z_Param_Out_InDamageScalableFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchEnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnemyCombatComponent**)Z_Param__Result=P_THIS->GetEnemyCombatComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchEnemyGameplayAbility::execGetEnemyCharacterFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AArchEnemyCharacter**)Z_Param__Result=P_THIS->GetEnemyCharacterFromActorInfo();
		P_NATIVE_END;
	}
	void UArchEnemyGameplayAbility::StaticRegisterNativesUArchEnemyGameplayAbility()
	{
		UClass* Class = UArchEnemyGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnemyCharacterFromActorInfo", &UArchEnemyGameplayAbility::execGetEnemyCharacterFromActorInfo },
			{ "GetEnemyCombatComponentFromActorInfo", &UArchEnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo },
			{ "MakeDamageEffectSpecHandle", &UArchEnemyGameplayAbility::execMakeDamageEffectSpecHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics
	{
		struct ArchEnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms
		{
			AArchEnemyCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AArchEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchEnemyGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchEnemyGameplayAbility, nullptr, "GetEnemyCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::ArchEnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::ArchEnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics
	{
		struct ArchEnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms
		{
			UEnemyCombatComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchEnemyGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchEnemyGameplayAbility, nullptr, "GetEnemyCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::ArchEnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::ArchEnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics
	{
		struct ArchEnemyGameplayAbility_eventMakeDamageEffectSpecHandle_Parms
		{
			TSubclassOf<UGameplayEffect>  EffectClass;
			FScalableFloat InDamageScalableFloat;
			FGameplayEffectSpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDamageScalableFloat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDamageScalableFloat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyGameplayAbility_eventMakeDamageEffectSpecHandle_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_InDamageScalableFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_InDamageScalableFloat = { "InDamageScalableFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyGameplayAbility_eventMakeDamageEffectSpecHandle_Parms, InDamageScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_InDamageScalableFloat_MetaData), Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_InDamageScalableFloat_MetaData) }; // 4070660376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyGameplayAbility_eventMakeDamageEffectSpecHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_EffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_InDamageScalableFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchEnemyGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchEnemyGameplayAbility, nullptr, "MakeDamageEffectSpecHandle", nullptr, nullptr, Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::ArchEnemyGameplayAbility_eventMakeDamageEffectSpecHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::ArchEnemyGameplayAbility_eventMakeDamageEffectSpecHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchEnemyGameplayAbility);
	UClass* Z_Construct_UClass_UArchEnemyGameplayAbility_NoRegister()
	{
		return UArchEnemyGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UArchEnemyGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCharacterFromActorInfo, "GetEnemyCharacterFromActorInfo" }, // 793612246
		{ &Z_Construct_UFunction_UArchEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo, "GetEnemyCombatComponentFromActorInfo" }, // 1501823147
		{ &Z_Construct_UFunction_UArchEnemyGameplayAbility_MakeDamageEffectSpecHandle, "MakeDamageEffectSpecHandle" }, // 3908408837
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ArchEnemyGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchEnemyGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchEnemyGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::ClassParams = {
		&UArchEnemyGameplayAbility::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchEnemyGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UArchEnemyGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchEnemyGameplayAbility.OuterSingleton, Z_Construct_UClass_UArchEnemyGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchEnemyGameplayAbility.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchEnemyGameplayAbility>()
	{
		return UArchEnemyGameplayAbility::StaticClass();
	}
	UArchEnemyGameplayAbility::UArchEnemyGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchEnemyGameplayAbility);
	UArchEnemyGameplayAbility::~UArchEnemyGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchEnemyGameplayAbility, UArchEnemyGameplayAbility::StaticClass, TEXT("UArchEnemyGameplayAbility"), &Z_Registration_Info_UClass_UArchEnemyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchEnemyGameplayAbility), 366001128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_2474560525(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchEnemyGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
