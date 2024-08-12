// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Characters/ArchEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchEnemyCharacter() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchBaseCharacter();
	ARCH_API UClass* Z_Construct_UClass_AArchEnemyCharacter();
	ARCH_API UClass* Z_Construct_UClass_AArchEnemyCharacter_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void AArchEnemyCharacter::StaticRegisterNativesAArchEnemyCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchEnemyCharacter);
	UClass* Z_Construct_UClass_AArchEnemyCharacter_NoRegister()
	{
		return AArchEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArchEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCombatComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArchBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/ArchEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent_MetaData[] = {
		{ "Category", "Arch|Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent = { "EnemyCombatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, EnemyCombatComponent), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchEnemyCharacter_Statics::ClassParams = {
		&AArchEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArchEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchEnemyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AArchEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AArchEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchEnemyCharacter.OuterSingleton, Z_Construct_UClass_AArchEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchEnemyCharacter.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchEnemyCharacter>()
	{
		return AArchEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchEnemyCharacter);
	AArchEnemyCharacter::~AArchEnemyCharacter() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchEnemyCharacter, AArchEnemyCharacter::StaticClass, TEXT("AArchEnemyCharacter"), &Z_Registration_Info_UClass_AArchEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchEnemyCharacter), 2866480063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_3617919296(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
