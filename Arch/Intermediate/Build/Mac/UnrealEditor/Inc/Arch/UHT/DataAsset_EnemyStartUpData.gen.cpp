// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/DataAssets/StartUpData/DataAsset_EnemyStartUpData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_EnemyStartUpData() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyGameplayAbility_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpData();
	ARCH_API UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpData_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UDataAsset_EnemyStartUpData::StaticRegisterNativesUDataAsset_EnemyStartUpData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_EnemyStartUpData);
	UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpData_NoRegister()
	{
		return UDataAsset_EnemyStartUpData::StaticClass();
	}
	struct Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CombatAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CombatAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset_StartUpDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_EnemyStartUpData.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_EnemyStartUpData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_CombatAbilities_Inner = { "CombatAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UArchEnemyGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_CombatAbilities_MetaData[] = {
		{ "Category", "StartUpData|Abilities" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_EnemyStartUpData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_CombatAbilities = { "CombatAbilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_EnemyStartUpData, CombatAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_CombatAbilities_MetaData), Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_CombatAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_CombatAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::NewProp_CombatAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_EnemyStartUpData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::ClassParams = {
		&UDataAsset_EnemyStartUpData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpData()
	{
		if (!Z_Registration_Info_UClass_UDataAsset_EnemyStartUpData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_EnemyStartUpData.OuterSingleton, Z_Construct_UClass_UDataAsset_EnemyStartUpData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataAsset_EnemyStartUpData.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UDataAsset_EnemyStartUpData>()
	{
		return UDataAsset_EnemyStartUpData::StaticClass();
	}
	UDataAsset_EnemyStartUpData::UDataAsset_EnemyStartUpData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_EnemyStartUpData);
	UDataAsset_EnemyStartUpData::~UDataAsset_EnemyStartUpData() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_EnemyStartUpData, UDataAsset_EnemyStartUpData::StaticClass, TEXT("UDataAsset_EnemyStartUpData"), &Z_Registration_Info_UClass_UDataAsset_EnemyStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_EnemyStartUpData), 2577108063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_2577936146(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
