// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
class UOWSInventory;
class AActor;
struct FVector;
#ifdef OWSPLUGIN_OWSHUD_generated_h
#error "OWSHUD.generated.h already included, missing '#pragma once' in OWSHUD.h"
#endif
#define OWSPLUGIN_OWSHUD_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatingDamage_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FFloatingDamage>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSplitDialogTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_inSplitDialogTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplitDialogTexture(Z_Param_inSplitDialogTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenderInteractiveInventoryGridUsingLockedSlotGroups) \
	{ \
		P_GET_OBJECT(UOWSInventory,Z_Param_Inventory); \
		P_GET_OBJECT(UTexture,Z_Param_EmptySlotTexture); \
		P_GET_OBJECT(UTexture,Z_Param_LockedRowTexture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_YSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iconWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iconHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfRows); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfCols); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotGroupRows); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotGroupCols); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotGroupXSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotGroupYSpacing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenderInteractiveInventoryGridUsingLockedSlotGroups(Z_Param_Inventory,Z_Param_EmptySlotTexture,Z_Param_LockedRowTexture,Z_Param_X,Z_Param_Y,Z_Param_XSpacing,Z_Param_YSpacing,Z_Param_iconWidth,Z_Param_iconHeight,Z_Param_NumberOfRows,Z_Param_NumberOfCols,Z_Param_SlotGroupRows,Z_Param_SlotGroupCols,Z_Param_SlotGroupXSpacing,Z_Param_SlotGroupYSpacing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenderInteractiveInventoryGrid) \
	{ \
		P_GET_OBJECT(UOWSInventory,Z_Param_Inventory); \
		P_GET_OBJECT(UTexture,Z_Param_EmptySlotTexture); \
		P_GET_PROPERTY(UByteProperty,Z_Param_UIAnchorPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_YSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iconWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iconHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfRows); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfCols); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenderInteractiveInventoryGrid(Z_Param_Inventory,Z_Param_EmptySlotTexture,EAnchorPoint(Z_Param_UIAnchorPoint),Z_Param_X,Z_Param_Y,Z_Param_XSpacing,Z_Param_YSpacing,Z_Param_iconWidth,Z_Param_iconHeight,Z_Param_NumberOfRows,Z_Param_NumberOfCols); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateScreenPosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ScreenAnchorPoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_UIAnchorPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OffsetX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OffsetY); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UIWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UIHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateScreenPosition(EAnchorPoint(Z_Param_ScreenAnchorPoint),EAnchorPoint(Z_Param_UIAnchorPoint),Z_Param_OffsetX,Z_Param_OffsetY,Z_Param_UIWidth,Z_Param_UIHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenderFloatingDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenderFloatingDamage(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanUpFloatingDamageItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanUpFloatingDamageItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatingDamageItem) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DamageText); \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_STRUCT(FVector,Z_Param_DamagedActorOffset); \
		P_GET_UBOOL(Z_Param_IsHealing); \
		P_GET_UBOOL(Z_Param_IsCritical); \
		P_GET_UBOOL(Z_Param_ShowDropShadow); \
		P_GET_UBOOL(Z_Param_ShowOutline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddFloatingDamageItem(Z_Param_DamageText,Z_Param_DamagedActor,Z_Param_DamagedActorOffset,Z_Param_IsHealing,Z_Param_IsCritical,Z_Param_ShowDropShadow,Z_Param_ShowOutline); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSplitDialogTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_inSplitDialogTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplitDialogTexture(Z_Param_inSplitDialogTexture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenderInteractiveInventoryGridUsingLockedSlotGroups) \
	{ \
		P_GET_OBJECT(UOWSInventory,Z_Param_Inventory); \
		P_GET_OBJECT(UTexture,Z_Param_EmptySlotTexture); \
		P_GET_OBJECT(UTexture,Z_Param_LockedRowTexture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_YSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iconWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iconHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfRows); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfCols); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotGroupRows); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotGroupCols); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotGroupXSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotGroupYSpacing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenderInteractiveInventoryGridUsingLockedSlotGroups(Z_Param_Inventory,Z_Param_EmptySlotTexture,Z_Param_LockedRowTexture,Z_Param_X,Z_Param_Y,Z_Param_XSpacing,Z_Param_YSpacing,Z_Param_iconWidth,Z_Param_iconHeight,Z_Param_NumberOfRows,Z_Param_NumberOfCols,Z_Param_SlotGroupRows,Z_Param_SlotGroupCols,Z_Param_SlotGroupXSpacing,Z_Param_SlotGroupYSpacing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenderInteractiveInventoryGrid) \
	{ \
		P_GET_OBJECT(UOWSInventory,Z_Param_Inventory); \
		P_GET_OBJECT(UTexture,Z_Param_EmptySlotTexture); \
		P_GET_PROPERTY(UByteProperty,Z_Param_UIAnchorPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_YSpacing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iconWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iconHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfRows); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumberOfCols); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenderInteractiveInventoryGrid(Z_Param_Inventory,Z_Param_EmptySlotTexture,EAnchorPoint(Z_Param_UIAnchorPoint),Z_Param_X,Z_Param_Y,Z_Param_XSpacing,Z_Param_YSpacing,Z_Param_iconWidth,Z_Param_iconHeight,Z_Param_NumberOfRows,Z_Param_NumberOfCols); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateScreenPosition) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ScreenAnchorPoint); \
		P_GET_PROPERTY(UByteProperty,Z_Param_UIAnchorPoint); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OffsetX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OffsetY); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UIWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UIHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateScreenPosition(EAnchorPoint(Z_Param_ScreenAnchorPoint),EAnchorPoint(Z_Param_UIAnchorPoint),Z_Param_OffsetX,Z_Param_OffsetY,Z_Param_UIWidth,Z_Param_UIHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenderFloatingDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenderFloatingDamage(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCleanUpFloatingDamageItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CleanUpFloatingDamageItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatingDamageItem) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DamageText); \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_STRUCT(FVector,Z_Param_DamagedActorOffset); \
		P_GET_UBOOL(Z_Param_IsHealing); \
		P_GET_UBOOL(Z_Param_IsCritical); \
		P_GET_UBOOL(Z_Param_ShowDropShadow); \
		P_GET_UBOOL(Z_Param_ShowOutline); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddFloatingDamageItem(Z_Param_DamageText,Z_Param_DamagedActor,Z_Param_DamagedActorOffset,Z_Param_IsHealing,Z_Param_IsCritical,Z_Param_ShowDropShadow,Z_Param_ShowOutline); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSHUD(); \
	friend struct Z_Construct_UClass_AOWSHUD_Statics; \
public: \
	DECLARE_CLASS(AOWSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSHUD)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_INCLASS \
private: \
	static void StaticRegisterNativesAOWSHUD(); \
	friend struct Z_Construct_UClass_AOWSHUD_Statics; \
public: \
	DECLARE_CLASS(AOWSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSHUD)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSHUD(AOWSHUD&&); \
	NO_API AOWSHUD(const AOWSHUD&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSHUD(AOWSHUD&&); \
	NO_API AOWSHUD(const AOWSHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSHUD)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloatingDamageItems() { return STRUCT_OFFSET(AOWSHUD, FloatingDamageItems); } \
	FORCEINLINE static uint32 __PPO__ItemStackBeingDragged() { return STRUCT_OFFSET(AOWSHUD, ItemStackBeingDragged); }


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_76_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h


#define FOREACH_ENUM_EANCHORPOINT(op) \
	op(TopLeft) \
	op(TopCenter) \
	op(TopRight) \
	op(MiddleLeft) \
	op(MiddleCenter) \
	op(MiddleRight) \
	op(BottomLeft) \
	op(BottomCenter) \
	op(BottomRight) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
