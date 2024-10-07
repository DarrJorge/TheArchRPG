// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AI/Decorators/ArchGetHealthPercentDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchGetHealthPercentDecorator() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	ARCH_API UClass* Z_Construct_UClass_UArchGetHealthPercentDecorator();
	ARCH_API UClass* Z_Construct_UClass_UArchGetHealthPercentDecorator_NoRegister();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchDecoratorOperationType();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UArchGetHealthPercentDecorator::StaticRegisterNativesUArchGetHealthPercentDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchGetHealthPercentDecorator);
	UClass* Z_Construct_UClass_UArchGetHealthPercentDecorator_NoRegister()
	{
		return UArchGetHealthPercentDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckOperation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckOperation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdToCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Decorators/ArchGetHealthPercentDecorator.h" },
		{ "ModuleRelativePath", "Public/AI/Decorators/ArchGetHealthPercentDecorator.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_CheckOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_CheckOperation_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Decorators/ArchGetHealthPercentDecorator.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_CheckOperation = { "CheckOperation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchGetHealthPercentDecorator, CheckOperation), Z_Construct_UEnum_Arch_EArchDecoratorOperationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_CheckOperation_MetaData), Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_CheckOperation_MetaData) }; // 3053316786
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_ThresholdToCheck_MetaData[] = {
		{ "Category", "AI" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AI/Decorators/ArchGetHealthPercentDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_ThresholdToCheck = { "ThresholdToCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchGetHealthPercentDecorator, ThresholdToCheck), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_ThresholdToCheck_MetaData), Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_ThresholdToCheck_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_CheckOperation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_CheckOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::NewProp_ThresholdToCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchGetHealthPercentDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::ClassParams = {
		&UArchGetHealthPercentDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchGetHealthPercentDecorator()
	{
		if (!Z_Registration_Info_UClass_UArchGetHealthPercentDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchGetHealthPercentDecorator.OuterSingleton, Z_Construct_UClass_UArchGetHealthPercentDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchGetHealthPercentDecorator.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchGetHealthPercentDecorator>()
	{
		return UArchGetHealthPercentDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchGetHealthPercentDecorator);
	UArchGetHealthPercentDecorator::~UArchGetHealthPercentDecorator() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_ArchGetHealthPercentDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_ArchGetHealthPercentDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchGetHealthPercentDecorator, UArchGetHealthPercentDecorator::StaticClass, TEXT("UArchGetHealthPercentDecorator"), &Z_Registration_Info_UClass_UArchGetHealthPercentDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchGetHealthPercentDecorator), 933755579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_ArchGetHealthPercentDecorator_h_1479096032(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_ArchGetHealthPercentDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_ArchGetHealthPercentDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
