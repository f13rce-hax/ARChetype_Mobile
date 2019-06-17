// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSMessageServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSMessageServer() {}
// Cross Module References
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLocationMessage();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSMessageServer_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSMessageServer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation();
// End Cross Module References
class UScriptStruct* FPlayerLocationMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPlayerLocationMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerLocationMessage, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("PlayerLocationMessage"), sizeof(FPlayerLocationMessage), Get_Z_Construct_UScriptStruct_FPlayerLocationMessage_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FPlayerLocationMessage>()
{
	return FPlayerLocationMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerLocationMessage(FPlayerLocationMessage::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("PlayerLocationMessage"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFPlayerLocationMessage
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFPlayerLocationMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerLocationMessage")),new UScriptStruct::TCppStructOps<FPlayerLocationMessage>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFPlayerLocationMessage;
	struct Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalCharacterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalCharacterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CharacterModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneNamesToNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZoneNamesToNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerLocationMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLocationMessage, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Z_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLocationMessage, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLocationMessage, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_AdditionalCharacterSettings_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_AdditionalCharacterSettings = { "AdditionalCharacterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLocationMessage, AdditionalCharacterSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_AdditionalCharacterSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_AdditionalCharacterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_CharacterModel_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_CharacterModel = { "CharacterModel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLocationMessage, CharacterModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_CharacterModel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_CharacterModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_ZoneNamesToNotify_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_ZoneNamesToNotify = { "ZoneNamesToNotify", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLocationMessage, ZoneNamesToNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_ZoneNamesToNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_ZoneNamesToNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerLocationMessage, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_PlayerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_AdditionalCharacterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_CharacterModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_ZoneNamesToNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::NewProp_PlayerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"PlayerLocationMessage",
		sizeof(FPlayerLocationMessage),
		alignof(FPlayerLocationMessage),
		Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerLocationMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerLocationMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerLocationMessage"), sizeof(FPlayerLocationMessage), Get_Z_Construct_UScriptStruct_FPlayerLocationMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerLocationMessage_Hash() { return 3356149260U; }
	static FName NAME_AOWSMessageServer_OnReceivePlayerLocation = FName(TEXT("OnReceivePlayerLocation"));
	void AOWSMessageServer::OnReceivePlayerLocation(const FString& PlayerName, const FString& ZoneNamesToNotify, const int32 CharacterModel, const FString& AdditionalCharacterSettings, float const& X, float const& Y, float const& Z)
	{
		OWSMessageServer_eventOnReceivePlayerLocation_Parms Parms;
		Parms.PlayerName=PlayerName;
		Parms.ZoneNamesToNotify=ZoneNamesToNotify;
		Parms.CharacterModel=CharacterModel;
		Parms.AdditionalCharacterSettings=AdditionalCharacterSettings;
		Parms.X=X;
		Parms.Y=Y;
		Parms.Z=Z;
		ProcessEvent(FindFunctionChecked(NAME_AOWSMessageServer_OnReceivePlayerLocation),&Parms);
	}
	void AOWSMessageServer::StaticRegisterNativesAOWSMessageServer()
	{
	}
	struct Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalCharacterSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalCharacterSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CharacterModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneNamesToNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZoneNamesToNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageServer_eventOnReceivePlayerLocation_Parms, Z), METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Z_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageServer_eventOnReceivePlayerLocation_Parms, Y), METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageServer_eventOnReceivePlayerLocation_Parms, X), METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_AdditionalCharacterSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_AdditionalCharacterSettings = { "AdditionalCharacterSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageServer_eventOnReceivePlayerLocation_Parms, AdditionalCharacterSettings), METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_AdditionalCharacterSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_AdditionalCharacterSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_CharacterModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_CharacterModel = { "CharacterModel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageServer_eventOnReceivePlayerLocation_Parms, CharacterModel), METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_CharacterModel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_CharacterModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_ZoneNamesToNotify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_ZoneNamesToNotify = { "ZoneNamesToNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageServer_eventOnReceivePlayerLocation_Parms, ZoneNamesToNotify), METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_ZoneNamesToNotify_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_ZoneNamesToNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageServer_eventOnReceivePlayerLocation_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_PlayerName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_AdditionalCharacterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_CharacterModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_ZoneNamesToNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::NewProp_PlayerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSMessageServer, nullptr, "OnReceivePlayerLocation", sizeof(OWSMessageServer_eventOnReceivePlayerLocation_Parms), Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSMessageServer_NoRegister()
	{
		return AOWSMessageServer::StaticClass();
	}
	struct Z_Construct_UClass_AOWSMessageServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSMessageServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSMessageServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSMessageServer_OnReceivePlayerLocation, "OnReceivePlayerLocation" }, // 1504753716
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSMessageServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSMessageServer.h" },
		{ "ModuleRelativePath", "Public/OWSMessageServer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSMessageServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSMessageServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSMessageServer_Statics::ClassParams = {
		&AOWSMessageServer::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSMessageServer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSMessageServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSMessageServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSMessageServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSMessageServer, 2851406344);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSMessageServer>()
	{
		return AOWSMessageServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSMessageServer(Z_Construct_UClass_AOWSMessageServer, &AOWSMessageServer::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSMessageServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSMessageServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
