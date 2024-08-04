// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Components/Combat/CombatComponentBase.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponentBase() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchWeaponBase_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UCombatComponentBase();
	ARCH_API UClass* Z_Construct_UClass_UCombatComponentBase_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UPawnExtensionComponentBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UCombatComponentBase::execGetCharacterCurrentEquippedWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AArchWeaponBase**)Z_Param__Result=P_THIS->GetCharacterCurrentEquippedWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponentBase::execGetCharacterCarriedWeaponByTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InWeaponTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AArchWeaponBase**)Z_Param__Result=P_THIS->GetCharacterCarriedWeaponByTag(Z_Param_InWeaponTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatComponentBase::execRegisterWeapon)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InWeaponTag);
		P_GET_OBJECT(AArchWeaponBase,Z_Param_InWeapon);
		P_GET_UBOOL(Z_Param_bRegisterAsEquippedWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterWeapon(Z_Param_InWeaponTag,Z_Param_InWeapon,Z_Param_bRegisterAsEquippedWeapon);
		P_NATIVE_END;
	}
	void UCombatComponentBase::StaticRegisterNativesUCombatComponentBase()
	{
		UClass* Class = UCombatComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterCarriedWeaponByTag", &UCombatComponentBase::execGetCharacterCarriedWeaponByTag },
			{ "GetCharacterCurrentEquippedWeapon", &UCombatComponentBase::execGetCharacterCurrentEquippedWeapon },
			{ "RegisterWeapon", &UCombatComponentBase::execRegisterWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics
	{
		struct CombatComponentBase_eventGetCharacterCarriedWeaponByTag_Parms
		{
			FGameplayTag InWeaponTag;
			AArchWeaponBase* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWeaponTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::NewProp_InWeaponTag = { "InWeaponTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponentBase_eventGetCharacterCarriedWeaponByTag_Parms, InWeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponentBase_eventGetCharacterCarriedWeaponByTag_Parms, ReturnValue), Z_Construct_UClass_AArchWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::NewProp_InWeaponTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Combat" },
		{ "ModuleRelativePath", "Public/Components/Combat/CombatComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponentBase, nullptr, "GetCharacterCarriedWeaponByTag", nullptr, nullptr, Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::CombatComponentBase_eventGetCharacterCarriedWeaponByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::CombatComponentBase_eventGetCharacterCarriedWeaponByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics
	{
		struct CombatComponentBase_eventGetCharacterCurrentEquippedWeapon_Parms
		{
			AArchWeaponBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponentBase_eventGetCharacterCurrentEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_AArchWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Combat" },
		{ "ModuleRelativePath", "Public/Components/Combat/CombatComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponentBase, nullptr, "GetCharacterCurrentEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::CombatComponentBase_eventGetCharacterCurrentEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::CombatComponentBase_eventGetCharacterCurrentEquippedWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics
	{
		struct CombatComponentBase_eventRegisterWeapon_Parms
		{
			FGameplayTag InWeaponTag;
			AArchWeaponBase* InWeapon;
			bool bRegisterAsEquippedWeapon;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWeaponTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWeapon;
		static void NewProp_bRegisterAsEquippedWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsEquippedWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::NewProp_InWeaponTag = { "InWeaponTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponentBase_eventRegisterWeapon_Parms, InWeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::NewProp_InWeapon = { "InWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatComponentBase_eventRegisterWeapon_Parms, InWeapon), Z_Construct_UClass_AArchWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::NewProp_bRegisterAsEquippedWeapon_SetBit(void* Obj)
	{
		((CombatComponentBase_eventRegisterWeapon_Parms*)Obj)->bRegisterAsEquippedWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::NewProp_bRegisterAsEquippedWeapon = { "bRegisterAsEquippedWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatComponentBase_eventRegisterWeapon_Parms), &Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::NewProp_bRegisterAsEquippedWeapon_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::NewProp_InWeaponTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::NewProp_InWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::NewProp_bRegisterAsEquippedWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Combat" },
		{ "CPP_Default_bRegisterAsEquippedWeapon", "false" },
		{ "ModuleRelativePath", "Public/Components/Combat/CombatComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponentBase, nullptr, "RegisterWeapon", nullptr, nullptr, Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::CombatComponentBase_eventRegisterWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::CombatComponentBase_eventRegisterWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponentBase);
	UClass* Z_Construct_UClass_UCombatComponentBase_NoRegister()
	{
		return UCombatComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UCombatComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEquippedWeaponTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentEquippedWeaponTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnExtensionComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponentBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponentBase_GetCharacterCarriedWeaponByTag, "GetCharacterCarriedWeaponByTag" }, // 471092510
		{ &Z_Construct_UFunction_UCombatComponentBase_GetCharacterCurrentEquippedWeapon, "GetCharacterCurrentEquippedWeapon" }, // 3274355323
		{ &Z_Construct_UFunction_UCombatComponentBase_RegisterWeapon, "RegisterWeapon" }, // 4082883359
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponentBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponentBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/Combat/CombatComponentBase.h" },
		{ "ModuleRelativePath", "Public/Components/Combat/CombatComponentBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatComponentBase_Statics::NewProp_CurrentEquippedWeaponTag_MetaData[] = {
		{ "Category", "Arch|Combat" },
		{ "ModuleRelativePath", "Public/Components/Combat/CombatComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatComponentBase_Statics::NewProp_CurrentEquippedWeaponTag = { "CurrentEquippedWeaponTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponentBase, CurrentEquippedWeaponTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponentBase_Statics::NewProp_CurrentEquippedWeaponTag_MetaData), Z_Construct_UClass_UCombatComponentBase_Statics::NewProp_CurrentEquippedWeaponTag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponentBase_Statics::NewProp_CurrentEquippedWeaponTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponentBase_Statics::ClassParams = {
		&UCombatComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCombatComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponentBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponentBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponentBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCombatComponentBase()
	{
		if (!Z_Registration_Info_UClass_UCombatComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponentBase.OuterSingleton, Z_Construct_UClass_UCombatComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombatComponentBase.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UCombatComponentBase>()
	{
		return UCombatComponentBase::StaticClass();
	}
	UCombatComponentBase::UCombatComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponentBase);
	UCombatComponentBase::~UCombatComponentBase() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponentBase, UCombatComponentBase::StaticClass, TEXT("UCombatComponentBase"), &Z_Registration_Info_UClass_UCombatComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponentBase), 1377325191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_2319401734(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Components_Combat_CombatComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
