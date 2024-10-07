// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitSpawnAllies() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchEnemyCharacter_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UAbilityTask_WaitSpawnAllies();
	ARCH_API UClass* Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_NoRegister();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics
	{
		struct _Script_Arch_eventWaitSpawnAlliesDelegate_Parms
		{
			TArray<AArchEnemyCharacter*> SpawnedAllies;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedAllies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedAllies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedAllies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::NewProp_SpawnedAllies_Inner = { "SpawnedAllies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AArchEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::NewProp_SpawnedAllies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::NewProp_SpawnedAllies = { "SpawnedAllies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventWaitSpawnAlliesDelegate_Parms, SpawnedAllies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::NewProp_SpawnedAllies_MetaData), Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::NewProp_SpawnedAllies_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::NewProp_SpawnedAllies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::NewProp_SpawnedAllies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arch, nullptr, "WaitSpawnAlliesDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::_Script_Arch_eventWaitSpawnAlliesDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::_Script_Arch_eventWaitSpawnAlliesDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitSpawnAlliesDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitSpawnAlliesDelegate, TArray<AArchEnemyCharacter*> const& SpawnedAllies)
{
	struct _Script_Arch_eventWaitSpawnAlliesDelegate_Parms
	{
		TArray<AArchEnemyCharacter*> SpawnedAllies;
	};
	_Script_Arch_eventWaitSpawnAlliesDelegate_Parms Parms;
	Parms.SpawnedAllies=SpawnedAllies;
	WaitSpawnAlliesDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitSpawnAllies::execWaitSpawnAllies)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwnAbility);
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_SOFTCLASS(TSoftClassPtr<AArchEnemyCharacter> ,Z_Param_EnemyClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumToSpawn);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SpawnLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RandomRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitSpawnAllies**)Z_Param__Result=UAbilityTask_WaitSpawnAllies::WaitSpawnAllies(Z_Param_OwnAbility,Z_Param_EventTag,Z_Param_EnemyClass,Z_Param_NumToSpawn,Z_Param_Out_SpawnLocation,Z_Param_RandomRadius);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitSpawnAllies::StaticRegisterNativesUAbilityTask_WaitSpawnAllies()
	{
		UClass* Class = UAbilityTask_WaitSpawnAllies::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitSpawnAllies", &UAbilityTask_WaitSpawnAllies::execWaitSpawnAllies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics
	{
		struct AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms
		{
			UGameplayAbility* OwnAbility;
			FGameplayTag EventTag;
			TSoftClassPtr<AArchEnemyCharacter>  EnemyClass;
			int32 NumToSpawn;
			FVector SpawnLocation;
			float RandomRadius;
			UAbilityTask_WaitSpawnAllies* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_EnemyClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRadius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_OwnAbility = { "OwnAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms, OwnAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms, EnemyClass), Z_Construct_UClass_AArchEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_NumToSpawn = { "NumToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms, NumToSpawn), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_SpawnLocation_MetaData), Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_SpawnLocation_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_RandomRadius = { "RandomRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms, RandomRadius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_OwnAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_EnemyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_NumToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_RandomRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Arch|AbilityTasks" },
		{ "DefaultToSelf", "OwnAbility" },
		{ "DisplayName", "Wait Gameplay Event and Spawn Allies" },
		{ "HidePin", "OwnAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h" },
		{ "NumToSpawn", "1" },
		{ "RandomRadius", "200" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitSpawnAllies, nullptr, "WaitSpawnAllies", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::AbilityTask_WaitSpawnAllies_eventWaitSpawnAllies_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitSpawnAllies);
	UClass* Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_NoRegister()
	{
		return UAbilityTask_WaitSpawnAllies::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNotSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotSpawned;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitSpawnAllies_WaitSpawnAllies, "WaitSpawnAllies" }, // 2861373608
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnSpawnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnSpawnFinished = { "OnSpawnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitSpawnAllies, OnSpawnFinished), Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnSpawnFinished_MetaData), Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnSpawnFinished_MetaData) }; // 2536495791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnNotSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnAllies.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnNotSpawned = { "OnNotSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_WaitSpawnAllies, OnNotSpawned), Z_Construct_UDelegateFunction_Arch_WaitSpawnAlliesDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnNotSpawned_MetaData), Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnNotSpawned_MetaData) }; // 2536495791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnSpawnFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::NewProp_OnNotSpawned,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitSpawnAllies>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::ClassParams = {
		&UAbilityTask_WaitSpawnAllies::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityTask_WaitSpawnAllies()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitSpawnAllies.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitSpawnAllies.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitSpawnAllies_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitSpawnAllies.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UAbilityTask_WaitSpawnAllies>()
	{
		return UAbilityTask_WaitSpawnAllies::StaticClass();
	}
	UAbilityTask_WaitSpawnAllies::UAbilityTask_WaitSpawnAllies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitSpawnAllies);
	UAbilityTask_WaitSpawnAllies::~UAbilityTask_WaitSpawnAllies() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitSpawnAllies, UAbilityTask_WaitSpawnAllies::StaticClass, TEXT("UAbilityTask_WaitSpawnAllies"), &Z_Registration_Info_UClass_UAbilityTask_WaitSpawnAllies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitSpawnAllies), 4235878002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_2679097533(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_WaitSpawnAllies_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
