// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Components/Input/ArchInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchInputComponent() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchInputComponent();
	ARCH_API UClass* Z_Construct_UClass_UArchInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UArchInputComponent::StaticRegisterNativesUArchInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchInputComponent);
	UClass* Z_Construct_UClass_UArchInputComponent_NoRegister()
	{
		return UArchInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArchInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchInputComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchInputComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Components/Input/ArchInputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Input/ArchInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchInputComponent_Statics::ClassParams = {
		&UArchInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchInputComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchInputComponent()
	{
		if (!Z_Registration_Info_UClass_UArchInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchInputComponent.OuterSingleton, Z_Construct_UClass_UArchInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchInputComponent.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchInputComponent>()
	{
		return UArchInputComponent::StaticClass();
	}
	UArchInputComponent::UArchInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchInputComponent);
	UArchInputComponent::~UArchInputComponent() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Input_ArchInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Input_ArchInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchInputComponent, UArchInputComponent::StaticClass, TEXT("UArchInputComponent"), &Z_Registration_Info_UClass_UArchInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchInputComponent), 2029579860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Input_ArchInputComponent_h_3737792519(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Input_ArchInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Input_ArchInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
