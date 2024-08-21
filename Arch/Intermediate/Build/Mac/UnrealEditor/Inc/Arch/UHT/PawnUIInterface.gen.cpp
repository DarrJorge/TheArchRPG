// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Interfaces/PawnUIInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnUIInterface() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UPawnUIInterface();
	ARCH_API UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UPawnUIInterface::StaticRegisterNativesUPawnUIInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnUIInterface);
	UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister()
	{
		return UPawnUIInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPawnUIInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnUIInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnUIInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PawnUIInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnUIInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPawnUIInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnUIInterface_Statics::ClassParams = {
		&UPawnUIInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUIInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnUIInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPawnUIInterface()
	{
		if (!Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton, Z_Construct_UClass_UPawnUIInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPawnUIInterface.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UPawnUIInterface>()
	{
		return UPawnUIInterface::StaticClass();
	}
	UPawnUIInterface::UPawnUIInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnUIInterface);
	UPawnUIInterface::~UPawnUIInterface() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPawnUIInterface, UPawnUIInterface::StaticClass, TEXT("UPawnUIInterface"), &Z_Registration_Info_UClass_UPawnUIInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnUIInterface), 3605390887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_3057508744(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Interfaces_PawnUIInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
