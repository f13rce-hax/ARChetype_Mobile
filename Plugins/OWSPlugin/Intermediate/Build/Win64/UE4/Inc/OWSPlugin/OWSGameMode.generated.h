// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FZoneInstanceStruct;
#ifdef OWSPLUGIN_OWSGameMode_generated_h
#error "OWSGameMode.generated.h already included, missing '#pragma once' in OWSGameMode.h"
#endif
#define OWSPLUGIN_OWSGameMode_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCharactersOnlineStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FZoneInstanceStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FZoneInstanceStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_94_DELEGATE \
static inline void FItemLibraryLoadedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemLibraryLoadedSignature) \
{ \
	ItemLibraryLoadedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWorldTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentWorldTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAddressURLAndPort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAddressURLAndPort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateNumberOfPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateNumberOfPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerInstanceFromPort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetServerInstanceFromPort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneInstancesForZone) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ZoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetZoneInstancesForZone(Z_Param_ZoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerOnline) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerOnline(Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCharactersOnline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCharactersOnline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAllPlayerLocations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveAllPlayerLocations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateGlobalDataItem) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GlobalDataKey); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GlobalDataValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateGlobalDataItem(Z_Param_GlobalDataKey,Z_Param_GlobalDataValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalDataItem) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GlobalDataKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGlobalDataItem(Z_Param_GlobalDataKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllInventoryItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllInventoryItems(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWorldTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCurrentWorldTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAddressURLAndPort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAddressURLAndPort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateNumberOfPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateNumberOfPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerInstanceFromPort) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetServerInstanceFromPort(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZoneInstancesForZone) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ZoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetZoneInstancesForZone(Z_Param_ZoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayerOnline) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayerOnline(Z_Param_CharacterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllCharactersOnline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllCharactersOnline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveAllPlayerLocations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveAllPlayerLocations(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateGlobalDataItem) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GlobalDataKey); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GlobalDataValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateGlobalDataItem(Z_Param_GlobalDataKey,Z_Param_GlobalDataValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalDataItem) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GlobalDataKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGlobalDataItem(Z_Param_GlobalDataKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllInventoryItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllInventoryItems(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_EVENT_PARMS \
	struct OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSGameMode_eventErrorGetAllCharactersOnline_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSGameMode_eventErrorGetAllInventoryItems_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSGameMode_eventErrorGetCurrentWorldTime_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSGameMode_eventErrorGetGlobalDataItem_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSGameMode_eventErrorGetServerInstanceFromPort_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSGameMode_eventErrorGetZoneInstancesForZone_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSGameMode_eventNotifyGetCurrentWorldTime_Parms \
	{ \
		float CurrentWorldTime; \
	}; \
	struct OWSGameMode_eventNotifyGetGlobalDataItem_Parms \
	{ \
		FString GlobalDataKey; \
	}; \
	struct OWSGameMode_eventNotifyGetServerInstanceFromPort_Parms \
	{ \
		FString ZoneName; \
	}; \
	struct OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms \
	{ \
		TArray<FZoneInstanceStruct> ZoneInstances; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSGameMode(); \
	friend struct Z_Construct_UClass_AOWSGameMode_Statics; \
public: \
	DECLARE_CLASS(AOWSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSGameMode)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_INCLASS \
private: \
	static void StaticRegisterNativesAOWSGameMode(); \
	friend struct Z_Construct_UClass_AOWSGameMode_Statics; \
public: \
	DECLARE_CLASS(AOWSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSGameMode)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSGameMode(AOWSGameMode&&); \
	NO_API AOWSGameMode(const AOWSGameMode&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSGameMode(AOWSGameMode&&); \
	NO_API AOWSGameMode(const AOWSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSGameMode)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_98_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
