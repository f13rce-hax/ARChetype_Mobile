// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSGameplayAbilityTargetActor_P_generated_h
#error "OWSGameplayAbilityTargetActor_P.generated.h already included, missing '#pragma once' in OWSGameplayAbilityTargetActor_P.h"
#endif
#define OWSPLUGIN_OWSGameplayAbilityTargetActor_P_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfirmTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConfirmTarget(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfirmTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConfirmTarget(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSGameplayAbilityTargetActor_P(); \
	friend struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics; \
public: \
	DECLARE_CLASS(AOWSGameplayAbilityTargetActor_P, AGameplayAbilityTargetActor_GroundTrace, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSGameplayAbilityTargetActor_P)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAOWSGameplayAbilityTargetActor_P(); \
	friend struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics; \
public: \
	DECLARE_CLASS(AOWSGameplayAbilityTargetActor_P, AGameplayAbilityTargetActor_GroundTrace, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSGameplayAbilityTargetActor_P)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSGameplayAbilityTargetActor_P(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSGameplayAbilityTargetActor_P) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSGameplayAbilityTargetActor_P); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSGameplayAbilityTargetActor_P); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSGameplayAbilityTargetActor_P(AOWSGameplayAbilityTargetActor_P&&); \
	NO_API AOWSGameplayAbilityTargetActor_P(const AOWSGameplayAbilityTargetActor_P&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSGameplayAbilityTargetActor_P(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSGameplayAbilityTargetActor_P(AOWSGameplayAbilityTargetActor_P&&); \
	NO_API AOWSGameplayAbilityTargetActor_P(const AOWSGameplayAbilityTargetActor_P&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSGameplayAbilityTargetActor_P); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSGameplayAbilityTargetActor_P); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSGameplayAbilityTargetActor_P)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_17_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSGameplayAbilityTargetActor_P."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSGameplayAbilityTargetActor_P>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
