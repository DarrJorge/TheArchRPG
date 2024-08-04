// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/Abilities/ArchGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchGameplayAbility() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchGameplayAbility_NoRegister();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchAbilityActivationPolicy;
	static UEnum* EArchAbilityActivationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EArchAbilityActivationPolicy"));
		}
		return Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EArchAbilityActivationPolicy>()
	{
		return EArchAbilityActivationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enumerators[] = {
		{ "EArchAbilityActivationPolicy::OnTriggered", (int64)EArchAbilityActivationPolicy::OnTriggered },
		{ "EArchAbilityActivationPolicy::OnGiven", (int64)EArchAbilityActivationPolicy::OnGiven },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
		{ "OnGiven.Name", "EArchAbilityActivationPolicy::OnGiven" },
		{ "OnTriggered.Name", "EArchAbilityActivationPolicy::OnTriggered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EArchAbilityActivationPolicy",
		"EArchAbilityActivationPolicy",
		Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchAbilityActivationPolicy.InnerSingleton;
	}
	void UArchGameplayAbility::StaticRegisterNativesUArchGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchGameplayAbility);
	UClass* Z_Construct_UClass_UArchGameplayAbility_NoRegister()
	{
		return UArchGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UArchGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityActivationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityActivationPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ArchGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_MetaData[] = {
		{ "Category", "ArchAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy = { "AbilityActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchGameplayAbility, AbilityActivationPolicy), Z_Construct_UEnum_Arch_EArchAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_MetaData), Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_MetaData) }; // 4013725859
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchGameplayAbility_Statics::NewProp_AbilityActivationPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchGameplayAbility_Statics::ClassParams = {
		&UArchGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UArchGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchGameplayAbility.OuterSingleton, Z_Construct_UClass_UArchGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchGameplayAbility.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchGameplayAbility>()
	{
		return UArchGameplayAbility::StaticClass();
	}
	UArchGameplayAbility::UArchGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchGameplayAbility);
	UArchGameplayAbility::~UArchGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::EnumInfo[] = {
		{ EArchAbilityActivationPolicy_StaticEnum, TEXT("EArchAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EArchAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4013725859U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchGameplayAbility, UArchGameplayAbility::StaticClass, TEXT("UArchGameplayAbility"), &Z_Registration_Info_UClass_UArchGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchGameplayAbility), 4028838364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_979819659(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
