// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Animations/Hero/ArchHeroLinkedAnimLayer.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchHeroLinkedAnimLayer() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchBaseAnimInstance();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroLinkedAnimLayer();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroLinkedAnimLayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UArchHeroLinkedAnimLayer::StaticRegisterNativesUArchHeroLinkedAnimLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchHeroLinkedAnimLayer);
	UClass* Z_Construct_UClass_UArchHeroLinkedAnimLayer_NoRegister()
	{
		return UArchHeroLinkedAnimLayer::StaticClass();
	}
	struct Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchBaseAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/Hero/ArchHeroLinkedAnimLayer.h" },
		{ "ModuleRelativePath", "Public/Animations/Hero/ArchHeroLinkedAnimLayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchHeroLinkedAnimLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::ClassParams = {
		&UArchHeroLinkedAnimLayer::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchHeroLinkedAnimLayer()
	{
		if (!Z_Registration_Info_UClass_UArchHeroLinkedAnimLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchHeroLinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchHeroLinkedAnimLayer.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchHeroLinkedAnimLayer>()
	{
		return UArchHeroLinkedAnimLayer::StaticClass();
	}
	UArchHeroLinkedAnimLayer::UArchHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchHeroLinkedAnimLayer);
	UArchHeroLinkedAnimLayer::~UArchHeroLinkedAnimLayer() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroLinkedAnimLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroLinkedAnimLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchHeroLinkedAnimLayer, UArchHeroLinkedAnimLayer::StaticClass, TEXT("UArchHeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UArchHeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchHeroLinkedAnimLayer), 2545381374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroLinkedAnimLayer_h_1745254667(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroLinkedAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroLinkedAnimLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
