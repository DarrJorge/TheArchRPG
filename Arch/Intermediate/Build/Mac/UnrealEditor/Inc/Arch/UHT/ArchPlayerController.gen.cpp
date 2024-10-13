// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Player/ArchPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchPlayerController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_AArchPlayerController();
	ARCH_API UClass* Z_Construct_UClass_AArchPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(AArchPlayerController::execSetIsUseGamepad)
	{
		P_GET_UBOOL(Z_Param_bUsingGamepad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUseGamepad(Z_Param_bUsingGamepad);
		P_NATIVE_END;
	}
	void AArchPlayerController::StaticRegisterNativesAArchPlayerController()
	{
		UClass* Class = AArchPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIsUseGamepad", &AArchPlayerController::execSetIsUseGamepad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics
	{
		struct ArchPlayerController_eventSetIsUseGamepad_Parms
		{
			bool bUsingGamepad;
		};
		static void NewProp_bUsingGamepad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::NewProp_bUsingGamepad_SetBit(void* Obj)
	{
		((ArchPlayerController_eventSetIsUseGamepad_Parms*)Obj)->bUsingGamepad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::NewProp_bUsingGamepad = { "bUsingGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchPlayerController_eventSetIsUseGamepad_Parms), &Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::NewProp_bUsingGamepad_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::NewProp_bUsingGamepad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ArchPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchPlayerController, nullptr, "SetIsUseGamepad", nullptr, nullptr, Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::ArchPlayerController_eventSetIsUseGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::ArchPlayerController_eventSetIsUseGamepad_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchPlayerController);
	UClass* Z_Construct_UClass_AArchPlayerController_NoRegister()
	{
		return AArchPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AArchPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AArchPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArchPlayerController_SetIsUseGamepad, "SetIsUseGamepad" }, // 3175990485
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/ArchPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/ArchPlayerController.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AArchPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AArchPlayerController, IGenericTeamAgentInterface), false },  // 4142440172
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchPlayerController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchPlayerController_Statics::ClassParams = {
		&AArchPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArchPlayerController()
	{
		if (!Z_Registration_Info_UClass_AArchPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchPlayerController.OuterSingleton, Z_Construct_UClass_AArchPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchPlayerController.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchPlayerController>()
	{
		return AArchPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchPlayerController);
	AArchPlayerController::~AArchPlayerController() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchPlayerController, AArchPlayerController::StaticClass, TEXT("AArchPlayerController"), &Z_Registration_Info_UClass_AArchPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchPlayerController), 1526337897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_3500769138(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Player_ArchPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
