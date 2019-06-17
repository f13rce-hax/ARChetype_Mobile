// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOWSInventoryItemStack;
class AOWSInventoryItem;
struct FInventoryItemStruct;
class AOWSCharacter;
#ifdef OWSPLUGIN_OWSInventory_generated_h
#error "OWSInventory.generated.h already included, missing '#pragma once' in OWSInventory.h"
#endif
#define OWSPLUGIN_OWSInventory_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindItemIndex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindItemIndex(Z_Param_ItemName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindFirstEmptySlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindFirstEmptySlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackInSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSInventoryItemStack**)Z_Param__Result=P_THIS->GetStackInSlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwapSlots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotA); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwapSlots(Z_Param_SlotA,Z_Param_SlotB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveOneItemFromSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AOWSInventoryItem**)Z_Param__Result=P_THIS->RemoveOneItemFromSlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemsFromInventoryItemStruct) \
	{ \
		P_GET_TARRAY_REF(FInventoryItemStruct,Z_Param_Out_ItemsToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemsFromInventoryItemStruct(Z_Param_Out_ItemsToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToSlot) \
	{ \
		P_GET_OBJECT(AOWSInventoryItem,Z_Param_Item); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemToSlot(Z_Param_Item,Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventory) \
	{ \
		P_GET_OBJECT(AOWSInventoryItem,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddItemToInventory(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStackFromSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveStackFromSlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStackToSlot) \
	{ \
		P_GET_OBJECT(UOWSInventoryItemStack,Z_Param_ItemStack); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStackToSlot(Z_Param_ItemStack,Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInventoryName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_inInventoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInventoryName(Z_Param_inInventoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningPlayerCharacter) \
	{ \
		P_GET_OBJECT(AOWSCharacter,Z_Param_inOwningPlayerCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwningPlayerCharacter(Z_Param_inOwningPlayerCharacter); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindItemIndex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindItemIndex(Z_Param_ItemName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindFirstEmptySlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindFirstEmptySlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackInSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSInventoryItemStack**)Z_Param__Result=P_THIS->GetStackInSlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwapSlots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotA); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SwapSlots(Z_Param_SlotA,Z_Param_SlotB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveOneItemFromSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AOWSInventoryItem**)Z_Param__Result=P_THIS->RemoveOneItemFromSlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemsFromInventoryItemStruct) \
	{ \
		P_GET_TARRAY_REF(FInventoryItemStruct,Z_Param_Out_ItemsToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemsFromInventoryItemStruct(Z_Param_Out_ItemsToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToSlot) \
	{ \
		P_GET_OBJECT(AOWSInventoryItem,Z_Param_Item); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItemToSlot(Z_Param_Item,Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItemToInventory) \
	{ \
		P_GET_OBJECT(AOWSInventoryItem,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddItemToInventory(Z_Param_Item); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStackFromSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveStackFromSlot(Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStackToSlot) \
	{ \
		P_GET_OBJECT(UOWSInventoryItemStack,Z_Param_ItemStack); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddStackToSlot(Z_Param_ItemStack,Z_Param_Slot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInventoryName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_inInventoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInventoryName(Z_Param_inInventoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningPlayerCharacter) \
	{ \
		P_GET_OBJECT(AOWSCharacter,Z_Param_inOwningPlayerCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwningPlayerCharacter(Z_Param_inOwningPlayerCharacter); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSInventory(); \
	friend struct Z_Construct_UClass_UOWSInventory_Statics; \
public: \
	DECLARE_CLASS(UOWSInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSInventory)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUOWSInventory(); \
	friend struct Z_Construct_UClass_UOWSInventory_Statics; \
public: \
	DECLARE_CLASS(UOWSInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSInventory)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSInventory(UOWSInventory&&); \
	NO_API UOWSInventory(const UOWSInventory&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSInventory(UOWSInventory&&); \
	NO_API UOWSInventory(const UOWSInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSInventory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSInventory)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_18_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSInventory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
