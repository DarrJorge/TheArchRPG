// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/ArchFunctionLibrary.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchFunctionLibrary() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UArchFunctionLibrary();
	ARCH_API UClass* Z_Construct_UClass_UArchFunctionLibrary_NoRegister();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchConfirmType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchConfirmType;
	static UEnum* EArchConfirmType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchConfirmType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchConfirmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EArchConfirmType, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EArchConfirmType"));
		}
		return Z_Registration_Info_UEnum_EArchConfirmType.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EArchConfirmType>()
	{
		return EArchConfirmType_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EArchConfirmType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EArchConfirmType_Statics::Enumerators[] = {
		{ "EArchConfirmType::Yes", (int64)EArchConfirmType::Yes },
		{ "EArchConfirmType::No", (int64)EArchConfirmType::No },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EArchConfirmType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
		{ "No.Name", "EArchConfirmType::No" },
		{ "Yes.Name", "EArchConfirmType::Yes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EArchConfirmType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EArchConfirmType",
		"EArchConfirmType",
		Z_Construct_UEnum_Arch_EArchConfirmType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchConfirmType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchConfirmType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EArchConfirmType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EArchConfirmType()
	{
		if (!Z_Registration_Info_UEnum_EArchConfirmType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchConfirmType.InnerSingleton, Z_Construct_UEnum_Arch_EArchConfirmType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchConfirmType.InnerSingleton;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execBP_DoesActorHaveTag)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_GET_ENUM_REF(EArchConfirmType,Z_Param_Out_OutConfirmType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::BP_DoesActorHaveTag(Z_Param_InActor,Z_Param_TagToCheck,(EArchConfirmType&)(Z_Param_Out_OutConfirmType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execRemoveGameplayTagFromActorIfFound)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::RemoveGameplayTagFromActorIfFound(Z_Param_InActor,Z_Param_TagToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchFunctionLibrary::execAddGameplayTagToActorIfNone)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchFunctionLibrary::AddGameplayTagToActorIfNone(Z_Param_InActor,Z_Param_TagToAdd);
		P_NATIVE_END;
	}
	void UArchFunctionLibrary::StaticRegisterNativesUArchFunctionLibrary()
	{
		UClass* Class = UArchFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayTagToActorIfNone", &UArchFunctionLibrary::execAddGameplayTagToActorIfNone },
			{ "BP_DoesActorHaveTag", &UArchFunctionLibrary::execBP_DoesActorHaveTag },
			{ "RemoveGameplayTagFromActorIfFound", &UArchFunctionLibrary::execRemoveGameplayTagFromActorIfFound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics
	{
		struct ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms
		{
			AActor* InActor;
			FGameplayTag TagToAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "AddGameplayTagToActorIfNone", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::ArchFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics
	{
		struct ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms
		{
			AActor* InActor;
			FGameplayTag TagToCheck;
			EArchConfirmType OutConfirmType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutConfirmType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutConfirmType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType = { "OutConfirmType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms, OutConfirmType), Z_Construct_UEnum_Arch_EArchConfirmType, METADATA_PARAMS(0, nullptr) }; // 473576213
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_TagToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "DisplayName", "Does Actor Have Tag" },
		{ "ExpandEnumAsExecs", "OutConfirmType" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "BP_DoesActorHaveTag", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::ArchFunctionLibrary_eventBP_DoesActorHaveTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics
	{
		struct ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms
		{
			AActor* InActor;
			FGameplayTag TagToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|BlueprintFunctionLibrary" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchFunctionLibrary, nullptr, "RemoveGameplayTagFromActorIfFound", nullptr, nullptr, Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::ArchFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchFunctionLibrary);
	UClass* Z_Construct_UClass_UArchFunctionLibrary_NoRegister()
	{
		return UArchFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UArchFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchFunctionLibrary_AddGameplayTagToActorIfNone, "AddGameplayTagToActorIfNone" }, // 2167640235
		{ &Z_Construct_UFunction_UArchFunctionLibrary_BP_DoesActorHaveTag, "BP_DoesActorHaveTag" }, // 1470331359
		{ &Z_Construct_UFunction_UArchFunctionLibrary_RemoveGameplayTagFromActorIfFound, "RemoveGameplayTagFromActorIfFound" }, // 436120141
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ArchFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchFunctionLibrary_Statics::ClassParams = {
		&UArchFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UArchFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchFunctionLibrary.OuterSingleton, Z_Construct_UClass_UArchFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchFunctionLibrary.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UArchFunctionLibrary>()
	{
		return UArchFunctionLibrary::StaticClass();
	}
	UArchFunctionLibrary::UArchFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchFunctionLibrary);
	UArchFunctionLibrary::~UArchFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EArchConfirmType_StaticEnum, TEXT("EArchConfirmType"), &Z_Registration_Info_UEnum_EArchConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 473576213U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchFunctionLibrary, UArchFunctionLibrary::StaticClass, TEXT("UArchFunctionLibrary"), &Z_Registration_Info_UClass_UArchFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchFunctionLibrary), 1296469429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_4004605767(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
