// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChatMessage;
#ifdef OWSPLUGIN_OWSChatManager_generated_h
#error "OWSChatManager.generated.h already included, missing '#pragma once' in OWSChatManager.h"
#endif
#define OWSPLUGIN_OWSChatManager_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatMessage_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FChatMessage>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLeaveChatGroup) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterNameToRemove); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChatGroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveChatGroup(Z_Param_CharacterNameToRemove,Z_Param_ChatGroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrJoinChatGroup) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterNameToAdd); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChatGroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrJoinChatGroup(Z_Param_CharacterNameToAdd,Z_Param_ChatGroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNewChatMessages) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LastChatMessageReceived); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNewChatMessages(Z_Param_LastChatMessageReceived); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPrivateChatMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SentFromCharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SendToCharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendPrivateChatMessage(Z_Param_SentFromCharacterName,Z_Param_SendToCharacterName,Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendChatToChannel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SentFromCharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChatChannelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendChatToChannel(Z_Param_SentFromCharacterName,Z_Param_Message,Z_Param_ChatChannelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGlobalChat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SentFromCharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendGlobalChat(Z_Param_SentFromCharacterName,Z_Param_Message); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLeaveChatGroup) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterNameToRemove); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChatGroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveChatGroup(Z_Param_CharacterNameToRemove,Z_Param_ChatGroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrJoinChatGroup) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterNameToAdd); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChatGroupName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrJoinChatGroup(Z_Param_CharacterNameToAdd,Z_Param_ChatGroupName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNewChatMessages) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_LastChatMessageReceived); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNewChatMessages(Z_Param_LastChatMessageReceived); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPrivateChatMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SentFromCharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SendToCharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendPrivateChatMessage(Z_Param_SentFromCharacterName,Z_Param_SendToCharacterName,Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendChatToChannel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SentFromCharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChatChannelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendChatToChannel(Z_Param_SentFromCharacterName,Z_Param_Message,Z_Param_ChatChannelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGlobalChat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SentFromCharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendGlobalChat(Z_Param_SentFromCharacterName,Z_Param_Message); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_EVENT_PARMS \
	struct OWSChatManager_eventErrorGetNewChatMessages_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSChatManager_eventNotifyGetNewChatMessages_Parms \
	{ \
		TArray<FChatMessage> NewChatMessages; \
		int32 MaxMessageID; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSChatManager(); \
	friend struct Z_Construct_UClass_AOWSChatManager_Statics; \
public: \
	DECLARE_CLASS(AOWSChatManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSChatManager)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAOWSChatManager(); \
	friend struct Z_Construct_UClass_AOWSChatManager_Statics; \
public: \
	DECLARE_CLASS(AOWSChatManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSChatManager)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSChatManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSChatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSChatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSChatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSChatManager(AOWSChatManager&&); \
	NO_API AOWSChatManager(const AOWSChatManager&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSChatManager(AOWSChatManager&&); \
	NO_API AOWSChatManager(const AOWSChatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSChatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSChatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSChatManager)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_32_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSChatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
