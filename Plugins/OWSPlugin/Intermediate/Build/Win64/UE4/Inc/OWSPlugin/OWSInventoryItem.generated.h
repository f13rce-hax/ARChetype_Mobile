// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSInventoryItem_generated_h
#error "OWSInventoryItem.generated.h already included, missing '#pragma once' in OWSInventoryItem.h"
#endif
#define OWSPLUGIN_OWSInventoryItem_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FInventoryItemStruct>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_RPC_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_RPC_WRAPPERS_NO_PURE_DECLS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSInventoryItem(); \
	friend struct Z_Construct_UClass_AOWSInventoryItem_Statics; \
public: \
	DECLARE_CLASS(AOWSInventoryItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSInventoryItem)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_INCLASS \
private: \
	static void StaticRegisterNativesAOWSInventoryItem(); \
	friend struct Z_Construct_UClass_AOWSInventoryItem_Statics; \
public: \
	DECLARE_CLASS(AOWSInventoryItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSInventoryItem)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSInventoryItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSInventoryItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSInventoryItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSInventoryItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSInventoryItem(AOWSInventoryItem&&); \
	NO_API AOWSInventoryItem(const AOWSInventoryItem&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSInventoryItem(AOWSInventoryItem&&); \
	NO_API AOWSInventoryItem(const AOWSInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSInventoryItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSInventoryItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSInventoryItem)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_133_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSInventoryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h


#define FOREACH_ENUM_ITEMCATEGORIES(op) \
	op(Consumable) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
