// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetDataHandle;
struct FOWSGameplayTargetDataFilter;
class AActor;
struct FOWSGameplayTargetDataFilterHandle;
#ifdef OWSPLUGIN_OWSAbilitySystemBlueprintLibrary_generated_h
#error "OWSAbilitySystemBlueprintLibrary.generated.h already included, missing '#pragma once' in OWSAbilitySystemBlueprintLibrary.h"
#endif
#define OWSPLUGIN_OWSAbilitySystemBlueprintLibrary_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FGameplayAbilityCastingTargetingLocationInfo>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOWSChargeTimeFromTargetData) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::GetOWSChargeTimeFromTargetData(Z_Param_Out_TargetData,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeFilterHandle) \
	{ \
		P_GET_STRUCT(FOWSGameplayTargetDataFilter,Z_Param_Filter); \
		P_GET_OBJECT(AActor,Z_Param_FilterActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOWSGameplayTargetDataFilterHandle*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::MakeFilterHandle(Z_Param_Filter,Z_Param_FilterActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterTargetData) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetDataHandle); \
		P_GET_STRUCT(FOWSGameplayTargetDataFilterHandle,Z_Param_FilterHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayAbilityTargetDataHandle*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::FilterTargetData(Z_Param_Out_TargetDataHandle,Z_Param_FilterHandle); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOWSChargeTimeFromTargetData) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::GetOWSChargeTimeFromTargetData(Z_Param_Out_TargetData,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeFilterHandle) \
	{ \
		P_GET_STRUCT(FOWSGameplayTargetDataFilter,Z_Param_Filter); \
		P_GET_OBJECT(AActor,Z_Param_FilterActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOWSGameplayTargetDataFilterHandle*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::MakeFilterHandle(Z_Param_Filter,Z_Param_FilterActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterTargetData) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetDataHandle); \
		P_GET_STRUCT(FOWSGameplayTargetDataFilterHandle,Z_Param_FilterHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGameplayAbilityTargetDataHandle*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::FilterTargetData(Z_Param_Out_TargetDataHandle,Z_Param_FilterHandle); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAbilitySystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilitySystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilitySystemBlueprintLibrary)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilitySystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilitySystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilitySystemBlueprintLibrary)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilitySystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilitySystemBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilitySystemBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilitySystemBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilitySystemBlueprintLibrary(UOWSAbilitySystemBlueprintLibrary&&); \
	NO_API UOWSAbilitySystemBlueprintLibrary(const UOWSAbilitySystemBlueprintLibrary&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilitySystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilitySystemBlueprintLibrary(UOWSAbilitySystemBlueprintLibrary&&); \
	NO_API UOWSAbilitySystemBlueprintLibrary(const UOWSAbilitySystemBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilitySystemBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilitySystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilitySystemBlueprintLibrary)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_98_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilitySystemBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
