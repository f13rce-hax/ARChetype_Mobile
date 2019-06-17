// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetDatafilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetDatafilter() {}
// Cross Module References
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilter();
// End Cross Module References
class UScriptStruct* FOWSGameplayTargetDataFilterHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("OWSGameplayTargetDataFilterHandle"), sizeof(FOWSGameplayTargetDataFilterHandle), Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FOWSGameplayTargetDataFilterHandle>()
{
	return FOWSGameplayTargetDataFilterHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOWSGameplayTargetDataFilterHandle(FOWSGameplayTargetDataFilterHandle::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("OWSGameplayTargetDataFilterHandle"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFOWSGameplayTargetDataFilterHandle
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFOWSGameplayTargetDataFilterHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OWSGameplayTargetDataFilterHandle")),new UScriptStruct::TCppStructOps<FOWSGameplayTargetDataFilterHandle>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFOWSGameplayTargetDataFilterHandle;
	struct Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetDatafilter.h" },
		{ "ToolTip", "Polymorphic handle to filter structure that handles checking if actors should be targeted" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWSGameplayTargetDataFilterHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"OWSGameplayTargetDataFilterHandle",
		sizeof(FOWSGameplayTargetDataFilterHandle),
		alignof(FOWSGameplayTargetDataFilterHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OWSGameplayTargetDataFilterHandle"), sizeof(FOWSGameplayTargetDataFilterHandle), Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Hash() { return 3795340679U; }
class UScriptStruct* FOWSGameplayTargetDataFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("OWSGameplayTargetDataFilter"), sizeof(FOWSGameplayTargetDataFilter), Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FOWSGameplayTargetDataFilter>()
{
	return FOWSGameplayTargetDataFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOWSGameplayTargetDataFilter(FOWSGameplayTargetDataFilter::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("OWSGameplayTargetDataFilter"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFOWSGameplayTargetDataFilter
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFOWSGameplayTargetDataFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OWSGameplayTargetDataFilter")),new UScriptStruct::TCppStructOps<FOWSGameplayTargetDataFilter>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFOWSGameplayTargetDataFilter;
	struct Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TeamNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetDatafilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWSGameplayTargetDataFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewProp_TeamNumber_MetaData[] = {
		{ "Category", "Filter" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetDatafilter.h" },
		{ "ToolTip", "Filter based on whether or not this actor is \"self.\"" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOWSGameplayTargetDataFilter, TeamNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewProp_TeamNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewProp_TeamNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewProp_TeamNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		Z_Construct_UScriptStruct_FGameplayTargetDataFilter,
		&NewStructOps,
		"OWSGameplayTargetDataFilter",
		sizeof(FOWSGameplayTargetDataFilter),
		alignof(FOWSGameplayTargetDataFilter),
		Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OWSGameplayTargetDataFilter"), sizeof(FOWSGameplayTargetDataFilter), Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Hash() { return 169246261U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
