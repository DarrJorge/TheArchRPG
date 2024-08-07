// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Components/Combat/EnemyCombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCombatComponent() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UCombatComponentBase();
	ARCH_API UClass* Z_Construct_UClass_UEnemyCombatComponent();
	ARCH_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UEnemyCombatComponent::StaticRegisterNativesUEnemyCombatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyCombatComponent);
	UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister()
	{
		return UEnemyCombatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyCombatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyCombatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Combat/EnemyCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Combat/EnemyCombatComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyCombatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyCombatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyCombatComponent_Statics::ClassParams = {
		&UEnemyCombatComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyCombatComponent()
	{
		if (!Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton, Z_Construct_UClass_UEnemyCombatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UEnemyCombatComponent>()
	{
		return UEnemyCombatComponent::StaticClass();
	}
	UEnemyCombatComponent::UEnemyCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyCombatComponent);
	UEnemyCombatComponent::~UEnemyCombatComponent() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_EnemyCombatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_EnemyCombatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyCombatComponent, UEnemyCombatComponent::StaticClass, TEXT("UEnemyCombatComponent"), &Z_Registration_Info_UClass_UEnemyCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyCombatComponent), 3541716260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_EnemyCombatComponent_h_1753040973(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_EnemyCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_EnemyCombatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
