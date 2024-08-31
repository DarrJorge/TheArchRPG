// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AI/Services/BTService_OrientToTargetActor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_OrientToTargetActor() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ARCH_API UClass* Z_Construct_UClass_UBTService_OrientToTargetActor();
	ARCH_API UClass* Z_Construct_UClass_UBTService_OrientToTargetActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	void UBTService_OrientToTargetActor::StaticRegisterNativesUBTService_OrientToTargetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_OrientToTargetActor);
	UClass* Z_Construct_UClass_UBTService_OrientToTargetActor_NoRegister()
	{
		return UBTService_OrientToTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_OrientToTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTargetActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetActorKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Services/BTService_OrientToTargetActor.h" },
		{ "ModuleRelativePath", "Public/AI/Services/BTService_OrientToTargetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_InTargetActorKey_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/AI/Services/BTService_OrientToTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_InTargetActorKey = { "InTargetActorKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_OrientToTargetActor, InTargetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_InTargetActorKey_MetaData), Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_InTargetActorKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/AI/Services/BTService_OrientToTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_OrientToTargetActor, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_RotationInterpSpeed_MetaData), Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_RotationInterpSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_InTargetActorKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::NewProp_RotationInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_OrientToTargetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::ClassParams = {
		&UBTService_OrientToTargetActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTService_OrientToTargetActor()
	{
		if (!Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton, Z_Construct_UClass_UBTService_OrientToTargetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_OrientToTargetActor.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UBTService_OrientToTargetActor>()
	{
		return UBTService_OrientToTargetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_OrientToTargetActor);
	UBTService_OrientToTargetActor::~UBTService_OrientToTargetActor() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Services_BTService_OrientToTargetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Services_BTService_OrientToTargetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_OrientToTargetActor, UBTService_OrientToTargetActor::StaticClass, TEXT("UBTService_OrientToTargetActor"), &Z_Registration_Info_UClass_UBTService_OrientToTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_OrientToTargetActor), 1113755538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Services_BTService_OrientToTargetActor_h_3408611089(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Services_BTService_OrientToTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_Services_BTService_OrientToTargetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
