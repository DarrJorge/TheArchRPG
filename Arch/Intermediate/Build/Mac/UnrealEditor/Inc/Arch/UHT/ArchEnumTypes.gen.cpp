// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/ArchTypes/ArchEnumTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchEnumTypes() {}
// Cross Module References
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchConfirmType();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchSuccessType();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchValidType();
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
		{ "ModuleRelativePath", "Public/ArchTypes/ArchEnumTypes.h" },
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
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchValidType;
	static UEnum* EArchValidType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchValidType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchValidType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EArchValidType, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EArchValidType"));
		}
		return Z_Registration_Info_UEnum_EArchValidType.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EArchValidType>()
	{
		return EArchValidType_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EArchValidType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EArchValidType_Statics::Enumerators[] = {
		{ "EArchValidType::Valid", (int64)EArchValidType::Valid },
		{ "EArchValidType::Invalid", (int64)EArchValidType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EArchValidType_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EArchValidType::Invalid" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchEnumTypes.h" },
		{ "Valid.Name", "EArchValidType::Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EArchValidType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EArchValidType",
		"EArchValidType",
		Z_Construct_UEnum_Arch_EArchValidType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchValidType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchValidType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EArchValidType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EArchValidType()
	{
		if (!Z_Registration_Info_UEnum_EArchValidType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchValidType.InnerSingleton, Z_Construct_UEnum_Arch_EArchValidType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchValidType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchSuccessType;
	static UEnum* EArchSuccessType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchSuccessType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchSuccessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EArchSuccessType, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EArchSuccessType"));
		}
		return Z_Registration_Info_UEnum_EArchSuccessType.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EArchSuccessType>()
	{
		return EArchSuccessType_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EArchSuccessType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EArchSuccessType_Statics::Enumerators[] = {
		{ "EArchSuccessType::Successful", (int64)EArchSuccessType::Successful },
		{ "EArchSuccessType::Failed", (int64)EArchSuccessType::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EArchSuccessType_Statics::Enum_MetaDataParams[] = {
		{ "Failed.Name", "EArchSuccessType::Failed" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchEnumTypes.h" },
		{ "Successful.Name", "EArchSuccessType::Successful" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EArchSuccessType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EArchSuccessType",
		"EArchSuccessType",
		Z_Construct_UEnum_Arch_EArchSuccessType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchSuccessType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchSuccessType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EArchSuccessType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EArchSuccessType()
	{
		if (!Z_Registration_Info_UEnum_EArchSuccessType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchSuccessType.InnerSingleton, Z_Construct_UEnum_Arch_EArchSuccessType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchSuccessType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_Statics::EnumInfo[] = {
		{ EArchConfirmType_StaticEnum, TEXT("EArchConfirmType"), &Z_Registration_Info_UEnum_EArchConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2389398289U) },
		{ EArchValidType_StaticEnum, TEXT("EArchValidType"), &Z_Registration_Info_UEnum_EArchValidType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2743403886U) },
		{ EArchSuccessType_StaticEnum, TEXT("EArchSuccessType"), &Z_Registration_Info_UEnum_EArchSuccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3024437275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_3831033307(TEXT("/Script/Arch"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
