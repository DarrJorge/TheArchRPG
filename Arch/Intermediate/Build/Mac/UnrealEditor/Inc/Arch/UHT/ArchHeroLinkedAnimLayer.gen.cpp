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
	ARCH_API UClass* Z_Construct_UClass_UArchHeroAnimInstance_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroLinkedAnimLayer();
	ARCH_API UClass* Z_Construct_UClass_UArchHeroLinkedAnimLayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchHeroLinkedAnimLayer::execGetHeroAnimInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UArchHeroAnimInstance**)Z_Param__Result=P_THIS->GetHeroAnimInstance();
		P_NATIVE_END;
	}
	void UArchHeroLinkedAnimLayer::StaticRegisterNativesUArchHeroLinkedAnimLayer()
	{
		UClass* Class = UArchHeroLinkedAnimLayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeroAnimInstance", &UArchHeroLinkedAnimLayer::execGetHeroAnimInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics
	{
		struct ArchHeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms
		{
			UArchHeroAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UArchHeroAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/Hero/ArchHeroLinkedAnimLayer.h" },
		{ "NotBlueprintThreadSafe", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchHeroLinkedAnimLayer, nullptr, "GetHeroAnimInstance", nullptr, nullptr, Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::ArchHeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::ArchHeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchHeroLinkedAnimLayer);
	UClass* Z_Construct_UClass_UArchHeroLinkedAnimLayer_NoRegister()
	{
		return UArchHeroLinkedAnimLayer::StaticClass();
	}
	struct Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchHeroLinkedAnimLayer_GetHeroAnimInstance, "GetHeroAnimInstance" }, // 3920737624
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchHeroLinkedAnimLayer_Statics::Class_MetaDataParams[] = {
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UArchHeroLinkedAnimLayer, UArchHeroLinkedAnimLayer::StaticClass, TEXT("UArchHeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UArchHeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchHeroLinkedAnimLayer), 3517795886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroLinkedAnimLayer_h_3459872567(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroLinkedAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_Hero_ArchHeroLinkedAnimLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
