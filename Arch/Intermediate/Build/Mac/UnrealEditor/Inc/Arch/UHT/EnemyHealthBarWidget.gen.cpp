// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/UI/Widgets/EnemyHealthBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHealthBarWidget() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UEnemyHealthBarWidget();
	ARCH_API UClass* Z_Construct_UClass_UEnemyHealthBarWidget_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UEnemyUIWidget();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyHealthBarWidget::execOnHealthChangedHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChangedHandler(Z_Param_NewValue);
		P_NATIVE_END;
	}
	struct EnemyHealthBarWidget_eventOnHealthChangedEvent_Parms
	{
		float NewValue;
	};
	static FName NAME_UEnemyHealthBarWidget_OnHealthChangedEvent = FName(TEXT("OnHealthChangedEvent"));
	void UEnemyHealthBarWidget::OnHealthChangedEvent(float NewValue)
	{
		EnemyHealthBarWidget_eventOnHealthChangedEvent_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UEnemyHealthBarWidget_OnHealthChangedEvent),&Parms);
	}
	void UEnemyHealthBarWidget::StaticRegisterNativesUEnemyHealthBarWidget()
	{
		UClass* Class = UEnemyHealthBarWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChangedHandler", &UEnemyHealthBarWidget::execOnHealthChangedHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyHealthBarWidget_eventOnHealthChangedEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/EnemyHealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyHealthBarWidget, nullptr, "OnHealthChangedEvent", nullptr, nullptr, Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::PropPointers), sizeof(EnemyHealthBarWidget_eventOnHealthChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyHealthBarWidget_eventOnHealthChangedEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics
	{
		struct EnemyHealthBarWidget_eventOnHealthChangedHandler_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyHealthBarWidget_eventOnHealthChangedHandler_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/EnemyHealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyHealthBarWidget, nullptr, "OnHealthChangedHandler", nullptr, nullptr, Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::EnemyHealthBarWidget_eventOnHealthChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::EnemyHealthBarWidget_eventOnHealthChangedHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyHealthBarWidget);
	UClass* Z_Construct_UClass_UEnemyHealthBarWidget_NoRegister()
	{
		return UEnemyHealthBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyHealthBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRateDisplayBar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRateDisplayBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyHealthBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnemyUIWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyHealthBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedEvent, "OnHealthChangedEvent" }, // 1171987942
		{ &Z_Construct_UFunction_UEnemyHealthBarWidget_OnHealthChangedHandler, "OnHealthChangedHandler" }, // 3446400618
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyHealthBarWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/EnemyHealthBarWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/EnemyHealthBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_TimeRateDisplayBar_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/EnemyHealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_TimeRateDisplayBar = { "TimeRateDisplayBar", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyHealthBarWidget, TimeRateDisplayBar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_TimeRateDisplayBar_MetaData), Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_TimeRateDisplayBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyHealthBarWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyHealthBarWidget_Statics::NewProp_TimeRateDisplayBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyHealthBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyHealthBarWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyHealthBarWidget_Statics::ClassParams = {
		&UEnemyHealthBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyHealthBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyHealthBarWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBarWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyHealthBarWidget()
	{
		if (!Z_Registration_Info_UClass_UEnemyHealthBarWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyHealthBarWidget.OuterSingleton, Z_Construct_UClass_UEnemyHealthBarWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyHealthBarWidget.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UEnemyHealthBarWidget>()
	{
		return UEnemyHealthBarWidget::StaticClass();
	}
	UEnemyHealthBarWidget::UEnemyHealthBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyHealthBarWidget);
	UEnemyHealthBarWidget::~UEnemyHealthBarWidget() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyHealthBarWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyHealthBarWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyHealthBarWidget, UEnemyHealthBarWidget::StaticClass, TEXT("UEnemyHealthBarWidget"), &Z_Registration_Info_UClass_UEnemyHealthBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyHealthBarWidget), 1776122466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyHealthBarWidget_h_1032259836(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyHealthBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyHealthBarWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
