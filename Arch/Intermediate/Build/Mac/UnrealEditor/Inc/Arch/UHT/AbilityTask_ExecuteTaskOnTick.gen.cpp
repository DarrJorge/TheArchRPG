// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/AbilityTasks/AbilityTask_ExecuteTaskOnTick.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ExecuteTaskOnTick() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick();
	ARCH_API UClass* Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_NoRegister();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics
	{
		struct _Script_Arch_eventOnAbilityTaskTickDelegate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnAbilityTaskTickDelegate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_ExecuteTaskOnTick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arch, nullptr, "OnAbilityTaskTickDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::_Script_Arch_eventOnAbilityTaskTickDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::_Script_Arch_eventOnAbilityTaskTickDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAbilityTaskTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityTaskTickDelegate, float DeltaTime)
{
	struct _Script_Arch_eventOnAbilityTaskTickDelegate_Parms
	{
		float DeltaTime;
	};
	_Script_Arch_eventOnAbilityTaskTickDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	OnAbilityTaskTickDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_ExecuteTaskOnTick::execExecuteTaskOnTick)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwnAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_ExecuteTaskOnTick**)Z_Param__Result=UAbilityTask_ExecuteTaskOnTick::ExecuteTaskOnTick(Z_Param_OwnAbility);
		P_NATIVE_END;
	}
	void UAbilityTask_ExecuteTaskOnTick::StaticRegisterNativesUAbilityTask_ExecuteTaskOnTick()
	{
		UClass* Class = UAbilityTask_ExecuteTaskOnTick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteTaskOnTick", &UAbilityTask_ExecuteTaskOnTick::execExecuteTaskOnTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics
	{
		struct AbilityTask_ExecuteTaskOnTick_eventExecuteTaskOnTick_Parms
		{
			UGameplayAbility* OwnAbility;
			UAbilityTask_ExecuteTaskOnTick* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::NewProp_OwnAbility = { "OwnAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ExecuteTaskOnTick_eventExecuteTaskOnTick_Parms, OwnAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ExecuteTaskOnTick_eventExecuteTaskOnTick_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::NewProp_OwnAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Arch|AbilityTasks" },
		{ "DefaultToSelf", "OwnAbility" },
		{ "HidePin", "OwnAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_ExecuteTaskOnTick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick, nullptr, "ExecuteTaskOnTick", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::AbilityTask_ExecuteTaskOnTick_eventExecuteTaskOnTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::AbilityTask_ExecuteTaskOnTick_eventExecuteTaskOnTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_ExecuteTaskOnTick);
	UClass* Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_NoRegister()
	{
		return UAbilityTask_ExecuteTaskOnTick::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityTaskTick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityTaskTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_ExecuteTaskOnTick_ExecuteTaskOnTick, "ExecuteTaskOnTick" }, // 3705259671
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AbilityTasks/AbilityTask_ExecuteTaskOnTick.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_ExecuteTaskOnTick.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::NewProp_OnAbilityTaskTick_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityTasks/AbilityTask_ExecuteTaskOnTick.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::NewProp_OnAbilityTaskTick = { "OnAbilityTaskTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ExecuteTaskOnTick, OnAbilityTaskTick), Z_Construct_UDelegateFunction_Arch_OnAbilityTaskTickDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::NewProp_OnAbilityTaskTick_MetaData), Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::NewProp_OnAbilityTaskTick_MetaData) }; // 1437378760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::NewProp_OnAbilityTaskTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ExecuteTaskOnTick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::ClassParams = {
		&UAbilityTask_ExecuteTaskOnTick::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_ExecuteTaskOnTick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_ExecuteTaskOnTick.OuterSingleton, Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_ExecuteTaskOnTick.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UAbilityTask_ExecuteTaskOnTick>()
	{
		return UAbilityTask_ExecuteTaskOnTick::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ExecuteTaskOnTick);
	UAbilityTask_ExecuteTaskOnTick::~UAbilityTask_ExecuteTaskOnTick() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_ExecuteTaskOnTick, UAbilityTask_ExecuteTaskOnTick::StaticClass, TEXT("UAbilityTask_ExecuteTaskOnTick"), &Z_Registration_Info_UClass_UAbilityTask_ExecuteTaskOnTick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_ExecuteTaskOnTick), 311743153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_549148231(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_AbilityTasks_AbilityTask_ExecuteTaskOnTick_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
