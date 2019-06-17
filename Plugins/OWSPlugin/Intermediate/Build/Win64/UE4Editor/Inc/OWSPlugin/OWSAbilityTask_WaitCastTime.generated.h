// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UOWSAbilityTask_WaitCastTime;
#ifdef OWSPLUGIN_OWSAbilityTask_WaitCastTime_generated_h
#error "OWSAbilityTask_WaitCastTime.generated.h already included, missing '#pragma once' in OWSAbilityTask_WaitCastTime.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_WaitCastTime_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_11_DELEGATE \
static inline void FWaitCancelDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitCancelDelegate) \
{ \
	WaitCancelDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_10_DELEGATE \
static inline void FWaitDelayDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitDelayDelegate) \
{ \
	WaitDelayDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRPGWaitCastTime) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CastTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_WaitCastTime**)Z_Param__Result=UOWSAbilityTask_WaitCastTime::RPGWaitCastTime(Z_Param_OwningAbility,Z_Param_CastTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocalCancelCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocalCancelCallback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCancelCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCancelCallback(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRPGWaitCastTime) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CastTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_WaitCastTime**)Z_Param__Result=UOWSAbilityTask_WaitCastTime::RPGWaitCastTime(Z_Param_OwningAbility,Z_Param_CastTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLocalCancelCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLocalCancelCallback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCancelCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCancelCallback(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_WaitCastTime(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_WaitCastTime, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_WaitCastTime)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_WaitCastTime(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_WaitCastTime, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_WaitCastTime)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_WaitCastTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_WaitCastTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_WaitCastTime); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_WaitCastTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_WaitCastTime(UOWSAbilityTask_WaitCastTime&&); \
	NO_API UOWSAbilityTask_WaitCastTime(const UOWSAbilityTask_WaitCastTime&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_WaitCastTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_WaitCastTime(UOWSAbilityTask_WaitCastTime&&); \
	NO_API UOWSAbilityTask_WaitCastTime(const UOWSAbilityTask_WaitCastTime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_WaitCastTime); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_WaitCastTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_WaitCastTime)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_15_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSAbilityTask_WaitCastTime."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_WaitCastTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
