// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
struct FVector;
class UCurveFloat;
enum class ERootMotionFinishVelocityMode : uint8;
class UOWSTask_RootMotionConstantForce;
#ifdef OWSPLUGIN_OWSTask_RootMotionConstantForce_generated_h
#error "OWSTask_RootMotionConstantForce.generated.h already included, missing '#pragma once' in OWSTask_RootMotionConstantForce.h"
#endif
#define OWSPLUGIN_OWSTask_RootMotionConstantForce_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_15_DELEGATE \
static inline void FOWSApplyRootMotionConstantForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& OWSApplyRootMotionConstantForceDelegate) \
{ \
	OWSApplyRootMotionConstantForceDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOWSApplyRootMotionConstantForce) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_GET_STRUCT(FVector,Z_Param_WorldDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_bIsAdditive); \
		P_GET_OBJECT(UCurveFloat,Z_Param_StrengthOverTime); \
		P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode); \
		P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClampVelocityOnFinish); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSTask_RootMotionConstantForce**)Z_Param__Result=UOWSTask_RootMotionConstantForce::OWSApplyRootMotionConstantForce(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_WorldDirection,Z_Param_Strength,Z_Param_Duration,Z_Param_bIsAdditive,Z_Param_StrengthOverTime,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOWSApplyRootMotionConstantForce) \
	{ \
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TaskInstanceName); \
		P_GET_STRUCT(FVector,Z_Param_WorldDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Strength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_bIsAdditive); \
		P_GET_OBJECT(UCurveFloat,Z_Param_StrengthOverTime); \
		P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode); \
		P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ClampVelocityOnFinish); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOWSTask_RootMotionConstantForce**)Z_Param__Result=UOWSTask_RootMotionConstantForce::OWSApplyRootMotionConstantForce(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_WorldDirection,Z_Param_Strength,Z_Param_Duration,Z_Param_bIsAdditive,Z_Param_StrengthOverTime,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSTask_RootMotionConstantForce(); \
	friend struct Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics; \
public: \
	DECLARE_CLASS(UOWSTask_RootMotionConstantForce, UOWSTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSTask_RootMotionConstantForce) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUOWSTask_RootMotionConstantForce(); \
	friend struct Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics; \
public: \
	DECLARE_CLASS(UOWSTask_RootMotionConstantForce, UOWSTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSTask_RootMotionConstantForce) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSTask_RootMotionConstantForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSTask_RootMotionConstantForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSTask_RootMotionConstantForce); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSTask_RootMotionConstantForce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSTask_RootMotionConstantForce(UOWSTask_RootMotionConstantForce&&); \
	NO_API UOWSTask_RootMotionConstantForce(const UOWSTask_RootMotionConstantForce&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSTask_RootMotionConstantForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSTask_RootMotionConstantForce(UOWSTask_RootMotionConstantForce&&); \
	NO_API UOWSTask_RootMotionConstantForce(const UOWSTask_RootMotionConstantForce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSTask_RootMotionConstantForce); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSTask_RootMotionConstantForce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSTask_RootMotionConstantForce)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldDirection() { return STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, WorldDirection); } \
	FORCEINLINE static uint32 __PPO__Strength() { return STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, Strength); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, Duration); } \
	FORCEINLINE static uint32 __PPO__bIsAdditive() { return STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, bIsAdditive); } \
	FORCEINLINE static uint32 __PPO__StrengthOverTime() { return STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, StrengthOverTime); }


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_22_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSTask_RootMotionConstantForce."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSTask_RootMotionConstantForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_RootMotionConstantForce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
