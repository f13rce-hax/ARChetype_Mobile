// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameMode() {}
// Cross Module References
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharactersOnlineStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FZoneInstanceStruct();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameMode_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "ItemLibraryLoadedSignature__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FCharactersOnlineStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCharactersOnlineStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharactersOnlineStruct, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CharactersOnlineStruct"), sizeof(FCharactersOnlineStruct), Get_Z_Construct_UScriptStruct_FCharactersOnlineStruct_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCharactersOnlineStruct>()
{
	return FCharactersOnlineStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharactersOnlineStruct(FCharactersOnlineStruct::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("CharactersOnlineStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFCharactersOnlineStruct
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFCharactersOnlineStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharactersOnlineStruct")),new UScriptStruct::TCppStructOps<FCharactersOnlineStruct>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFCharactersOnlineStruct;
	struct Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldServerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorldServerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapInstanceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserSessionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreateDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Fame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Alignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharactersOnlineStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ZoneName_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, ZoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ZoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ZoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ServerIP_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, ServerIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ServerIP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ServerIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Port_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_WorldServerID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_WorldServerID = { "WorldServerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, WorldServerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_WorldServerID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_WorldServerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, MapID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapInstanceID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapInstanceID = { "MapInstanceID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, MapInstanceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapInstanceID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapInstanceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserSessionGUID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, UserSessionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserSessionGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserSessionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_LoginDate_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_LoginDate = { "LoginDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, LoginDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_LoginDate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_LoginDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CreateDate_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, CreateDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CreateDate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CreateDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserGUID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserGUID = { "UserGUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, UserGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_TeamNumber_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, TeamNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_TeamNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_TeamNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Fame_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Fame = { "Fame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, Fame), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Fame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Fame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, Alignment), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Alignment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Alignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, Gender), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Gender_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, CharacterLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharName_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, CharName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharactersOnlineStruct, CharacterID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ZoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_WorldServerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapInstanceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserSessionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_LoginDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CreateDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_TeamNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Fame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Alignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"CharactersOnlineStruct",
		sizeof(FCharactersOnlineStruct),
		alignof(FCharactersOnlineStruct),
		Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharactersOnlineStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharactersOnlineStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharactersOnlineStruct"), sizeof(FCharactersOnlineStruct), Get_Z_Construct_UScriptStruct_FCharactersOnlineStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharactersOnlineStruct_Hash() { return 503952447U; }
class UScriptStruct* FZoneInstanceStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FZoneInstanceStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneInstanceStruct, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ZoneInstanceStruct"), sizeof(FZoneInstanceStruct), Get_Z_Construct_UScriptStruct_FZoneInstanceStruct_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FZoneInstanceStruct>()
{
	return FZoneInstanceStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FZoneInstanceStruct(FZoneInstanceStruct::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("ZoneInstanceStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFZoneInstanceStruct
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFZoneInstanceStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ZoneInstanceStruct")),new UScriptStruct::TCppStructOps<FZoneInstanceStruct>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFZoneInstanceStruct;
	struct Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneInstanceStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "Zone Instance Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZoneInstanceStruct, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_ZoneName_MetaData[] = {
		{ "Category", "Zone Instance Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZoneInstanceStruct, ZoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_ZoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_ZoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Zone Instance Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZoneInstanceStruct, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Status_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Zone Instance Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZoneInstanceStruct, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Port_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapInstanceID_MetaData[] = {
		{ "Category", "Zone Instance Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapInstanceID = { "MapInstanceID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FZoneInstanceStruct, MapInstanceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapInstanceID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapInstanceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_ZoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::NewProp_MapInstanceID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"ZoneInstanceStruct",
		sizeof(FZoneInstanceStruct),
		alignof(FZoneInstanceStruct),
		Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneInstanceStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FZoneInstanceStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ZoneInstanceStruct"), sizeof(FZoneInstanceStruct), Get_Z_Construct_UScriptStruct_FZoneInstanceStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FZoneInstanceStruct_Hash() { return 2667569844U; }
	static FName NAME_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem = FName(TEXT("ErrorAddOrUpdateGlobalDataItem"));
	void AOWSGameMode::ErrorAddOrUpdateGlobalDataItem(const FString& ErrorMsg)
	{
		OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem),&Parms);
	}
	static FName NAME_AOWSGameMode_ErrorGetAllCharactersOnline = FName(TEXT("ErrorGetAllCharactersOnline"));
	void AOWSGameMode::ErrorGetAllCharactersOnline(const FString& ErrorMsg)
	{
		OWSGameMode_eventErrorGetAllCharactersOnline_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_ErrorGetAllCharactersOnline),&Parms);
	}
	static FName NAME_AOWSGameMode_ErrorGetAllInventoryItems = FName(TEXT("ErrorGetAllInventoryItems"));
	void AOWSGameMode::ErrorGetAllInventoryItems(const FString& ErrorMsg)
	{
		OWSGameMode_eventErrorGetAllInventoryItems_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_ErrorGetAllInventoryItems),&Parms);
	}
	static FName NAME_AOWSGameMode_ErrorGetCurrentWorldTime = FName(TEXT("ErrorGetCurrentWorldTime"));
	void AOWSGameMode::ErrorGetCurrentWorldTime(const FString& ErrorMsg)
	{
		OWSGameMode_eventErrorGetCurrentWorldTime_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_ErrorGetCurrentWorldTime),&Parms);
	}
	static FName NAME_AOWSGameMode_ErrorGetGlobalDataItem = FName(TEXT("ErrorGetGlobalDataItem"));
	void AOWSGameMode::ErrorGetGlobalDataItem(const FString& ErrorMsg)
	{
		OWSGameMode_eventErrorGetGlobalDataItem_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_ErrorGetGlobalDataItem),&Parms);
	}
	static FName NAME_AOWSGameMode_ErrorGetServerInstanceFromPort = FName(TEXT("ErrorGetServerInstanceFromPort"));
	void AOWSGameMode::ErrorGetServerInstanceFromPort(const FString& ErrorMsg)
	{
		OWSGameMode_eventErrorGetServerInstanceFromPort_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_ErrorGetServerInstanceFromPort),&Parms);
	}
	static FName NAME_AOWSGameMode_ErrorGetZoneInstancesForZone = FName(TEXT("ErrorGetZoneInstancesForZone"));
	void AOWSGameMode::ErrorGetZoneInstancesForZone(const FString& ErrorMsg)
	{
		OWSGameMode_eventErrorGetZoneInstancesForZone_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_ErrorGetZoneInstancesForZone),&Parms);
	}
	static FName NAME_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem = FName(TEXT("NotifyAddOrUpdateGlobalDataItem"));
	void AOWSGameMode::NotifyAddOrUpdateGlobalDataItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem),NULL);
	}
	static FName NAME_AOWSGameMode_NotifyGetAllInventoryItems = FName(TEXT("NotifyGetAllInventoryItems"));
	void AOWSGameMode::NotifyGetAllInventoryItems()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_NotifyGetAllInventoryItems),NULL);
	}
	static FName NAME_AOWSGameMode_NotifyGetCurrentWorldTime = FName(TEXT("NotifyGetCurrentWorldTime"));
	void AOWSGameMode::NotifyGetCurrentWorldTime(const float CurrentWorldTime)
	{
		OWSGameMode_eventNotifyGetCurrentWorldTime_Parms Parms;
		Parms.CurrentWorldTime=CurrentWorldTime;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_NotifyGetCurrentWorldTime),&Parms);
	}
	static FName NAME_AOWSGameMode_NotifyGetGlobalDataItem = FName(TEXT("NotifyGetGlobalDataItem"));
	void AOWSGameMode::NotifyGetGlobalDataItem(const FString& GlobalDataKey)
	{
		OWSGameMode_eventNotifyGetGlobalDataItem_Parms Parms;
		Parms.GlobalDataKey=GlobalDataKey;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_NotifyGetGlobalDataItem),&Parms);
	}
	static FName NAME_AOWSGameMode_NotifyGetServerInstanceFromPort = FName(TEXT("NotifyGetServerInstanceFromPort"));
	void AOWSGameMode::NotifyGetServerInstanceFromPort(const FString& ZoneName)
	{
		OWSGameMode_eventNotifyGetServerInstanceFromPort_Parms Parms;
		Parms.ZoneName=ZoneName;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_NotifyGetServerInstanceFromPort),&Parms);
	}
	static FName NAME_AOWSGameMode_NotifyGetZoneInstancesForZone = FName(TEXT("NotifyGetZoneInstancesForZone"));
	void AOWSGameMode::NotifyGetZoneInstancesForZone(TArray<FZoneInstanceStruct> const& ZoneInstances)
	{
		OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms Parms;
		Parms.ZoneInstances=ZoneInstances;
		ProcessEvent(FindFunctionChecked(NAME_AOWSGameMode_NotifyGetZoneInstancesForZone),&Parms);
	}
	void AOWSGameMode::StaticRegisterNativesAOWSGameMode()
	{
		UClass* Class = AOWSGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateGlobalDataItem", &AOWSGameMode::execAddOrUpdateGlobalDataItem },
			{ "GetAddressURLAndPort", &AOWSGameMode::execGetAddressURLAndPort },
			{ "GetAllCharactersOnline", &AOWSGameMode::execGetAllCharactersOnline },
			{ "GetAllInventoryItems", &AOWSGameMode::execGetAllInventoryItems },
			{ "GetCurrentWorldTime", &AOWSGameMode::execGetCurrentWorldTime },
			{ "GetGlobalDataItem", &AOWSGameMode::execGetGlobalDataItem },
			{ "GetServerInstanceFromPort", &AOWSGameMode::execGetServerInstanceFromPort },
			{ "GetZoneInstancesForZone", &AOWSGameMode::execGetZoneInstancesForZone },
			{ "IsPlayerOnline", &AOWSGameMode::execIsPlayerOnline },
			{ "SaveAllPlayerLocations", &AOWSGameMode::execSaveAllPlayerLocations },
			{ "UpdateNumberOfPlayers", &AOWSGameMode::execUpdateNumberOfPlayers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics
	{
		struct OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms
		{
			FString GlobalDataKey;
			FString GlobalDataValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GlobalDataValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataValue = { "GlobalDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms, GlobalDataValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms, GlobalDataKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Add or Update Global Data Item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "AddOrUpdateGlobalDataItem", sizeof(OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms), Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorAddOrUpdateGlobalDataItem", sizeof(OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms), Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetAllCharactersOnline_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent, Category = \"Character\")\n               void NotifyGetAllCharactersOnline(const TArray<FCharactersOnlineStruct> &CharactersOnline);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetAllCharactersOnline", sizeof(OWSGameMode_eventErrorGetAllCharactersOnline_Parms), Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetAllInventoryItems_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetAllInventoryItems", sizeof(OWSGameMode_eventErrorGetAllInventoryItems_Parms), Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetCurrentWorldTime_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetCurrentWorldTime", sizeof(OWSGameMode_eventErrorGetCurrentWorldTime_Parms), Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetGlobalDataItem_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetGlobalDataItem", sizeof(OWSGameMode_eventErrorGetGlobalDataItem_Parms), Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetServerInstanceFromPort_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetServerInstanceFromPort", sizeof(OWSGameMode_eventErrorGetServerInstanceFromPort_Parms), Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetZoneInstancesForZone_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetZoneInstancesForZone", sizeof(OWSGameMode_eventErrorGetZoneInstancesForZone_Parms), Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics
	{
		struct OWSGameMode_eventGetAddressURLAndPort_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventGetAddressURLAndPort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetAddressURLAndPort", sizeof(OWSGameMode_eventGetAddressURLAndPort_Parms), Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Get all players online" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetAllCharactersOnline", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Get All Inventory Items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetAllInventoryItems", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Get Current World Time\nLookup a zone instance from a given port" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetCurrentWorldTime", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics
	{
		struct OWSGameMode_eventGetGlobalDataItem_Parms
		{
			FString GlobalDataKey;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventGetGlobalDataItem_Parms, GlobalDataKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::NewProp_GlobalDataKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Get Global Data Item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetGlobalDataItem", sizeof(OWSGameMode_eventGetGlobalDataItem_Parms), Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Lookup a zone instance from a given port" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetServerInstanceFromPort", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics
	{
		struct OWSGameMode_eventGetZoneInstancesForZone_Parms
		{
			FString ZoneName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventGetZoneInstancesForZone_Parms, ZoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::NewProp_ZoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Get all running zone instances for a Zone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetZoneInstancesForZone", sizeof(OWSGameMode_eventGetZoneInstancesForZone_Parms), Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics
	{
		struct OWSGameMode_eventIsPlayerOnline_Parms
		{
			FString CharacterName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWSGameMode_eventIsPlayerOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSGameMode_eventIsPlayerOnline_Parms), &Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventIsPlayerOnline_Parms, CharacterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_CharacterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Is player online" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "IsPlayerOnline", sizeof(OWSGameMode_eventIsPlayerOnline_Parms), Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyAddOrUpdateGlobalDataItem", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetAllInventoryItems", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWorldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentWorldTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::NewProp_CurrentWorldTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::NewProp_CurrentWorldTime = { "CurrentWorldTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetCurrentWorldTime_Parms, CurrentWorldTime), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::NewProp_CurrentWorldTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::NewProp_CurrentWorldTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::NewProp_CurrentWorldTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetCurrentWorldTime", sizeof(OWSGameMode_eventNotifyGetCurrentWorldTime_Parms), Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetGlobalDataItem_Parms, GlobalDataKey), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetGlobalDataItem", sizeof(OWSGameMode_eventNotifyGetGlobalDataItem_Parms), Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::NewProp_ZoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetServerInstanceFromPort_Parms, ZoneName), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::NewProp_ZoneName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::NewProp_ZoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::NewProp_ZoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetServerInstanceFromPort", sizeof(OWSGameMode_eventNotifyGetServerInstanceFromPort_Parms), Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ZoneInstances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoneInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances = { "ZoneInstances", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms, ZoneInstances), METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances_Inner = { "ZoneInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FZoneInstanceStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetZoneInstancesForZone", sizeof(OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms), Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Save all player locations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "SaveAllPlayerLocations", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Update Number of Players" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "UpdateNumberOfPlayers", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSGameMode_NoRegister()
	{
		return AOWSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOWSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitSaveIntoHowManyGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SplitSaveIntoHowManyGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveIntervalInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SaveIntervalInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPICustomerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPICustomerKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPIPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPIPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DaysPerSolarCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DaysPerSolarCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DaysPerLunarCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DaysPerLunarCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayLengthInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DayLengthInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalSecondsOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalSecondsOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateServerStatusEveryXSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateServerStatusEveryXSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetCharactersOnlineIntervalInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GetCharactersOnlineIntervalInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IAmZoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IAmZoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharactersOnline_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharactersOnline;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharactersOnline_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllInventoryItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllInventoryItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllInventoryItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugCharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemLibraryLoadedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemLibraryLoadedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem, "AddOrUpdateGlobalDataItem" }, // 1840077392
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem, "ErrorAddOrUpdateGlobalDataItem" }, // 3985197885
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline, "ErrorGetAllCharactersOnline" }, // 318423979
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems, "ErrorGetAllInventoryItems" }, // 4212863060
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime, "ErrorGetCurrentWorldTime" }, // 698754404
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem, "ErrorGetGlobalDataItem" }, // 3493559901
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetServerInstanceFromPort, "ErrorGetServerInstanceFromPort" }, // 162386343
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone, "ErrorGetZoneInstancesForZone" }, // 2652791352
		{ &Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort, "GetAddressURLAndPort" }, // 2583120525
		{ &Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline, "GetAllCharactersOnline" }, // 1353580211
		{ &Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems, "GetAllInventoryItems" }, // 3324176298
		{ &Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime, "GetCurrentWorldTime" }, // 3202857882
		{ &Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem, "GetGlobalDataItem" }, // 3147679842
		{ &Z_Construct_UFunction_AOWSGameMode_GetServerInstanceFromPort, "GetServerInstanceFromPort" }, // 1208205587
		{ &Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone, "GetZoneInstancesForZone" }, // 850150311
		{ &Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline, "IsPlayerOnline" }, // 3954763605
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem, "NotifyAddOrUpdateGlobalDataItem" }, // 126885834
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems, "NotifyGetAllInventoryItems" }, // 3276735701
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime, "NotifyGetCurrentWorldTime" }, // 3051462856
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem, "NotifyGetGlobalDataItem" }, // 433786918
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetServerInstanceFromPort, "NotifyGetServerInstanceFromPort" }, // 1562064763
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone, "NotifyGetZoneInstancesForZone" }, // 1675091641
		{ &Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations, "SaveAllPlayerLocations" }, // 3923128983
		{ &Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers, "UpdateNumberOfPlayers" }, // 2471689647
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OWSGameMode.h" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SplitSaveIntoHowManyGroups_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SplitSaveIntoHowManyGroups = { "SplitSaveIntoHowManyGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, SplitSaveIntoHowManyGroups), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SplitSaveIntoHowManyGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SplitSaveIntoHowManyGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SaveIntervalInSeconds_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SaveIntervalInSeconds = { "SaveIntervalInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, SaveIntervalInSeconds), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SaveIntervalInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SaveIntervalInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPICustomerKey_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPICustomerKey = { "RPGAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, RPGAPICustomerKey), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPICustomerKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPICustomerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPIPath = { "RPGAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, RPGAPIPath), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPIPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPIPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerSolarCycle_MetaData[] = {
		{ "Category", "TimeOfDay" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerSolarCycle = { "DaysPerSolarCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, DaysPerSolarCycle), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerSolarCycle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerSolarCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerLunarCycle_MetaData[] = {
		{ "Category", "TimeOfDay" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerLunarCycle = { "DaysPerLunarCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, DaysPerLunarCycle), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerLunarCycle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerLunarCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DayLengthInSeconds_MetaData[] = {
		{ "Category", "TimeOfDay" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "The time offset when this instance started" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DayLengthInSeconds = { "DayLengthInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, DayLengthInSeconds), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DayLengthInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DayLengthInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_LocalSecondsOffset_MetaData[] = {
		{ "Category", "TimeOfDay" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ToolTip", "Time of Day" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_LocalSecondsOffset = { "LocalSecondsOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, LocalSecondsOffset), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_LocalSecondsOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_LocalSecondsOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_UpdateServerStatusEveryXSeconds_MetaData[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_UpdateServerStatusEveryXSeconds = { "UpdateServerStatusEveryXSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, UpdateServerStatusEveryXSeconds), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_UpdateServerStatusEveryXSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_UpdateServerStatusEveryXSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_GetCharactersOnlineIntervalInSeconds_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_GetCharactersOnlineIntervalInSeconds = { "GetCharactersOnlineIntervalInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, GetCharactersOnlineIntervalInSeconds), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_GetCharactersOnlineIntervalInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_GetCharactersOnlineIntervalInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_IAmZoneName_MetaData[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_IAmZoneName = { "IAmZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, IAmZoneName), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_IAmZoneName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_IAmZoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline_MetaData[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline = { "CharactersOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, CharactersOnline), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline_Inner = { "CharactersOnline", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharactersOnlineStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems = { "AllInventoryItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, AllInventoryItems), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems_Inner = { "AllInventoryItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryItemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugCharacterName_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugCharacterName = { "DebugCharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, DebugCharacterName), METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugCharacterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugCharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugStartLocation_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugStartLocation = { "DebugStartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, DebugStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugStartLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ItemLibraryLoadedEvent_MetaData[] = {
		{ "Category", "Item Library Loaded" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ItemLibraryLoadedEvent = { "ItemLibraryLoadedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameMode, ItemLibraryLoadedEvent), Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ItemLibraryLoadedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ItemLibraryLoadedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SplitSaveIntoHowManyGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SaveIntervalInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPICustomerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_RPGAPIPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerSolarCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerLunarCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DayLengthInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_LocalSecondsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_UpdateServerStatusEveryXSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_GetCharactersOnlineIntervalInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_IAmZoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugCharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ItemLibraryLoadedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameMode_Statics::ClassParams = {
		&AOWSGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOWSGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSGameMode, 913662058);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameMode>()
	{
		return AOWSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSGameMode(Z_Construct_UClass_AOWSGameMode, &AOWSGameMode::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
