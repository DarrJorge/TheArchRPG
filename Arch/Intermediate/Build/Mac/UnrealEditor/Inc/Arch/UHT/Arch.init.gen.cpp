// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArch_init() {}
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature();
	ARCH_API UFunction* Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Arch;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Arch()
	{
		if (!Z_Registration_Info_UPackage__Script_Arch.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Arch_OnEquippedWeaponChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Arch_OnPercentChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Arch",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDC6D5A72,
				0xDF6B0AE8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Arch.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Arch.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Arch(Z_Construct_UPackage__Script_Arch, TEXT("/Script/Arch"), Z_Registration_Info_UPackage__Script_Arch, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDC6D5A72, 0xDF6B0AE8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
