// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityTask_SpawnProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityTask_SpawnProjectile() {}
// Cross Module References
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDelayedProjectileInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics
	{
		struct _Script_OWSPlugin_eventSpawnProjectileDelegate_Parms
		{
			AActor* SpawnedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventSpawnProjectileDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "SpawnProjectileDelegate__DelegateSignature", sizeof(_Script_OWSPlugin_eventSpawnProjectileDelegate_Parms), Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FDelayedProjectileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDelayedProjectileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelayedProjectileInfo, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("DelayedProjectileInfo"), sizeof(FDelayedProjectileInfo), Get_Z_Construct_UScriptStruct_FDelayedProjectileInfo_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FDelayedProjectileInfo>()
{
	return FDelayedProjectileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDelayedProjectileInfo(FDelayedProjectileInfo::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("DelayedProjectileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFDelayedProjectileInfo
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFDelayedProjectileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DelayedProjectileInfo")),new UScriptStruct::TCppStructOps<FDelayedProjectileInfo>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFDelayedProjectileInfo;
	struct Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelayedProjectileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelayedProjectileInfo, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelayedProjectileInfo, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelayedProjectileInfo, ProjectileClass), Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_ProjectileClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"DelayedProjectileInfo",
		sizeof(FDelayedProjectileInfo),
		alignof(FDelayedProjectileInfo),
		Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelayedProjectileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDelayedProjectileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DelayedProjectileInfo"), sizeof(FDelayedProjectileInfo), Get_Z_Construct_UScriptStruct_FDelayedProjectileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDelayedProjectileInfo_Hash() { return 2217835145U; }
	void UOWSAbilityTask_SpawnProjectile::StaticRegisterNativesUOWSAbilityTask_SpawnProjectile()
	{
		UClass* Class = UOWSAbilityTask_SpawnProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSpawningActor", &UOWSAbilityTask_SpawnProjectile::execBeginSpawningActor },
			{ "FinishSpawningActor", &UOWSAbilityTask_SpawnProjectile::execFinishSpawningActor },
			{ "SpawnProjectile", &UOWSAbilityTask_SpawnProjectile::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics
	{
		struct OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAbilityTargetDataHandle TargetData;
			TSubclassOf<AActor>  Class;
			AActor* SpawnedActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_TargetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile, nullptr, "BeginSpawningActor", sizeof(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms), Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics
	{
		struct OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAbilityTargetDataHandle TargetData;
			AActor* SpawnedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_TargetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile, nullptr, "FinishSpawningActor", sizeof(OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms), Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics
	{
		struct OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAbilityTargetDataHandle TargetData;
			TSubclassOf<AActor>  Class;
			bool UseAimCamera;
			bool IgnoreAimCameraPitch;
			FName StartingSocketName;
			float ForwardOffsetFromSocket;
			FGameplayEffectSpecHandle DirectDamageEffect;
			FGameplayEffectSpecHandle AOEDamageEffect;
			UOWSAbilityTask_SpawnProjectile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AOEDamageEffect;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectDamageEffect;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardOffsetFromSocket;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartingSocketName;
		static void NewProp_IgnoreAimCameraPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreAimCameraPitch;
		static void NewProp_UseAimCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAimCamera;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_AOEDamageEffect = { "AOEDamageEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, AOEDamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_DirectDamageEffect = { "DirectDamageEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, DirectDamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ForwardOffsetFromSocket = { "ForwardOffsetFromSocket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, ForwardOffsetFromSocket), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_StartingSocketName = { "StartingSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, StartingSocketName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_IgnoreAimCameraPitch_SetBit(void* Obj)
	{
		((OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms*)Obj)->IgnoreAimCameraPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_IgnoreAimCameraPitch = { "IgnoreAimCameraPitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_IgnoreAimCameraPitch_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseAimCamera_SetBit(void* Obj)
	{
		((OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms*)Obj)->UseAimCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseAimCamera = { "UseAimCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseAimCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_AOEDamageEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_DirectDamageEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ForwardOffsetFromSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_StartingSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_IgnoreAimCameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseAimCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_TargetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Spawn new Actor on the network authority (server)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile, nullptr, "SpawnProjectile", sizeof(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms), Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_NoRegister()
	{
		return UOWSAbilityTask_SpawnProjectile::StaticClass();
	}
	struct Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayedProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayedProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_geshAOEDamageEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_geshAOEDamageEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_geshDirectDamageEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_geshDirectDamageEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fAOEDamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAOEDamageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoesAOEDamge_MetaData[];
#endif
		static void NewProp_bDoesAOEDamge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoesAOEDamge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fForwardOffsetFromSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fForwardOffsetFromSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nameStartingSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_nameStartingSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAimCameraPitch_MetaData[];
#endif
		static void NewProp_bIgnoreAimCameraPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAimCameraPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAimCamera_MetaData[];
#endif
		static void NewProp_bUseAimCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAimCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor, "BeginSpawningActor" }, // 2542131656
		{ &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor, "FinishSpawningActor" }, // 1766762049
		{ &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile, "SpawnProjectile" }, // 2994575043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSAbilityTask_SpawnProjectile.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Spawn a projectile" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DelayedProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Delayed projectile information" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DelayedProjectile = { "DelayedProjectile", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, DelayedProjectile), Z_Construct_UScriptStruct_FDelayedProjectileInfo, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DelayedProjectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DelayedProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshAOEDamageEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshAOEDamageEffect = { "geshAOEDamageEffect", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, geshAOEDamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshAOEDamageEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshAOEDamageEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshDirectDamageEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshDirectDamageEffect = { "geshDirectDamageEffect", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, geshDirectDamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshDirectDamageEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshDirectDamageEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fAOEDamageRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fAOEDamageRadius = { "fAOEDamageRadius", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, fAOEDamageRadius), METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fAOEDamageRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fAOEDamageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	void Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge_SetBit(void* Obj)
	{
		((UOWSAbilityTask_SpawnProjectile*)Obj)->bDoesAOEDamge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge = { "bDoesAOEDamge", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOWSAbilityTask_SpawnProjectile), &Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fForwardOffsetFromSocket_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fForwardOffsetFromSocket = { "fForwardOffsetFromSocket", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, fForwardOffsetFromSocket), METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fForwardOffsetFromSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fForwardOffsetFromSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_nameStartingSocketName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_nameStartingSocketName = { "nameStartingSocketName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, nameStartingSocketName), METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_nameStartingSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_nameStartingSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	void Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch_SetBit(void* Obj)
	{
		((UOWSAbilityTask_SpawnProjectile*)Obj)->bIgnoreAimCameraPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch = { "bIgnoreAimCameraPitch", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOWSAbilityTask_SpawnProjectile), &Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	void Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera_SetBit(void* Obj)
	{
		((UOWSAbilityTask_SpawnProjectile*)Obj)->bUseAimCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera = { "bUseAimCamera", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOWSAbilityTask_SpawnProjectile), &Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
		{ "ToolTip", "Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn = { "DidNotSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, DidNotSpawn), Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, Success), Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_Success_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_Success_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DelayedProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshAOEDamageEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshDirectDamageEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fAOEDamageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fForwardOffsetFromSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_nameStartingSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilityTask_SpawnProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::ClassParams = {
		&UOWSAbilityTask_SpawnProjectile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSAbilityTask_SpawnProjectile, 4011602535);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilityTask_SpawnProjectile>()
	{
		return UOWSAbilityTask_SpawnProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSAbilityTask_SpawnProjectile(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile, &UOWSAbilityTask_SpawnProjectile::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSAbilityTask_SpawnProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilityTask_SpawnProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
