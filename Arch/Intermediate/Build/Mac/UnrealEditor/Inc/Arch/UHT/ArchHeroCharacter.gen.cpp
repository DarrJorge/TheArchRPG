// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Characters/ArchHeroCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchHeroCharacter() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchBaseCharacter();
	ARCH_API UClass* Z_Construct_UClass_AArchHeroCharacter();
	ARCH_API UClass* Z_Construct_UClass_AArchHeroCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void AArchHeroCharacter::StaticRegisterNativesAArchHeroCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchHeroCharacter);
	UClass* Z_Construct_UClass_AArchHeroCharacter_NoRegister()
	{
		return AArchHeroCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArchHeroCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchHeroCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArchBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchHeroCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchHeroCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/ArchHeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/ArchHeroCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchHeroCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchHeroCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchHeroCharacter_Statics::ClassParams = {
		&AArchHeroCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchHeroCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArchHeroCharacter()
	{
		if (!Z_Registration_Info_UClass_AArchHeroCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchHeroCharacter.OuterSingleton, Z_Construct_UClass_AArchHeroCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchHeroCharacter.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchHeroCharacter>()
	{
		return AArchHeroCharacter::StaticClass();
	}
	AArchHeroCharacter::AArchHeroCharacter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchHeroCharacter);
	AArchHeroCharacter::~AArchHeroCharacter() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchHeroCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchHeroCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchHeroCharacter, AArchHeroCharacter::StaticClass, TEXT("AArchHeroCharacter"), &Z_Registration_Info_UClass_AArchHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchHeroCharacter), 2473992631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchHeroCharacter_h_1207987356(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchHeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchHeroCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
