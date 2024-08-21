// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/UI/Widgets/HeroUIWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroUIWidget() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchHeroUIComponent_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchUserWidget();
	ARCH_API UClass* Z_Construct_UClass_UHeroUIWidget();
	ARCH_API UClass* Z_Construct_UClass_UHeroUIWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	struct HeroUIWidget_eventOnOwningHeroUIComponentInitialized_Parms
	{
		UArchHeroUIComponent* OwningHeroUIComponent;
	};
	static FName NAME_UHeroUIWidget_OnOwningHeroUIComponentInitialized = FName(TEXT("OnOwningHeroUIComponentInitialized"));
	void UHeroUIWidget::OnOwningHeroUIComponentInitialized(UArchHeroUIComponent* OwningHeroUIComponent)
	{
		HeroUIWidget_eventOnOwningHeroUIComponentInitialized_Parms Parms;
		Parms.OwningHeroUIComponent=OwningHeroUIComponent;
		ProcessEvent(FindFunctionChecked(NAME_UHeroUIWidget_OnOwningHeroUIComponentInitialized),&Parms);
	}
	void UHeroUIWidget::StaticRegisterNativesUHeroUIWidget()
	{
	}
	struct Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroUIComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroUIComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent = { "OwningHeroUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroUIWidget_eventOnOwningHeroUIComponentInitialized_Parms, OwningHeroUIComponent), Z_Construct_UClass_UArchHeroUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent_MetaData), Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroUIComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning Hero UI Component Initialized" },
		{ "ModuleRelativePath", "Public/UI/Widgets/HeroUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroUIWidget, nullptr, "OnOwningHeroUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::PropPointers), sizeof(HeroUIWidget_eventOnOwningHeroUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(HeroUIWidget_eventOnOwningHeroUIComponentInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroUIWidget);
	UClass* Z_Construct_UClass_UHeroUIWidget_NoRegister()
	{
		return UHeroUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHeroUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroUIWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroUIWidget_OnOwningHeroUIComponentInitialized, "OnOwningHeroUIComponentInitialized" }, // 3649639172
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroUIWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/HeroUIWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/HeroUIWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroUIWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroUIWidget_Statics::ClassParams = {
		&UHeroUIWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroUIWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroUIWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UHeroUIWidget()
	{
		if (!Z_Registration_Info_UClass_UHeroUIWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroUIWidget.OuterSingleton, Z_Construct_UClass_UHeroUIWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeroUIWidget.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UHeroUIWidget>()
	{
		return UHeroUIWidget::StaticClass();
	}
	UHeroUIWidget::UHeroUIWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroUIWidget);
	UHeroUIWidget::~UHeroUIWidget() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_HeroUIWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_HeroUIWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeroUIWidget, UHeroUIWidget::StaticClass, TEXT("UHeroUIWidget"), &Z_Registration_Info_UClass_UHeroUIWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroUIWidget), 2131991337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_HeroUIWidget_h_2601472198(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_HeroUIWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_HeroUIWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
