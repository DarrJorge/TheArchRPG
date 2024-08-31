// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AI/ArchAIController.h"
#include "Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ARCH_API UClass* Z_Construct_UClass_AArchAIController();
	ARCH_API UClass* Z_Construct_UClass_AArchAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(AArchAIController::execOnEnemyPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnemyPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void AArchAIController::StaticRegisterNativesAArchAIController()
	{
		UClass* Class = AArchAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnemyPerceptionUpdated", &AArchAIController::execOnEnemyPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics
	{
		struct ArchAIController_eventOnEnemyPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAIController_eventOnEnemyPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAIController_eventOnEnemyPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1355587946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchAIController, nullptr, "OnEnemyPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::ArchAIController_eventOnEnemyPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::ArchAIController_eventOnEnemyPerceptionUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchAIController);
	UClass* Z_Construct_UClass_AArchAIController_NoRegister()
	{
		return AArchAIController::StaticClass();
	}
	struct Z_Construct_UClass_AArchAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyPerceptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AISenseSightConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AISenseSightConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxWalkSpeedKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultMaxWalkSpeedKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDetourCrowdAvoidance_MetaData[];
#endif
		static void NewProp_bEnableDetourCrowdAvoidance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDetourCrowdAvoidance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetourCrowdAvoidanceQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DetourCrowdAvoidanceQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionQueryRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AArchAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArchAIController_OnEnemyPerceptionUpdated, "OnEnemyPerceptionUpdated" }, // 1531407058
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/ArchAIController.h" },
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchAIController_Statics::NewProp_EnemyPerceptionComponent_MetaData[] = {
		{ "Category", "Arch|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchAIController_Statics::NewProp_EnemyPerceptionComponent = { "EnemyPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchAIController, EnemyPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::NewProp_EnemyPerceptionComponent_MetaData), Z_Construct_UClass_AArchAIController_Statics::NewProp_EnemyPerceptionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchAIController_Statics::NewProp_AISenseSightConfig_MetaData[] = {
		{ "Category", "Arch|Components" },
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchAIController_Statics::NewProp_AISenseSightConfig = { "AISenseSightConfig", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchAIController, AISenseSightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::NewProp_AISenseSightConfig_MetaData), Z_Construct_UClass_AArchAIController_Statics::NewProp_AISenseSightConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchAIController_Statics::NewProp_TargetKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AArchAIController_Statics::NewProp_TargetKeyName = { "TargetKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchAIController, TargetKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::NewProp_TargetKeyName_MetaData), Z_Construct_UClass_AArchAIController_Statics::NewProp_TargetKeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchAIController_Statics::NewProp_DefaultMaxWalkSpeedKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AArchAIController_Statics::NewProp_DefaultMaxWalkSpeedKeyName = { "DefaultMaxWalkSpeedKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchAIController, DefaultMaxWalkSpeedKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::NewProp_DefaultMaxWalkSpeedKeyName_MetaData), Z_Construct_UClass_AArchAIController_Statics::NewProp_DefaultMaxWalkSpeedKeyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchAIController_Statics::NewProp_bEnableDetourCrowdAvoidance_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
	};
#endif
	void Z_Construct_UClass_AArchAIController_Statics::NewProp_bEnableDetourCrowdAvoidance_SetBit(void* Obj)
	{
		((AArchAIController*)Obj)->bEnableDetourCrowdAvoidance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArchAIController_Statics::NewProp_bEnableDetourCrowdAvoidance = { "bEnableDetourCrowdAvoidance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArchAIController), &Z_Construct_UClass_AArchAIController_Statics::NewProp_bEnableDetourCrowdAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::NewProp_bEnableDetourCrowdAvoidance_MetaData), Z_Construct_UClass_AArchAIController_Statics::NewProp_bEnableDetourCrowdAvoidance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchAIController_Statics::NewProp_DetourCrowdAvoidanceQuality_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "EditCondition", "bEnableDetourCrowdAvoidance" },
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArchAIController_Statics::NewProp_DetourCrowdAvoidanceQuality = { "DetourCrowdAvoidanceQuality", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchAIController, DetourCrowdAvoidanceQuality), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::NewProp_DetourCrowdAvoidanceQuality_MetaData), Z_Construct_UClass_AArchAIController_Statics::NewProp_DetourCrowdAvoidanceQuality_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchAIController_Statics::NewProp_CollisionQueryRange_MetaData[] = {
		{ "Category", "Detour Crowd Avoidance Config" },
		{ "EditCondition", "bEnableDetourCrowdAvoidance" },
		{ "ModuleRelativePath", "Public/AI/ArchAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArchAIController_Statics::NewProp_CollisionQueryRange = { "CollisionQueryRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchAIController, CollisionQueryRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::NewProp_CollisionQueryRange_MetaData), Z_Construct_UClass_AArchAIController_Statics::NewProp_CollisionQueryRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchAIController_Statics::NewProp_EnemyPerceptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchAIController_Statics::NewProp_AISenseSightConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchAIController_Statics::NewProp_TargetKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchAIController_Statics::NewProp_DefaultMaxWalkSpeedKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchAIController_Statics::NewProp_bEnableDetourCrowdAvoidance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchAIController_Statics::NewProp_DetourCrowdAvoidanceQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchAIController_Statics::NewProp_CollisionQueryRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchAIController_Statics::ClassParams = {
		&AArchAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArchAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AArchAIController()
	{
		if (!Z_Registration_Info_UClass_AArchAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchAIController.OuterSingleton, Z_Construct_UClass_AArchAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchAIController.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchAIController>()
	{
		return AArchAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchAIController);
	AArchAIController::~AArchAIController() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchAIController, AArchAIController::StaticClass, TEXT("AArchAIController"), &Z_Registration_Info_UClass_AArchAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchAIController), 2287179622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchAIController_h_3763014060(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AI_ArchAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
