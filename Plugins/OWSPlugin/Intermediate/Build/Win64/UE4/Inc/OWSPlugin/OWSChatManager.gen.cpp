// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSChatManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSChatManager() {}
// Cross Module References
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChatMessage();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSChatManager_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSChatManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSChatManager_SendChatToChannel();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSChatManager_SendGlobalChat();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage();
// End Cross Module References
class UScriptStruct* FChatMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FChatMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatMessage, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ChatMessage"), sizeof(FChatMessage), Get_Z_Construct_UScriptStruct_FChatMessage_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FChatMessage>()
{
	return FChatMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatMessage(FChatMessage::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("ChatMessage"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFChatMessage
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFChatMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatMessage")),new UScriptStruct::TCppStructOps<FChatMessage>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFChatMessage;
	struct Z_Construct_UScriptStruct_FChatMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatGroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatGroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChatGroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentToCharName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SentToCharName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentToCharID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SentToCharID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentByCharName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SentByCharName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentByCharID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SentByCharID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatMessageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChatMessageID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupName_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupName = { "ChatGroupName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessage, ChatGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupID = { "ChatGroupID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessage, ChatGroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharName_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharName = { "SentToCharName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessage, SentToCharName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharID = { "SentToCharID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessage, SentToCharID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharName_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharName = { "SentByCharName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessage, SentByCharName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharID = { "SentByCharID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessage, SentByCharID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessageID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessageID = { "ChatMessageID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessage, ChatMessageID), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessageID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessage_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessage = { "ChatMessage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatMessage, ChatMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"ChatMessage",
		sizeof(FChatMessage),
		alignof(FChatMessage),
		Z_Construct_UScriptStruct_FChatMessage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatMessage"), sizeof(FChatMessage), Get_Z_Construct_UScriptStruct_FChatMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatMessage_Hash() { return 1445105551U; }
	static FName NAME_AOWSChatManager_ErrorGetNewChatMessages = FName(TEXT("ErrorGetNewChatMessages"));
	void AOWSChatManager::ErrorGetNewChatMessages(const FString& ErrorMsg)
	{
		OWSChatManager_eventErrorGetNewChatMessages_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSChatManager_ErrorGetNewChatMessages),&Parms);
	}
	static FName NAME_AOWSChatManager_NotifyGetNewChatMessages = FName(TEXT("NotifyGetNewChatMessages"));
	void AOWSChatManager::NotifyGetNewChatMessages(TArray<FChatMessage> const& NewChatMessages, const int32 MaxMessageID)
	{
		OWSChatManager_eventNotifyGetNewChatMessages_Parms Parms;
		Parms.NewChatMessages=NewChatMessages;
		Parms.MaxMessageID=MaxMessageID;
		ProcessEvent(FindFunctionChecked(NAME_AOWSChatManager_NotifyGetNewChatMessages),&Parms);
	}
	void AOWSChatManager::StaticRegisterNativesAOWSChatManager()
	{
		UClass* Class = AOWSChatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrJoinChatGroup", &AOWSChatManager::execAddOrJoinChatGroup },
			{ "GetNewChatMessages", &AOWSChatManager::execGetNewChatMessages },
			{ "LeaveChatGroup", &AOWSChatManager::execLeaveChatGroup },
			{ "SendChatToChannel", &AOWSChatManager::execSendChatToChannel },
			{ "SendGlobalChat", &AOWSChatManager::execSendGlobalChat },
			{ "SendPrivateChatMessage", &AOWSChatManager::execSendPrivateChatMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics
	{
		struct OWSChatManager_eventAddOrJoinChatGroup_Parms
		{
			FString CharacterNameToAdd;
			FString ChatGroupName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatGroupName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterNameToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::NewProp_ChatGroupName = { "ChatGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventAddOrJoinChatGroup_Parms, ChatGroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::NewProp_CharacterNameToAdd = { "CharacterNameToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventAddOrJoinChatGroup_Parms, CharacterNameToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::NewProp_ChatGroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::NewProp_CharacterNameToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
		{ "ToolTip", "Add to Chat Group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "AddOrJoinChatGroup", sizeof(OWSChatManager_eventAddOrJoinChatGroup_Parms), Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventErrorGetNewChatMessages_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "ErrorGetNewChatMessages", sizeof(OWSChatManager_eventErrorGetNewChatMessages_Parms), Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics
	{
		struct OWSChatManager_eventGetNewChatMessages_Parms
		{
			int32 LastChatMessageReceived;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastChatMessageReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::NewProp_LastChatMessageReceived = { "LastChatMessageReceived", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventGetNewChatMessages_Parms, LastChatMessageReceived), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::NewProp_LastChatMessageReceived,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
		{ "ToolTip", "Get new Chat Messages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "GetNewChatMessages", sizeof(OWSChatManager_eventGetNewChatMessages_Parms), Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics
	{
		struct OWSChatManager_eventLeaveChatGroup_Parms
		{
			FString CharacterNameToRemove;
			FString ChatGroupName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatGroupName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterNameToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::NewProp_ChatGroupName = { "ChatGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventLeaveChatGroup_Parms, ChatGroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::NewProp_CharacterNameToRemove = { "CharacterNameToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventLeaveChatGroup_Parms, CharacterNameToRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::NewProp_ChatGroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::NewProp_CharacterNameToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
		{ "ToolTip", "Leave Chat Group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "LeaveChatGroup", sizeof(OWSChatManager_eventLeaveChatGroup_Parms), Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMessageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMessageID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewChatMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewChatMessages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewChatMessages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_MaxMessageID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_MaxMessageID = { "MaxMessageID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventNotifyGetNewChatMessages_Parms, MaxMessageID), METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_MaxMessageID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_MaxMessageID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages = { "NewChatMessages", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventNotifyGetNewChatMessages_Parms, NewChatMessages), METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages_Inner = { "NewChatMessages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChatMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_MaxMessageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "NotifyGetNewChatMessages", sizeof(OWSChatManager_eventNotifyGetNewChatMessages_Parms), Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics
	{
		struct OWSChatManager_eventSendChatToChannel_Parms
		{
			FString SentFromCharacterName;
			FString Message;
			FString ChatChannelName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatChannelName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SentFromCharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_ChatChannelName = { "ChatChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventSendChatToChannel_Parms, ChatChannelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventSendChatToChannel_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_SentFromCharacterName = { "SentFromCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventSendChatToChannel_Parms, SentFromCharacterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_ChatChannelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_SentFromCharacterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
		{ "ToolTip", "Send Chat to Channel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "SendChatToChannel", sizeof(OWSChatManager_eventSendChatToChannel_Parms), Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSChatManager_SendChatToChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics
	{
		struct OWSChatManager_eventSendGlobalChat_Parms
		{
			FString SentFromCharacterName;
			FString Message;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SentFromCharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventSendGlobalChat_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::NewProp_SentFromCharacterName = { "SentFromCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventSendGlobalChat_Parms, SentFromCharacterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::NewProp_SentFromCharacterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
		{ "ToolTip", "Send Global Chat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "SendGlobalChat", sizeof(OWSChatManager_eventSendGlobalChat_Parms), Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSChatManager_SendGlobalChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics
	{
		struct OWSChatManager_eventSendPrivateChatMessage_Parms
		{
			FString SentFromCharacterName;
			FString SendToCharacterName;
			FString Message;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SendToCharacterName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SentFromCharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventSendPrivateChatMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_SendToCharacterName = { "SendToCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventSendPrivateChatMessage_Parms, SendToCharacterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_SentFromCharacterName = { "SentFromCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSChatManager_eventSendPrivateChatMessage_Parms, SentFromCharacterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_SendToCharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_SentFromCharacterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
		{ "ToolTip", "Send Private Message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "SendPrivateChatMessage", sizeof(OWSChatManager_eventSendPrivateChatMessage_Parms), Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSChatManager_NoRegister()
	{
		return AOWSChatManager::StaticClass();
	}
	struct Z_Construct_UClass_AOWSChatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPIPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPIPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPICustomerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPICustomerKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSChatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSChatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup, "AddOrJoinChatGroup" }, // 3131373333
		{ &Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages, "ErrorGetNewChatMessages" }, // 671949790
		{ &Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages, "GetNewChatMessages" }, // 1372224750
		{ &Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup, "LeaveChatGroup" }, // 3607578086
		{ &Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages, "NotifyGetNewChatMessages" }, // 2078734959
		{ &Z_Construct_UFunction_AOWSChatManager_SendChatToChannel, "SendChatToChannel" }, // 3380957928
		{ &Z_Construct_UFunction_AOWSChatManager_SendGlobalChat, "SendGlobalChat" }, // 2872504787
		{ &Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage, "SendPrivateChatMessage" }, // 2615536535
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSChatManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSChatManager.h" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPIPath = { "RPGAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSChatManager, RPGAPIPath), METADATA_PARAMS(Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPIPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPIPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPICustomerKey_MetaData[] = {
		{ "Category", "OWSChatManager" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPICustomerKey = { "RPGAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSChatManager, RPGAPICustomerKey), METADATA_PARAMS(Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPICustomerKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPICustomerKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSChatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPIPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSChatManager_Statics::NewProp_RPGAPICustomerKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSChatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSChatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSChatManager_Statics::ClassParams = {
		&AOWSChatManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSChatManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSChatManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSChatManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSChatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSChatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSChatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSChatManager, 2135005278);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSChatManager>()
	{
		return AOWSChatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSChatManager(Z_Construct_UClass_AOWSChatManager, &AOWSChatManager::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSChatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSChatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
