// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FVector;
class APlayerController;
#ifdef OWSPLUGIN_OWSTravelToMapActor_generated_h
#error "OWSTravelToMapActor.generated.h already included, missing '#pragma once' in OWSTravelToMapActor.h"
#endif
#define OWSPLUGIN_OWSTravelToMapActor_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCartesianFromSpherical) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ShpericalVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCartesianFromSpherical(Z_Param_ShpericalVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSphericalFromCartesian) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CartesianVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetSphericalFromCartesian(Z_Param_CartesianVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapServerToTravelTo) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SelectedSchemeToChooseMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_WorldServerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapServerToTravelTo(Z_Param_PlayerController,ERPGSchemeToChooseMap::SchemeToChooseMap(Z_Param_SelectedSchemeToChooseMap),Z_Param_WorldServerID); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCartesianFromSpherical) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_ShpericalVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCartesianFromSpherical(Z_Param_ShpericalVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSphericalFromCartesian) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_CartesianVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetSphericalFromCartesian(Z_Param_CartesianVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapServerToTravelTo) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SelectedSchemeToChooseMap); \
		P_GET_PROPERTY(UIntProperty,Z_Param_WorldServerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapServerToTravelTo(Z_Param_PlayerController,ERPGSchemeToChooseMap::SchemeToChooseMap(Z_Param_SelectedSchemeToChooseMap),Z_Param_WorldServerID); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_EVENT_PARMS \
	struct OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms \
	{ \
		FString ErrorMsg; \
	}; \
	struct OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms \
	{ \
		FString ServerAndPort; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSTravelToMapActor(); \
	friend struct Z_Construct_UClass_AOWSTravelToMapActor_Statics; \
public: \
	DECLARE_CLASS(AOWSTravelToMapActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSTravelToMapActor)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAOWSTravelToMapActor(); \
	friend struct Z_Construct_UClass_AOWSTravelToMapActor_Statics; \
public: \
	DECLARE_CLASS(AOWSTravelToMapActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSTravelToMapActor)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSTravelToMapActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSTravelToMapActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSTravelToMapActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSTravelToMapActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSTravelToMapActor(AOWSTravelToMapActor&&); \
	NO_API AOWSTravelToMapActor(const AOWSTravelToMapActor&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSTravelToMapActor(AOWSTravelToMapActor&&); \
	NO_API AOWSTravelToMapActor(const AOWSTravelToMapActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSTravelToMapActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSTravelToMapActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSTravelToMapActor)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_28_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSTravelToMapActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h


#define FOREACH_ENUM_ERPGSCHEMETOCHOOSEMAP(op) \
	op(ERPGSchemeToChooseMap::MapWithFewestPlayers) \
	op(ERPGSchemeToChooseMap::MapWithMostPlayers) \
	op(ERPGSchemeToChooseMap::MapOnWorldServerWithLeastNumberOfMaps) \
	op(ERPGSchemeToChooseMap::SpecificWorldServer) 
#define FOREACH_ENUM_DYNAMICAXISTYPE(op) \
	op(XAxis) \
	op(YAxis) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
