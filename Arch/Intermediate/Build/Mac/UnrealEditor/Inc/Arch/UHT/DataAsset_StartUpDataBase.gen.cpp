// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_StartUpDataBase() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
	ARCH_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UDataAsset_StartUpDataBase::StaticRegisterNativesUDataAsset_StartUpDataBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_StartUpDataBase);
	UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister()
	{
		return UDataAsset_StartUpDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActivateOnGivenAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnGivenAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivateOnGivenAbilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReactiveAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReactiveAbilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartUpGameplayEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartUpGameplayEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartUpGameplayEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities_Inner = { "ActivateOnGivenAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UArchGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities_MetaData[] = {
		{ "Category", "StartUpData|Abilities" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities = { "ActivateOnGivenAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartUpDataBase, ActivateOnGivenAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities_MetaData), Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities_Inner = { "ReactiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UArchGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities_MetaData[] = {
		{ "Category", "StartUpData|Abilities" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities = { "ReactiveAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartUpDataBase, ReactiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities_MetaData), Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartUpGameplayEffects_Inner = { "StartUpGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartUpGameplayEffects_MetaData[] = {
		{ "Category", "StartUpData|Effects" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartUpGameplayEffects = { "StartUpGameplayEffects", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartUpDataBase, StartUpGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartUpGameplayEffects_MetaData), Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartUpGameplayEffects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ActivateOnGivenAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartUpGameplayEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartUpGameplayEffects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_StartUpDataBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::ClassParams = {
		&UDataAsset_StartUpDataBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase()
	{
		if (!Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton, Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UDataAsset_StartUpDataBase>()
	{
		return UDataAsset_StartUpDataBase::StaticClass();
	}
	UDataAsset_StartUpDataBase::UDataAsset_StartUpDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_StartUpDataBase);
	UDataAsset_StartUpDataBase::~UDataAsset_StartUpDataBase() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_StartUpDataBase, UDataAsset_StartUpDataBase::StaticClass, TEXT("UDataAsset_StartUpDataBase"), &Z_Registration_Info_UClass_UDataAsset_StartUpDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_StartUpDataBase), 449549140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_3957043999(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
