// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Player/ArchPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchPlayerController() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchPlayerController();
	ARCH_API UClass* Z_Construct_UClass_AArchPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void AArchPlayerController::StaticRegisterNativesAArchPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchPlayerController);
	UClass* Z_Construct_UClass_AArchPlayerController_NoRegister()
	{
		return AArchPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AArchPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/ArchPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/ArchPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchPlayerController_Statics::ClassParams = {
		&AArchPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArchPlayerController()
	{
		if (!Z_Registration_Info_UClass_AArchPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchPlayerController.OuterSingleton, Z_Construct_UClass_AArchPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchPlayerController.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchPlayerController>()
	{
		return AArchPlayerController::StaticClass();
	}
	AArchPlayerController::AArchPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchPlayerController);
	AArchPlayerController::~AArchPlayerController() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchPlayerController, AArchPlayerController::StaticClass, TEXT("AArchPlayerController"), &Z_Registration_Info_UClass_AArchPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchPlayerController), 1198343576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_2406563199(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
