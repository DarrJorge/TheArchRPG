// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Items/Weapons/ArchHeroWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchHeroWeapon() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchHeroWeapon();
	ARCH_API UClass* Z_Construct_UClass_AArchHeroWeapon_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_AArchWeaponBase();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void AArchHeroWeapon::StaticRegisterNativesAArchHeroWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchHeroWeapon);
	UClass* Z_Construct_UClass_AArchHeroWeapon_NoRegister()
	{
		return AArchHeroWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AArchHeroWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchHeroWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArchWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchHeroWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchHeroWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Weapons/ArchHeroWeapon.h" },
		{ "ModuleRelativePath", "Public/Items/Weapons/ArchHeroWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchHeroWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchHeroWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchHeroWeapon_Statics::ClassParams = {
		&AArchHeroWeapon::StaticClass,
		"Engine",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchHeroWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchHeroWeapon_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArchHeroWeapon()
	{
		if (!Z_Registration_Info_UClass_AArchHeroWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchHeroWeapon.OuterSingleton, Z_Construct_UClass_AArchHeroWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchHeroWeapon.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchHeroWeapon>()
	{
		return AArchHeroWeapon::StaticClass();
	}
	AArchHeroWeapon::AArchHeroWeapon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchHeroWeapon);
	AArchHeroWeapon::~AArchHeroWeapon() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchHeroWeapon, AArchHeroWeapon::StaticClass, TEXT("AArchHeroWeapon"), &Z_Registration_Info_UClass_AArchHeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchHeroWeapon), 2368561914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_1820581345(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
