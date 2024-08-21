// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Components/UI/ArchEnemyUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchEnemyUIComponent() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyUIComponent();
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyUIComponent_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchUIComponentBase();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UArchEnemyUIComponent::StaticRegisterNativesUArchEnemyUIComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchEnemyUIComponent);
	UClass* Z_Construct_UClass_UArchEnemyUIComponent_NoRegister()
	{
		return UArchEnemyUIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArchEnemyUIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchEnemyUIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchUIComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyUIComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchEnemyUIComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/UI/ArchEnemyUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/ArchEnemyUIComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchEnemyUIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchEnemyUIComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchEnemyUIComponent_Statics::ClassParams = {
		&UArchEnemyUIComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchEnemyUIComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchEnemyUIComponent()
	{
		if (!Z_Registration_Info_UClass_UArchEnemyUIComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchEnemyUIComponent.OuterSingleton, Z_Construct_UClass_UArchEnemyUIComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchEnemyUIComponent.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchEnemyUIComponent>()
	{
		return UArchEnemyUIComponent::StaticClass();
	}
	UArchEnemyUIComponent::UArchEnemyUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchEnemyUIComponent);
	UArchEnemyUIComponent::~UArchEnemyUIComponent() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchEnemyUIComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchEnemyUIComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchEnemyUIComponent, UArchEnemyUIComponent::StaticClass, TEXT("UArchEnemyUIComponent"), &Z_Registration_Info_UClass_UArchEnemyUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchEnemyUIComponent), 1369032609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchEnemyUIComponent_h_4263929980(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchEnemyUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchEnemyUIComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
