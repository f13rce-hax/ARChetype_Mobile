// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef OWSPLUGIN_OWSCharacterMovementComponent_generated_h
#error "OWSCharacterMovementComponent.generated.h already included, missing '#pragma once' in OWSCharacterMovementComponent.h"
#endif
#define OWSPLUGIN_OWSCharacterMovementComponent_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_RPC_WRAPPERS \
	virtual bool Server_MoveDirection_Validate(FVector const& ); \
	virtual void Server_MoveDirection_Implementation(FVector const& MoveDir); \
	virtual bool Server_SetMaxWalkSpeed_Validate(const float ); \
	virtual void Server_SetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed); \
 \
	DECLARE_FUNCTION(execDoDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoDodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_MoveDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_MoveDirection_Validate(Z_Param_MoveDir)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_MoveDirection_Validate")); \
			return; \
		} \
		P_THIS->Server_MoveDirection_Implementation(Z_Param_MoveDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxWalkSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxWalkSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxWalkSpeed(Z_Param_NewMaxWalkSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetMaxWalkSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxWalkSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetMaxWalkSpeed_Validate(Z_Param_NewMaxWalkSpeed)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetMaxWalkSpeed_Validate")); \
			return; \
		} \
		P_THIS->Server_SetMaxWalkSpeed_Implementation(Z_Param_NewMaxWalkSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMovingForward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMovingForward(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_MoveDirection_Validate(FVector const& ); \
	virtual void Server_MoveDirection_Implementation(FVector const& MoveDir); \
	virtual bool Server_SetMaxWalkSpeed_Validate(const float ); \
	virtual void Server_SetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed); \
 \
	DECLARE_FUNCTION(execDoDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoDodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_MoveDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_MoveDir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_MoveDirection_Validate(Z_Param_MoveDir)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_MoveDirection_Validate")); \
			return; \
		} \
		P_THIS->Server_MoveDirection_Implementation(Z_Param_MoveDir); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxWalkSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxWalkSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxWalkSpeed(Z_Param_NewMaxWalkSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetMaxWalkSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMaxWalkSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SetMaxWalkSpeed_Validate(Z_Param_NewMaxWalkSpeed)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetMaxWalkSpeed_Validate")); \
			return; \
		} \
		P_THIS->Server_SetMaxWalkSpeed_Implementation(Z_Param_NewMaxWalkSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMovingForward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMovingForward(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_EVENT_PARMS \
	struct OWSCharacterMovementComponent_eventServer_MoveDirection_Parms \
	{ \
		FVector MoveDir; \
	}; \
	struct OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms \
	{ \
		float NewMaxWalkSpeed; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UOWSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UOWSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSCharacterMovementComponent)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOWSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UOWSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UOWSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSCharacterMovementComponent)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSCharacterMovementComponent(UOWSCharacterMovementComponent&&); \
	NO_API UOWSCharacterMovementComponent(const UOWSCharacterMovementComponent&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSCharacterMovementComponent(UOWSCharacterMovementComponent&&); \
	NO_API UOWSCharacterMovementComponent(const UOWSCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSCharacterMovementComponent)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_12_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSCharacterMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
