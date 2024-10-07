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
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchCountdownActionInput();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchCountdownActionOutput();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EArchDecoratorOperationType();
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
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchDecoratorOperationType;
	static UEnum* EArchDecoratorOperationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchDecoratorOperationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchDecoratorOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EArchDecoratorOperationType, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EArchDecoratorOperationType"));
		}
		return Z_Registration_Info_UEnum_EArchDecoratorOperationType.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EArchDecoratorOperationType>()
	{
		return EArchDecoratorOperationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics::Enumerators[] = {
		{ "EArchDecoratorOperationType::IsLessThan", (int64)EArchDecoratorOperationType::IsLessThan },
		{ "EArchDecoratorOperationType::IsLessThanOrEqualTo", (int64)EArchDecoratorOperationType::IsLessThanOrEqualTo },
		{ "EArchDecoratorOperationType::IsEqualTo", (int64)EArchDecoratorOperationType::IsEqualTo },
		{ "EArchDecoratorOperationType::IsGreaterOrEqualTo", (int64)EArchDecoratorOperationType::IsGreaterOrEqualTo },
		{ "EArchDecoratorOperationType::IsGreaterThan", (int64)EArchDecoratorOperationType::IsGreaterThan },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsEqualTo.Name", "EArchDecoratorOperationType::IsEqualTo" },
		{ "IsGreaterOrEqualTo.Name", "EArchDecoratorOperationType::IsGreaterOrEqualTo" },
		{ "IsGreaterThan.Name", "EArchDecoratorOperationType::IsGreaterThan" },
		{ "IsLessThan.Name", "EArchDecoratorOperationType::IsLessThan" },
		{ "IsLessThanOrEqualTo.Name", "EArchDecoratorOperationType::IsLessThanOrEqualTo" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchEnumTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EArchDecoratorOperationType",
		"EArchDecoratorOperationType",
		Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EArchDecoratorOperationType()
	{
		if (!Z_Registration_Info_UEnum_EArchDecoratorOperationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchDecoratorOperationType.InnerSingleton, Z_Construct_UEnum_Arch_EArchDecoratorOperationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchDecoratorOperationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchCountdownActionInput;
	static UEnum* EArchCountdownActionInput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchCountdownActionInput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchCountdownActionInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EArchCountdownActionInput, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EArchCountdownActionInput"));
		}
		return Z_Registration_Info_UEnum_EArchCountdownActionInput.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EArchCountdownActionInput>()
	{
		return EArchCountdownActionInput_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics::Enumerators[] = {
		{ "EArchCountdownActionInput::Start", (int64)EArchCountdownActionInput::Start },
		{ "EArchCountdownActionInput::Cancel", (int64)EArchCountdownActionInput::Cancel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EArchCountdownActionInput::Cancel" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchEnumTypes.h" },
		{ "Start.Name", "EArchCountdownActionInput::Start" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EArchCountdownActionInput",
		"EArchCountdownActionInput",
		Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EArchCountdownActionInput()
	{
		if (!Z_Registration_Info_UEnum_EArchCountdownActionInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchCountdownActionInput.InnerSingleton, Z_Construct_UEnum_Arch_EArchCountdownActionInput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchCountdownActionInput.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchCountdownActionOutput;
	static UEnum* EArchCountdownActionOutput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchCountdownActionOutput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchCountdownActionOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EArchCountdownActionOutput, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EArchCountdownActionOutput"));
		}
		return Z_Registration_Info_UEnum_EArchCountdownActionOutput.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EArchCountdownActionOutput>()
	{
		return EArchCountdownActionOutput_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics::Enumerators[] = {
		{ "EArchCountdownActionOutput::Updated", (int64)EArchCountdownActionOutput::Updated },
		{ "EArchCountdownActionOutput::Completed", (int64)EArchCountdownActionOutput::Completed },
		{ "EArchCountdownActionOutput::Cancelled", (int64)EArchCountdownActionOutput::Cancelled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EArchCountdownActionOutput::Cancelled" },
		{ "Completed.Name", "EArchCountdownActionOutput::Completed" },
		{ "ModuleRelativePath", "Public/ArchTypes/ArchEnumTypes.h" },
		{ "Updated.Name", "EArchCountdownActionOutput::Updated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EArchCountdownActionOutput",
		"EArchCountdownActionOutput",
		Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EArchCountdownActionOutput()
	{
		if (!Z_Registration_Info_UEnum_EArchCountdownActionOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchCountdownActionOutput.InnerSingleton, Z_Construct_UEnum_Arch_EArchCountdownActionOutput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchCountdownActionOutput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_Statics::EnumInfo[] = {
		{ EArchConfirmType_StaticEnum, TEXT("EArchConfirmType"), &Z_Registration_Info_UEnum_EArchConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2389398289U) },
		{ EArchValidType_StaticEnum, TEXT("EArchValidType"), &Z_Registration_Info_UEnum_EArchValidType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2743403886U) },
		{ EArchSuccessType_StaticEnum, TEXT("EArchSuccessType"), &Z_Registration_Info_UEnum_EArchSuccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3024437275U) },
		{ EArchDecoratorOperationType_StaticEnum, TEXT("EArchDecoratorOperationType"), &Z_Registration_Info_UEnum_EArchDecoratorOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3053316786U) },
		{ EArchCountdownActionInput_StaticEnum, TEXT("EArchCountdownActionInput"), &Z_Registration_Info_UEnum_EArchCountdownActionInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 59850139U) },
		{ EArchCountdownActionOutput_StaticEnum, TEXT("EArchCountdownActionOutput"), &Z_Registration_Info_UEnum_EArchCountdownActionOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3259838962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_2954986310(TEXT("/Script/Arch"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_ArchTypes_ArchEnumTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
