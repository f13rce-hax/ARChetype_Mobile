// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UObject;
class USkeletalMesh;
class UStaticMesh;
class AActor;
class UStruct;
class UWorld;
#ifdef OWSPLUGIN_OWSGameInstance_generated_h
#error "OWSGameInstance.generated.h already included, missing '#pragma once' in OWSGameInstance.h"
#endif
#define OWSPLUGIN_OWSGameInstance_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadGameplayAbilityClass) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToGameplayAbilityClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UGameplayAbility> *)Z_Param__Result=P_THIS->LoadGameplayAbilityClass(Z_Param_PathToGameplayAbilityClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindGameplayAbilityClass) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UGameplayAbility> *)Z_Param__Result=P_THIS->FindGameplayAbilityClass(Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClass) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->FindClass(Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadSkeletalMeshFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SkeletalMeshPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=P_THIS->LoadSkeletalMeshFromPath(Z_Param_SkeletalMeshPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadStaticMeshFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StaticMeshPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMeshFromPath(Z_Param_StaticMeshPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadWeaponActorClassFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_WeaponActorClassPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->LoadWeaponActorClassFromPath(Z_Param_WeaponActorClassPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeStructToJSONString) \
	{ \
		P_GET_OBJECT(UStruct,Z_Param_StructToSerialize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->SerializeStructToJSONString(Z_Param_StructToSerialize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideLoadingScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideLoadingScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndLoadingScreen) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_world); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndLoadingScreen(Z_Param_world); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginLoadingScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginLoadingScreen(Z_Param_MapName); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadGameplayAbilityClass) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToGameplayAbilityClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UGameplayAbility> *)Z_Param__Result=P_THIS->LoadGameplayAbilityClass(Z_Param_PathToGameplayAbilityClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindGameplayAbilityClass) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UGameplayAbility> *)Z_Param__Result=P_THIS->FindGameplayAbilityClass(Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindClass) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->FindClass(Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadSkeletalMeshFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SkeletalMeshPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=P_THIS->LoadSkeletalMeshFromPath(Z_Param_SkeletalMeshPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadStaticMeshFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StaticMeshPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMeshFromPath(Z_Param_StaticMeshPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadWeaponActorClassFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_WeaponActorClassPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->LoadWeaponActorClassFromPath(Z_Param_WeaponActorClassPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeStructToJSONString) \
	{ \
		P_GET_OBJECT(UStruct,Z_Param_StructToSerialize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->SerializeStructToJSONString(Z_Param_StructToSerialize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideLoadingScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideLoadingScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndLoadingScreen) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_world); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndLoadingScreen(Z_Param_world); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginLoadingScreen) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginLoadingScreen(Z_Param_MapName); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_EVENT_PARMS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSGameInstance(); \
	friend struct Z_Construct_UClass_UOWSGameInstance_Statics; \
public: \
	DECLARE_CLASS(UOWSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSGameInstance)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUOWSGameInstance(); \
	friend struct Z_Construct_UClass_UOWSGameInstance_Statics; \
public: \
	DECLARE_CLASS(UOWSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSGameInstance)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSGameInstance(UOWSGameInstance&&); \
	NO_API UOWSGameInstance(const UOWSGameInstance&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSGameInstance(UOWSGameInstance&&); \
	NO_API UOWSGameInstance(const UOWSGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSGameInstance)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_15_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
