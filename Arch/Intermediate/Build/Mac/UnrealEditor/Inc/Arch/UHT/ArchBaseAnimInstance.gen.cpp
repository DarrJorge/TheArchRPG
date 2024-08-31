// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Animations/ArchBaseAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchBaseAnimInstance() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchBaseAnimInstance();
	ARCH_API UClass* Z_Construct_UClass_UArchBaseAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchBaseAnimInstance::execDoesOwnerHaveGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesOwnerHaveGameplayTag(Z_Param_InTag);
		P_NATIVE_END;
	}
	void UArchBaseAnimInstance::StaticRegisterNativesUArchBaseAnimInstance()
	{
		UClass* Class = UArchBaseAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesOwnerHaveGameplayTag", &UArchBaseAnimInstance::execDoesOwnerHaveGameplayTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics
	{
		struct ArchBaseAnimInstance_eventDoesOwnerHaveGameplayTag_Parms
		{
			FGameplayTag InTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchBaseAnimInstance_eventDoesOwnerHaveGameplayTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	void Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArchBaseAnimInstance_eventDoesOwnerHaveGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchBaseAnimInstance_eventDoesOwnerHaveGameplayTag_Parms), &Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Public/Animations/ArchBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchBaseAnimInstance, nullptr, "DoesOwnerHaveGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::ArchBaseAnimInstance_eventDoesOwnerHaveGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::ArchBaseAnimInstance_eventDoesOwnerHaveGameplayTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchBaseAnimInstance);
	UClass* Z_Construct_UClass_UArchBaseAnimInstance_NoRegister()
	{
		return UArchBaseAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UArchBaseAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchBaseAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchBaseAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchBaseAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchBaseAnimInstance_DoesOwnerHaveGameplayTag, "DoesOwnerHaveGameplayTag" }, // 1486044943
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchBaseAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchBaseAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/ArchBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/ArchBaseAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchBaseAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchBaseAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchBaseAnimInstance_Statics::ClassParams = {
		&UArchBaseAnimInstance::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchBaseAnimInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchBaseAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UArchBaseAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UArchBaseAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchBaseAnimInstance.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchBaseAnimInstance>()
	{
		return UArchBaseAnimInstance::StaticClass();
	}
	UArchBaseAnimInstance::UArchBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchBaseAnimInstance);
	UArchBaseAnimInstance::~UArchBaseAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_ArchBaseAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_ArchBaseAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchBaseAnimInstance, UArchBaseAnimInstance::StaticClass, TEXT("UArchBaseAnimInstance"), &Z_Registration_Info_UClass_UArchBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchBaseAnimInstance), 194627379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_ArchBaseAnimInstance_h_1101207708(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_ArchBaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Animations_ArchBaseAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
