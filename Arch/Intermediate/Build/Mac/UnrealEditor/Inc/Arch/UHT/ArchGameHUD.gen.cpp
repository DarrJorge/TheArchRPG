// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/UI/ArchGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchGameHUD() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchGameHUD();
	ARCH_API UClass* Z_Construct_UClass_AArchGameHUD_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UPlayerOverlayWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void AArchGameHUD::StaticRegisterNativesAArchGameHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchGameHUD);
	UClass* Z_Construct_UClass_AArchGameHUD_NoRegister()
	{
		return AArchGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AArchGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOverlayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerOverlayWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchGameHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/ArchGameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/ArchGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerHUDClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/ArchGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerHUDClass = { "PlayerHUDClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchGameHUD, PlayerHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerHUDClass_MetaData), Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerHUDClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerOverlayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ArchGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerOverlayWidget = { "PlayerOverlayWidget", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchGameHUD, PlayerOverlayWidget), Z_Construct_UClass_UPlayerOverlayWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerOverlayWidget_MetaData), Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerOverlayWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerHUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchGameHUD_Statics::NewProp_PlayerOverlayWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchGameHUD_Statics::ClassParams = {
		&AArchGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArchGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArchGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchGameHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchGameHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AArchGameHUD()
	{
		if (!Z_Registration_Info_UClass_AArchGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchGameHUD.OuterSingleton, Z_Construct_UClass_AArchGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchGameHUD.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchGameHUD>()
	{
		return AArchGameHUD::StaticClass();
	}
	AArchGameHUD::AArchGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchGameHUD);
	AArchGameHUD::~AArchGameHUD() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_ArchGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_ArchGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchGameHUD, AArchGameHUD::StaticClass, TEXT("AArchGameHUD"), &Z_Registration_Info_UClass_AArchGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchGameHUD), 1710479741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_ArchGameHUD_h_3837983570(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_ArchGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_ArchGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
