// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/ArchAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchAttributeSet() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchAttributeSet();
	ARCH_API UClass* Z_Construct_UClass_UArchAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_DamageTaken)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDamageTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DamageTaken(Z_Param_Out_OldDamageTaken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_DefensePower)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDefensePower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DefensePower(Z_Param_Out_OldDefensePower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_PhysicalAttackPower)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPhysicalAttackPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PhysicalAttackPower(Z_Param_Out_OldPhysicalAttackPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_MaxRage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxRage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxRage(Z_Param_Out_OldMaxRage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_Rage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldRage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Rage(Z_Param_Out_OldRage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UArchAttributeSet::StaticRegisterNativesUArchAttributeSet()
	{
		UClass* Class = UArchAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_DamageTaken", &UArchAttributeSet::execOnRep_DamageTaken },
			{ "OnRep_DefensePower", &UArchAttributeSet::execOnRep_DefensePower },
			{ "OnRep_Health", &UArchAttributeSet::execOnRep_Health },
			{ "OnRep_Mana", &UArchAttributeSet::execOnRep_Mana },
			{ "OnRep_MaxHealth", &UArchAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UArchAttributeSet::execOnRep_MaxMana },
			{ "OnRep_MaxRage", &UArchAttributeSet::execOnRep_MaxRage },
			{ "OnRep_PhysicalAttackPower", &UArchAttributeSet::execOnRep_PhysicalAttackPower },
			{ "OnRep_Rage", &UArchAttributeSet::execOnRep_Rage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics
	{
		struct ArchAttributeSet_eventOnRep_DamageTaken_Parms
		{
			FGameplayAttributeData OldDamageTaken;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldDamageTaken_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldDamageTaken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::NewProp_OldDamageTaken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::NewProp_OldDamageTaken = { "OldDamageTaken", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_DamageTaken_Parms, OldDamageTaken), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::NewProp_OldDamageTaken_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::NewProp_OldDamageTaken_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::NewProp_OldDamageTaken,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_DamageTaken", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::ArchAttributeSet_eventOnRep_DamageTaken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::ArchAttributeSet_eventOnRep_DamageTaken_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics
	{
		struct ArchAttributeSet_eventOnRep_DefensePower_Parms
		{
			FGameplayAttributeData OldDefensePower;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldDefensePower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldDefensePower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::NewProp_OldDefensePower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::NewProp_OldDefensePower = { "OldDefensePower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_DefensePower_Parms, OldDefensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::NewProp_OldDefensePower_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::NewProp_OldDefensePower_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::NewProp_OldDefensePower,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_DefensePower", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::ArchAttributeSet_eventOnRep_DefensePower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::ArchAttributeSet_eventOnRep_DefensePower_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics
	{
		struct ArchAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::ArchAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::ArchAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics
	{
		struct ArchAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::ArchAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::ArchAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics
	{
		struct ArchAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::ArchAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::ArchAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics
	{
		struct ArchAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::ArchAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::ArchAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics
	{
		struct ArchAttributeSet_eventOnRep_MaxRage_Parms
		{
			FGameplayAttributeData OldMaxRage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxRage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxRage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage = { "OldMaxRage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_MaxRage_Parms, OldMaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::NewProp_OldMaxRage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_MaxRage", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::ArchAttributeSet_eventOnRep_MaxRage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::ArchAttributeSet_eventOnRep_MaxRage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics
	{
		struct ArchAttributeSet_eventOnRep_PhysicalAttackPower_Parms
		{
			FGameplayAttributeData OldPhysicalAttackPower;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPhysicalAttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldPhysicalAttackPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::NewProp_OldPhysicalAttackPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::NewProp_OldPhysicalAttackPower = { "OldPhysicalAttackPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_PhysicalAttackPower_Parms, OldPhysicalAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::NewProp_OldPhysicalAttackPower_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::NewProp_OldPhysicalAttackPower_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::NewProp_OldPhysicalAttackPower,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_PhysicalAttackPower", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::ArchAttributeSet_eventOnRep_PhysicalAttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::ArchAttributeSet_eventOnRep_PhysicalAttackPower_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics
	{
		struct ArchAttributeSet_eventOnRep_Rage_Parms
		{
			FGameplayAttributeData OldRage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldRage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldRage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::NewProp_OldRage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::NewProp_OldRage = { "OldRage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAttributeSet_eventOnRep_Rage_Parms, OldRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::NewProp_OldRage_MetaData), Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::NewProp_OldRage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::NewProp_OldRage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAttributeSet, nullptr, "OnRep_Rage", nullptr, nullptr, Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::ArchAttributeSet_eventOnRep_Rage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::ArchAttributeSet_eventOnRep_Rage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchAttributeSet);
	UClass* Z_Construct_UClass_UArchAttributeSet_NoRegister()
	{
		return UArchAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UArchAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalAttackPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefensePower_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefensePower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTaken_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTaken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_DamageTaken, "OnRep_DamageTaken" }, // 3396888901
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_DefensePower, "OnRep_DefensePower" }, // 2362048770
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_Health, "OnRep_Health" }, // 3869912649
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 415387813
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 697446015
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 1741993514
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_MaxRage, "OnRep_MaxRage" }, // 2933358175
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_PhysicalAttackPower, "OnRep_PhysicalAttackPower" }, // 2815223130
		{ &Z_Construct_UFunction_UArchAttributeSet_OnRep_Rage, "OnRep_Rage" }, // 3535287741
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/ArchAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Mana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxMana_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxMana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage = { "Rage", "OnRep_Rage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, Rage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage = { "MaxRage", "OnRep_MaxRage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, MaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower = { "PhysicalAttackPower", "OnRep_PhysicalAttackPower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, PhysicalAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower = { "DefensePower", "OnRep_DefensePower", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, DefensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DamageTaken_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DamageTaken = { "DamageTaken", "OnRep_DamageTaken", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, DamageTaken), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DamageTaken_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DamageTaken_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DamageTaken,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchAttributeSet_Statics::ClassParams = {
		&UArchAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UArchAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchAttributeSet.OuterSingleton, Z_Construct_UClass_UArchAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchAttributeSet.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchAttributeSet>()
	{
		return UArchAttributeSet::StaticClass();
	}

	void UArchAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_Rage(TEXT("Rage"));
		static const FName Name_MaxRage(TEXT("MaxRage"));
		static const FName Name_PhysicalAttackPower(TEXT("PhysicalAttackPower"));
		static const FName Name_DefensePower(TEXT("DefensePower"));
		static const FName Name_DamageTaken(TEXT("DamageTaken"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_Rage == ClassReps[(int32)ENetFields_Private::Rage].Property->GetFName()
			&& Name_MaxRage == ClassReps[(int32)ENetFields_Private::MaxRage].Property->GetFName()
			&& Name_PhysicalAttackPower == ClassReps[(int32)ENetFields_Private::PhysicalAttackPower].Property->GetFName()
			&& Name_DefensePower == ClassReps[(int32)ENetFields_Private::DefensePower].Property->GetFName()
			&& Name_DamageTaken == ClassReps[(int32)ENetFields_Private::DamageTaken].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UArchAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchAttributeSet);
	UArchAttributeSet::~UArchAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchAttributeSet, UArchAttributeSet::StaticClass, TEXT("UArchAttributeSet"), &Z_Registration_Info_UClass_UArchAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchAttributeSet), 2300849612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_442560042(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
