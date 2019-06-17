// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOWSCharacter;
class UTexture2D;
struct FUserCharacter;
struct FChatGroup;
struct FCustomCharacterDataStruct;
struct FPlayerGroup;
#ifdef OWSPLUGIN_OWSPlayerController_generated_h
#error "OWSPlayerController.generated.h already included, missing '#pragma once' in OWSPlayerController.h"
#endif
#define OWSPLUGIN_OWSPlayerController_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserCharacter_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FUserCharacter>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerGroup_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerGroup>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatGroup_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FChatGroup>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveCharacter) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCharacter(Z_Param_UserSessionGUID,Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapServerToTravelTo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ZoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapServerToTravelTo(Z_Param_ZoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveAllMatches) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveAllMatches(Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerGroupsCharacterIsIn) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerGroupTypeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPlayerGroupsCharacterIsIn(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_PlayerGroupTypeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveQueue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_QueueName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveQueue(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_QueueName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinQueue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_QueueName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JoinQueue(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_QueueName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateCosmeticCustomCharacterData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomFieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateCosmeticCustomCharacterData(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_CustomFieldName,Z_Param_CustomValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCosmeticCustomCharacterData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCosmeticCustomCharacterData(Z_Param_UserSessionGUID,Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUserSessionSetSelectedCharacter) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SelectedCharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UserSessionSetSelectedCharacter(Z_Param_UserSessionGUID,Z_Param_SelectedCharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUserSession(Z_Param_UserSessionGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastZoneServerToTravelTo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLastZoneServerToTravelTo(Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCharacter) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateCharacter(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCharacters) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCharacters(Z_Param_UserSessionGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerOnline) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsPlayerOnline(Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChatGroupsForPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetChatGroupsForPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerLogout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerLogout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchDungeon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GroupType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchDungeon(Z_Param_MapName,ERPGPlayerGroupType::PlayerGroupType(Z_Param_GroupType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemovePlayerFromGroup) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerGroupName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterNameToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemovePlayerFromGroup(Z_Param_PlayerGroupName,Z_Param_CharacterNameToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPlayerToGroup) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerGroupName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GroupType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterNameToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPlayerToGroup(Z_Param_PlayerGroupName,ERPGPlayerGroupType::PlayerGroupType(Z_Param_GroupType),Z_Param_CharacterNameToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAllPlayerData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveAllPlayerData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePlayerLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SavePlayerLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSelectionOnCharacter) \
	{ \
		P_GET_OBJECT(AOWSCharacter,Z_Param_RPGCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelectionOnCharacter(Z_Param_RPGCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSelectedCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelectedCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedCharacter) \
	{ \
		P_GET_OBJECT(AOWSCharacter,Z_Param_RPGCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedCharacter(Z_Param_RPGCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTextureReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TexturePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadTextureReference(Z_Param_TexturePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPredictionTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPredictionTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTravelToMap2) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerAndPort); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RZ); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_UBOOL(Z_Param_SeamlessTravel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TravelToMap2(Z_Param_ServerAndPort,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_RX,Z_Param_RY,Z_Param_RZ,Z_Param_PlayerName,Z_Param_SeamlessTravel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTravelToMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_UBOOL(Z_Param_SeamlessTravel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TravelToMap(Z_Param_URL,Z_Param_SeamlessTravel); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveCharacter) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCharacter(Z_Param_UserSessionGUID,Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapServerToTravelTo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ZoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapServerToTravelTo(Z_Param_ZoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveAllMatches) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveAllMatches(Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayerGroupsCharacterIsIn) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerGroupTypeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPlayerGroupsCharacterIsIn(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_PlayerGroupTypeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeaveQueue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_QueueName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveQueue(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_QueueName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJoinQueue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_QueueName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JoinQueue(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_QueueName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateCosmeticCustomCharacterData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomFieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateCosmeticCustomCharacterData(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_CustomFieldName,Z_Param_CustomValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCosmeticCustomCharacterData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCosmeticCustomCharacterData(Z_Param_UserSessionGUID,Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUserSessionSetSelectedCharacter) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SelectedCharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UserSessionSetSelectedCharacter(Z_Param_UserSessionGUID,Z_Param_SelectedCharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUserSession(Z_Param_UserSessionGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastZoneServerToTravelTo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLastZoneServerToTravelTo(Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCharacter) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateCharacter(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCharacters) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserSessionGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCharacters(Z_Param_UserSessionGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerOnline) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsPlayerOnline(Z_Param_PlayerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChatGroupsForPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetChatGroupsForPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerLogout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerLogout(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchDungeon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GroupType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchDungeon(Z_Param_MapName,ERPGPlayerGroupType::PlayerGroupType(Z_Param_GroupType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemovePlayerFromGroup) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerGroupName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterNameToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemovePlayerFromGroup(Z_Param_PlayerGroupName,Z_Param_CharacterNameToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPlayerToGroup) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerGroupName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GroupType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterNameToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPlayerToGroup(Z_Param_PlayerGroupName,ERPGPlayerGroupType::PlayerGroupType(Z_Param_GroupType),Z_Param_CharacterNameToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAllPlayerData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveAllPlayerData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSavePlayerLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SavePlayerLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSelectionOnCharacter) \
	{ \
		P_GET_OBJECT(AOWSCharacter,Z_Param_RPGCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelectionOnCharacter(Z_Param_RPGCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSelectedCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearSelectedCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedCharacter) \
	{ \
		P_GET_OBJECT(AOWSCharacter,Z_Param_RPGCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedCharacter(Z_Param_RPGCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTextureReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TexturePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadTextureReference(Z_Param_TexturePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPredictionTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPredictionTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTravelToMap2) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerAndPort); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RZ); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_UBOOL(Z_Param_SeamlessTravel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TravelToMap2(Z_Param_ServerAndPort,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_RX,Z_Param_RY,Z_Param_RZ,Z_Param_PlayerName,Z_Param_SeamlessTravel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTravelToMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_UBOOL(Z_Param_SeamlessTravel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TravelToMap(Z_Param_URL,Z_Param_SeamlessTravel); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_EVENT_PARMS \
	struct OWSPlayerController_eventErrorCreateCharacter_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorGetAllCharacters_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorGetChatGroupsForPlayer_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorGetCosmeticCustomCharacterData_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorGetPlayerGroupsCharacterIsIn_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorGetUserSession_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorIsPlayerOnline_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorJoinQueue_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorLastZoneServerToTravelTo_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorLaunchDungeon_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorLeaveAllMatches_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorLeaveQueue_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorMapServerToTravelTo_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorPlayerLogout_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorRemoveCharacter_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventErrorUserSessionSetSelectedCharacter_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSPlayerController_eventNotifyAddPlayerToGroup_Parms \
	{ \
		FString CharacterNameAddedToGroup; \
	}; \
	struct OWSPlayerController_eventNotifyCreateCharacter_Parms \
	{ \
		FString CharacterName; \
	}; \
	struct OWSPlayerController_eventNotifyGetAllCharacters_Parms \
	{ \
		TArray<FUserCharacter> UserCharacters; \
	}; \
	struct OWSPlayerController_eventNotifyGetChatGroupsForPlayer_Parms \
	{ \
		TArray<FChatGroup> ChatGroups; \
	}; \
	struct OWSPlayerController_eventNotifyGetCosmeticCustomCharacterData_Parms \
	{ \
		TArray<FCustomCharacterDataStruct> CustomCharacterData; \
	}; \
	struct OWSPlayerController_eventNotifyGetPlayerGroupsCharacterIsIn_Parms \
	{ \
		TArray<FPlayerGroup> PlayerGroups; \
	}; \
	struct OWSPlayerController_eventNotifyGetUserSession_Parms \
	{ \
		FString CharacterName; \
		float X; \
		float Y; \
		float Z; \
		float RX; \
		float RY; \
		float RZ; \
	}; \
	struct OWSPlayerController_eventNotifyIsPlayerOnline_Parms \
	{ \
		bool PlayerIsOnline; \
	}; \
	struct OWSPlayerController_eventNotifyJoinQueue_Parms \
	{ \
		int32 SuccessCode; \
	}; \
	struct OWSPlayerController_eventNotifyLastZoneServerToTravelTo_Parms \
	{ \
		FString ServerAndPort; \
	}; \
	struct OWSPlayerController_eventNotifyLaunchDungeon_Parms \
	{ \
		FString ServerAndPort; \
	}; \
	struct OWSPlayerController_eventNotifyLeaveQueue_Parms \
	{ \
		int32 SuccessCode; \
	}; \
	struct OWSPlayerController_eventNotifyMapServerToTravelTo_Parms \
	{ \
		FString ServerAndPort; \
	}; \
	struct OWSPlayerController_eventNotifyPawnLeavingGame_Parms \
	{ \
		const AOWSCharacter* RPGCharacter; \
	}; \
	struct OWSPlayerController_eventNotifyRemovePlayerFromGroup_Parms \
	{ \
		FString CharacterNameAddedToGroup; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSPlayerController(); \
	friend struct Z_Construct_UClass_AOWSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AOWSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSPlayerController)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_INCLASS \
private: \
	static void StaticRegisterNativesAOWSPlayerController(); \
	friend struct Z_Construct_UClass_AOWSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AOWSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSPlayerController)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSPlayerController(AOWSPlayerController&&); \
	NO_API AOWSPlayerController(const AOWSPlayerController&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSPlayerController(AOWSPlayerController&&); \
	NO_API AOWSPlayerController(const AOWSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSPlayerController)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_98_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h


#define FOREACH_ENUM_ERPGPLAYERGROUPTYPE(op) \
	op(ERPGPlayerGroupType::NoGroup) \
	op(ERPGPlayerGroupType::Party) \
	op(ERPGPlayerGroupType::Raid) \
	op(ERPGPlayerGroupType::Guild) \
	op(ERPGPlayerGroupType::Team) \
	op(ERPGPlayerGroupType::Faction) \
	op(ERPGPlayerGroupType::FlightGroup) \
	op(ERPGPlayerGroupType::Alliance) \
	op(ERPGPlayerGroupType::Squad) \
	op(ERPGPlayerGroupType::Other) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
