// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AI/ArchEnemyEnvQueryContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchEnemyEnvQueryContext() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyEnvQueryContext();
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyEnvQueryContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UArchEnemyEnvQueryContext::StaticRegisterNativesUArchEnemyEnvQueryContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchEnemyEnvQueryContext);
	UClass* Z_Construct_UClass_UArchEnemyEnvQueryContext_NoRegister()
	{
		return UArchEnemyEnvQueryContext::StaticClass();
	}
	struct Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetActorKeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/ArchEnemyEnvQueryContext.h" },
		{ "ModuleRelativePath", "Public/AI/ArchEnemyEnvQueryContext.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::NewProp_TargetActorKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ArchEnemyEnvQueryContext.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::NewProp_TargetActorKeyName = { "TargetActorKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchEnemyEnvQueryContext, TargetActorKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::NewProp_TargetActorKeyName_MetaData), Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::NewProp_TargetActorKeyName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::NewProp_TargetActorKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchEnemyEnvQueryContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::ClassParams = {
		&UArchEnemyEnvQueryContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchEnemyEnvQueryContext()
	{
		if (!Z_Registration_Info_UClass_UArchEnemyEnvQueryContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchEnemyEnvQueryContext.OuterSingleton, Z_Construct_UClass_UArchEnemyEnvQueryContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchEnemyEnvQueryContext.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchEnemyEnvQueryContext>()
	{
		return UArchEnemyEnvQueryContext::StaticClass();
	}
	UArchEnemyEnvQueryContext::UArchEnemyEnvQueryContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchEnemyEnvQueryContext);
	UArchEnemyEnvQueryContext::~UArchEnemyEnvQueryContext() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchEnemyEnvQueryContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchEnemyEnvQueryContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchEnemyEnvQueryContext, UArchEnemyEnvQueryContext::StaticClass, TEXT("UArchEnemyEnvQueryContext"), &Z_Registration_Info_UClass_UArchEnemyEnvQueryContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchEnemyEnvQueryContext), 268618581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchEnemyEnvQueryContext_h_1850784783(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchEnemyEnvQueryContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchEnemyEnvQueryContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
