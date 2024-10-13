// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Items/PickUps/ArchForceStoneBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchForceStoneBase() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchForceStoneBase();
	ARCH_API UClass* Z_Construct_UClass_AArchForceStoneBase_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_AArchPickUpBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void AArchForceStoneBase::StaticRegisterNativesAArchForceStoneBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchForceStoneBase);
	UClass* Z_Construct_UClass_AArchForceStoneBase_NoRegister()
	{
		return AArchForceStoneBase::StaticClass();
	}
	struct Z_Construct_UClass_AArchForceStoneBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoneGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StoneGameplayEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickUpSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickUpFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpFX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchForceStoneBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArchPickUpBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchForceStoneBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchForceStoneBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/PickUps/ArchForceStoneBase.h" },
		{ "ModuleRelativePath", "Public/Items/PickUps/ArchForceStoneBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_StoneGameplayEffectClass_MetaData[] = {
		{ "Category", "ArchForceStoneBase" },
		{ "ModuleRelativePath", "Public/Items/PickUps/ArchForceStoneBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_StoneGameplayEffectClass = { "StoneGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchForceStoneBase, StoneGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_StoneGameplayEffectClass_MetaData), Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_StoneGameplayEffectClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpSound_MetaData[] = {
		{ "Category", "PickUps Effects FX" },
		{ "ModuleRelativePath", "Public/Items/PickUps/ArchForceStoneBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpSound = { "PickUpSound", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchForceStoneBase, PickUpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpSound_MetaData), Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpFX_MetaData[] = {
		{ "Category", "PickUps Effects FX" },
		{ "ModuleRelativePath", "Public/Items/PickUps/ArchForceStoneBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpFX = { "PickUpFX", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchForceStoneBase, PickUpFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpFX_MetaData), Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpFX_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchForceStoneBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_StoneGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchForceStoneBase_Statics::NewProp_PickUpFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchForceStoneBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchForceStoneBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchForceStoneBase_Statics::ClassParams = {
		&AArchForceStoneBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArchForceStoneBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArchForceStoneBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchForceStoneBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchForceStoneBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchForceStoneBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AArchForceStoneBase()
	{
		if (!Z_Registration_Info_UClass_AArchForceStoneBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchForceStoneBase.OuterSingleton, Z_Construct_UClass_AArchForceStoneBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchForceStoneBase.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchForceStoneBase>()
	{
		return AArchForceStoneBase::StaticClass();
	}
	AArchForceStoneBase::AArchForceStoneBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchForceStoneBase);
	AArchForceStoneBase::~AArchForceStoneBase() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_PickUps_ArchForceStoneBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_PickUps_ArchForceStoneBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchForceStoneBase, AArchForceStoneBase::StaticClass, TEXT("AArchForceStoneBase"), &Z_Registration_Info_UClass_AArchForceStoneBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchForceStoneBase), 65325076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_PickUps_ArchForceStoneBase_h_831673606(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_PickUps_ArchForceStoneBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_PickUps_ArchForceStoneBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
