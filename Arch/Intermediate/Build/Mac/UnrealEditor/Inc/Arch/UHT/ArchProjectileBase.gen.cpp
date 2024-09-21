// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arch/Public/Items/Projectiles/ArchProjectileBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchProjectileBase() {}
// Cross Module References
	ARCH_API UClass* Z_Construct_UClass_AArchProjectileBase();
	ARCH_API UClass* Z_Construct_UClass_AArchProjectileBase_NoRegister();
	ARCH_API UEnum* Z_Construct_UEnum_Arch_EProjectileDamagePolicy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Arch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileDamagePolicy;
	static UEnum* EProjectileDamagePolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Arch_EProjectileDamagePolicy, (UObject*)Z_Construct_UPackage__Script_Arch(), TEXT("EProjectileDamagePolicy"));
		}
		return Z_Registration_Info_UEnum_EProjectileDamagePolicy.OuterSingleton;
	}
	template<> ARCH_API UEnum* StaticEnum<EProjectileDamagePolicy>()
	{
		return EProjectileDamagePolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics::Enumerators[] = {
		{ "EProjectileDamagePolicy::OnHit", (int64)EProjectileDamagePolicy::OnHit },
		{ "EProjectileDamagePolicy::OnBeginOverlap", (int64)EProjectileDamagePolicy::OnBeginOverlap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
		{ "OnBeginOverlap.Name", "EProjectileDamagePolicy::OnBeginOverlap" },
		{ "OnHit.Name", "EProjectileDamagePolicy::OnHit" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Arch,
		nullptr,
		"EProjectileDamagePolicy",
		"EProjectileDamagePolicy",
		Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Arch_EProjectileDamagePolicy()
	{
		if (!Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton, Z_Construct_UEnum_Arch_EProjectileDamagePolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProjectileDamagePolicy.InnerSingleton;
	}
	DEFINE_FUNCTION(AArchProjectileBase::execOnProjectileBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArchProjectileBase::execOnProjectileHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	struct ArchProjectileBase_eventOnSpawnProjectileHitFX_Parms
	{
		FVector HitLocation;
	};
	static FName NAME_AArchProjectileBase_OnSpawnProjectileHitFX = FName(TEXT("OnSpawnProjectileHitFX"));
	void AArchProjectileBase::OnSpawnProjectileHitFX(FVector const& HitLocation)
	{
		ArchProjectileBase_eventOnSpawnProjectileHitFX_Parms Parms;
		Parms.HitLocation=HitLocation;
		ProcessEvent(FindFunctionChecked(NAME_AArchProjectileBase_OnSpawnProjectileHitFX),&Parms);
	}
	void AArchProjectileBase::StaticRegisterNativesAArchProjectileBase()
	{
		UClass* Class = AArchProjectileBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileBeginOverlap", &AArchProjectileBase::execOnProjectileBeginOverlap },
			{ "OnProjectileHit", &AArchProjectileBase::execOnProjectileHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics
	{
		struct ArchProjectileBase_eventOnProjectileBeginOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ArchProjectileBase_eventOnProjectileBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArchProjectileBase_eventOnProjectileBeginOverlap_Parms), &Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchProjectileBase, nullptr, "OnProjectileBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::ArchProjectileBase_eventOnProjectileBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::ArchProjectileBase_eventOnProjectileBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics
	{
		struct ArchProjectileBase_eventOnProjectileHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnProjectileHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchProjectileBase, nullptr, "OnProjectileHit", nullptr, nullptr, Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::ArchProjectileBase_eventOnProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::ArchProjectileBase_eventOnProjectileHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchProjectileBase_eventOnSpawnProjectileHitFX_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::NewProp_HitLocation_MetaData), Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::NewProp_HitLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::NewProp_HitLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchProjectileBase, nullptr, "OnSpawnProjectileHitFX", nullptr, nullptr, Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::PropPointers), sizeof(ArchProjectileBase_eventOnSpawnProjectileHitFX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::PropPointers) < 2048);
	static_assert(sizeof(ArchProjectileBase_eventOnSpawnProjectileHitFX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchProjectileBase);
	UClass* Z_Construct_UClass_AArchProjectileBase_NoRegister()
	{
		return AArchProjectileBase::StaticClass();
	}
	struct Z_Construct_UClass_AArchProjectileBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileCollisionBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileVFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileVFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectileDamagePolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamagePolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectileDamagePolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamageEffectSpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileDamageEffectSpecHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchProjectileBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AArchProjectileBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArchProjectileBase_OnProjectileBeginOverlap, "OnProjectileBeginOverlap" }, // 506591967
		{ &Z_Construct_UFunction_AArchProjectileBase_OnProjectileHit, "OnProjectileHit" }, // 1195907114
		{ &Z_Construct_UFunction_AArchProjectileBase_OnSpawnProjectileHitFX, "OnSpawnProjectileHitFX" }, // 1611252061
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchProjectileBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Projectiles/ArchProjectileBase.h" },
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileCollisionBox_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileCollisionBox = { "ProjectileCollisionBox", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchProjectileBase, ProjectileCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileCollisionBox_MetaData), Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileCollisionBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileVFX_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileVFX = { "ProjectileVFX", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchProjectileBase, ProjectileVFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileVFX_MetaData), Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileVFX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchProjectileBase, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileMovementComponent_MetaData), Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileMovementComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamagePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamagePolicy_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamagePolicy = { "ProjectileDamagePolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchProjectileBase, ProjectileDamagePolicy), Z_Construct_UEnum_Arch_EProjectileDamagePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamagePolicy_MetaData), Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamagePolicy_MetaData) }; // 3468388540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamageEffectSpecHandle_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Items/Projectiles/ArchProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamageEffectSpecHandle = { "ProjectileDamageEffectSpecHandle", nullptr, (EPropertyFlags)0x0021080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArchProjectileBase, ProjectileDamageEffectSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamageEffectSpecHandle_MetaData), Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamageEffectSpecHandle_MetaData) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArchProjectileBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileCollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileVFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamagePolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamagePolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArchProjectileBase_Statics::NewProp_ProjectileDamageEffectSpecHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchProjectileBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchProjectileBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchProjectileBase_Statics::ClassParams = {
		&AArchProjectileBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArchProjectileBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchProjectileBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchProjectileBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AArchProjectileBase()
	{
		if (!Z_Registration_Info_UClass_AArchProjectileBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchProjectileBase.OuterSingleton, Z_Construct_UClass_AArchProjectileBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArchProjectileBase.OuterSingleton;
	}
	template<> ARCH_API UClass* StaticClass<AArchProjectileBase>()
	{
		return AArchProjectileBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchProjectileBase);
	AArchProjectileBase::~AArchProjectileBase() {}
	struct Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_Statics::EnumInfo[] = {
		{ EProjectileDamagePolicy_StaticEnum, TEXT("EProjectileDamagePolicy"), &Z_Registration_Info_UEnum_EProjectileDamagePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3468388540U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArchProjectileBase, AArchProjectileBase::StaticClass, TEXT("AArchProjectileBase"), &Z_Registration_Info_UClass_AArchProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchProjectileBase), 2705867543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_683110793(TEXT("/Script/Arch"),
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_darr_jorge_Projects_Unreal_TheArchRPG_Arch_Source_Arch_Public_Items_Projectiles_ArchProjectileBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
