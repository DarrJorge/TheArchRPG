// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Items/Weapons/ArchHeroWeapon.h"
#include "GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchHeroWeapon() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchHeroWeapon();
	ARCH_API UClass* Z_Construct_UClass_AArchHeroWeapon_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_AArchWeaponBase();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(AArchHeroWeapon::execGetGrantedAbilitySpecHandles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayAbilitySpecHandle>*)Z_Param__Result=P_THIS->GetGrantedAbilitySpecHandles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArchHeroWeapon::execAssignGrantedAbilitySpecHandles)
	{
		P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InSpecHandles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignGrantedAbilitySpecHandles(Z_Param_Out_InSpecHandles);
		P_NATIVE_END;
	}
	void AArchHeroWeapon::StaticRegisterNativesAArchHeroWeapon()
	{
		UClass* Class = AArchHeroWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignGrantedAbilitySpecHandles", &AArchHeroWeapon::execAssignGrantedAbilitySpecHandles },
			{ "GetGrantedAbilitySpecHandles", &AArchHeroWeapon::execGetGrantedAbilitySpecHandles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics
	{
		struct ArchHeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms
		{
			TArray<FGameplayAbilitySpecHandle> InSpecHandles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_Inner = { "InSpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles = { "InSpecHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms, InSpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_MetaData), Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_MetaData) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Weapons/ArchHeroWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchHeroWeapon, nullptr, "AssignGrantedAbilitySpecHandles", nullptr, nullptr, Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::ArchHeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::ArchHeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics
	{
		struct ArchHeroWeapon_eventGetGrantedAbilitySpecHandles_Parms
		{
			TArray<FGameplayAbilitySpecHandle> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchHeroWeapon_eventGetGrantedAbilitySpecHandles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Weapons/ArchHeroWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchHeroWeapon, nullptr, "GetGrantedAbilitySpecHandles", nullptr, nullptr, Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::ArchHeroWeapon_eventGetGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::ArchHeroWeapon_eventGetGrantedAbilitySpecHandles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchHeroWeapon);
	UClass* Z_Construct_UClass_AArchHeroWeapon_NoRegister()
	{
		return AArchHeroWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AArchHeroWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchHeroWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArchWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchHeroWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AArchHeroWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArchHeroWeapon_AssignGrantedAbilitySpecHandles, "AssignGrantedAbilitySpecHandles" }, // 2069388046
		{ &Z_Construct_UFunction_AArchHeroWeapon_GetGrantedAbilitySpecHandles, "GetGrantedAbilitySpecHandles" }, // 2246289227
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchHeroWeapon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchHeroWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Weapons/ArchHeroWeapon.h" },
		{ "ModuleRelativePath", "Public/Items/Weapons/ArchHeroWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchHeroWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchHeroWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchHeroWeapon_Statics::ClassParams = {
		&AArchHeroWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchHeroWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchHeroWeapon_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArchHeroWeapon()
	{
		if (!Z_Registration_Info_UClass_AArchHeroWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchHeroWeapon.OuterSingleton, Z_Construct_UClass_AArchHeroWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchHeroWeapon.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchHeroWeapon>()
	{
		return AArchHeroWeapon::StaticClass();
	}
	AArchHeroWeapon::AArchHeroWeapon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchHeroWeapon);
	AArchHeroWeapon::~AArchHeroWeapon() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchHeroWeapon, AArchHeroWeapon::StaticClass, TEXT("AArchHeroWeapon"), &Z_Registration_Info_UClass_AArchHeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchHeroWeapon), 1624426529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_4029055291(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Weapons_ArchHeroWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
