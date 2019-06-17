// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSMessageServer_generated_h
#error "OWSMessageServer.generated.h already included, missing '#pragma once' in OWSMessageServer.h"
#endif
#define OWSPLUGIN_OWSMessageServer_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerLocationMessage_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerLocationMessage>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_RPC_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_EVENT_PARMS \
	struct OWSMessageServer_eventOnReceivePlayerLocation_Parms \
	{ \
		FString PlayerName; \
		FString ZoneNamesToNotify; \
		int32 CharacterModel; \
		FString AdditionalCharacterSettings; \
		float X; \
		float Y; \
		float Z; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSMessageServer(); \
	friend struct Z_Construct_UClass_AOWSMessageServer_Statics; \
public: \
	DECLARE_CLASS(AOWSMessageServer, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSMessageServer)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_INCLASS \
private: \
	static void StaticRegisterNativesAOWSMessageServer(); \
	friend struct Z_Construct_UClass_AOWSMessageServer_Statics; \
public: \
	DECLARE_CLASS(AOWSMessageServer, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSMessageServer)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSMessageServer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSMessageServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSMessageServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSMessageServer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSMessageServer(AOWSMessageServer&&); \
	NO_API AOWSMessageServer(const AOWSMessageServer&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSMessageServer(AOWSMessageServer&&); \
	NO_API AOWSMessageServer(const AOWSMessageServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSMessageServer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSMessageServer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSMessageServer)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_49_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSMessageServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageServer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
