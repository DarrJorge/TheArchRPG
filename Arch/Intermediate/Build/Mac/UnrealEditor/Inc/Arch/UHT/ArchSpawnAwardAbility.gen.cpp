// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/Abilities/ArchSpawnAwardAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchSpawnAwardAbility() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchPickUpBase_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchSpawnAwardAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchSpawnAwardAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchSpawnAwardAbility::execSpawnAward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ChanceToSpawn);
		P_GET_TARRAY_REF(TSoftClassPtr<AArchPickUpBase> ,Z_Param_Out_PickupItemsClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAward(Z_Param_ChanceToSpawn,Z_Param_Out_PickupItemsClasses);
		P_NATIVE_END;
	}
	void UArchSpawnAwardAbility::StaticRegisterNativesUArchSpawnAwardAbility()
	{
		UClass* Class = UArchSpawnAwardAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnAward", &UArchSpawnAwardAbility::execSpawnAward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics
	{
		struct ArchSpawnAwardAbility_eventSpawnAward_Parms
		{
			float ChanceToSpawn;
			TArray<TSoftClassPtr<AArchPickUpBase> > PickupItemsClasses;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToSpawn;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PickupItemsClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupItemsClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PickupItemsClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_ChanceToSpawn = { "ChanceToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchSpawnAwardAbility_eventSpawnAward_Parms, ChanceToSpawn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_PickupItemsClasses_Inner = { "PickupItemsClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AArchPickUpBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_PickupItemsClasses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_PickupItemsClasses = { "PickupItemsClasses", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchSpawnAwardAbility_eventSpawnAward_Parms, PickupItemsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_PickupItemsClasses_MetaData), Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_PickupItemsClasses_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_ChanceToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_PickupItemsClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::NewProp_PickupItemsClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchSpawnAwardAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchSpawnAwardAbility, nullptr, "SpawnAward", nullptr, nullptr, Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::ArchSpawnAwardAbility_eventSpawnAward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::ArchSpawnAwardAbility_eventSpawnAward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchSpawnAwardAbility);
	UClass* Z_Construct_UClass_UArchSpawnAwardAbility_NoRegister()
	{
		return UArchSpawnAwardAbility::StaticClass();
	}
	struct Z_Construct_UClass_UArchSpawnAwardAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchSpawnAwardAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchEnemyGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchSpawnAwardAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchSpawnAwardAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchSpawnAwardAbility_SpawnAward, "SpawnAward" }, // 3687904136
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchSpawnAwardAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchSpawnAwardAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ArchSpawnAwardAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchSpawnAwardAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchSpawnAwardAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchSpawnAwardAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchSpawnAwardAbility_Statics::ClassParams = {
		&UArchSpawnAwardAbility::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchSpawnAwardAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchSpawnAwardAbility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchSpawnAwardAbility()
	{
		if (!Z_Registration_Info_UClass_UArchSpawnAwardAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchSpawnAwardAbility.OuterSingleton, Z_Construct_UClass_UArchSpawnAwardAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchSpawnAwardAbility.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchSpawnAwardAbility>()
	{
		return UArchSpawnAwardAbility::StaticClass();
	}
	UArchSpawnAwardAbility::UArchSpawnAwardAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchSpawnAwardAbility);
	UArchSpawnAwardAbility::~UArchSpawnAwardAbility() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchSpawnAwardAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchSpawnAwardAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchSpawnAwardAbility, UArchSpawnAwardAbility::StaticClass, TEXT("UArchSpawnAwardAbility"), &Z_Registration_Info_UClass_UArchSpawnAwardAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchSpawnAwardAbility), 2755374182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchSpawnAwardAbility_h_3122688909(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchSpawnAwardAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchSpawnAwardAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
