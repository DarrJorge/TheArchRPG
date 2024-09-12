// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtendEditorLibrary/Public/AssetActions/ExtendAssetAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtendAssetAction() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
	EXTENDEDITORLIBRARY_API UClass* Z_Construct_UClass_UExtendAssetAction();
	EXTENDEDITORLIBRARY_API UClass* Z_Construct_UClass_UExtendAssetAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ExtendEditorLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UExtendAssetAction::execAddPrefixes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPrefixes();
		P_NATIVE_END;
	}
	void UExtendAssetAction::StaticRegisterNativesUExtendAssetAction()
	{
		UClass* Class = UExtendAssetAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPrefixes", &UExtendAssetAction::execAddPrefixes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExtendAssetAction_AddPrefixes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendAssetAction_AddPrefixes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/ExtendAssetAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendAssetAction_AddPrefixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendAssetAction, nullptr, "AddPrefixes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendAssetAction_AddPrefixes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendAssetAction_AddPrefixes_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UExtendAssetAction_AddPrefixes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendAssetAction_AddPrefixes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtendAssetAction);
	UClass* Z_Construct_UClass_UExtendAssetAction_NoRegister()
	{
		return UExtendAssetAction::StaticClass();
	}
	struct Z_Construct_UClass_UExtendAssetAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtendAssetAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetActionUtility,
		(UObject* (*)())Z_Construct_UPackage__Script_ExtendEditorLibrary,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendAssetAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UExtendAssetAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExtendAssetAction_AddPrefixes, "AddPrefixes" }, // 1731168520
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendAssetAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtendAssetAction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AssetActions/ExtendAssetAction.h" },
		{ "ModuleRelativePath", "Public/AssetActions/ExtendAssetAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtendAssetAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtendAssetAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtendAssetAction_Statics::ClassParams = {
		&UExtendAssetAction::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendAssetAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UExtendAssetAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UExtendAssetAction()
	{
		if (!Z_Registration_Info_UClass_UExtendAssetAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtendAssetAction.OuterSingleton, Z_Construct_UClass_UExtendAssetAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtendAssetAction.OuterSingleton;
	}
	template<> EXTENDEDITORLIBRARY_API UClass* StaticClass<UExtendAssetAction>()
	{
		return UExtendAssetAction::StaticClass();
	}
	UExtendAssetAction::UExtendAssetAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtendAssetAction);
	UExtendAssetAction::~UExtendAssetAction() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Plugins_ExtendEditorLibrary_Source_ExtendEditorLibrary_Public_AssetActions_ExtendAssetAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Plugins_ExtendEditorLibrary_Source_ExtendEditorLibrary_Public_AssetActions_ExtendAssetAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExtendAssetAction, UExtendAssetAction::StaticClass, TEXT("UExtendAssetAction"), &Z_Registration_Info_UClass_UExtendAssetAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtendAssetAction), 2820974148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Plugins_ExtendEditorLibrary_Source_ExtendEditorLibrary_Public_AssetActions_ExtendAssetAction_h_170784263(TEXT("/Script/ExtendEditorLibrary"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Plugins_ExtendEditorLibrary_Source_ExtendEditorLibrary_Public_AssetActions_ExtendAssetAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Plugins_ExtendEditorLibrary_Source_ExtendEditorLibrary_Public_AssetActions_ExtendAssetAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
