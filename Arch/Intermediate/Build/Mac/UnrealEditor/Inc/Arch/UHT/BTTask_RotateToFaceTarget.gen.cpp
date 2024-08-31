// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AI/Tasks/BTTask_RotateToFaceTarget.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RotateToFaceTarget() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ARCH_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceTarget();
	ARCH_API UClass* Z_Construct_UClass_UBTTask_RotateToFaceTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UBTTask_RotateToFaceTarget::StaticRegisterNativesUBTTask_RotateToFaceTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RotateToFaceTarget);
	UClass* Z_Construct_UClass_UBTTask_RotateToFaceTarget_NoRegister()
	{
		return UBTTask_RotateToFaceTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnglePrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnglePrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetToFaceKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetToFaceKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Tasks/BTTask_RotateToFaceTarget.h" },
		{ "ModuleRelativePath", "Public/AI/Tasks/BTTask_RotateToFaceTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_AnglePrecision_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AI/Tasks/BTTask_RotateToFaceTarget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_AnglePrecision = { "AnglePrecision", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RotateToFaceTarget, AnglePrecision), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_AnglePrecision_MetaData), Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_AnglePrecision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AI/Tasks/BTTask_RotateToFaceTarget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RotateToFaceTarget, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_RotationInterpSpeed_MetaData), Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_RotationInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_TargetToFaceKey_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AI/Tasks/BTTask_RotateToFaceTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_TargetToFaceKey = { "TargetToFaceKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RotateToFaceTarget, TargetToFaceKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_TargetToFaceKey_MetaData), Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_TargetToFaceKey_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_AnglePrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_RotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::NewProp_TargetToFaceKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RotateToFaceTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::ClassParams = {
		&UBTTask_RotateToFaceTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_RotateToFaceTarget()
	{
		if (!Z_Registration_Info_UClass_UBTTask_RotateToFaceTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RotateToFaceTarget.OuterSingleton, Z_Construct_UClass_UBTTask_RotateToFaceTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_RotateToFaceTarget.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UBTTask_RotateToFaceTarget>()
	{
		return UBTTask_RotateToFaceTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RotateToFaceTarget);
	UBTTask_RotateToFaceTarget::~UBTTask_RotateToFaceTarget() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Tasks_BTTask_RotateToFaceTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Tasks_BTTask_RotateToFaceTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RotateToFaceTarget, UBTTask_RotateToFaceTarget::StaticClass, TEXT("UBTTask_RotateToFaceTarget"), &Z_Registration_Info_UClass_UBTTask_RotateToFaceTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RotateToFaceTarget), 362724235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Tasks_BTTask_RotateToFaceTarget_h_3131401930(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Tasks_BTTask_RotateToFaceTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Tasks_BTTask_RotateToFaceTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
