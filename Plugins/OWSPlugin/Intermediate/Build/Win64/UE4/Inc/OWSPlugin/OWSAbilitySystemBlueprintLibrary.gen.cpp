// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilitySystemBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilitySystemBlueprintLibrary() {}
// Cross Module References
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter();
// End Cross Module References
class UScriptStruct* FGameplayAbilityCastingTargetingLocationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GameplayAbilityCastingTargetingLocationInfo"), sizeof(FGameplayAbilityCastingTargetingLocationInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGameplayAbilityCastingTargetingLocationInfo>()
{
	return FGameplayAbilityCastingTargetingLocationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo(FGameplayAbilityCastingTargetingLocationInfo::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("GameplayAbilityCastingTargetingLocationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFGameplayAbilityCastingTargetingLocationInfo
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFGameplayAbilityCastingTargetingLocationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityCastingTargetingLocationInfo")),new UScriptStruct::TCppStructOps<FGameplayAbilityCastingTargetingLocationInfo>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFGameplayAbilityCastingTargetingLocationInfo;
	struct Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChargeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityCastingTargetingLocationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
		{ "ToolTip", "Generic location data for target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityCastingTargetingLocationInfo, TargetLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_SourceLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
		{ "ToolTip", "Generic location data for source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_SourceLocation = { "SourceLocation", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityCastingTargetingLocationInfo, SourceLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_SourceLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_SourceLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_UniqueID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
		{ "ToolTip", "The ID of the Ability that is performing targeting" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityCastingTargetingLocationInfo, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_UniqueID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_ChargeTime_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
		{ "ToolTip", "Amount of time the ability has been charged" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_ChargeTime = { "ChargeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityCastingTargetingLocationInfo, ChargeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_ChargeTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_ChargeTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_SourceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_ChargeTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"GameplayAbilityCastingTargetingLocationInfo",
		sizeof(FGameplayAbilityCastingTargetingLocationInfo),
		alignof(FGameplayAbilityCastingTargetingLocationInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityCastingTargetingLocationInfo"), sizeof(FGameplayAbilityCastingTargetingLocationInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Hash() { return 988787143U; }
	void UOWSAbilitySystemBlueprintLibrary::StaticRegisterNativesUOWSAbilitySystemBlueprintLibrary()
	{
		UClass* Class = UOWSAbilitySystemBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterTargetData", &UOWSAbilitySystemBlueprintLibrary::execFilterTargetData },
			{ "GetOWSChargeTimeFromTargetData", &UOWSAbilitySystemBlueprintLibrary::execGetOWSChargeTimeFromTargetData },
			{ "MakeFilterHandle", &UOWSAbilitySystemBlueprintLibrary::execMakeFilterHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics
	{
		struct OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms
		{
			FGameplayAbilityTargetDataHandle TargetDataHandle;
			FOWSGameplayTargetDataFilterHandle FilterHandle;
			FGameplayAbilityTargetDataHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilterHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDataHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDataHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_FilterHandle = { "FilterHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms, FilterHandle), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_TargetDataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_TargetDataHandle = { "TargetDataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms, TargetDataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_TargetDataHandle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_TargetDataHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_FilterHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_TargetDataHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|TargetData" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary, nullptr, "FilterTargetData", sizeof(OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms), Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics
	{
		struct OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms
		{
			FGameplayAbilityTargetDataHandle TargetData;
			int32 Index;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_TargetData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_TargetData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|TargetData" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary, nullptr, "GetOWSChargeTimeFromTargetData", sizeof(OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms), Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics
	{
		struct OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms
		{
			FOWSGameplayTargetDataFilter Filter;
			AActor* FilterActor;
			FOWSGameplayTargetDataFilterHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FilterActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_FilterActor = { "FilterActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms, FilterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms, Filter), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_FilterActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary, nullptr, "MakeFilterHandle", sizeof(OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms), Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_NoRegister()
	{
		return UOWSAbilitySystemBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData, "FilterTargetData" }, // 1347226926
		{ &Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData, "GetOWSChargeTimeFromTargetData" }, // 3980965116
		{ &Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle, "MakeFilterHandle" }, // 3456172137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSAbilitySystemBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilitySystemBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::ClassParams = {
		&UOWSAbilitySystemBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSAbilitySystemBlueprintLibrary, 1740143244);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilitySystemBlueprintLibrary>()
	{
		return UOWSAbilitySystemBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSAbilitySystemBlueprintLibrary(Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary, &UOWSAbilitySystemBlueprintLibrary::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSAbilitySystemBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilitySystemBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
