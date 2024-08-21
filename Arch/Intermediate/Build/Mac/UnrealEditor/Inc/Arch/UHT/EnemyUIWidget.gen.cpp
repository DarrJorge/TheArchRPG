// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/UI/Widgets/EnemyUIWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyUIWidget() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyUIComponent_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchUserWidget();
	ARCH_API UClass* Z_Construct_UClass_UEnemyUIWidget();
	ARCH_API UClass* Z_Construct_UClass_UEnemyUIWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyUIWidget::execInitEnemyCreatedWidget)
	{
		P_GET_OBJECT(AActor,Z_Param_OwningEnemyActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitEnemyCreatedWidget(Z_Param_OwningEnemyActor);
		P_NATIVE_END;
	}
	struct EnemyUIWidget_eventOnOwningEnemyUIComponentInitialized_Parms
	{
		UArchEnemyUIComponent* OwningEnemyUIComponent;
	};
	static FName NAME_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized = FName(TEXT("OnOwningEnemyUIComponentInitialized"));
	void UEnemyUIWidget::OnOwningEnemyUIComponentInitialized(UArchEnemyUIComponent* OwningEnemyUIComponent)
	{
		EnemyUIWidget_eventOnOwningEnemyUIComponentInitialized_Parms Parms;
		Parms.OwningEnemyUIComponent=OwningEnemyUIComponent;
		ProcessEvent(FindFunctionChecked(NAME_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized),&Parms);
	}
	void UEnemyUIWidget::StaticRegisterNativesUEnemyUIWidget()
	{
		UClass* Class = UEnemyUIWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitEnemyCreatedWidget", &UEnemyUIWidget::execInitEnemyCreatedWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics
	{
		struct EnemyUIWidget_eventInitEnemyCreatedWidget_Parms
		{
			AActor* OwningEnemyActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningEnemyActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::NewProp_OwningEnemyActor = { "OwningEnemyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyUIWidget_eventInitEnemyCreatedWidget_Parms, OwningEnemyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::NewProp_OwningEnemyActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/EnemyUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyUIWidget, nullptr, "InitEnemyCreatedWidget", nullptr, nullptr, Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::EnemyUIWidget_eventInitEnemyCreatedWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::EnemyUIWidget_eventInitEnemyCreatedWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningEnemyUIComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningEnemyUIComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent = { "OwningEnemyUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyUIWidget_eventOnOwningEnemyUIComponentInitialized_Parms, OwningEnemyUIComponent), Z_Construct_UClass_UArchEnemyUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent_MetaData), Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwningEnemyUIComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning Enemy UI Component Initialized" },
		{ "ModuleRelativePath", "Public/UI/Widgets/EnemyUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyUIWidget, nullptr, "OnOwningEnemyUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::PropPointers), sizeof(EnemyUIWidget_eventOnOwningEnemyUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyUIWidget_eventOnOwningEnemyUIComponentInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyUIWidget);
	UClass* Z_Construct_UClass_UEnemyUIWidget_NoRegister()
	{
		return UEnemyUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyUIWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyUIWidget_InitEnemyCreatedWidget, "InitEnemyCreatedWidget" }, // 2297910134
		{ &Z_Construct_UFunction_UEnemyUIWidget_OnOwningEnemyUIComponentInitialized, "OnOwningEnemyUIComponentInitialized" }, // 714919079
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyUIWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/EnemyUIWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/EnemyUIWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyUIWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyUIWidget_Statics::ClassParams = {
		&UEnemyUIWidget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyUIWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyUIWidget()
	{
		if (!Z_Registration_Info_UClass_UEnemyUIWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyUIWidget.OuterSingleton, Z_Construct_UClass_UEnemyUIWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyUIWidget.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UEnemyUIWidget>()
	{
		return UEnemyUIWidget::StaticClass();
	}
	UEnemyUIWidget::UEnemyUIWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyUIWidget);
	UEnemyUIWidget::~UEnemyUIWidget() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyUIWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyUIWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyUIWidget, UEnemyUIWidget::StaticClass, TEXT("UEnemyUIWidget"), &Z_Registration_Info_UClass_UEnemyUIWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyUIWidget), 3599600924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyUIWidget_h_4229286847(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyUIWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_EnemyUIWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
