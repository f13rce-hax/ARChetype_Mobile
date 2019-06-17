// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSLoginWidget_generated_h
#error "OWSLoginWidget.generated.h already included, missing '#pragma once' in OWSLoginWidget.h"
#endif
#define OWSPLUGIN_OWSLoginWidget_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenCreateAccountInBrowser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenCreateAccountInBrowser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoginAndCreateSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Email); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoginAndCreateSession(Z_Param_Email,Z_Param_Password); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenCreateAccountInBrowser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenCreateAccountInBrowser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoginAndCreateSession) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Email); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoginAndCreateSession(Z_Param_Email,Z_Param_Password); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_EVENT_PARMS \
	struct OWSLoginWidget_eventErrorLoginAndCreateSession_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms \
	{ \
		FString UserSessionGUID; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSLoginWidget(); \
	friend struct Z_Construct_UClass_UOWSLoginWidget_Statics; \
public: \
	DECLARE_CLASS(UOWSLoginWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSLoginWidget)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOWSLoginWidget(); \
	friend struct Z_Construct_UClass_UOWSLoginWidget_Statics; \
public: \
	DECLARE_CLASS(UOWSLoginWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSLoginWidget)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSLoginWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSLoginWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSLoginWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSLoginWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSLoginWidget(UOWSLoginWidget&&); \
	NO_API UOWSLoginWidget(const UOWSLoginWidget&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSLoginWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSLoginWidget(UOWSLoginWidget&&); \
	NO_API UOWSLoginWidget(const UOWSLoginWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSLoginWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSLoginWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSLoginWidget)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_12_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSLoginWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
