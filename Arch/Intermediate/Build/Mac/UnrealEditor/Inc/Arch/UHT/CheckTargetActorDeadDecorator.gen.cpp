// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AI/Decorators/CheckTargetActorDeadDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckTargetActorDeadDecorator() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ARCH_API UClass* Z_Construct_UClass_UCheckTargetActorDeadDecorator();
	ARCH_API UClass* Z_Construct_UClass_UCheckTargetActorDeadDecorator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UCheckTargetActorDeadDecorator::StaticRegisterNativesUCheckTargetActorDeadDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckTargetActorDeadDecorator);
	UClass* Z_Construct_UClass_UCheckTargetActorDeadDecorator_NoRegister()
	{
		return UCheckTargetActorDeadDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Decorators/CheckTargetActorDeadDecorator.h" },
		{ "ModuleRelativePath", "Public/AI/Decorators/CheckTargetActorDeadDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::NewProp_TargetActorKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Decorators/CheckTargetActorDeadDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::NewProp_TargetActorKey = { "TargetActorKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckTargetActorDeadDecorator, TargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::NewProp_TargetActorKey_MetaData), Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::NewProp_TargetActorKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::NewProp_TargetActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckTargetActorDeadDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::ClassParams = {
		&UCheckTargetActorDeadDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCheckTargetActorDeadDecorator()
	{
		if (!Z_Registration_Info_UClass_UCheckTargetActorDeadDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckTargetActorDeadDecorator.OuterSingleton, Z_Construct_UClass_UCheckTargetActorDeadDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCheckTargetActorDeadDecorator.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UCheckTargetActorDeadDecorator>()
	{
		return UCheckTargetActorDeadDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckTargetActorDeadDecorator);
	UCheckTargetActorDeadDecorator::~UCheckTargetActorDeadDecorator() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_CheckTargetActorDeadDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_CheckTargetActorDeadDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCheckTargetActorDeadDecorator, UCheckTargetActorDeadDecorator::StaticClass, TEXT("UCheckTargetActorDeadDecorator"), &Z_Registration_Info_UClass_UCheckTargetActorDeadDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckTargetActorDeadDecorator), 3405632168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_CheckTargetActorDeadDecorator_h_2449335364(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_CheckTargetActorDeadDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Decorators_CheckTargetActorDeadDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
