// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCustomInventoryItemDataStruct;
struct FGuid;
class UOWSInventory;
class AOWSGameMode;
struct FAbilityBarStruct;
struct FAbilityStruct;
struct FInventoryItemStruct;
struct FCustomCharacterDataStruct;
#ifdef OWSPLUGIN_OWSCharacter_generated_h
#error "OWSCharacter.generated.h already included, missing '#pragma once' in OWSCharacter.h"
#endif
#define OWSPLUGIN_OWSCharacter_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCustomInventoryItemDataStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCustomCharacterDataStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityBarStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FAbilityBarStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FAbilityStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_RPC_WRAPPERS \
	virtual void Client_AddItemToInventory_Implementation(FName const& InventoryName, const FString& ItemName, const int32 StackSize, const int32 InSlotNumber, const int32 NumberOfUsesLeft, const int32 Condition, const FString& PerInstanceCustomData, const FGuid UniqueItemGUID); \
	virtual void Client_CreateHUDInventory_Implementation(FName InventoryName, int32 Size); \
	virtual void Client_AddItemToLocalInventoryItems_Implementation(const FString& ItemName, bool ItemCanStack, bool IsUsable, bool IsConsumedOnUse, const int32 ItemTypeID, const FString& TextureToUseForIcon); \
 \
	DECLARE_FUNCTION(execCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->CurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->HP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScoreToMod) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ScoreToMod(Z_Param_inScore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseInventoryCustomData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryCustomData); \
		P_GET_TARRAY_REF(FCustomInventoryItemDataStruct,Z_Param_Out_ItemCustomDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ParseInventoryCustomData(Z_Param_InventoryCustomData,Z_Param_Out_ItemCustomDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilityBarsAndAbilities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAbilityBarsAndAbilities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilityBars) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAbilityBars(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterAbilities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCharacterAbilities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInventory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateInventory(Z_Param_InventoryName,Z_Param_InventorySize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveInventory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveInventory(Z_Param_InventoryName,Z_Param_InventoryData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItemFromInventory) \
	{ \
		P_GET_STRUCT(FGuid,Z_Param_UniqueItemGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItemFromInventory(Z_Param_UniqueItemGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventoryWithCustomData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSlotNumber); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfUsesLeft); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Condition); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomData); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_UniqueItemGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemToInventoryWithCustomData(Z_Param_InventoryName,Z_Param_ItemName,Z_Param_InSlotNumber,Z_Param_Quantity,Z_Param_NumberOfUsesLeft,Z_Param_Condition,Z_Param_CustomData,Z_Param_Out_UniqueItemGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSlotNumber); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfUsesLeft); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Condition); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_UniqueItemGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemToInventory(Z_Param_InventoryName,Z_Param_ItemName,Z_Param_InSlotNumber,Z_Param_Quantity,Z_Param_NumberOfUsesLeft,Z_Param_Condition,Z_Param_Out_UniqueItemGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventoryItems) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetInventoryItems(Z_Param_InventoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHUDInventoryFromName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InventoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSInventory**)Z_Param__Result=P_THIS->GetHUDInventoryFromName(Z_Param_InventoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_AddItemToInventory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StackSize); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSlotNumber); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfUsesLeft); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Condition); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PerInstanceCustomData); \
		P_GET_STRUCT(FGuid,Z_Param_UniqueItemGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_AddItemToInventory_Implementation(Z_Param_InventoryName,Z_Param_ItemName,Z_Param_StackSize,Z_Param_InSlotNumber,Z_Param_NumberOfUsesLeft,Z_Param_Condition,Z_Param_PerInstanceCustomData,Z_Param_UniqueItemGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_CreateHUDInventory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_CreateHUDInventory_Implementation(Z_Param_InventoryName,Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_AddItemToLocalInventoryItems) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_GET_UBOOL(Z_Param_ItemCanStack); \
		P_GET_UBOOL(Z_Param_IsUsable); \
		P_GET_UBOOL(Z_Param_IsConsumedOnUse); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemTypeID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextureToUseForIcon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_AddItemToLocalInventoryItems_Implementation(Z_Param_ItemName,Z_Param_ItemCanStack,Z_Param_IsUsable,Z_Param_IsConsumedOnUse,Z_Param_ItemTypeID,Z_Param_TextureToUseForIcon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateHUDInventory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSInventory**)Z_Param__Result=P_THIS->CreateHUDInventory(Z_Param_InventoryName,Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_InventoriesToManage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InventoriesToManage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AOWSGameMode**)Z_Param__Result=P_THIS->GetGameMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateCustomCharacterData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomFieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateCustomCharacterData(Z_Param_CustomFieldName,Z_Param_CustomValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomCharacterData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCustomCharacterData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateCharacterStatus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StatusName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StatusValue); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StatusDurationMinutes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateCharacterStatus(Z_Param_StatusName,Z_Param_StatusValue,Z_Param_StatusDurationMinutes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterStatuses) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCharacterStatuses(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCharacterStatsBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCharacterStatsBase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterStatsBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCharacterStatsBase(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_AddItemToInventory_Implementation(FName const& InventoryName, const FString& ItemName, const int32 StackSize, const int32 InSlotNumber, const int32 NumberOfUsesLeft, const int32 Condition, const FString& PerInstanceCustomData, const FGuid UniqueItemGUID); \
	virtual void Client_CreateHUDInventory_Implementation(FName InventoryName, int32 Size); \
	virtual void Client_AddItemToLocalInventoryItems_Implementation(const FString& ItemName, bool ItemCanStack, bool IsUsable, bool IsConsumedOnUse, const int32 ItemTypeID, const FString& TextureToUseForIcon); \
 \
	DECLARE_FUNCTION(execCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->CurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->HP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScoreToMod) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->ScoreToMod(Z_Param_inScore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseInventoryCustomData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryCustomData); \
		P_GET_TARRAY_REF(FCustomInventoryItemDataStruct,Z_Param_Out_ItemCustomDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ParseInventoryCustomData(Z_Param_InventoryCustomData,Z_Param_Out_ItemCustomDataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilityBarsAndAbilities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAbilityBarsAndAbilities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbilityBars) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAbilityBars(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterAbilities) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCharacterAbilities(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInventory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InventorySize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateInventory(Z_Param_InventoryName,Z_Param_InventorySize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveInventory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveInventory(Z_Param_InventoryName,Z_Param_InventoryData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItemFromInventory) \
	{ \
		P_GET_STRUCT(FGuid,Z_Param_UniqueItemGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItemFromInventory(Z_Param_UniqueItemGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventoryWithCustomData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSlotNumber); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfUsesLeft); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Condition); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomData); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_UniqueItemGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemToInventoryWithCustomData(Z_Param_InventoryName,Z_Param_ItemName,Z_Param_InSlotNumber,Z_Param_Quantity,Z_Param_NumberOfUsesLeft,Z_Param_Condition,Z_Param_CustomData,Z_Param_Out_UniqueItemGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSlotNumber); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfUsesLeft); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Condition); \
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_UniqueItemGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemToInventory(Z_Param_InventoryName,Z_Param_ItemName,Z_Param_InSlotNumber,Z_Param_Quantity,Z_Param_NumberOfUsesLeft,Z_Param_Condition,Z_Param_Out_UniqueItemGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventoryItems) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InventoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetInventoryItems(Z_Param_InventoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHUDInventoryFromName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InventoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSInventory**)Z_Param__Result=P_THIS->GetHUDInventoryFromName(Z_Param_InventoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_AddItemToInventory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StackSize); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InSlotNumber); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfUsesLeft); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Condition); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PerInstanceCustomData); \
		P_GET_STRUCT(FGuid,Z_Param_UniqueItemGUID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_AddItemToInventory_Implementation(Z_Param_InventoryName,Z_Param_ItemName,Z_Param_StackSize,Z_Param_InSlotNumber,Z_Param_NumberOfUsesLeft,Z_Param_Condition,Z_Param_PerInstanceCustomData,Z_Param_UniqueItemGUID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_CreateHUDInventory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_CreateHUDInventory_Implementation(Z_Param_InventoryName,Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_AddItemToLocalInventoryItems) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_GET_UBOOL(Z_Param_ItemCanStack); \
		P_GET_UBOOL(Z_Param_IsUsable); \
		P_GET_UBOOL(Z_Param_IsConsumedOnUse); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemTypeID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextureToUseForIcon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_AddItemToLocalInventoryItems_Implementation(Z_Param_ItemName,Z_Param_ItemCanStack,Z_Param_IsUsable,Z_Param_IsConsumedOnUse,Z_Param_ItemTypeID,Z_Param_TextureToUseForIcon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateHUDInventory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_InventoryName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSInventory**)Z_Param__Result=P_THIS->CreateHUDInventory(Z_Param_InventoryName,Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_InventoriesToManage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_InventoriesToManage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AOWSGameMode**)Z_Param__Result=P_THIS->GetGameMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateCustomCharacterData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomFieldName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateCustomCharacterData(Z_Param_CustomFieldName,Z_Param_CustomValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomCharacterData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCustomCharacterData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateCharacterStatus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StatusName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StatusValue); \
		P_GET_PROPERTY(UIntProperty,Z_Param_StatusDurationMinutes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateCharacterStatus(Z_Param_StatusName,Z_Param_StatusValue,Z_Param_StatusDurationMinutes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterStatuses) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCharacterStatuses(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCharacterStatsBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCharacterStatsBase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterStatsBase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCharacterStatsBase(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_EVENT_PARMS \
	struct OWSCharacter_eventClient_AddItemToInventory_Parms \
	{ \
		FName InventoryName; \
		FString ItemName; \
		int32 StackSize; \
		int32 InSlotNumber; \
		int32 NumberOfUsesLeft; \
		int32 Condition; \
		FString PerInstanceCustomData; \
		FGuid UniqueItemGUID; \
	}; \
	struct OWSCharacter_eventClient_AddItemToLocalInventoryItems_Parms \
	{ \
		FString ItemName; \
		bool ItemCanStack; \
		bool IsUsable; \
		bool IsConsumedOnUse; \
		int32 ItemTypeID; \
		FString TextureToUseForIcon; \
	}; \
	struct OWSCharacter_eventClient_CreateHUDInventory_Parms \
	{ \
		FName InventoryName; \
		int32 Size; \
	}; \
	struct OWSCharacter_eventCreateInventoryError_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSCharacter_eventErrorGetCharacterStatuses_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSCharacter_eventErrorGetCustomCharacterData_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSCharacter_eventGetAbilityBarsAndAbilitiesComplete_Parms \
	{ \
		TArray<FAbilityBarStruct> AbilityBars; \
	}; \
	struct OWSCharacter_eventGetAbilityBarsAndAbilitiesError_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSCharacter_eventGetAbilityBarsComplete_Parms \
	{ \
		TArray<FAbilityBarStruct> AbilityBars; \
	}; \
	struct OWSCharacter_eventGetAbilityBarsError_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSCharacter_eventGetCharacterAbilitiesComplete_Parms \
	{ \
		TArray<FAbilityStruct> AbilityBars; \
	}; \
	struct OWSCharacter_eventGetCharacterAbilitiesError_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSCharacter_eventGetInventoryItemsComplete_Parms \
	{ \
		TArray<FInventoryItemStruct> InventoryItems; \
	}; \
	struct OWSCharacter_eventGetInventoryItemsError_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSCharacter_eventNotifyGetCustomCharacterData_Parms \
	{ \
		TArray<FCustomCharacterDataStruct> CustomCharacterData; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSCharacter(); \
	friend struct Z_Construct_UClass_AOWSCharacter_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacter, AOWSCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSCharacter*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_INCLASS \
private: \
	static void StaticRegisterNativesAOWSCharacter(); \
	friend struct Z_Construct_UClass_AOWSCharacter_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacter, AOWSCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSCharacter*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSCharacter(AOWSCharacter&&); \
	NO_API AOWSCharacter(const AOWSCharacter&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSCharacter(AOWSCharacter&&); \
	NO_API AOWSCharacter(const AOWSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSCharacter)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_97_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
