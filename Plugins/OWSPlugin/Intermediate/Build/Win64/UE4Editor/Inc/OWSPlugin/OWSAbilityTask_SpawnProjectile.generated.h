// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayAbility;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayEffectSpecHandle;
class UOWSAbilityTask_SpawnProjectile;
#ifdef OWSPLUGIN_OWSAbilityTask_SpawnProjectile_generated_h
#error "OWSAbilityTask_SpawnProjectile.generated.h already included, missing '#pragma once' in OWSAbilityTask_SpawnProjectile.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_SpawnProjectile_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FDelayedProjectileInfo>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_14_DELEGATE \
struct _Script_OWSPlugin_eventSpawnProjectileDelegate_Parms \
{ \
	AActor* SpawnedActor; \
}; \
static inline void FSpawnProjectileDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnProjectileDelegate, AActor* SpawnedActor) \
{ \
	_Script_OWSPlugin_eventSpawnProjectileDelegate_Parms Parms; \
	Parms.SpawnedActor=SpawnedActor; \
	SpawnProjectileDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData); \
		P_GET_OBJECT(AActor,Z_Param_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class,Z_Param_Out_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnProjectile) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_UBOOL(Z_Param_UseAimCamera); \
		P_GET_UBOOL(Z_Param_IgnoreAimCameraPitch); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartingSocketName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForwardOffsetFromSocket); \
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DirectDamageEffect); \
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_AOEDamageEffect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_SpawnProjectile**)Z_Param__Result=UOWSAbilityTask_SpawnProjectile::SpawnProjectile(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class,Z_Param_UseAimCamera,Z_Param_IgnoreAimCameraPitch,Z_Param_StartingSocketName,Z_Param_ForwardOffsetFromSocket,Z_Param_DirectDamageEffect,Z_Param_AOEDamageEffect); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData); \
		P_GET_OBJECT(AActor,Z_Param_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSpawningActor) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class,Z_Param_Out_SpawnedActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnProjectile) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_UBOOL(Z_Param_UseAimCamera); \
		P_GET_UBOOL(Z_Param_IgnoreAimCameraPitch); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StartingSocketName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ForwardOffsetFromSocket); \
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DirectDamageEffect); \
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_AOEDamageEffect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_SpawnProjectile**)Z_Param__Result=UOWSAbilityTask_SpawnProjectile::SpawnProjectile(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class,Z_Param_UseAimCamera,Z_Param_IgnoreAimCameraPitch,Z_Param_StartingSocketName,Z_Param_ForwardOffsetFromSocket,Z_Param_DirectDamageEffect,Z_Param_AOEDamageEffect); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_SpawnProjectile(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_SpawnProjectile, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_SpawnProjectile)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_SpawnProjectile(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_SpawnProjectile, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_SpawnProjectile)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_SpawnProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_SpawnProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_SpawnProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_SpawnProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_SpawnProjectile(UOWSAbilityTask_SpawnProjectile&&); \
	NO_API UOWSAbilityTask_SpawnProjectile(const UOWSAbilityTask_SpawnProjectile&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_SpawnProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_SpawnProjectile(UOWSAbilityTask_SpawnProjectile&&); \
	NO_API UOWSAbilityTask_SpawnProjectile(const UOWSAbilityTask_SpawnProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_SpawnProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_SpawnProjectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_SpawnProjectile)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUseAimCamera() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, bUseAimCamera); } \
	FORCEINLINE static uint32 __PPO__bIgnoreAimCameraPitch() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, bIgnoreAimCameraPitch); } \
	FORCEINLINE static uint32 __PPO__nameStartingSocketName() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, nameStartingSocketName); } \
	FORCEINLINE static uint32 __PPO__fForwardOffsetFromSocket() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, fForwardOffsetFromSocket); } \
	FORCEINLINE static uint32 __PPO__bDoesAOEDamge() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, bDoesAOEDamge); } \
	FORCEINLINE static uint32 __PPO__fAOEDamageRadius() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, fAOEDamageRadius); } \
	FORCEINLINE static uint32 __PPO__geshDirectDamageEffect() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, geshDirectDamageEffect); } \
	FORCEINLINE static uint32 __PPO__geshAOEDamageEffect() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, geshAOEDamageEffect); } \
	FORCEINLINE static uint32 __PPO__DelayedProjectile() { return STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, DelayedProjectile); }


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_38_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSAbilityTask_SpawnProjectile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_SpawnProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
