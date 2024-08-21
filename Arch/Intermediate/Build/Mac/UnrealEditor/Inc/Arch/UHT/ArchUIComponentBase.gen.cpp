// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Components/UI/ArchUIComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchUIComponentBase() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchUIComponentBase();
	ARCH_API UClass* Z_Construct_UClass_UArchUIComponentBase_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_Arch_eventOnPercentChangedDelegate_Parms
		{
			float NewPercent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::NewProp_NewPercent = { "NewPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnPercentChangedDelegate_Parms, NewPercent), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::NewProp_NewPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchUIComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arch, nullptr, "OnPercentChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::_Script_Arch_eventOnPercentChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::_Script_Arch_eventOnPercentChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPercentChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPercentChangedDelegate, float NewPercent)
{
	struct _Script_Arch_eventOnPercentChangedDelegate_Parms
	{
		float NewPercent;
	};
	_Script_Arch_eventOnPercentChangedDelegate_Parms Parms;
	Parms.NewPercent=NewPercent;
	OnPercentChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UArchUIComponentBase::StaticRegisterNativesUArchUIComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchUIComponentBase);
	UClass* Z_Construct_UClass_UArchUIComponentBase_NoRegister()
	{
		return UArchUIComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UArchUIComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchUIComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnExtensionComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchUIComponentBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchUIComponentBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/UI/ArchUIComponentBase.h" },
		{ "ModuleRelativePath", "Public/Components/UI/ArchUIComponentBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchUIComponentBase_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchUIComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArchUIComponentBase_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchUIComponentBase, OnHealthChanged), Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchUIComponentBase_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_UArchUIComponentBase_Statics::NewProp_OnHealthChanged_MetaData) }; // 2939459743
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchUIComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchUIComponentBase_Statics::NewProp_OnHealthChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchUIComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchUIComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchUIComponentBase_Statics::ClassParams = {
		&UArchUIComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchUIComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchUIComponentBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchUIComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchUIComponentBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchUIComponentBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchUIComponentBase()
	{
		if (!Z_Registration_Info_UClass_UArchUIComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchUIComponentBase.OuterSingleton, Z_Construct_UClass_UArchUIComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchUIComponentBase.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchUIComponentBase>()
	{
		return UArchUIComponentBase::StaticClass();
	}
	UArchUIComponentBase::UArchUIComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchUIComponentBase);
	UArchUIComponentBase::~UArchUIComponentBase() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchUIComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchUIComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchUIComponentBase, UArchUIComponentBase::StaticClass, TEXT("UArchUIComponentBase"), &Z_Registration_Info_UClass_UArchUIComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchUIComponentBase), 3139008647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchUIComponentBase_h_1924207872(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchUIComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchUIComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
