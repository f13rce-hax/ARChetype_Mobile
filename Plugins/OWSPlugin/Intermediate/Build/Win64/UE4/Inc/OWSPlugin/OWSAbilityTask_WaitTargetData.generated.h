// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetDataHandle;
class UGameplayAbility;
class AGameplayAbilityTargetActor;
class UOWSAbilityTask_WaitTargetData;
struct FGameplayTag;
#ifdef OWSPLUGIN_OWSAbilityTask_WaitTargetData_generated_h
#error "OWSAbilityTask_WaitTargetData.generated.h already included, missing '#pragma once' in OWSAbilityTask_WaitTargetData.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_WaitTargetData_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_13_DELEGATE \
struct _Script_OWSPlugin_eventWaitTargetDataDelegate_Parms \
{ \
	FGameplayAbilityTargetDataHandle Data; \
}; \
static inline void FWaitTargetDataDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitTargetDataDelegate, FGameplayAbilityTargetDataHandle const& Data) \
{ \
	_Script_OWSPlugin_eventWaitTargetDataDelegate_Parms Parms; \
	Parms.Data=Data; \
	WaitTargetDataDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_OBJECT_REF(AGameplayAbilityTargetActor,Z_Param_Out_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_Class,Z_Param_Out_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRPGWaitTargetDataUsingActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConfirmationType); \
		P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_TargetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_WaitTargetData**)Z_Param__Result=UOWSAbilityTask_WaitTargetData::RPGWaitTargetDataUsingActor(Z_Param_OwningAbility,Z_Param_TaskInstanceName,EGameplayTargetingConfirmation::Type(Z_Param_ConfirmationType),Z_Param_TargetActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRPGWaitTargetData) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConfirmationType); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_WaitTargetData**)Z_Param__Result=UOWSAbilityTask_WaitTargetData::RPGWaitTargetData(Z_Param_OwningAbility,Z_Param_TaskInstanceName,EGameplayTargetingConfirmation::Type(Z_Param_ConfirmationType),Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTargetDataCancelledCallback) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetDataCancelledCallback(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTargetDataReadyCallback) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetDataReadyCallback(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCancelledCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetDataReplicatedCancelledCallback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCallback) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActivationTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetDataReplicatedCallback(Z_Param_Out_Data,Z_Param_ActivationTag); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_OBJECT_REF(AGameplayAbilityTargetActor,Z_Param_Out_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_Class,Z_Param_Out_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRPGWaitTargetDataUsingActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConfirmationType); \
		P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_TargetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_WaitTargetData**)Z_Param__Result=UOWSAbilityTask_WaitTargetData::RPGWaitTargetDataUsingActor(Z_Param_OwningAbility,Z_Param_TaskInstanceName,EGameplayTargetingConfirmation::Type(Z_Param_ConfirmationType),Z_Param_TargetActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRPGWaitTargetData) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConfirmationType); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_WaitTargetData**)Z_Param__Result=UOWSAbilityTask_WaitTargetData::RPGWaitTargetData(Z_Param_OwningAbility,Z_Param_TaskInstanceName,EGameplayTargetingConfirmation::Type(Z_Param_ConfirmationType),Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTargetDataCancelledCallback) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetDataCancelledCallback(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTargetDataReadyCallback) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetDataReadyCallback(Z_Param_Out_Data); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCancelledCallback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetDataReplicatedCancelledCallback(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCallback) \
	{ \
		P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data); \
		P_GET_STRUCT(FGameplayTag,Z_Param_ActivationTag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetDataReplicatedCallback(Z_Param_Out_Data,Z_Param_ActivationTag); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_WaitTargetData(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_WaitTargetData, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_WaitTargetData)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_WaitTargetData(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_WaitTargetData, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_WaitTargetData)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_WaitTargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_WaitTargetData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_WaitTargetData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_WaitTargetData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_WaitTargetData(UOWSAbilityTask_WaitTargetData&&); \
	NO_API UOWSAbilityTask_WaitTargetData(const UOWSAbilityTask_WaitTargetData&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_WaitTargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_WaitTargetData(UOWSAbilityTask_WaitTargetData&&); \
	NO_API UOWSAbilityTask_WaitTargetData(const UOWSAbilityTask_WaitTargetData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_WaitTargetData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_WaitTargetData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_WaitTargetData)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UOWSAbilityTask_WaitTargetData, TargetActor); }


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_16_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSAbilityTask_WaitTargetData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_WaitTargetData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
