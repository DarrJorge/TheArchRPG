// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/Abilities/ArchPickupAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchPickupAbility() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchPickUpBase_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroGameplayAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchPickupAbility();
	ARCH_API UClass* Z_Construct_UClass_UArchPickupAbility_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchPickupAbility::execConsumeItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchPickupAbility::execCollectItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectItems();
		P_NATIVE_END;
	}
	void UArchPickupAbility::StaticRegisterNativesUArchPickupAbility()
	{
		UClass* Class = UArchPickupAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectItems", &UArchPickupAbility::execCollectItems },
			{ "ConsumeItems", &UArchPickupAbility::execConsumeItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchPickupAbility_CollectItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchPickupAbility_CollectItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchPickupAbility_CollectItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchPickupAbility, nullptr, "CollectItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchPickupAbility_CollectItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchPickupAbility_CollectItems_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UArchPickupAbility_CollectItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchPickupAbility_CollectItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchPickupAbility_ConsumeItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchPickupAbility_ConsumeItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchPickupAbility_ConsumeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchPickupAbility, nullptr, "ConsumeItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchPickupAbility_ConsumeItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchPickupAbility_ConsumeItems_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UArchPickupAbility_ConsumeItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchPickupAbility_ConsumeItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchPickupAbility);
	UClass* Z_Construct_UClass_UArchPickupAbility_NoRegister()
	{
		return UArchPickupAbility::StaticClass();
	}
	struct Z_Construct_UClass_UArchPickupAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickUpInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceBoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceBoxSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PickupTraceChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PickupTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugShape_MetaData[];
#endif
		static void NewProp_bDrawDebugShape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugShape;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchPickupAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArchHeroGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchPickupAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchPickupAbility_CollectItems, "CollectItems" }, // 3897742965
		{ &Z_Construct_UFunction_UArchPickupAbility_ConsumeItems, "ConsumeItems" }, // 3283128765
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchPickupAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Abilities/ArchPickupAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickUpInputAction_MetaData[] = {
		{ "Category", "ArchPickupAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickUpInputAction = { "PickUpInputAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchPickupAbility, PickUpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickUpInputAction_MetaData), Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickUpInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "ArchPickupAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchPickupAbility, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceDistance_MetaData), Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceBoxSize_MetaData[] = {
		{ "Category", "ArchPickupAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceBoxSize = { "TraceBoxSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchPickupAbility, TraceBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceBoxSize_MetaData), Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceBoxSize_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickupTraceChannel_Inner = { "PickupTraceChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickupTraceChannel_MetaData[] = {
		{ "Category", "ArchPickupAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickupTraceChannel = { "PickupTraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchPickupAbility, PickupTraceChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickupTraceChannel_MetaData), Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickupTraceChannel_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_bDrawDebugShape_MetaData[] = {
		{ "Category", "ArchPickupAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
	void Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_bDrawDebugShape_SetBit(void* Obj)
	{
		((UArchPickupAbility*)Obj)->bDrawDebugShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_bDrawDebugShape = { "bDrawDebugShape", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArchPickupAbility), &Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_bDrawDebugShape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_bDrawDebugShape_MetaData), Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_bDrawDebugShape_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AArchPickUpBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/ArchPickupAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArchPickupAbility, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_Items_MetaData), Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_Items_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchPickupAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickUpInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_TraceBoxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickupTraceChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_PickupTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_bDrawDebugShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchPickupAbility_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchPickupAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchPickupAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchPickupAbility_Statics::ClassParams = {
		&UArchPickupAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArchPickupAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchPickupAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchPickupAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UArchPickupAbility()
	{
		if (!Z_Registration_Info_UClass_UArchPickupAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchPickupAbility.OuterSingleton, Z_Construct_UClass_UArchPickupAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchPickupAbility.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchPickupAbility>()
	{
		return UArchPickupAbility::StaticClass();
	}
	UArchPickupAbility::UArchPickupAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchPickupAbility);
	UArchPickupAbility::~UArchPickupAbility() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchPickupAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchPickupAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchPickupAbility, UArchPickupAbility::StaticClass, TEXT("UArchPickupAbility"), &Z_Registration_Info_UClass_UArchPickupAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchPickupAbility), 895982595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchPickupAbility_h_507843425(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchPickupAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_Abilities_ArchPickupAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
