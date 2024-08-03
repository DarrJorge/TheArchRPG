// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/ArchGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchGameModeBase() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchGameModeBase();
	ARCH_API UClass* Z_Construct_UClass_AArchGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void AArchGameModeBase::StaticRegisterNativesAArchGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchGameModeBase);
	UClass* Z_Construct_UClass_AArchGameModeBase_NoRegister()
	{
		return AArchGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArchGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArchGameModeBase.h" },
		{ "ModuleRelativePath", "Public/ArchGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchGameModeBase_Statics::ClassParams = {
		&AArchGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArchGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AArchGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchGameModeBase.OuterSingleton, Z_Construct_UClass_AArchGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchGameModeBase.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchGameModeBase>()
	{
		return AArchGameModeBase::StaticClass();
	}
	AArchGameModeBase::AArchGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchGameModeBase);
	AArchGameModeBase::~AArchGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchGameModeBase, AArchGameModeBase::StaticClass, TEXT("AArchGameModeBase"), &Z_Registration_Info_UClass_AArchGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchGameModeBase), 3161956861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchGameModeBase_h_182413227(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
