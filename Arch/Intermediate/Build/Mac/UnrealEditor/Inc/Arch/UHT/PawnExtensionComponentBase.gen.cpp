// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Components/PawnExtensionComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnExtensionComponentBase() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase();
	ARCH_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UPawnExtensionComponentBase::StaticRegisterNativesUPawnExtensionComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnExtensionComponentBase);
	UClass* Z_Construct_UClass_UPawnExtensionComponentBase_NoRegister()
	{
		return UPawnExtensionComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UPawnExtensionComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnExtensionComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtensionComponentBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnExtensionComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/PawnExtensionComponentBase.h" },
		{ "ModuleRelativePath", "Public/Components/PawnExtensionComponentBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnExtensionComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnExtensionComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnExtensionComponentBase_Statics::ClassParams = {
		&UPawnExtensionComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtensionComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnExtensionComponentBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPawnExtensionComponentBase()
	{
		if (!Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton, Z_Construct_UClass_UPawnExtensionComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPawnExtensionComponentBase.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UPawnExtensionComponentBase>()
	{
		return UPawnExtensionComponentBase::StaticClass();
	}
	UPawnExtensionComponentBase::UPawnExtensionComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnExtensionComponentBase);
	UPawnExtensionComponentBase::~UPawnExtensionComponentBase() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_PawnExtensionComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_PawnExtensionComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPawnExtensionComponentBase, UPawnExtensionComponentBase::StaticClass, TEXT("UPawnExtensionComponentBase"), &Z_Registration_Info_UClass_UPawnExtensionComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnExtensionComponentBase), 3026931900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_PawnExtensionComponentBase_h_3708008443(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_PawnExtensionComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_PawnExtensionComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
