// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/ArchTypes/ArchStructTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchStructTypes() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroLinkedAnimLayer_NoRegister();
	ARCH_API UScriptStruct* Z_Construct_UScriptStruct_FArchHeroAbilitySet();
	ARCH_API UScriptStruct* Z_Construct_UScriptStruct_FArchWeaponData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
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
		{ "ModuleRelativePath", "Public/ArchTypes/ArchStructTypes.h" },
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
		{ "ModuleRelativePath", "Public/ArchTypes/ArchStructTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchHeroAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_InputTag_MetaData), Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_InputTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "ArchHeroAbilitySet" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchStructTypes.h" },
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArchWeaponData;
class UScriptStruct* FArchWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArchWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArchWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArchWeaponData, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("ArchWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_ArchWeaponData.OuterSingleton;
}
template<> ARCH_API UScriptStruct* StaticStruct<FArchWeaponData>()
{
	return FArchWeaponData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FArchWeaponData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayer_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMappingContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWeaponAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeaponAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchStructTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArchWeaponData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponAnimLayer_MetaData[] = {
		{ "Category", "ArchWeaponData" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchStructTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponAnimLayer = { "WeaponAnimLayer", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchWeaponData, WeaponAnimLayer), Z_Construct_UClass_UClass, Z_Construct_UClass_UArchHeroLinkedAnimLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponAnimLayer_MetaData), Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponAnimLayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponMappingContext_MetaData[] = {
		{ "Category", "ArchWeaponData" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchStructTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponMappingContext = { "WeaponMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchWeaponData, WeaponMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponMappingContext_MetaData), Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponMappingContext_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArchHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 1356227677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_DefaultWeaponAbilities_MetaData[] = {
		{ "Category", "ArchWeaponData" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchStructTypes.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_DefaultWeaponAbilities = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArchWeaponData, DefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_DefaultWeaponAbilities_MetaData), Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_DefaultWeaponAbilities_MetaData) }; // 1356227677
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArchWeaponData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponAnimLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_WeaponMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewProp_DefaultWeaponAbilities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArchWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		&NewStructOps,
		"ArchWeaponData",
		Z_Construct_UScriptStruct_FArchWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchWeaponData_Statics::PropPointers),
		sizeof(FArchWeaponData),
		alignof(FArchWeaponData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArchWeaponData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArchWeaponData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FArchWeaponData()
	{
		if (!Z_Registration_Info_UScriptStruct_ArchWeaponData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArchWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FArchWeaponData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ArchWeaponData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchStructTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchStructTypes_h_Statics::ScriptStructInfo[] = {
		{ FArchHeroAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FArchHeroAbilitySet_Statics::NewStructOps, TEXT("ArchHeroAbilitySet"), &Z_Registration_Info_UScriptStruct_ArchHeroAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchHeroAbilitySet), 1356227677U) },
		{ FArchWeaponData::StaticStruct, Z_Construct_UScriptStruct_FArchWeaponData_Statics::NewStructOps, TEXT("ArchWeaponData"), &Z_Registration_Info_UScriptStruct_ArchWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArchWeaponData), 4114042320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchStructTypes_h_1529326409(TEXT("/Script/Arch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchStructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchStructTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
