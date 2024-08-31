// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/AbilitySystem/ArchAbilitySystemComponent.h"
#include "Arch/Public/ArchTypes/ArchStructTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchAbilitySystemComponent() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchAbilitySystemComponent();
	ARCH_API UClass* Z_Construct_UClass_UArchAbilitySystemComponent_NoRegister();
	ARCH_API UScriptStruct* Z_Construct_UScriptStruct_FArchHeroAbilitySet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UArchAbilitySystemComponent::execTryActivateAbilityByTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InAbilityTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryActivateAbilityByTag(Z_Param_Out_InAbilityTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAbilitySystemComponent::execRemoveGrantedCharacterWeaponAbilities)
	{
		P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InGrantedAbilitySpecHandles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGrantedCharacterWeaponAbilities(Z_Param_Out_InGrantedAbilitySpecHandles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchAbilitySystemComponent::execGrantCharacterWeaponAbilities)
	{
		P_GET_TARRAY_REF(FArchHeroAbilitySet,Z_Param_Out_InDefaultWeaponAbilities);
		P_GET_PROPERTY(FIntProperty,Z_Param_InLevel);
		P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_OutGrantedAbilitySpecHandles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrantCharacterWeaponAbilities(Z_Param_Out_InDefaultWeaponAbilities,Z_Param_InLevel,Z_Param_Out_OutGrantedAbilitySpecHandles);
		P_NATIVE_END;
	}
	void UArchAbilitySystemComponent::StaticRegisterNativesUArchAbilitySystemComponent()
	{
		UClass* Class = UArchAbilitySystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GrantCharacterWeaponAbilities", &UArchAbilitySystemComponent::execGrantCharacterWeaponAbilities },
			{ "RemoveGrantedCharacterWeaponAbilities", &UArchAbilitySystemComponent::execRemoveGrantedCharacterWeaponAbilities },
			{ "TryActivateAbilityByTag", &UArchAbilitySystemComponent::execTryActivateAbilityByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics
	{
		struct ArchAbilitySystemComponent_eventGrantCharacterWeaponAbilities_Parms
		{
			TArray<FArchHeroAbilitySet> InDefaultWeaponAbilities;
			int32 InLevel;
			TArray<FGameplayAbilitySpecHandle> OutGrantedAbilitySpecHandles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDefaultWeaponAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultWeaponAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InDefaultWeaponAbilities;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutGrantedAbilitySpecHandles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutGrantedAbilitySpecHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArchHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 1356227677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities = { "InDefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAbilitySystemComponent_eventGrantCharacterWeaponAbilities_Parms, InDefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_MetaData), Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_MetaData) }; // 1356227677
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAbilitySystemComponent_eventGrantCharacterWeaponAbilities_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAbilitySystemComponent_eventGrantCharacterWeaponAbilities_Parms, OutGrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InDefaultWeaponAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_InLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "InLevel", "1" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAbilitySystemComponent, nullptr, "GrantCharacterWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::ArchAbilitySystemComponent_eventGrantCharacterWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::ArchAbilitySystemComponent_eventGrantCharacterWeaponAbilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics
	{
		struct ArchAbilitySystemComponent_eventRemoveGrantedCharacterWeaponAbilities_Parms
		{
			TArray<FGameplayAbilitySpecHandle> InGrantedAbilitySpecHandles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InGrantedAbilitySpecHandles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InGrantedAbilitySpecHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::NewProp_InGrantedAbilitySpecHandles_Inner = { "InGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::NewProp_InGrantedAbilitySpecHandles = { "InGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAbilitySystemComponent_eventRemoveGrantedCharacterWeaponAbilities_Parms, InGrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::NewProp_InGrantedAbilitySpecHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::NewProp_InGrantedAbilitySpecHandles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAbilitySystemComponent, nullptr, "RemoveGrantedCharacterWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::ArchAbilitySystemComponent_eventRemoveGrantedCharacterWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::ArchAbilitySystemComponent_eventRemoveGrantedCharacterWeaponAbilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics
	{
		struct ArchAbilitySystemComponent_eventTryActivateAbilityByTag_Parms
		{
			FGameplayTag InAbilityTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAbilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAbilityTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_InAbilityTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_InAbilityTag = { "InAbilityTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchAbilitySystemComponent_eventTryActivateAbilityByTag_Parms, InAbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_InAbilityTag_MetaData), Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_InAbilityTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ArchAbilitySystemComponent_eventTryActivateAbilityByTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchAbilitySystemComponent_eventTryActivateAbilityByTag_Parms), &Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_InAbilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchAbilitySystemComponent, nullptr, "TryActivateAbilityByTag", nullptr, nullptr, Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::ArchAbilitySystemComponent_eventTryActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::ArchAbilitySystemComponent_eventTryActivateAbilityByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchAbilitySystemComponent);
	UClass* Z_Construct_UClass_UArchAbilitySystemComponent_NoRegister()
	{
		return UArchAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArchAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAbilitySystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchAbilitySystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchAbilitySystemComponent_GrantCharacterWeaponAbilities, "GrantCharacterWeaponAbilities" }, // 3649410399
		{ &Z_Construct_UFunction_UArchAbilitySystemComponent_RemoveGrantedCharacterWeaponAbilities, "RemoveGrantedCharacterWeaponAbilities" }, // 3011072408
		{ &Z_Construct_UFunction_UArchAbilitySystemComponent_TryActivateAbilityByTag, "TryActivateAbilityByTag" }, // 689944091
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAbilitySystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/ArchAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ArchAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchAbilitySystemComponent_Statics::ClassParams = {
		&UArchAbilitySystemComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UArchAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UArchAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchAbilitySystemComponent.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchAbilitySystemComponent>()
	{
		return UArchAbilitySystemComponent::StaticClass();
	}
	UArchAbilitySystemComponent::UArchAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchAbilitySystemComponent);
	UArchAbilitySystemComponent::~UArchAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchAbilitySystemComponent, UArchAbilitySystemComponent::StaticClass, TEXT("UArchAbilitySystemComponent"), &Z_Registration_Info_UClass_UArchAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchAbilitySystemComponent), 860642593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAbilitySystemComponent_h_1607654946(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_AbilitySystem_ArchAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
