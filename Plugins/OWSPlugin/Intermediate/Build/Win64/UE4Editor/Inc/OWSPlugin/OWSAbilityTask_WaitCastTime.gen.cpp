// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityTask_WaitCastTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityTask_WaitCastTime() {}
// Cross Module References
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_WaitCastTime();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "WaitCancelDelegate__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "WaitDelayDelegate__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOWSAbilityTask_WaitCastTime::StaticRegisterNativesUOWSAbilityTask_WaitCastTime()
	{
		UClass* Class = UOWSAbilityTask_WaitCastTime::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelCallback", &UOWSAbilityTask_WaitCastTime::execOnCancelCallback },
			{ "OnLocalCancelCallback", &UOWSAbilityTask_WaitCastTime::execOnLocalCancelCallback },
			{ "RPGWaitCastTime", &UOWSAbilityTask_WaitCastTime::execRPGWaitCastTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitCastTime, nullptr, "OnCancelCallback", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitCastTime, nullptr, "OnLocalCancelCallback", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics
	{
		struct OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms
		{
			UGameplayAbility* OwningAbility;
			float CastTime;
			UOWSAbilityTask_WaitCastTime* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CastTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms, CastTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_CastTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
		{ "ToolTip", "Wait specified time. This is functionally the same as a standard Delay node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitCastTime, nullptr, "RPGWaitCastTime", sizeof(OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms), Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_NoRegister()
	{
		return UOWSAbilityTask_WaitCastTime::StaticClass();
	}
	struct Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Cancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClientFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback, "OnCancelCallback" }, // 4150735513
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback, "OnLocalCancelCallback" }, // 2287317719
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime, "RPGWaitCastTime" }, // 1024669713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSAbilityTask_WaitCastTime.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_Cancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_Cancelled = { "Cancelled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitCastTime, Cancelled), Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_Cancelled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_Cancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnClientFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnClientFinish = { "OnClientFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitCastTime, OnClientFinish), Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnClientFinish_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnClientFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitCastTime, OnFinish), Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnFinish_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnFinish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_Cancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnClientFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilityTask_WaitCastTime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::ClassParams = {
		&UOWSAbilityTask_WaitCastTime::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSAbilityTask_WaitCastTime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSAbilityTask_WaitCastTime, 1797091340);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilityTask_WaitCastTime>()
	{
		return UOWSAbilityTask_WaitCastTime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSAbilityTask_WaitCastTime(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime, &UOWSAbilityTask_WaitCastTime::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSAbilityTask_WaitCastTime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilityTask_WaitCastTime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
