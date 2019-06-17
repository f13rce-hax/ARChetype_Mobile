// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSMessageClient_generated_h
#error "OWSMessageClient.generated.h already included, missing '#pragma once' in OWSMessageClient.h"
#endif
#define OWSPLUGIN_OWSMessageClient_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendPlayerLocation) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ZoneNamesToNotify); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CharacterModel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AdditionalCharacterSettings); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendPlayerLocation(Z_Param_PlayerName,Z_Param_ZoneNamesToNotify,Z_Param_CharacterModel,Z_Param_AdditionalCharacterSettings,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendPlayerLocation) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ZoneNamesToNotify); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CharacterModel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AdditionalCharacterSettings); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendPlayerLocation(Z_Param_PlayerName,Z_Param_ZoneNamesToNotify,Z_Param_CharacterModel,Z_Param_AdditionalCharacterSettings,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSMessageClient(); \
	friend struct Z_Construct_UClass_AOWSMessageClient_Statics; \
public: \
	DECLARE_CLASS(AOWSMessageClient, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSMessageClient)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAOWSMessageClient(); \
	friend struct Z_Construct_UClass_AOWSMessageClient_Statics; \
public: \
	DECLARE_CLASS(AOWSMessageClient, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSMessageClient)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSMessageClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSMessageClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSMessageClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSMessageClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSMessageClient(AOWSMessageClient&&); \
	NO_API AOWSMessageClient(const AOWSMessageClient&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSMessageClient(AOWSMessageClient&&); \
	NO_API AOWSMessageClient(const AOWSMessageClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSMessageClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSMessageClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSMessageClient)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_14_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSMessageClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSMessageClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
