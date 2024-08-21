// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/UI/Widgets/ArchUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchUserWidget() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchUserWidget();
	ARCH_API UClass* Z_Construct_UClass_UArchUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UArchUserWidget::StaticRegisterNativesUArchUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchUserWidget);
	UClass* Z_Construct_UClass_UArchUserWidget_NoRegister()
	{
		return UArchUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UArchUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/ArchUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchUserWidget_Statics::ClassParams = {
		&UArchUserWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchUserWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchUserWidget()
	{
		if (!Z_Registration_Info_UClass_UArchUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchUserWidget.OuterSingleton, Z_Construct_UClass_UArchUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchUserWidget.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchUserWidget>()
	{
		return UArchUserWidget::StaticClass();
	}
	UArchUserWidget::UArchUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchUserWidget);
	UArchUserWidget::~UArchUserWidget() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchUserWidget, UArchUserWidget::StaticClass, TEXT("UArchUserWidget"), &Z_Registration_Info_UClass_UArchUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchUserWidget), 2547239410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchUserWidget_h_2064098964(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
