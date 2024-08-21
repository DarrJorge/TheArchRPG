// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Components/UI/ArchHeroUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchHeroUIComponent() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchHeroUIComponent();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroUIComponent_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchUIComponentBase();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics
	{
		struct _Script_Arch_eventOnEquippedWeaponChanged_Parms
		{
			TSoftObjectPtr<UTexture2D> WeaponIcon;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::NewProp_WeaponIcon = { "WeaponIcon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Arch_eventOnEquippedWeaponChanged_Parms, WeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::NewProp_WeaponIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Arch, nullptr, "OnEquippedWeaponChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::_Script_Arch_eventOnEquippedWeaponChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::_Script_Arch_eventOnEquippedWeaponChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEquippedWeaponChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedWeaponChanged, const TSoftObjectPtr<UTexture2D>& WeaponIcon)
{
	struct _Script_Arch_eventOnEquippedWeaponChanged_Parms
	{
		TSoftObjectPtr<UTexture2D> WeaponIcon;
	};
	_Script_Arch_eventOnEquippedWeaponChanged_Parms Parms;
	Parms.WeaponIcon=WeaponIcon;
	OnEquippedWeaponChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UArchHeroUIComponent::StaticRegisterNativesUArchHeroUIComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchHeroUIComponent);
	UClass* Z_Construct_UClass_UArchHeroUIComponent_NoRegister()
	{
		return UArchHeroUIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArchHeroUIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRageChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRageChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEquippedWeaponChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquippedWeaponChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchHeroUIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchUIComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/UI/ArchHeroUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged = { "OnRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroUIComponent, OnRageChanged), Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged_MetaData), Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged_MetaData) }; // 2939459743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/UI/ArchHeroUIComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged = { "OnEquippedWeaponChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroUIComponent, OnEquippedWeaponChanged), Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged_MetaData), Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged_MetaData) }; // 75198451
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchHeroUIComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnRageChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroUIComponent_Statics::NewProp_OnEquippedWeaponChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchHeroUIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchHeroUIComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchHeroUIComponent_Statics::ClassParams = {
		&UArchHeroUIComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchHeroUIComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchHeroUIComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroUIComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchHeroUIComponent()
	{
		if (!Z_Registration_Info_UClass_UArchHeroUIComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchHeroUIComponent.OuterSingleton, Z_Construct_UClass_UArchHeroUIComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchHeroUIComponent.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchHeroUIComponent>()
	{
		return UArchHeroUIComponent::StaticClass();
	}
	UArchHeroUIComponent::UArchHeroUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchHeroUIComponent);
	UArchHeroUIComponent::~UArchHeroUIComponent() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchHeroUIComponent, UArchHeroUIComponent::StaticClass, TEXT("UArchHeroUIComponent"), &Z_Registration_Info_UClass_UArchHeroUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchHeroUIComponent), 2042268145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_1420490094(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_UI_ArchHeroUIComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
