// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSPlayerState_generated_h
#error "OWSPlayerState.generated.h already included, missing '#pragma once' in OWSPlayerState.h"
#endif
#define OWSPLUGIN_OWSPlayerState_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCharacterName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCharacterName(Z_Param_CharacterName); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCharacterName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CharacterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCharacterName(Z_Param_CharacterName); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSPlayerState(); \
	friend struct Z_Construct_UClass_AOWSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AOWSPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSPlayerState)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAOWSPlayerState(); \
	friend struct Z_Construct_UClass_AOWSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AOWSPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSPlayerState)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSPlayerState(AOWSPlayerState&&); \
	NO_API AOWSPlayerState(const AOWSPlayerState&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSPlayerState(AOWSPlayerState&&); \
	NO_API AOWSPlayerState(const AOWSPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSPlayerState)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_11_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
