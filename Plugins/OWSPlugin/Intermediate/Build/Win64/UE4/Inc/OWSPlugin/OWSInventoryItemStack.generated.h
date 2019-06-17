// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOWSInventoryItem;
#ifdef OWSPLUGIN_OWSInventoryItemStack_generated_h
#error "OWSInventoryItemStack.generated.h already included, missing '#pragma once' in OWSInventoryItemStack.h"
#endif
#define OWSPLUGIN_OWSInventoryItemStack_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTopItemFromStack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AOWSInventoryItem**)Z_Param__Result=P_THIS->GetTopItemFromStack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToStack) \
	{ \
		P_GET_OBJECT(AOWSInventoryItem,Z_Param_InventoryItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToStack(Z_Param_InventoryItem); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTopItemFromStack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AOWSInventoryItem**)Z_Param__Result=P_THIS->GetTopItemFromStack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToStack) \
	{ \
		P_GET_OBJECT(AOWSInventoryItem,Z_Param_InventoryItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToStack(Z_Param_InventoryItem); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSInventoryItemStack(); \
	friend struct Z_Construct_UClass_UOWSInventoryItemStack_Statics; \
public: \
	DECLARE_CLASS(UOWSInventoryItemStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSInventoryItemStack)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOWSInventoryItemStack(); \
	friend struct Z_Construct_UClass_UOWSInventoryItemStack_Statics; \
public: \
	DECLARE_CLASS(UOWSInventoryItemStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSInventoryItemStack)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSInventoryItemStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSInventoryItemStack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSInventoryItemStack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSInventoryItemStack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSInventoryItemStack(UOWSInventoryItemStack&&); \
	NO_API UOWSInventoryItemStack(const UOWSInventoryItemStack&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSInventoryItemStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSInventoryItemStack(UOWSInventoryItemStack&&); \
	NO_API UOWSInventoryItemStack(const UOWSInventoryItemStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSInventoryItemStack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSInventoryItemStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSInventoryItemStack)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_13_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSInventoryItemStack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSInventoryItemStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
