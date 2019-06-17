// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef OWSPLUGIN_OWSProjectileMovementComponent_generated_h
#error "OWSProjectileMovementComponent.generated.h already included, missing '#pragma once' in OWSProjectileMovementComponent.h"
#endif
#define OWSPLUGIN_OWSProjectileMovementComponent_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(FVector ); \
	virtual void ServerUpdateState_Implementation(FVector InAcceleration); \
 \
	DECLARE_FUNCTION(execServerUpdateState) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InAcceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_InAcceleration)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateState_Implementation(Z_Param_InAcceleration); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateState_Validate(FVector ); \
	virtual void ServerUpdateState_Implementation(FVector InAcceleration); \
 \
	DECLARE_FUNCTION(execServerUpdateState) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InAcceleration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_InAcceleration)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateState_Implementation(Z_Param_InAcceleration); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_EVENT_PARMS \
	struct OWSProjectileMovementComponent_eventServerUpdateState_Parms \
	{ \
		FVector InAcceleration; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSProjectileMovementComponent(); \
	friend struct Z_Construct_UClass_UOWSProjectileMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UOWSProjectileMovementComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSProjectileMovementComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUOWSProjectileMovementComponent(); \
	friend struct Z_Construct_UClass_UOWSProjectileMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UOWSProjectileMovementComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSProjectileMovementComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSProjectileMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSProjectileMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSProjectileMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSProjectileMovementComponent(UOWSProjectileMovementComponent&&); \
	NO_API UOWSProjectileMovementComponent(const UOWSProjectileMovementComponent&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSProjectileMovementComponent(UOWSProjectileMovementComponent&&); \
	NO_API UOWSProjectileMovementComponent(const UOWSProjectileMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSProjectileMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSProjectileMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSProjectileMovementComponent)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_22_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSProjectileMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSProjectileMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
