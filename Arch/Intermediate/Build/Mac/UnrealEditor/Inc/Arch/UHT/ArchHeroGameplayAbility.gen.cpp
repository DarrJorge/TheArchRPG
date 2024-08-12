// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/Abilities/ArchHeroGameplayAbility.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchHeroGameplayAbility() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchHeroCharacter_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_AArchPlayerController_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroGameplayAbility_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchHeroGameplayAbility::execMakeDamageEffectSpecHandle)
	{
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WeaponBaseDamage);
		P_GET_STRUCT(FGameplayTag,Z_Param_AttackTag);
		P_GET_PROPERTY(FIntProperty,Z_Param_UsedComboCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectSpecHandle*)Z_Param__Result=P_THIS->MakeDamageEffectSpecHandle(Z_Param_EffectClass,Z_Param_WeaponBaseDamage,Z_Param_AttackTag,Z_Param_UsedComboCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchHeroGameplayAbility::execGetHeroCombatComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHeroCombatComponent**)Z_Param__Result=P_THIS->GetHeroCombatComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchHeroGameplayAbility::execGetHeroControllerFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AArchPlayerController**)Z_Param__Result=P_THIS->GetHeroControllerFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchHeroGameplayAbility::execGetHeroCharacterFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AArchHeroCharacter**)Z_Param__Result=P_THIS->GetHeroCharacterFromActorInfo();
		P_NATIVE_END;
	}
	void UArchHeroGameplayAbility::StaticRegisterNativesUArchHeroGameplayAbility()
	{
		UClass* Class = UArchHeroGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeroCharacterFromActorInfo", &UArchHeroGameplayAbility::execGetHeroCharacterFromActorInfo },
			{ "GetHeroCombatComponentFromActorInfo", &UArchHeroGameplayAbility::execGetHeroCombatComponentFromActorInfo },
			{ "GetHeroControllerFromActorInfo", &UArchHeroGameplayAbility::execGetHeroControllerFromActorInfo },
			{ "MakeDamageEffectSpecHandle", &UArchHeroGameplayAbility::execMakeDamageEffectSpecHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics
	{
		struct ArchHeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms
		{
			AArchHeroCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AArchHeroCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchHeroGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchHeroGameplayAbility, nullptr, "GetHeroCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::ArchHeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::ArchHeroGameplayAbility_eventGetHeroCharacterFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics
	{
		struct ArchHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms
		{
			UHeroCombatComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UHeroCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchHeroGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchHeroGameplayAbility, nullptr, "GetHeroCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::ArchHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::ArchHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics
	{
		struct ArchHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms
		{
			AArchPlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AArchPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchHeroGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchHeroGameplayAbility, nullptr, "GetHeroControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::ArchHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::ArchHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics
	{
		struct ArchHeroGameplayAbility_eventMakeDamageEffectSpecHandle_Parms
		{
			TSubclassOf<UGameplayEffect>  EffectClass;
			float WeaponBaseDamage;
			FGameplayTag AttackTag;
			int32 UsedComboCount;
			FGameplayEffectSpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponBaseDamage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UsedComboCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroGameplayAbility_eventMakeDamageEffectSpecHandle_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_WeaponBaseDamage = { "WeaponBaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroGameplayAbility_eventMakeDamageEffectSpecHandle_Parms, WeaponBaseDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_AttackTag = { "AttackTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroGameplayAbility_eventMakeDamageEffectSpecHandle_Parms, AttackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_UsedComboCount = { "UsedComboCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroGameplayAbility_eventMakeDamageEffectSpecHandle_Parms, UsedComboCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroGameplayAbility_eventMakeDamageEffectSpecHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_EffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_WeaponBaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_AttackTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_UsedComboCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchHeroGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchHeroGameplayAbility, nullptr, "MakeDamageEffectSpecHandle", nullptr, nullptr, Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::ArchHeroGameplayAbility_eventMakeDamageEffectSpecHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::ArchHeroGameplayAbility_eventMakeDamageEffectSpecHandle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchHeroGameplayAbility);
	UClass* Z_Construct_UClass_UArchHeroGameplayAbility_NoRegister()
	{
		return UArchHeroGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UArchHeroGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchHeroGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroGameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchHeroGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCharacterFromActorInfo, "GetHeroCharacterFromActorInfo" }, // 690084308
		{ &Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroCombatComponentFromActorInfo, "GetHeroCombatComponentFromActorInfo" }, // 333524871
		{ &Z_Construct_UFunction_UArchHeroGameplayAbility_GetHeroControllerFromActorInfo, "GetHeroControllerFromActorInfo" }, // 3177349038
		{ &Z_Construct_UFunction_UArchHeroGameplayAbility_MakeDamageEffectSpecHandle, "MakeDamageEffectSpecHandle" }, // 2676604472
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroGameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ArchHeroGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchHeroGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchHeroGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchHeroGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchHeroGameplayAbility_Statics::ClassParams = {
		&UArchHeroGameplayAbility::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchHeroGameplayAbility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchHeroGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UArchHeroGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchHeroGameplayAbility.OuterSingleton, Z_Construct_UClass_UArchHeroGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchHeroGameplayAbility.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchHeroGameplayAbility>()
	{
		return UArchHeroGameplayAbility::StaticClass();
	}
	UArchHeroGameplayAbility::UArchHeroGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchHeroGameplayAbility);
	UArchHeroGameplayAbility::~UArchHeroGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchHeroGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchHeroGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchHeroGameplayAbility, UArchHeroGameplayAbility::StaticClass, TEXT("UArchHeroGameplayAbility"), &Z_Registration_Info_UClass_UArchHeroGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchHeroGameplayAbility), 3260039204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchHeroGameplayAbility_h_494911193(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchHeroGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchHeroGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
