// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Interfaces/PawnCombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnCombatInterface() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UPawnCombatInterface();
	ARCH_API UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UPawnCombatInterface::StaticRegisterNativesUPawnCombatInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnCombatInterface);
	UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister()
	{
		return UPawnCombatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPawnCombatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnCombatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnCombatInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PawnCombatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnCombatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPawnCombatInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnCombatInterface_Statics::ClassParams = {
		&UPawnCombatInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnCombatInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPawnCombatInterface()
	{
		if (!Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton, Z_Construct_UClass_UPawnCombatInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UPawnCombatInterface>()
	{
		return UPawnCombatInterface::StaticClass();
	}
	UPawnCombatInterface::UPawnCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnCombatInterface);
	UPawnCombatInterface::~UPawnCombatInterface() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnCombatInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnCombatInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPawnCombatInterface, UPawnCombatInterface::StaticClass, TEXT("UPawnCombatInterface"), &Z_Registration_Info_UClass_UPawnCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnCombatInterface), 1653447823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnCombatInterface_h_4093347845(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnCombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnCombatInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
