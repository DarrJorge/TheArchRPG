// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/ExecCalc/ExecCalc_DamageTaken.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecCalc_DamageTaken() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UExecCalc_DamageTaken();
	ARCH_API UClass* Z_Construct_UClass_UExecCalc_DamageTaken_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UExecCalc_DamageTaken::StaticRegisterNativesUExecCalc_DamageTaken()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExecCalc_DamageTaken);
	UClass* Z_Construct_UClass_UExecCalc_DamageTaken_NoRegister()
	{
		return UExecCalc_DamageTaken::StaticClass();
	}
	struct Z_Construct_UClass_UExecCalc_DamageTaken_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExecCalc_DamageTaken_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalc_DamageTaken_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecCalc_DamageTaken_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/ExecCalc/ExecCalc_DamageTaken.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ExecCalc/ExecCalc_DamageTaken.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExecCalc_DamageTaken_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecCalc_DamageTaken>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecCalc_DamageTaken_Statics::ClassParams = {
		&UExecCalc_DamageTaken::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalc_DamageTaken_Statics::Class_MetaDataParams), Z_Construct_UClass_UExecCalc_DamageTaken_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UExecCalc_DamageTaken()
	{
		if (!Z_Registration_Info_UClass_UExecCalc_DamageTaken.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecCalc_DamageTaken.OuterSingleton, Z_Construct_UClass_UExecCalc_DamageTaken_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExecCalc_DamageTaken.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UExecCalc_DamageTaken>()
	{
		return UExecCalc_DamageTaken::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExecCalc_DamageTaken);
	UExecCalc_DamageTaken::~UExecCalc_DamageTaken() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ExecCalc_ExecCalc_DamageTaken_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ExecCalc_ExecCalc_DamageTaken_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExecCalc_DamageTaken, UExecCalc_DamageTaken::StaticClass, TEXT("UExecCalc_DamageTaken"), &Z_Registration_Info_UClass_UExecCalc_DamageTaken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecCalc_DamageTaken), 1269575153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ExecCalc_ExecCalc_DamageTaken_h_3350641218(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ExecCalc_ExecCalc_DamageTaken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ExecCalc_ExecCalc_DamageTaken_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
