// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacter() {}
// Cross Module References
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCustomCharacterDataStruct();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityBarStruct();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityStruct();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterBase();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventory_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_CreateInventory();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_CreateInventoryError();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_CurrentHealth();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBars();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetInventoryItems();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemStruct();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_HP();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_SaveInventory();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_ScoreToMod();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FCustomInventoryItemDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CustomInventoryItemDataStruct"), sizeof(FCustomInventoryItemDataStruct), Get_Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCustomInventoryItemDataStruct>()
{
	return FCustomInventoryItemDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomInventoryItemDataStruct(FCustomInventoryItemDataStruct::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("CustomInventoryItemDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFCustomInventoryItemDataStruct
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFCustomInventoryItemDataStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomInventoryItemDataStruct")),new UScriptStruct::TCppStructOps<FCustomInventoryItemDataStruct>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFCustomInventoryItemDataStruct;
	struct Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomFieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomFieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomInventoryItemDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "Inventory Data Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomInventoryItemDataStruct, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_FieldValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_FieldValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_CustomFieldName_MetaData[] = {
		{ "Category", "Inventory Data Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_CustomFieldName = { "CustomFieldName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomInventoryItemDataStruct, CustomFieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_CustomFieldName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_CustomFieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_FieldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::NewProp_CustomFieldName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"CustomInventoryItemDataStruct",
		sizeof(FCustomInventoryItemDataStruct),
		alignof(FCustomInventoryItemDataStruct),
		Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomInventoryItemDataStruct"), sizeof(FCustomInventoryItemDataStruct), Get_Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Hash() { return 3498731245U; }
class UScriptStruct* FCustomCharacterDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomCharacterDataStruct, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CustomCharacterDataStruct"), sizeof(FCustomCharacterDataStruct), Get_Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCustomCharacterDataStruct>()
{
	return FCustomCharacterDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomCharacterDataStruct(FCustomCharacterDataStruct::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("CustomCharacterDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFCustomCharacterDataStruct
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFCustomCharacterDataStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomCharacterDataStruct")),new UScriptStruct::TCppStructOps<FCustomCharacterDataStruct>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFCustomCharacterDataStruct;
	struct Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FieldValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomFieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomFieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomCharacterDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "Custom Character Data Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomCharacterDataStruct, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_FieldValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_FieldValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CustomFieldName_MetaData[] = {
		{ "Category", "Custom Character Data Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CustomFieldName = { "CustomFieldName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomCharacterDataStruct, CustomFieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CustomFieldName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CustomFieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_FieldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CustomFieldName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"CustomCharacterDataStruct",
		sizeof(FCustomCharacterDataStruct),
		alignof(FCustomCharacterDataStruct),
		Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomCharacterDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomCharacterDataStruct"), sizeof(FCustomCharacterDataStruct), Get_Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Hash() { return 2853278103U; }
class UScriptStruct* FAbilityBarStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAbilityBarStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityBarStruct, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AbilityBarStruct"), sizeof(FAbilityBarStruct), Get_Z_Construct_UScriptStruct_FAbilityBarStruct_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAbilityBarStruct>()
{
	return FAbilityBarStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAbilityBarStruct(FAbilityBarStruct::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("AbilityBarStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFAbilityBarStruct
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFAbilityBarStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AbilityBarStruct")),new UScriptStruct::TCppStructOps<FAbilityBarStruct>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFAbilityBarStruct;
	struct Z_Construct_UScriptStruct_FAbilityBarStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityBarCustomJSON_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityBarCustomJSON;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfUnlockedSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfUnlockedSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityBarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityBarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityBarID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityBarID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityBarStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityBarStruct, Abilities), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAbilityStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarCustomJSON_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarCustomJSON = { "AbilityBarCustomJSON", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityBarStruct, AbilityBarCustomJSON), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarCustomJSON_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarCustomJSON_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_NumberOfUnlockedSlots_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_NumberOfUnlockedSlots = { "NumberOfUnlockedSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityBarStruct, NumberOfUnlockedSlots), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_NumberOfUnlockedSlots_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_NumberOfUnlockedSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_MaxNumberOfSlots_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_MaxNumberOfSlots = { "MaxNumberOfSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityBarStruct, MaxNumberOfSlots), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_MaxNumberOfSlots_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_MaxNumberOfSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarName_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarName = { "AbilityBarName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityBarStruct, AbilityBarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarID_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarID = { "AbilityBarID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityBarStruct, AbilityBarID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_Abilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarCustomJSON,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_NumberOfUnlockedSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_MaxNumberOfSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::NewProp_AbilityBarID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"AbilityBarStruct",
		sizeof(FAbilityBarStruct),
		alignof(FAbilityBarStruct),
		Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityBarStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAbilityBarStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AbilityBarStruct"), sizeof(FAbilityBarStruct), Get_Z_Construct_UScriptStruct_FAbilityBarStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAbilityBarStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAbilityBarStruct_Hash() { return 282429491U; }
class UScriptStruct* FAbilityStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAbilityStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityStruct, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AbilityStruct"), sizeof(FAbilityStruct), Get_Z_Construct_UScriptStruct_FAbilityStruct_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAbilityStruct>()
{
	return FAbilityStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAbilityStruct(FAbilityStruct::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("AbilityStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFAbilityStruct
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFAbilityStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AbilityStruct")),new UScriptStruct::TCppStructOps<FAbilityStruct>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFAbilityStruct;
	struct Z_Construct_UScriptStruct_FAbilityStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityInSlotNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityInSlotNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCustomJSON_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityCustomJSON;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameplayAbilityClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureToUseForIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextureToUseForIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityTypeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityInSlotNumber_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "This one is not used if we are just looking at all abilities a character has" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityInSlotNumber = { "AbilityInSlotNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityStruct, AbilityInSlotNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityInSlotNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityInSlotNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityStruct, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityCustomJSON_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityCustomJSON = { "AbilityCustomJSON", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityStruct, AbilityCustomJSON), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityCustomJSON_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityCustomJSON_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_GameplayAbilityClassName_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_GameplayAbilityClassName = { "GameplayAbilityClassName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityStruct, GameplayAbilityClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_GameplayAbilityClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_GameplayAbilityClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_TextureToUseForIcon_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_TextureToUseForIcon = { "TextureToUseForIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityStruct, TextureToUseForIcon), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_TextureToUseForIcon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_TextureToUseForIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityTypeID_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityTypeID = { "AbilityTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityStruct, AbilityTypeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityTypeID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityTypeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityName_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityStruct, AbilityName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityInSlotNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityCustomJSON,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_GameplayAbilityClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_TextureToUseForIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityTypeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityStruct_Statics::NewProp_AbilityName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"AbilityStruct",
		sizeof(FAbilityStruct),
		alignof(FAbilityStruct),
		Z_Construct_UScriptStruct_FAbilityStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAbilityStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AbilityStruct"), sizeof(FAbilityStruct), Get_Z_Construct_UScriptStruct_FAbilityStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAbilityStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAbilityStruct_Hash() { return 3364366043U; }
	static FName NAME_AOWSCharacter_AddItemToInventoryComplete = FName(TEXT("AddItemToInventoryComplete"));
	void AOWSCharacter::AddItemToInventoryComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_AddItemToInventoryComplete),NULL);
	}
	static FName NAME_AOWSCharacter_AddItemToInventoryError = FName(TEXT("AddItemToInventoryError"));
	void AOWSCharacter::AddItemToInventoryError()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_AddItemToInventoryError),NULL);
	}
	static FName NAME_AOWSCharacter_AddItemToInventoryWithCustomDataComplete = FName(TEXT("AddItemToInventoryWithCustomDataComplete"));
	void AOWSCharacter::AddItemToInventoryWithCustomDataComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_AddItemToInventoryWithCustomDataComplete),NULL);
	}
	static FName NAME_AOWSCharacter_AddItemToInventoryWithCustomDataError = FName(TEXT("AddItemToInventoryWithCustomDataError"));
	void AOWSCharacter::AddItemToInventoryWithCustomDataError()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_AddItemToInventoryWithCustomDataError),NULL);
	}
	static FName NAME_AOWSCharacter_CreateInventoryComplete = FName(TEXT("CreateInventoryComplete"));
	void AOWSCharacter::CreateInventoryComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_CreateInventoryComplete),NULL);
	}
	static FName NAME_AOWSCharacter_CreateInventoryError = FName(TEXT("CreateInventoryError"));
	void AOWSCharacter::CreateInventoryError(const FString& ErrorMsg)
	{
		OWSCharacter_eventCreateInventoryError_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_CreateInventoryError),&Parms);
	}
	static FName NAME_AOWSCharacter_ErrorGetCharacterStatuses = FName(TEXT("ErrorGetCharacterStatuses"));
	void AOWSCharacter::ErrorGetCharacterStatuses(const FString& ErrorMsg)
	{
		OWSCharacter_eventErrorGetCharacterStatuses_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_ErrorGetCharacterStatuses),&Parms);
	}
	static FName NAME_AOWSCharacter_ErrorGetCustomCharacterData = FName(TEXT("ErrorGetCustomCharacterData"));
	void AOWSCharacter::ErrorGetCustomCharacterData(const FString& ErrorMsg)
	{
		OWSCharacter_eventErrorGetCustomCharacterData_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_ErrorGetCustomCharacterData),&Parms);
	}
	static FName NAME_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete = FName(TEXT("GetAbilityBarsAndAbilitiesComplete"));
	void AOWSCharacter::GetAbilityBarsAndAbilitiesComplete(TArray<FAbilityBarStruct> const& AbilityBars)
	{
		OWSCharacter_eventGetAbilityBarsAndAbilitiesComplete_Parms Parms;
		Parms.AbilityBars=AbilityBars;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete),&Parms);
	}
	static FName NAME_AOWSCharacter_GetAbilityBarsAndAbilitiesError = FName(TEXT("GetAbilityBarsAndAbilitiesError"));
	void AOWSCharacter::GetAbilityBarsAndAbilitiesError(const FString& ErrorMsg)
	{
		OWSCharacter_eventGetAbilityBarsAndAbilitiesError_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_GetAbilityBarsAndAbilitiesError),&Parms);
	}
	static FName NAME_AOWSCharacter_GetAbilityBarsComplete = FName(TEXT("GetAbilityBarsComplete"));
	void AOWSCharacter::GetAbilityBarsComplete(TArray<FAbilityBarStruct> const& AbilityBars)
	{
		OWSCharacter_eventGetAbilityBarsComplete_Parms Parms;
		Parms.AbilityBars=AbilityBars;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_GetAbilityBarsComplete),&Parms);
	}
	static FName NAME_AOWSCharacter_GetAbilityBarsError = FName(TEXT("GetAbilityBarsError"));
	void AOWSCharacter::GetAbilityBarsError(const FString& ErrorMsg)
	{
		OWSCharacter_eventGetAbilityBarsError_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_GetAbilityBarsError),&Parms);
	}
	static FName NAME_AOWSCharacter_GetCharacterAbilitiesComplete = FName(TEXT("GetCharacterAbilitiesComplete"));
	void AOWSCharacter::GetCharacterAbilitiesComplete(TArray<FAbilityStruct> const& AbilityBars)
	{
		OWSCharacter_eventGetCharacterAbilitiesComplete_Parms Parms;
		Parms.AbilityBars=AbilityBars;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_GetCharacterAbilitiesComplete),&Parms);
	}
	static FName NAME_AOWSCharacter_GetCharacterAbilitiesError = FName(TEXT("GetCharacterAbilitiesError"));
	void AOWSCharacter::GetCharacterAbilitiesError(const FString& ErrorMsg)
	{
		OWSCharacter_eventGetCharacterAbilitiesError_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_GetCharacterAbilitiesError),&Parms);
	}
	static FName NAME_AOWSCharacter_GetInventoryItemsComplete = FName(TEXT("GetInventoryItemsComplete"));
	void AOWSCharacter::GetInventoryItemsComplete(TArray<FInventoryItemStruct> const& InventoryItems)
	{
		OWSCharacter_eventGetInventoryItemsComplete_Parms Parms;
		Parms.InventoryItems=InventoryItems;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_GetInventoryItemsComplete),&Parms);
	}
	static FName NAME_AOWSCharacter_GetInventoryItemsError = FName(TEXT("GetInventoryItemsError"));
	void AOWSCharacter::GetInventoryItemsError(const FString& ErrorMsg)
	{
		OWSCharacter_eventGetInventoryItemsError_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_GetInventoryItemsError),&Parms);
	}
	static FName NAME_AOWSCharacter_LoadCustomCharacterStats = FName(TEXT("LoadCustomCharacterStats"));
	void AOWSCharacter::LoadCustomCharacterStats()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_LoadCustomCharacterStats),NULL);
	}
	static FName NAME_AOWSCharacter_NotifyGetCharacterStatuses = FName(TEXT("NotifyGetCharacterStatuses"));
	void AOWSCharacter::NotifyGetCharacterStatuses()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_NotifyGetCharacterStatuses),NULL);
	}
	static FName NAME_AOWSCharacter_NotifyGetCustomCharacterData = FName(TEXT("NotifyGetCustomCharacterData"));
	void AOWSCharacter::NotifyGetCustomCharacterData(TArray<FCustomCharacterDataStruct> const& CustomCharacterData)
	{
		OWSCharacter_eventNotifyGetCustomCharacterData_Parms Parms;
		Parms.CustomCharacterData=CustomCharacterData;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_NotifyGetCustomCharacterData),&Parms);
	}
	static FName NAME_AOWSCharacter_OnRPGInitalizationComplete = FName(TEXT("OnRPGInitalizationComplete"));
	void AOWSCharacter::OnRPGInitalizationComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_OnRPGInitalizationComplete),NULL);
	}
	static FName NAME_AOWSCharacter_UpdateCharacterStatsAfterLoading = FName(TEXT("UpdateCharacterStatsAfterLoading"));
	void AOWSCharacter::UpdateCharacterStatsAfterLoading()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacter_UpdateCharacterStatsAfterLoading),NULL);
	}
	void AOWSCharacter::StaticRegisterNativesAOWSCharacter()
	{
		UClass* Class = AOWSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &AOWSCharacter::execAddItemToInventory },
			{ "AddItemToInventoryWithCustomData", &AOWSCharacter::execAddItemToInventoryWithCustomData },
			{ "AddOrUpdateCharacterStatus", &AOWSCharacter::execAddOrUpdateCharacterStatus },
			{ "AddOrUpdateCustomCharacterData", &AOWSCharacter::execAddOrUpdateCustomCharacterData },
			{ "CreateHUDInventory", &AOWSCharacter::execCreateHUDInventory },
			{ "CreateInventory", &AOWSCharacter::execCreateInventory },
			{ "CurrentHealth", &AOWSCharacter::execCurrentHealth },
			{ "GetAbilityBars", &AOWSCharacter::execGetAbilityBars },
			{ "GetAbilityBarsAndAbilities", &AOWSCharacter::execGetAbilityBarsAndAbilities },
			{ "GetCharacterAbilities", &AOWSCharacter::execGetCharacterAbilities },
			{ "GetCharacterStatsBase", &AOWSCharacter::execGetCharacterStatsBase },
			{ "GetCharacterStatuses", &AOWSCharacter::execGetCharacterStatuses },
			{ "GetCustomCharacterData", &AOWSCharacter::execGetCustomCharacterData },
			{ "GetHUDInventoryFromName", &AOWSCharacter::execGetHUDInventoryFromName },
			{ "GetInventoryItems", &AOWSCharacter::execGetInventoryItems },
			{ "HP", &AOWSCharacter::execHP },
			{ "ParseInventoryCustomData", &AOWSCharacter::execParseInventoryCustomData },
			{ "RemoveItemFromInventory", &AOWSCharacter::execRemoveItemFromInventory },
			{ "SaveInventory", &AOWSCharacter::execSaveInventory },
			{ "ScoreToMod", &AOWSCharacter::execScoreToMod },
			{ "UpdateCharacterStatsBase", &AOWSCharacter::execUpdateCharacterStatsBase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics
	{
		struct OWSCharacter_eventAddItemToInventory_Parms
		{
			FString InventoryName;
			FString ItemName;
			int32 InSlotNumber;
			int32 Quantity;
			int32 NumberOfUsesLeft;
			int32 Condition;
			FGuid UniqueItemGUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueItemGUID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Condition;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfUsesLeft;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InSlotNumber;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_UniqueItemGUID = { "UniqueItemGUID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventory_Parms, UniqueItemGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventory_Parms, Condition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_NumberOfUsesLeft = { "NumberOfUsesLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventory_Parms, NumberOfUsesLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventory_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_InSlotNumber = { "InSlotNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventory_Parms, InSlotNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventory_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventory_Parms, InventoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_UniqueItemGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_NumberOfUsesLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_InSlotNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::NewProp_InventoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Add Item to Inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "AddItemToInventory", sizeof(OWSCharacter_eventAddItemToInventory_Parms), Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "AddItemToInventoryComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "AddItemToInventoryError", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics
	{
		struct OWSCharacter_eventAddItemToInventoryWithCustomData_Parms
		{
			FString InventoryName;
			FString ItemName;
			int32 InSlotNumber;
			int32 Quantity;
			int32 NumberOfUsesLeft;
			int32 Condition;
			FString CustomData;
			FGuid UniqueItemGUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueItemGUID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomData;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Condition;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfUsesLeft;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InSlotNumber;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_UniqueItemGUID = { "UniqueItemGUID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms, UniqueItemGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms, CustomData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms, Condition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_NumberOfUsesLeft = { "NumberOfUsesLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms, NumberOfUsesLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_InSlotNumber = { "InSlotNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms, InSlotNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms, InventoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_UniqueItemGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_NumberOfUsesLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_InSlotNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::NewProp_InventoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Add Item to Inventory with Custom Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "AddItemToInventoryWithCustomData", sizeof(OWSCharacter_eventAddItemToInventoryWithCustomData_Parms), Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "AddItemToInventoryWithCustomDataComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "AddItemToInventoryWithCustomDataError", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics
	{
		struct OWSCharacter_eventAddOrUpdateCharacterStatus_Parms
		{
			FString StatusName;
			int32 StatusValue;
			int32 StatusDurationMinutes;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusDurationMinutes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::NewProp_StatusDurationMinutes = { "StatusDurationMinutes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddOrUpdateCharacterStatus_Parms, StatusDurationMinutes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::NewProp_StatusValue = { "StatusValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddOrUpdateCharacterStatus_Parms, StatusValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::NewProp_StatusName = { "StatusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddOrUpdateCharacterStatus_Parms, StatusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::NewProp_StatusDurationMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::NewProp_StatusValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::NewProp_StatusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Add or Update Character Status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "AddOrUpdateCharacterStatus", sizeof(OWSCharacter_eventAddOrUpdateCharacterStatus_Parms), Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics
	{
		struct OWSCharacter_eventAddOrUpdateCustomCharacterData_Parms
		{
			FString CustomFieldName;
			FString CustomValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomFieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::NewProp_CustomValue = { "CustomValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddOrUpdateCustomCharacterData_Parms, CustomValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::NewProp_CustomFieldName = { "CustomFieldName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventAddOrUpdateCustomCharacterData_Parms, CustomFieldName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::NewProp_CustomValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::NewProp_CustomFieldName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Add Character Custom Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "AddOrUpdateCustomCharacterData", sizeof(OWSCharacter_eventAddOrUpdateCustomCharacterData_Parms), Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics
	{
		struct OWSCharacter_eventCreateHUDInventory_Parms
		{
			FName InventoryName;
			int32 Size;
			UOWSInventory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InventoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventCreateHUDInventory_Parms, ReturnValue), Z_Construct_UClass_UOWSInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventCreateHUDInventory_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventCreateHUDInventory_Parms, InventoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::NewProp_InventoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "CreateHUDInventory", sizeof(OWSCharacter_eventCreateHUDInventory_Parms), Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics
	{
		struct OWSCharacter_eventCreateInventory_Parms
		{
			FString InventoryName;
			int32 InventorySize;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InventorySize;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventCreateInventory_Parms, InventorySize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventCreateInventory_Parms, InventoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::NewProp_InventorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::NewProp_InventoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Create Inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "CreateInventory", sizeof(OWSCharacter_eventCreateInventory_Parms), Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_CreateInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_CreateInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "CreateInventoryComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventCreateInventoryError_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "CreateInventoryError", sizeof(OWSCharacter_eventCreateInventoryError_Parms), Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_CreateInventoryError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_CreateInventoryError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics
	{
		struct OWSCharacter_eventCurrentHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "CurrentHealth", sizeof(OWSCharacter_eventCurrentHealth_Parms), Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_CurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_CurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventErrorGetCharacterStatuses_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "ErrorGetCharacterStatuses", sizeof(OWSCharacter_eventErrorGetCharacterStatuses_Parms), Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventErrorGetCustomCharacterData_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "ErrorGetCustomCharacterData", sizeof(OWSCharacter_eventErrorGetCustomCharacterData_Parms), Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetAbilityBars_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBars_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Get Ability Bars" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetAbilityBars", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBars_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetAbilityBars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Get Ability Bar Abilities" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetAbilityBarsAndAbilities", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityBars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityBars;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityBars_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::NewProp_AbilityBars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::NewProp_AbilityBars = { "AbilityBars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetAbilityBarsAndAbilitiesComplete_Parms, AbilityBars), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::NewProp_AbilityBars_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::NewProp_AbilityBars_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::NewProp_AbilityBars_Inner = { "AbilityBars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAbilityBarStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::NewProp_AbilityBars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::NewProp_AbilityBars_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetAbilityBarsAndAbilitiesComplete", sizeof(OWSCharacter_eventGetAbilityBarsAndAbilitiesComplete_Parms), Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetAbilityBarsAndAbilitiesError_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetAbilityBarsAndAbilitiesError", sizeof(OWSCharacter_eventGetAbilityBarsAndAbilitiesError_Parms), Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityBars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityBars;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityBars_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::NewProp_AbilityBars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::NewProp_AbilityBars = { "AbilityBars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetAbilityBarsComplete_Parms, AbilityBars), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::NewProp_AbilityBars_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::NewProp_AbilityBars_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::NewProp_AbilityBars_Inner = { "AbilityBars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAbilityBarStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::NewProp_AbilityBars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::NewProp_AbilityBars_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetAbilityBarsComplete", sizeof(OWSCharacter_eventGetAbilityBarsComplete_Parms), Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetAbilityBarsError_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetAbilityBarsError", sizeof(OWSCharacter_eventGetAbilityBarsError_Parms), Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "** Abilities ****//Get Character Abilities" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterAbilities", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityBars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityBars;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityBars_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::NewProp_AbilityBars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::NewProp_AbilityBars = { "AbilityBars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetCharacterAbilitiesComplete_Parms, AbilityBars), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::NewProp_AbilityBars_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::NewProp_AbilityBars_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::NewProp_AbilityBars_Inner = { "AbilityBars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAbilityStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::NewProp_AbilityBars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::NewProp_AbilityBars_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterAbilitiesComplete", sizeof(OWSCharacter_eventGetCharacterAbilitiesComplete_Parms), Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetCharacterAbilitiesError_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterAbilitiesError", sizeof(OWSCharacter_eventGetCharacterAbilitiesError_Parms), Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Get Character Stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterStatsBase", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Get Character Statuses" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterStatuses", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Get Character Custom Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCustomCharacterData", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics
	{
		struct OWSCharacter_eventGetHUDInventoryFromName_Parms
		{
			FName InventoryName;
			UOWSInventory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InventoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetHUDInventoryFromName_Parms, ReturnValue), Z_Construct_UClass_UOWSInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetHUDInventoryFromName_Parms, InventoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::NewProp_InventoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetHUDInventoryFromName", sizeof(OWSCharacter_eventGetHUDInventoryFromName_Parms), Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics
	{
		struct OWSCharacter_eventGetInventoryItems_Parms
		{
			FString InventoryName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetInventoryItems_Parms, InventoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::NewProp_InventoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Get Character Inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetInventoryItems", sizeof(OWSCharacter_eventGetInventoryItems_Parms), Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::NewProp_InventoryItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::NewProp_InventoryItems = { "InventoryItems", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetInventoryItemsComplete_Parms, InventoryItems), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::NewProp_InventoryItems_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::NewProp_InventoryItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::NewProp_InventoryItems_Inner = { "InventoryItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryItemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::NewProp_InventoryItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::NewProp_InventoryItems_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetInventoryItemsComplete", sizeof(OWSCharacter_eventGetInventoryItemsComplete_Parms), Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventGetInventoryItemsError_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetInventoryItemsError", sizeof(OWSCharacter_eventGetInventoryItemsError_Parms), Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_HP_Statics
	{
		struct OWSCharacter_eventHP_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacter_HP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_HP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_HP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_HP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_HP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "HP", sizeof(OWSCharacter_eventHP_Parms), Z_Construct_UFunction_AOWSCharacter_HP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_HP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_HP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_HP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_HP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_HP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "LoadCustomCharacterStats", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "NotifyGetCharacterStatuses", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomCharacterData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCharacterData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::NewProp_CustomCharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::NewProp_CustomCharacterData = { "CustomCharacterData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventNotifyGetCustomCharacterData_Parms, CustomCharacterData), METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::NewProp_CustomCharacterData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::NewProp_CustomCharacterData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::NewProp_CustomCharacterData_Inner = { "CustomCharacterData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomCharacterDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::NewProp_CustomCharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::NewProp_CustomCharacterData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "NotifyGetCustomCharacterData", sizeof(OWSCharacter_eventNotifyGetCustomCharacterData_Parms), Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "OnRPGInitalizationComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics
	{
		struct OWSCharacter_eventParseInventoryCustomData_Parms
		{
			FString InventoryCustomData;
			TArray<FCustomInventoryItemDataStruct> ItemCustomDataArray;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemCustomDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemCustomDataArray_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryCustomData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::NewProp_ItemCustomDataArray = { "ItemCustomDataArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventParseInventoryCustomData_Parms, ItemCustomDataArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::NewProp_ItemCustomDataArray_Inner = { "ItemCustomDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::NewProp_InventoryCustomData = { "InventoryCustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventParseInventoryCustomData_Parms, InventoryCustomData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::NewProp_ItemCustomDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::NewProp_ItemCustomDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::NewProp_InventoryCustomData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "ParseInventoryCustomData", sizeof(OWSCharacter_eventParseInventoryCustomData_Parms), Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics
	{
		struct OWSCharacter_eventRemoveItemFromInventory_Parms
		{
			FGuid UniqueItemGUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueItemGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::NewProp_UniqueItemGUID = { "UniqueItemGUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventRemoveItemFromInventory_Parms, UniqueItemGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::NewProp_UniqueItemGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Remove Item from Inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "RemoveItemFromInventory", sizeof(OWSCharacter_eventRemoveItemFromInventory_Parms), Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics
	{
		struct OWSCharacter_eventSaveInventory_Parms
		{
			FString InventoryName;
			FString InventoryData;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventSaveInventory_Parms, InventoryData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventSaveInventory_Parms, InventoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::NewProp_InventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::NewProp_InventoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Save Inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "SaveInventory", sizeof(OWSCharacter_eventSaveInventory_Parms), Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_SaveInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_SaveInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics
	{
		struct OWSCharacter_eventScoreToMod_Parms
		{
			int32 inScore;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventScoreToMod_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::NewProp_inScore = { "inScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacter_eventScoreToMod_Parms, inScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::NewProp_inScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "ScoreToMod", sizeof(OWSCharacter_eventScoreToMod_Parms), Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_ScoreToMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_ScoreToMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "UpdateCharacterStatsAfterLoading", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Update Character Stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "UpdateCharacterStatsBase", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSCharacter_NoRegister()
	{
		return AOWSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AOWSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Climb_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Climb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acrobatics_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Acrobatics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Perception;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitDice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Resistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicalArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaturalArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NaturalArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Initiative_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Initiative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multishot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multishot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Versatility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Versatility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avoidance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Avoidance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parry_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Parry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dodge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dodge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Defense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpellPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpellPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Haste_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Haste;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CritMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CritMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CritChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAttackBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseAttackBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Willpower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Willpower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reflex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Reflex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fortitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fortitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spirit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spirit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Agility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Charisma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wisdom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Wisdom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intellect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intellect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constitution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Constitution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Dexterity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnduranceRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnduranceRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Endurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEndurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEndurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FatigueRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FatigueRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fatigue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fatigue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFatigue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFatigue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Energy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManaRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hunger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Wounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDie_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PremiumCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FreeCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Copper_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Copper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Silver_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Silver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnemy_MetaData[];
#endif
		static void NewProp_IsEnemy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoriesToManage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoriesToManage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoriesToManage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAutoLoadCustomCharacterStats_MetaData[];
#endif
		static void NewProp_bShouldAutoLoadCustomCharacterStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAutoLoadCustomCharacterStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAMob_MetaData[];
#endif
		static void NewProp_IsAMob_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAMob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPIPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPIPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPICustomerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPICustomerKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOWSCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSCharacter_AddItemToInventory, "AddItemToInventory" }, // 3623202189
		{ &Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryComplete, "AddItemToInventoryComplete" }, // 1927643592
		{ &Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryError, "AddItemToInventoryError" }, // 359637399
		{ &Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomData, "AddItemToInventoryWithCustomData" }, // 3084673117
		{ &Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataComplete, "AddItemToInventoryWithCustomDataComplete" }, // 969130427
		{ &Z_Construct_UFunction_AOWSCharacter_AddItemToInventoryWithCustomDataError, "AddItemToInventoryWithCustomDataError" }, // 2489083366
		{ &Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCharacterStatus, "AddOrUpdateCharacterStatus" }, // 2562626328
		{ &Z_Construct_UFunction_AOWSCharacter_AddOrUpdateCustomCharacterData, "AddOrUpdateCustomCharacterData" }, // 760684379
		{ &Z_Construct_UFunction_AOWSCharacter_CreateHUDInventory, "CreateHUDInventory" }, // 3612632489
		{ &Z_Construct_UFunction_AOWSCharacter_CreateInventory, "CreateInventory" }, // 2911634651
		{ &Z_Construct_UFunction_AOWSCharacter_CreateInventoryComplete, "CreateInventoryComplete" }, // 2862088441
		{ &Z_Construct_UFunction_AOWSCharacter_CreateInventoryError, "CreateInventoryError" }, // 2929595192
		{ &Z_Construct_UFunction_AOWSCharacter_CurrentHealth, "CurrentHealth" }, // 360539195
		{ &Z_Construct_UFunction_AOWSCharacter_ErrorGetCharacterStatuses, "ErrorGetCharacterStatuses" }, // 4134408826
		{ &Z_Construct_UFunction_AOWSCharacter_ErrorGetCustomCharacterData, "ErrorGetCustomCharacterData" }, // 1024447222
		{ &Z_Construct_UFunction_AOWSCharacter_GetAbilityBars, "GetAbilityBars" }, // 2365482946
		{ &Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilities, "GetAbilityBarsAndAbilities" }, // 1606357513
		{ &Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesComplete, "GetAbilityBarsAndAbilitiesComplete" }, // 934206477
		{ &Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsAndAbilitiesError, "GetAbilityBarsAndAbilitiesError" }, // 1509810587
		{ &Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsComplete, "GetAbilityBarsComplete" }, // 2667455438
		{ &Z_Construct_UFunction_AOWSCharacter_GetAbilityBarsError, "GetAbilityBarsError" }, // 1660791686
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilities, "GetCharacterAbilities" }, // 4068776350
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesComplete, "GetCharacterAbilitiesComplete" }, // 141345340
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterAbilitiesError, "GetCharacterAbilitiesError" }, // 384087547
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterStatsBase, "GetCharacterStatsBase" }, // 898928527
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterStatuses, "GetCharacterStatuses" }, // 3198310422
		{ &Z_Construct_UFunction_AOWSCharacter_GetCustomCharacterData, "GetCustomCharacterData" }, // 3863138313
		{ &Z_Construct_UFunction_AOWSCharacter_GetHUDInventoryFromName, "GetHUDInventoryFromName" }, // 4145581535
		{ &Z_Construct_UFunction_AOWSCharacter_GetInventoryItems, "GetInventoryItems" }, // 768822438
		{ &Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsComplete, "GetInventoryItemsComplete" }, // 4235442494
		{ &Z_Construct_UFunction_AOWSCharacter_GetInventoryItemsError, "GetInventoryItemsError" }, // 2608889166
		{ &Z_Construct_UFunction_AOWSCharacter_HP, "HP" }, // 2317060464
		{ &Z_Construct_UFunction_AOWSCharacter_LoadCustomCharacterStats, "LoadCustomCharacterStats" }, // 1059212888
		{ &Z_Construct_UFunction_AOWSCharacter_NotifyGetCharacterStatuses, "NotifyGetCharacterStatuses" }, // 2972771439
		{ &Z_Construct_UFunction_AOWSCharacter_NotifyGetCustomCharacterData, "NotifyGetCustomCharacterData" }, // 250929796
		{ &Z_Construct_UFunction_AOWSCharacter_OnRPGInitalizationComplete, "OnRPGInitalizationComplete" }, // 1006067900
		{ &Z_Construct_UFunction_AOWSCharacter_ParseInventoryCustomData, "ParseInventoryCustomData" }, // 2227473486
		{ &Z_Construct_UFunction_AOWSCharacter_RemoveItemFromInventory, "RemoveItemFromInventory" }, // 294529256
		{ &Z_Construct_UFunction_AOWSCharacter_SaveInventory, "SaveInventory" }, // 3895386727
		{ &Z_Construct_UFunction_AOWSCharacter_ScoreToMod, "ScoreToMod" }, // 1577252589
		{ &Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsAfterLoading, "UpdateCharacterStatsAfterLoading" }, // 2949749076
		{ &Z_Construct_UFunction_AOWSCharacter_UpdateCharacterStatsBase, "UpdateCharacterStatsBase" }, // 929082202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OWSCharacter.h" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stealth_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stealth = { "Stealth", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Stealth), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Climb_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Climb = { "Climb", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Climb), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Climb_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Climb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Acrobatics_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Acrobatics = { "Acrobatics", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Acrobatics), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Acrobatics_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Acrobatics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Perception_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Perception), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Perception_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Perception_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, MaxHP), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDice_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDice = { "HitDice", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, HitDice), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDice_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Speed), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Range), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ReloadSpeed_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, ReloadSpeed), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ReloadSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ReloadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Resistance_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Resistance = { "Resistance", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Resistance), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Resistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Resistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MagicArmor_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MagicArmor = { "MagicArmor", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, MagicArmor), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MagicArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MagicArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ForceArmor_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ForceArmor = { "ForceArmor", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, ForceArmor), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ForceArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ForceArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BonusArmor_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BonusArmor = { "BonusArmor", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, BonusArmor), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BonusArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BonusArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PhysicalArmor_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PhysicalArmor = { "PhysicalArmor", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, PhysicalArmor), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PhysicalArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PhysicalArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_NaturalArmor_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_NaturalArmor = { "NaturalArmor", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, NaturalArmor), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_NaturalArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_NaturalArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Initiative_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Initiative = { "Initiative", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Initiative), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Initiative_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Initiative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Multishot_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Multishot = { "Multishot", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Multishot), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Multishot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Multishot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Versatility_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Versatility = { "Versatility", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Versatility), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Versatility_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Versatility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Avoidance_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Avoidance = { "Avoidance", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Avoidance), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Avoidance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Avoidance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Parry_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Parry = { "Parry", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Parry), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Parry_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Parry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dodge_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dodge = { "Dodge", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Dodge), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dodge_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dodge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Defense), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Defense_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPenetration_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPenetration = { "SpellPenetration", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, SpellPenetration), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPenetration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPower_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPower = { "SpellPower", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, SpellPower), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Haste_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Haste = { "Haste", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Haste), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Haste_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Haste_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritMultiplier_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritMultiplier = { "CritMultiplier", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, CritMultiplier), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritChance_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritChance = { "CritChance", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, CritChance), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritChance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, AttackSpeed), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, AttackPower), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttackBonus_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttackBonus = { "BaseAttackBonus", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, BaseAttackBonus), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttackBonus_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttackBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttack_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttack = { "BaseAttack", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, BaseAttack), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Willpower_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Willpower = { "Willpower", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Willpower), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Willpower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Willpower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Reflex_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Reflex = { "Reflex", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Reflex), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Reflex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Reflex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fortitude_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fortitude = { "Fortitude", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Fortitude), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fortitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fortitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Magic_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Magic = { "Magic", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Magic), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Magic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Magic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Spirit_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Spirit = { "Spirit", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Spirit), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Spirit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Spirit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Agility_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Agility = { "Agility", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Agility), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Agility_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Agility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Charisma_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Charisma = { "Charisma", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Charisma), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Charisma_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Charisma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wisdom_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wisdom = { "Wisdom", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Wisdom), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wisdom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wisdom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Intellect_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Intellect = { "Intellect", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Intellect), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Intellect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Intellect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Constitution_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Constitution = { "Constitution", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Constitution), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Constitution_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Constitution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dexterity_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Dexterity), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dexterity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dexterity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Strength), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Strength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnduranceRegenRate_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnduranceRegenRate = { "EnduranceRegenRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, EnduranceRegenRate), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnduranceRegenRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnduranceRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Endurance_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Endurance), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Endurance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Endurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEndurance_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEndurance = { "MaxEndurance", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, MaxEndurance), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEndurance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEndurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, StaminaRegenRate), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_StaminaRegenRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_StaminaRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Stamina), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxStamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FatigueRegenRate_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FatigueRegenRate = { "FatigueRegenRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, FatigueRegenRate), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FatigueRegenRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FatigueRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fatigue_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fatigue = { "Fatigue", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Fatigue), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fatigue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fatigue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxFatigue_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxFatigue = { "MaxFatigue", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, MaxFatigue), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxFatigue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxFatigue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnergyRegenRate_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnergyRegenRate = { "EnergyRegenRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, EnergyRegenRate), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnergyRegenRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnergyRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Energy_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Energy), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Energy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Energy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, MaxEnergy), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, ManaRegenRate), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ManaRegenRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ManaRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Mana), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Mana_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, MaxMana), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxMana_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, HealthRegenRate), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HealthRegenRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HealthRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Hunger_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Hunger), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Hunger_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Hunger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Thirst_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Thirst = { "Thirst", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Thirst), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Thirst_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Thirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wounds_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wounds = { "Wounds", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Wounds), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDie_MetaData[] = {
		{ "Category", "CharacterStats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDie = { "HitDie", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, HitDie), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDie_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Score), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Score_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PremiumCurrency_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PremiumCurrency = { "PremiumCurrency", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, PremiumCurrency), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PremiumCurrency_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PremiumCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FreeCurrency_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FreeCurrency = { "FreeCurrency", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, FreeCurrency), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FreeCurrency_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FreeCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Copper_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Copper = { "Copper", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Copper), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Copper_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Copper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Silver_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Silver = { "Silver", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Silver), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Silver_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Silver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gold_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Gold), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_TeamNumber_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, TeamNumber), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_TeamNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_TeamNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_XP_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, XP), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_XP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_XP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, CharacterLevel), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsEnemy_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsEnemy_SetBit(void* Obj)
	{
		((AOWSCharacter*)Obj)->IsEnemy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsEnemy = { "IsEnemy", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSCharacter), &Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsEnemy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsEnemy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, Gender), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gender_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, ClassName), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, CharacterName), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoriesToManage_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "HUD Inventory System" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoriesToManage = { "InventoriesToManage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, InventoriesToManage), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoriesToManage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoriesToManage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoriesToManage_Inner = { "InventoriesToManage", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UOWSInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_bShouldAutoLoadCustomCharacterStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AOWSCharacter_Statics::NewProp_bShouldAutoLoadCustomCharacterStats_SetBit(void* Obj)
	{
		((AOWSCharacter*)Obj)->bShouldAutoLoadCustomCharacterStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_bShouldAutoLoadCustomCharacterStats = { "bShouldAutoLoadCustomCharacterStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSCharacter), &Z_Construct_UClass_AOWSCharacter_Statics::NewProp_bShouldAutoLoadCustomCharacterStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_bShouldAutoLoadCustomCharacterStats_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_bShouldAutoLoadCustomCharacterStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsAMob_MetaData[] = {
		{ "Category", "Mob" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "ToolTip", "Mob" },
	};
#endif
	void Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsAMob_SetBit(void* Obj)
	{
		((AOWSCharacter*)Obj)->IsAMob = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsAMob = { "IsAMob", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSCharacter), &Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsAMob_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsAMob_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsAMob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPIPath = { "RPGAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, RPGAPIPath), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPIPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPIPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPICustomerKey_MetaData[] = {
		{ "Category", "OWSCharacter" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPICustomerKey = { "RPGAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacter, RPGAPICustomerKey), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPICustomerKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPICustomerKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Climb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Acrobatics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Perception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ReloadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Resistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MagicArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ForceArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BonusArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PhysicalArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_NaturalArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Initiative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Multishot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Versatility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Avoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Parry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dodge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_SpellPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Haste,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CritChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_AttackPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttackBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_BaseAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Willpower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Reflex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fortitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Magic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Spirit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Agility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Charisma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wisdom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Intellect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Constitution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Dexterity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnduranceRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Endurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEndurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_StaminaRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FatigueRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Fatigue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxFatigue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_EnergyRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Energy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ManaRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HealthRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Hunger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Thirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Wounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_HitDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_PremiumCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_FreeCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Copper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Silver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_TeamNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_XP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoriesToManage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoriesToManage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_bShouldAutoLoadCustomCharacterStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_IsAMob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPIPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_RPGAPICustomerKey,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOWSCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AOWSCharacter, IGenericTeamAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSCharacter_Statics::ClassParams = {
		&AOWSCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSCharacter_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSCharacter, 1599429466);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSCharacter>()
	{
		return AOWSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSCharacter(Z_Construct_UClass_AOWSCharacter, &AOWSCharacter::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
