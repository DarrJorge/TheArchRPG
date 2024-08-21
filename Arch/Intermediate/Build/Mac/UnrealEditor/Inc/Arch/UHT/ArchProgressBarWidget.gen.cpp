// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/UI/Widgets/ArchProgressBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchProgressBarWidget() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchProgressBarWidget();
	ARCH_API UClass* Z_Construct_UClass_UArchProgressBarWidget_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchUserWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchProgressBarWidget::execSetProgressPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgressPercent(Z_Param_InPercent);
		P_NATIVE_END;
	}
	void UArchProgressBarWidget::StaticRegisterNativesUArchProgressBarWidget()
	{
		UClass* Class = UArchProgressBarWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetProgressPercent", &UArchProgressBarWidget::execSetProgressPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics
	{
		struct ArchProgressBarWidget_eventSetProgressPercent_Parms
		{
			float InPercent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::NewProp_InPercent = { "InPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProgressBarWidget_eventSetProgressPercent_Parms, InPercent), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::NewProp_InPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchProgressBarWidget, nullptr, "SetProgressPercent", nullptr, nullptr, Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::ArchProgressBarWidget_eventSetProgressPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::ArchProgressBarWidget_eventSetProgressPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchProgressBarWidget);
	UClass* Z_Construct_UClass_UArchProgressBarWidget_NoRegister()
	{
		return UArchProgressBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UArchProgressBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChangeableColorInBar_MetaData[];
#endif
		static void NewProp_bChangeableColorInBar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangeableColorInBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentWarningColorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentWarningColorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentCriticalColorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentCriticalColorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusColorPreview_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatusColorPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusColorDefault_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatusColorDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusColorWarning_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatusColorWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusColorCritical_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatusColorCritical;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchProgressBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchProgressBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchProgressBarWidget_SetProgressPercent, "SetProgressPercent" }, // 1816802442
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/ArchProgressBarWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ArchProgressBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchProgressBarWidget, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_ProgressBar_MetaData), Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_ProgressBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_bChangeableColorInBar_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	void Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_bChangeableColorInBar_SetBit(void* Obj)
	{
		((UArchProgressBarWidget*)Obj)->bChangeableColorInBar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_bChangeableColorInBar = { "bChangeableColorInBar", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchProgressBarWidget), &Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_bChangeableColorInBar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_bChangeableColorInBar_MetaData), Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_bChangeableColorInBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentWarningColorThreshold_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentWarningColorThreshold = { "PercentWarningColorThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchProgressBarWidget, PercentWarningColorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentWarningColorThreshold_MetaData), Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentWarningColorThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentCriticalColorThreshold_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentCriticalColorThreshold = { "PercentCriticalColorThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchProgressBarWidget, PercentCriticalColorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentCriticalColorThreshold_MetaData), Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentCriticalColorThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorPreview_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorPreview = { "StatusColorPreview", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchProgressBarWidget, StatusColorPreview), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorPreview_MetaData), Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorPreview_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorDefault_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorDefault = { "StatusColorDefault", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchProgressBarWidget, StatusColorDefault), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorDefault_MetaData), Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorDefault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorWarning_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorWarning = { "StatusColorWarning", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchProgressBarWidget, StatusColorWarning), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorWarning_MetaData), Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorWarning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorCritical_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/ArchProgressBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorCritical = { "StatusColorCritical", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchProgressBarWidget, StatusColorCritical), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorCritical_MetaData), Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorCritical_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchProgressBarWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_ProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_bChangeableColorInBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentWarningColorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_PercentCriticalColorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchProgressBarWidget_Statics::NewProp_StatusColorCritical,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchProgressBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchProgressBarWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchProgressBarWidget_Statics::ClassParams = {
		&UArchProgressBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchProgressBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchProgressBarWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchProgressBarWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchProgressBarWidget()
	{
		if (!Z_Registration_Info_UClass_UArchProgressBarWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchProgressBarWidget.OuterSingleton, Z_Construct_UClass_UArchProgressBarWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchProgressBarWidget.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchProgressBarWidget>()
	{
		return UArchProgressBarWidget::StaticClass();
	}
	UArchProgressBarWidget::UArchProgressBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchProgressBarWidget);
	UArchProgressBarWidget::~UArchProgressBarWidget() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchProgressBarWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchProgressBarWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchProgressBarWidget, UArchProgressBarWidget::StaticClass, TEXT("UArchProgressBarWidget"), &Z_Registration_Info_UClass_UArchProgressBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchProgressBarWidget), 2076230806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchProgressBarWidget_h_667203722(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchProgressBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_ArchProgressBarWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
