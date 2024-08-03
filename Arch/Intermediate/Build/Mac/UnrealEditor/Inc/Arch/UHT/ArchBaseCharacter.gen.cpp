// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Characters/ArchBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchBaseCharacter() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchBaseCharacter();
	ARCH_API UClass* Z_Construct_UClass_AArchBaseCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void AArchBaseCharacter::StaticRegisterNativesAArchBaseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchBaseCharacter);
	UClass* Z_Construct_UClass_AArchBaseCharacter_NoRegister()
	{
		return AArchBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArchBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchBaseCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/ArchBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/ArchBaseCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchBaseCharacter_Statics::ClassParams = {
		&AArchBaseCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchBaseCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArchBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_AArchBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchBaseCharacter.OuterSingleton, Z_Construct_UClass_AArchBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchBaseCharacter.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchBaseCharacter>()
	{
		return AArchBaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchBaseCharacter);
	AArchBaseCharacter::~AArchBaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchBaseCharacter, AArchBaseCharacter::StaticClass, TEXT("AArchBaseCharacter"), &Z_Registration_Info_UClass_AArchBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchBaseCharacter), 2875718965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchBaseCharacter_h_2750479400(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
