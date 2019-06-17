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
class UPrimitiveComponent;
class UOWSAbilityTask_WaitOverlap;
class AActor;
struct FHitResult;
#ifdef OWSPLUGIN_OWSAbilityTask_WaitOverlap_generated_h
#error "OWSAbilityTask_WaitOverlap.generated.h already included, missing '#pragma once' in OWSAbilityTask_WaitOverlap.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_WaitOverlap_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_10_DELEGATE \
struct _Script_OWSPlugin_eventWaitOverlapDelegate_Parms \
{ \
	FGameplayAbilityTargetDataHandle TargetData; \
}; \
static inline void FWaitOverlapDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitOverlapDelegate, FGameplayAbilityTargetDataHandle const& TargetData) \
{ \
	_Script_OWSPlugin_eventWaitOverlapDelegate_Parms Parms; \
	Parms.TargetData=TargetData; \
	WaitOverlapDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRPGWaitForOverlap) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_WeaponCollisionPrimitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_WaitOverlap**)Z_Param__Result=UOWSAbilityTask_WaitOverlap::RPGWaitForOverlap(Z_Param_OwningAbility,Z_Param_WeaponCollisionPrimitive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapCallback) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapCallback(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRPGWaitForOverlap) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_WeaponCollisionPrimitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSAbilityTask_WaitOverlap**)Z_Param__Result=UOWSAbilityTask_WaitOverlap::RPGWaitForOverlap(Z_Param_OwningAbility,Z_Param_WeaponCollisionPrimitive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapCallback) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapCallback(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_WaitOverlap(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_WaitOverlap_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_WaitOverlap, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_WaitOverlap)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_WaitOverlap(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_WaitOverlap_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_WaitOverlap, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_WaitOverlap)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_WaitOverlap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_WaitOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_WaitOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_WaitOverlap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_WaitOverlap(UOWSAbilityTask_WaitOverlap&&); \
	NO_API UOWSAbilityTask_WaitOverlap(const UOWSAbilityTask_WaitOverlap&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_WaitOverlap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAbilityTask_WaitOverlap(UOWSAbilityTask_WaitOverlap&&); \
	NO_API UOWSAbilityTask_WaitOverlap(const UOWSAbilityTask_WaitOverlap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_WaitOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_WaitOverlap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_WaitOverlap)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_18_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSAbilityTask_WaitOverlap."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_WaitOverlap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
