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
	ARCH_API UClass* Z_Construct_UClass_UArchUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchEnemyUIComponent::execRemoveEnemyDrawnWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEnemyDrawnWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchEnemyUIComponent::execRegisterEnemyWidget)
	{
		P_GET_OBJECT(UArchUserWidget,Z_Param_InWidgetToRegister);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterEnemyWidget(Z_Param_InWidgetToRegister);
		P_NATIVE_END;
	}
	void UArchEnemyUIComponent::StaticRegisterNativesUArchEnemyUIComponent()
	{
		UClass* Class = UArchEnemyUIComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterEnemyWidget", &UArchEnemyUIComponent::execRegisterEnemyWidget },
			{ "RemoveEnemyDrawnWidgets", &UArchEnemyUIComponent::execRemoveEnemyDrawnWidgets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics
	{
		struct ArchEnemyUIComponent_eventRegisterEnemyWidget_Parms
		{
			UArchUserWidget* InWidgetToRegister;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetToRegister_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetToRegister;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::NewProp_InWidgetToRegister_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::NewProp_InWidgetToRegister = { "InWidgetToRegister", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyUIComponent_eventRegisterEnemyWidget_Parms, InWidgetToRegister), Z_Construct_UClass_UArchUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::NewProp_InWidgetToRegister_MetaData), Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::NewProp_InWidgetToRegister_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::NewProp_InWidgetToRegister,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchEnemyUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchEnemyUIComponent, nullptr, "RegisterEnemyWidget", nullptr, nullptr, Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::ArchEnemyUIComponent_eventRegisterEnemyWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::ArchEnemyUIComponent_eventRegisterEnemyWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchEnemyUIComponent_RemoveEnemyDrawnWidgets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchEnemyUIComponent_RemoveEnemyDrawnWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchEnemyUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchEnemyUIComponent_RemoveEnemyDrawnWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchEnemyUIComponent, nullptr, "RemoveEnemyDrawnWidgets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchEnemyUIComponent_RemoveEnemyDrawnWidgets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchEnemyUIComponent_RemoveEnemyDrawnWidgets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UArchEnemyUIComponent_RemoveEnemyDrawnWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchEnemyUIComponent_RemoveEnemyDrawnWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchEnemyUIComponent);
	UClass* Z_Construct_UClass_UArchEnemyUIComponent_NoRegister()
	{
		return UArchEnemyUIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArchEnemyUIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchEnemyUIComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchEnemyUIComponent_RegisterEnemyWidget, "RegisterEnemyWidget" }, // 3836112331
		{ &Z_Construct_UFunction_UArchEnemyUIComponent_RemoveEnemyDrawnWidgets, "RemoveEnemyDrawnWidgets" }, // 1647842044
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchEnemyUIComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchEnemyUIComponent_Statics::Class_MetaDataParams[] = {
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UArchEnemyUIComponent, UArchEnemyUIComponent::StaticClass, TEXT("UArchEnemyUIComponent"), &Z_Registration_Info_UClass_UArchEnemyUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchEnemyUIComponent), 609148023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchEnemyUIComponent_h_3708485056(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchEnemyUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchEnemyUIComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
