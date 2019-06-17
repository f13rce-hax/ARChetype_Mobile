// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
enum class ERPGAbilityTaskNetSyncType : uint8;
class UOWSAbilityTask_NetworkSyncPoint;
#ifdef OWSPLUGIN_OWSAbilityTask_NetworkSyncPoint_generated_h
#error "OWSAbilityTask_NetworkSyncPoint.generated.h already included, missing '#pragma once' in OWSAbilityTask_NetworkSyncPoint.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_NetworkSyncPoint_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_10_DELEGATE \
static inline void FNetworkSyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& NetworkSyncDelegate) \
{ \
	NetworkSyncDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRPGWaitNetSync) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_ENUM(ERPGAbilityTaskNetSyncType,Z_Param_SyncType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_NetworkSyncPoint**)Z_Param__Result=UOWSAbilityTask_NetworkSyncPoint::RPGWaitNetSync(Z_Param_OwningAbility,ERPGAbilityTaskNetSyncType(Z_Param_SyncType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSignalCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSignalCallback(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRPGWaitNetSync) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_ENUM(ERPGAbilityTaskNetSyncType,Z_Param_SyncType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_NetworkSyncPoint**)Z_Param__Result=UOWSAbilityTask_NetworkSyncPoint::RPGWaitNetSync(Z_Param_OwningAbility,ERPGAbilityTaskNetSyncType(Z_Param_SyncType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSignalCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSignalCallback(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_NetworkSyncPoint(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_NetworkSyncPoint_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_NetworkSyncPoint, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_NetworkSyncPoint)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_NetworkSyncPoint(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_NetworkSyncPoint_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_NetworkSyncPoint, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_NetworkSyncPoint)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_NetworkSyncPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_NetworkSyncPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_NetworkSyncPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_NetworkSyncPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_NetworkSyncPoint(UOWSAbilityTask_NetworkSyncPoint&&); \
	NO_API UOWSAbilityTask_NetworkSyncPoint(const UOWSAbilityTask_NetworkSyncPoint&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_NetworkSyncPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_NetworkSyncPoint(UOWSAbilityTask_NetworkSyncPoint&&); \
	NO_API UOWSAbilityTask_NetworkSyncPoint(const UOWSAbilityTask_NetworkSyncPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_NetworkSyncPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_NetworkSyncPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_NetworkSyncPoint)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_27_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSAbilityTask_NetworkSyncPoint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_NetworkSyncPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_NetworkSyncPoint_h


#define FOREACH_ENUM_ERPGABILITYTASKNETSYNCTYPE(op) \
	op(ERPGAbilityTaskNetSyncType::BothWait) \
	op(ERPGAbilityTaskNetSyncType::OnlyServerWait) \
	op(ERPGAbilityTaskNetSyncType::OnlyClientWait) 

enum class ERPGAbilityTaskNetSyncType : uint8;
template<> OWSPLUGIN_API UEnum* StaticEnum<ERPGAbilityTaskNetSyncType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
