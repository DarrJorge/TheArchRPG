// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Characters/ArchEnemyCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchEnemyCharacter() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_AArchBaseCharacter();
	ARCH_API UClass* Z_Construct_UClass_AArchEnemyCharacter();
	ARCH_API UClass* Z_Construct_UClass_AArchEnemyCharacter_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UArchEnemyUIComponent_NoRegister();
	ARCH_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	DEFINE_FUNCTION(AArchEnemyCharacter::execOnUnarmedCollisionBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnarmedCollisionBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AArchEnemyCharacter::StaticRegisterNativesAArchEnemyCharacter()
	{
		UClass* Class = AArchEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUnarmedCollisionBeginOverlap", &AArchEnemyCharacter::execOnUnarmedCollisionBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics
	{
		struct ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms), &Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchEnemyCharacter, nullptr, "OnUnarmedCollisionBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::ArchEnemyCharacter_eventOnUnarmedCollisionBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchEnemyCharacter);
	UClass* Z_Construct_UClass_AArchEnemyCharacter_NoRegister()
	{
		return AArchEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArchEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourTreeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourTreeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCombatComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyUIComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyUIComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthWidgetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandCollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandCollisionBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandCollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandCollisionBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandAttachBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandAttachBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandAttachBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandAttachBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArchBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AArchEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArchEnemyCharacter_OnUnarmedCollisionBeginOverlap, "OnUnarmedCollisionBeginOverlap" }, // 2441752858
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/ArchEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_BehaviourTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_BehaviourTreeAsset = { "BehaviourTreeAsset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, BehaviourTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_BehaviourTreeAsset_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_BehaviourTreeAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent_MetaData[] = {
		{ "Category", "Arch|Combat|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent = { "EnemyCombatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, EnemyCombatComponent), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyUIComponent_MetaData[] = {
		{ "Category", "Arch|UI|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyUIComponent = { "EnemyUIComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, EnemyUIComponent), Z_Construct_UClass_UArchEnemyUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyUIComponent_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyUIComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_HealthWidgetComponent_MetaData[] = {
		{ "Category", "Arch|UI|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_HealthWidgetComponent = { "HealthWidgetComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, HealthWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_HealthWidgetComponent_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_HealthWidgetComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandCollisionBox_MetaData[] = {
		{ "Category", "Arch|UI|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandCollisionBox = { "LeftHandCollisionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, LeftHandCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandCollisionBox_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandCollisionBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandCollisionBox_MetaData[] = {
		{ "Category", "Arch|UI|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandCollisionBox = { "RightHandCollisionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, RightHandCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandCollisionBox_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandCollisionBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandAttachBoneName_MetaData[] = {
		{ "Category", "Arch|UI|Components" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandAttachBoneName = { "LeftHandAttachBoneName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, LeftHandAttachBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandAttachBoneName_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandAttachBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandAttachBoneName_MetaData[] = {
		{ "Category", "Arch|UI|Components" },
		{ "ModuleRelativePath", "Public/Characters/ArchEnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandAttachBoneName = { "RightHandAttachBoneName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchEnemyCharacter, RightHandAttachBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandAttachBoneName_MetaData), Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandAttachBoneName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_BehaviourTreeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyCombatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_EnemyUIComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_HealthWidgetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandCollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandCollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_LeftHandAttachBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchEnemyCharacter_Statics::NewProp_RightHandAttachBoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchEnemyCharacter_Statics::ClassParams = {
		&AArchEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArchEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchEnemyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchEnemyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AArchEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AArchEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchEnemyCharacter.OuterSingleton, Z_Construct_UClass_AArchEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchEnemyCharacter.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchEnemyCharacter>()
	{
		return AArchEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchEnemyCharacter);
	AArchEnemyCharacter::~AArchEnemyCharacter() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchEnemyCharacter, AArchEnemyCharacter::StaticClass, TEXT("AArchEnemyCharacter"), &Z_Registration_Info_UClass_AArchEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchEnemyCharacter), 937490337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_878005993(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Characters_ArchEnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
