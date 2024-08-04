// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_HeroStartUpData() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData();
	ARCH_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
	ARCH_API UScriptStruct* Z_Construct_UScriptStruct_FArchHeroAbilitySet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet;
class UScriptStruct* FArchHeroAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchHeroAbilitySet, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("ArchHeroAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet.OuterSingleton;
}
template<> ARCH_API UScriptStruct* StaticStruct<FArchHeroAbilitySet>()
{
	return FArchHeroAbilitySet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGrant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchHeroAbilitySet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "ArchHeroAbilitySet" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchHeroAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_InputTag_MetaData), Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_InputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "ArchHeroAbilitySet" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_AbilityToGrant = { "AbilityToGrant", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchHeroAbilitySet, AbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UArchGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_AbilityToGrant_MetaData), Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_AbilityToGrant_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_InputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_AbilityToGrant,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		&NewStructOps,
		"ArchHeroAbilitySet",
		Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::PropPointers),
		sizeof(FArchHeroAbilitySet),
		alignof(FArchHeroAbilitySet),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FArchHeroAbilitySet()
	{
		if (!Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet.InnerSingleton;
	}
	void UDataAsset_HeroStartUpData::StaticRegisterNativesUDataAsset_HeroStartUpData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_HeroStartUpData);
	UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister()
	{
		return UDataAsset_HeroStartUpData::StaticClass();
	}
	struct Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeroStartUpAbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeroStartUpAbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeroStartUpAbilitySets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset_StartUpDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_Inner = { "HeroStartUpAbilitySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArchHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 4174057987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_MetaData[] = {
		{ "Category", "Arch|StartUpData" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets = { "HeroStartUpAbilitySets", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_HeroStartUpData, HeroStartUpAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_MetaData), Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_MetaData) }; // 4174057987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_HeroStartUpData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::ClassParams = {
		&UDataAsset_HeroStartUpData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData()
	{
		if (!Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton, Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UDataAsset_HeroStartUpData>()
	{
		return UDataAsset_HeroStartUpData::StaticClass();
	}
	UDataAsset_HeroStartUpData::UDataAsset_HeroStartUpData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_HeroStartUpData);
	UDataAsset_HeroStartUpData::~UDataAsset_HeroStartUpData() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ScriptStructInfo[] = {
		{ FArchHeroAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewStructOps, TEXT("ArchHeroAbilitySet"), &Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchHeroAbilitySet), 4174057987U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_HeroStartUpData, UDataAsset_HeroStartUpData::StaticClass, TEXT("UDataAsset_HeroStartUpData"), &Z_Registration_Info_UClass_UDataAsset_HeroStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_HeroStartUpData), 3431383525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_1474524110(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
