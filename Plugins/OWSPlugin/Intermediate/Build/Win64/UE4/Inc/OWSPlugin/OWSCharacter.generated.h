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
struct FAbilityBarStruct;
struct FAbilityStruct;
struct FInventoryItemStruct;
struct FCustomCharacterDataStruct;
#ifdef OWSPLUGIN_OWSCharacter_generated_h
#error "OWSCharacter.generated.h already included, missing '#pragma once' in OWSCharacter.h"
#endif
#define OWSPLUGIN_OWSCharacter_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomInventoryItemDataStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCustomInventoryItemDataStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCustomCharacterDataStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityBarStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FAbilityBarStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FAbilityStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_RPC_WRAPPERS \
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


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_EVENT_PARMS \
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


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSCharacter(); \
	friend struct Z_Construct_UClass_AOWSCharacter_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacter, AOWSCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSCharacter*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_INCLASS \
private: \
	static void StaticRegisterNativesAOWSCharacter(); \
	friend struct Z_Construct_UClass_AOWSCharacter_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacter, AOWSCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSCharacter*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_STANDARD_CONSTRUCTORS \
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


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSCharacter(AOWSCharacter&&); \
	NO_API AOWSCharacter(const AOWSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSCharacter)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_96_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
