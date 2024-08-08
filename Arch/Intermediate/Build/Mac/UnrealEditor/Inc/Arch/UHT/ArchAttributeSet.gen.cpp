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
	void UArchAttributeSet::StaticRegisterNativesUArchAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchAttributeSet);
	UClass* Z_Construct_UClass_UArchAttributeSet_NoRegister()
	{
		return UArchAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UArchAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::DependentSingletons) < 16);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage = { "Rage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, Rage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage = { "MaxRage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, MaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower = { "PhysicalAttackPower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, PhysicalAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower_MetaData[] = {
		{ "Category", "Secondary Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower = { "DefensePower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchAttributeSet, DefensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower_MetaData), Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_Rage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_MaxRage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_PhysicalAttackPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchAttributeSet_Statics::NewProp_DefensePower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchAttributeSet_Statics::ClassParams = {
		&UArchAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchAttributeSet);
	UArchAttributeSet::~UArchAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchAttributeSet, UArchAttributeSet::StaticClass, TEXT("UArchAttributeSet"), &Z_Registration_Info_UClass_UArchAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchAttributeSet), 897291401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_86061854(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
