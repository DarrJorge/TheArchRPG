// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/UI/Widgets/PlayerOverlayWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerOverlayWidget() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_UHeroUIWidget();
	ARCH_API UClass* Z_Construct_UClass_UPlayerOverlayWidget();
	ARCH_API UClass* Z_Construct_UClass_UPlayerOverlayWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerOverlayWidget::execOnWeaponIconChangedHandler)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWeaponIconChangedHandler(Z_Param_InTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerOverlayWidget::execOnManaChangedHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnManaChangedHandler(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerOverlayWidget::execOnRageChangedHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRageChangedHandler(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerOverlayWidget::execOnHealthChangedHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChangedHandler(Z_Param_NewValue);
		P_NATIVE_END;
	}
	struct PlayerOverlayWidget_eventOnHealthChangedEvent_Parms
	{
		float NewValue;
	};
	struct PlayerOverlayWidget_eventOnManaChangedEvent_Parms
	{
		float NewValue;
	};
	struct PlayerOverlayWidget_eventOnRageChangedEvent_Parms
	{
		float NewValue;
	};
	struct PlayerOverlayWidget_eventOnWeaponIconChanged_Parms
	{
		TSoftObjectPtr<UTexture2D> NewTexture;
	};
	static FName NAME_UPlayerOverlayWidget_OnHealthChangedEvent = FName(TEXT("OnHealthChangedEvent"));
	void UPlayerOverlayWidget::OnHealthChangedEvent(float NewValue)
	{
		PlayerOverlayWidget_eventOnHealthChangedEvent_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerOverlayWidget_OnHealthChangedEvent),&Parms);
	}
	static FName NAME_UPlayerOverlayWidget_OnManaChangedEvent = FName(TEXT("OnManaChangedEvent"));
	void UPlayerOverlayWidget::OnManaChangedEvent(float NewValue)
	{
		PlayerOverlayWidget_eventOnManaChangedEvent_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerOverlayWidget_OnManaChangedEvent),&Parms);
	}
	static FName NAME_UPlayerOverlayWidget_OnRageChangedEvent = FName(TEXT("OnRageChangedEvent"));
	void UPlayerOverlayWidget::OnRageChangedEvent(float NewValue)
	{
		PlayerOverlayWidget_eventOnRageChangedEvent_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerOverlayWidget_OnRageChangedEvent),&Parms);
	}
	static FName NAME_UPlayerOverlayWidget_OnWeaponIconChanged = FName(TEXT("OnWeaponIconChanged"));
	void UPlayerOverlayWidget::OnWeaponIconChanged(TSoftObjectPtr<UTexture2D> const& NewTexture)
	{
		PlayerOverlayWidget_eventOnWeaponIconChanged_Parms Parms;
		Parms.NewTexture=NewTexture;
		ProcessEvent(FindFunctionChecked(NAME_UPlayerOverlayWidget_OnWeaponIconChanged),&Parms);
	}
	void UPlayerOverlayWidget::StaticRegisterNativesUPlayerOverlayWidget()
	{
		UClass* Class = UPlayerOverlayWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChangedHandler", &UPlayerOverlayWidget::execOnHealthChangedHandler },
			{ "OnManaChangedHandler", &UPlayerOverlayWidget::execOnManaChangedHandler },
			{ "OnRageChangedHandler", &UPlayerOverlayWidget::execOnRageChangedHandler },
			{ "OnWeaponIconChangedHandler", &UPlayerOverlayWidget::execOnWeaponIconChangedHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerOverlayWidget_eventOnHealthChangedEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOverlayWidget, nullptr, "OnHealthChangedEvent", nullptr, nullptr, Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::PropPointers), sizeof(PlayerOverlayWidget_eventOnHealthChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerOverlayWidget_eventOnHealthChangedEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics
	{
		struct PlayerOverlayWidget_eventOnHealthChangedHandler_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerOverlayWidget_eventOnHealthChangedHandler_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOverlayWidget, nullptr, "OnHealthChangedHandler", nullptr, nullptr, Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::PlayerOverlayWidget_eventOnHealthChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::PlayerOverlayWidget_eventOnHealthChangedHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerOverlayWidget_eventOnManaChangedEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOverlayWidget, nullptr, "OnManaChangedEvent", nullptr, nullptr, Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::PropPointers), sizeof(PlayerOverlayWidget_eventOnManaChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerOverlayWidget_eventOnManaChangedEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics
	{
		struct PlayerOverlayWidget_eventOnManaChangedHandler_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerOverlayWidget_eventOnManaChangedHandler_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOverlayWidget, nullptr, "OnManaChangedHandler", nullptr, nullptr, Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::PlayerOverlayWidget_eventOnManaChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::PlayerOverlayWidget_eventOnManaChangedHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerOverlayWidget_eventOnRageChangedEvent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOverlayWidget, nullptr, "OnRageChangedEvent", nullptr, nullptr, Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::PropPointers), sizeof(PlayerOverlayWidget_eventOnRageChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerOverlayWidget_eventOnRageChangedEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics
	{
		struct PlayerOverlayWidget_eventOnRageChangedHandler_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerOverlayWidget_eventOnRageChangedHandler_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOverlayWidget, nullptr, "OnRageChangedHandler", nullptr, nullptr, Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::PlayerOverlayWidget_eventOnRageChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::PlayerOverlayWidget_eventOnRageChangedHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::NewProp_NewTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerOverlayWidget_eventOnWeaponIconChanged_Parms, NewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::NewProp_NewTexture_MetaData), Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::NewProp_NewTexture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::NewProp_NewTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arch|UI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOverlayWidget, nullptr, "OnWeaponIconChanged", nullptr, nullptr, Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::PropPointers), sizeof(PlayerOverlayWidget_eventOnWeaponIconChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerOverlayWidget_eventOnWeaponIconChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics
	{
		struct PlayerOverlayWidget_eventOnWeaponIconChangedHandler_Parms
		{
			TSoftObjectPtr<UTexture2D> InTexture;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerOverlayWidget_eventOnWeaponIconChangedHandler_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerOverlayWidget, nullptr, "OnWeaponIconChangedHandler", nullptr, nullptr, Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::PlayerOverlayWidget_eventOnWeaponIconChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::PlayerOverlayWidget_eventOnWeaponIconChangedHandler_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerOverlayWidget);
	UClass* Z_Construct_UClass_UPlayerOverlayWidget_NoRegister()
	{
		return UPlayerOverlayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerOverlayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerOverlayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHeroUIWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlayWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerOverlayWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedEvent, "OnHealthChangedEvent" }, // 2707875121
		{ &Z_Construct_UFunction_UPlayerOverlayWidget_OnHealthChangedHandler, "OnHealthChangedHandler" }, // 647921409
		{ &Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedEvent, "OnManaChangedEvent" }, // 749488461
		{ &Z_Construct_UFunction_UPlayerOverlayWidget_OnManaChangedHandler, "OnManaChangedHandler" }, // 2949856272
		{ &Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedEvent, "OnRageChangedEvent" }, // 499387616
		{ &Z_Construct_UFunction_UPlayerOverlayWidget_OnRageChangedHandler, "OnRageChangedHandler" }, // 1002322176
		{ &Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChanged, "OnWeaponIconChanged" }, // 3524869073
		{ &Z_Construct_UFunction_UPlayerOverlayWidget_OnWeaponIconChangedHandler, "OnWeaponIconChangedHandler" }, // 1008926591
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlayWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlayWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/PlayerOverlayWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/PlayerOverlayWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerOverlayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerOverlayWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerOverlayWidget_Statics::ClassParams = {
		&UPlayerOverlayWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlayWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerOverlayWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlayerOverlayWidget()
	{
		if (!Z_Registration_Info_UClass_UPlayerOverlayWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerOverlayWidget.OuterSingleton, Z_Construct_UClass_UPlayerOverlayWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerOverlayWidget.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<UPlayerOverlayWidget>()
	{
		return UPlayerOverlayWidget::StaticClass();
	}
	UPlayerOverlayWidget::UPlayerOverlayWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerOverlayWidget);
	UPlayerOverlayWidget::~UPlayerOverlayWidget() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_PlayerOverlayWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_PlayerOverlayWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerOverlayWidget, UPlayerOverlayWidget::StaticClass, TEXT("UPlayerOverlayWidget"), &Z_Registration_Info_UClass_UPlayerOverlayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerOverlayWidget), 2512473042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_PlayerOverlayWidget_h_284627397(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_PlayerOverlayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_UI_Widgets_PlayerOverlayWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
