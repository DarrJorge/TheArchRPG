// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Animations/Hero/ArchHeroAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchHeroAnimInstance() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchHeroCharacter_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchCharacterAnimInstance();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroAnimInstance();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UArchHeroAnimInstance::StaticRegisterNativesUArchHeroAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchHeroAnimInstance);
	UClass* Z_Construct_UClass_UArchHeroAnimInstance_NoRegister()
	{
		return UArchHeroAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UArchHeroAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldEnterRelaxState_MetaData[];
#endif
		static void NewProp_bShouldEnterRelaxState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldEnterRelaxState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterRelaxStateThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterRelaxStateThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchHeroAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchCharacterAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/Hero/ArchHeroAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/Hero/ArchHeroAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_OwningHeroCharacter_MetaData[] = {
		{ "Category", "AnimData|References" },
		{ "ModuleRelativePath", "Public/Animations/Hero/ArchHeroAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_OwningHeroCharacter = { "OwningHeroCharacter", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroAnimInstance, OwningHeroCharacter), Z_Construct_UClass_AArchHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_OwningHeroCharacter_MetaData), Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_OwningHeroCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/Animations/Hero/ArchHeroAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_SetBit(void* Obj)
	{
		((UArchHeroAnimInstance*)Obj)->bShouldEnterRelaxState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState = { "bShouldEnterRelaxState", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchHeroAnimInstance), &Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_MetaData), Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/Animations/Hero/ArchHeroAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold = { "EnterRelaxStateThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchHeroAnimInstance, EnterRelaxStateThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold_MetaData), Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchHeroAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_OwningHeroCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_bShouldEnterRelaxState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchHeroAnimInstance_Statics::NewProp_EnterRelaxStateThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchHeroAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchHeroAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchHeroAnimInstance_Statics::ClassParams = {
		&UArchHeroAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchHeroAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchHeroAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchHeroAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UArchHeroAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchHeroAnimInstance.OuterSingleton, Z_Construct_UClass_UArchHeroAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchHeroAnimInstance.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchHeroAnimInstance>()
	{
		return UArchHeroAnimInstance::StaticClass();
	}
	UArchHeroAnimInstance::UArchHeroAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchHeroAnimInstance);
	UArchHeroAnimInstance::~UArchHeroAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchHeroAnimInstance, UArchHeroAnimInstance::StaticClass, TEXT("UArchHeroAnimInstance"), &Z_Registration_Info_UClass_UArchHeroAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchHeroAnimInstance), 803688697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroAnimInstance_h_813239806(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
