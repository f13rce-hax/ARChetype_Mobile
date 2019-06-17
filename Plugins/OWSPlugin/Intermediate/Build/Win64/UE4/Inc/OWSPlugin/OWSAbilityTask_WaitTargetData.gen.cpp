// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityTask_WaitTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityTask_WaitTargetData() {}
// Cross Module References
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_WaitTargetData();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics
	{
		struct _Script_OWSPlugin_eventWaitTargetDataDelegate_Parms
		{
			FGameplayAbilityTargetDataHandle Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventWaitTargetDataDelegate_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "WaitTargetDataDelegate__DelegateSignature", sizeof(_Script_OWSPlugin_eventWaitTargetDataDelegate_Parms), Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOWSAbilityTask_WaitTargetData::StaticRegisterNativesUOWSAbilityTask_WaitTargetData()
	{
		UClass* Class = UOWSAbilityTask_WaitTargetData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSpawningActor", &UOWSAbilityTask_WaitTargetData::execBeginSpawningActor },
			{ "FinishSpawningActor", &UOWSAbilityTask_WaitTargetData::execFinishSpawningActor },
			{ "OnTargetDataCancelledCallback", &UOWSAbilityTask_WaitTargetData::execOnTargetDataCancelledCallback },
			{ "OnTargetDataReadyCallback", &UOWSAbilityTask_WaitTargetData::execOnTargetDataReadyCallback },
			{ "OnTargetDataReplicatedCallback", &UOWSAbilityTask_WaitTargetData::execOnTargetDataReplicatedCallback },
			{ "OnTargetDataReplicatedCancelledCallback", &UOWSAbilityTask_WaitTargetData::execOnTargetDataReplicatedCancelledCallback },
			{ "RPGWaitTargetData", &UOWSAbilityTask_WaitTargetData::execRPGWaitTargetData },
			{ "RPGWaitTargetDataUsingActor", &UOWSAbilityTask_WaitTargetData::execRPGWaitTargetDataUsingActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics
	{
		struct OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			TSubclassOf<AGameplayAbilityTargetActor>  Class;
			AGameplayAbilityTargetActor* SpawnedActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "BeginSpawningActor", sizeof(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics
	{
		struct OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			AGameplayAbilityTargetActor* SpawnedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "FinishSpawningActor", sizeof(OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics
	{
		struct OWSAbilityTask_WaitTargetData_eventOnTargetDataCancelledCallback_Parms
		{
			FGameplayAbilityTargetDataHandle Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventOnTargetDataCancelledCallback_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "OnTargetDataCancelledCallback", sizeof(OWSAbilityTask_WaitTargetData_eventOnTargetDataCancelledCallback_Parms), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics
	{
		struct OWSAbilityTask_WaitTargetData_eventOnTargetDataReadyCallback_Parms
		{
			FGameplayAbilityTargetDataHandle Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventOnTargetDataReadyCallback_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "OnTargetDataReadyCallback", sizeof(OWSAbilityTask_WaitTargetData_eventOnTargetDataReadyCallback_Parms), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics
	{
		struct OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms
		{
			FGameplayAbilityTargetDataHandle Data;
			FGameplayTag ActivationTag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_ActivationTag = { "ActivationTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms, ActivationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_ActivationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "OnTargetDataReplicatedCallback", sizeof(OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "OnTargetDataReplicatedCancelledCallback", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics
	{
		struct OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType;
			TSubclassOf<AGameplayAbilityTargetActor>  Class;
			UOWSAbilityTask_WaitTargetData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConfirmationType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, Class), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_ConfirmationType = { "ConfirmationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, ConfirmationType), Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_ConfirmationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "HideSpawnParms", "Instigator" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
		{ "ToolTip", "Spawns target actor and waits for it to return valid data or to be canceled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "RPGWaitTargetData", sizeof(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics
	{
		struct OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType;
			AGameplayAbilityTargetActor* TargetActor;
			UOWSAbilityTask_WaitTargetData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConfirmationType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, TargetActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_ConfirmationType = { "ConfirmationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, ConfirmationType), Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_ConfirmationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "HideSpawnParms", "Instigator" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
		{ "ToolTip", "Uses specified target actor and waits for it to return valid data or to be canceled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "RPGWaitTargetDataUsingActor", sizeof(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_NoRegister()
	{
		return UOWSAbilityTask_WaitTargetData::StaticClass();
	}
	struct Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Cancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor, "BeginSpawningActor" }, // 1422511652
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor, "FinishSpawningActor" }, // 156516280
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback, "OnTargetDataCancelledCallback" }, // 1160508084
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback, "OnTargetDataReadyCallback" }, // 1669944384
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback, "OnTargetDataReplicatedCallback" }, // 127176290
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback, "OnTargetDataReplicatedCancelledCallback" }, // 3633982016
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData, "RPGWaitTargetData" }, // 736930729
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor, "RPGWaitTargetDataUsingActor" }, // 3204711858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSAbilityTask_WaitTargetData.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
		{ "ToolTip", "Wait for targeting actor (spawned from parameter) to provide data. Can be set not to end upon outputting data. Can be ended by task name." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
		{ "ToolTip", "The TargetActor that we spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitTargetData, TargetActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_TargetActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_Cancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_Cancelled = { "Cancelled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitTargetData, Cancelled), Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_Cancelled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_Cancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_ValidData_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_ValidData = { "ValidData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitTargetData, ValidData), Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_ValidData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_ValidData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_Cancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_ValidData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilityTask_WaitTargetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::ClassParams = {
		&UOWSAbilityTask_WaitTargetData::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSAbilityTask_WaitTargetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSAbilityTask_WaitTargetData, 3012788853);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilityTask_WaitTargetData>()
	{
		return UOWSAbilityTask_WaitTargetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSAbilityTask_WaitTargetData(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, &UOWSAbilityTask_WaitTargetData::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSAbilityTask_WaitTargetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilityTask_WaitTargetData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
