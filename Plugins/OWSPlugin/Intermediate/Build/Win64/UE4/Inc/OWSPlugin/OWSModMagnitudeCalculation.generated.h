// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEffectSpec;
struct FGameplayAttribute;
#ifdef OWSPLUGIN_OWSModMagnitudeCalculation_generated_h
#error "OWSModMagnitudeCalculation.generated.h already included, missing '#pragma once' in OWSModMagnitudeCalculation.h"
#endif
#define OWSPLUGIN_OWSModMagnitudeCalculation_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttributeCapture) \
	{ \
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec); \
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeCapture(Z_Param_Out_Spec,Z_Param_Attribute); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttributeCapture) \
	{ \
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec); \
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttributeCapture(Z_Param_Out_Spec,Z_Param_Attribute); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSModMagnitudeCalculation(); \
	friend struct Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics; \
public: \
	DECLARE_CLASS(UOWSModMagnitudeCalculation, UGameplayModMagnitudeCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSModMagnitudeCalculation)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOWSModMagnitudeCalculation(); \
	friend struct Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics; \
public: \
	DECLARE_CLASS(UOWSModMagnitudeCalculation, UGameplayModMagnitudeCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSModMagnitudeCalculation)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSModMagnitudeCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSModMagnitudeCalculation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSModMagnitudeCalculation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSModMagnitudeCalculation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSModMagnitudeCalculation(UOWSModMagnitudeCalculation&&); \
	NO_API UOWSModMagnitudeCalculation(const UOWSModMagnitudeCalculation&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSModMagnitudeCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSModMagnitudeCalculation(UOWSModMagnitudeCalculation&&); \
	NO_API UOWSModMagnitudeCalculation(const UOWSModMagnitudeCalculation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSModMagnitudeCalculation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSModMagnitudeCalculation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSModMagnitudeCalculation)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_12_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSModMagnitudeCalculation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSModMagnitudeCalculation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
