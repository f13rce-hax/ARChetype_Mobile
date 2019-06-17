// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEffectSpecHandle;
struct FHitResult;
class UPrimitiveComponent;
class AActor;
#ifdef OWSPLUGIN_OWSAdvancedProjectile_generated_h
#error "OWSAdvancedProjectile.generated.h already included, missing '#pragma once' in OWSAdvancedProjectile.h"
#endif
#define OWSPLUGIN_OWSAdvancedProjectile_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepUTProjMovement_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FRepUTProjMovement>();

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_RPC_WRAPPERS \
	virtual void Explode_Implementation(FHitResult const& Hit, UPrimitiveComponent* HitComp); \
	virtual void DamageImpactedActor_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& Hit); \
	virtual void ProcessHit_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& Hit); \
	virtual bool ShouldIgnoreHit_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp); \
 \
	DECLARE_FUNCTION(execSetAoEDamageEffectOnExplosion) \
	{ \
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DamageEffect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAoEDamageEffectOnExplosion(Z_Param_DamageEffect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageEffectOnHit) \
	{ \
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DamageEffect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageEffectOnHit(Z_Param_DamageEffect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShutDown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExplode) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Explode_Implementation(Z_Param_Out_Hit,Z_Param_HitComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStop) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStop(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageImpactedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageImpactedActor_Implementation(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProcessHit_Implementation(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldIgnoreHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldIgnoreHit_Implementation(Z_Param_OtherActor,Z_Param_OtherComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSphereOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSphereOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_UTProjReplicatedMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_UTProjReplicatedMovement(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Explode_Implementation(FHitResult const& Hit, UPrimitiveComponent* HitComp); \
	virtual void DamageImpactedActor_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& Hit); \
	virtual void ProcessHit_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& Hit); \
	virtual bool ShouldIgnoreHit_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp); \
 \
	DECLARE_FUNCTION(execSetAoEDamageEffectOnExplosion) \
	{ \
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DamageEffect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAoEDamageEffectOnExplosion(Z_Param_DamageEffect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageEffectOnHit) \
	{ \
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DamageEffect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageEffectOnHit(Z_Param_DamageEffect); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShutDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShutDown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExplode) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Explode_Implementation(Z_Param_Out_Hit,Z_Param_HitComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStop) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStop(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageImpactedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageImpactedActor_Implementation(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ProcessHit_Implementation(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldIgnoreHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldIgnoreHit_Implementation(Z_Param_OtherActor,Z_Param_OtherComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSphereOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSphereOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_UTProjReplicatedMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_UTProjReplicatedMovement(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_EVENT_PARMS \
	struct OWSAdvancedProjectile_eventDamageImpactedActor_Parms \
	{ \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		FHitResult Hit; \
	}; \
	struct OWSAdvancedProjectile_eventExplode_Parms \
	{ \
		FHitResult Hit; \
		UPrimitiveComponent* HitComp; \
	}; \
	struct OWSAdvancedProjectile_eventProcessHit_Parms \
	{ \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		FHitResult Hit; \
	}; \
	struct OWSAdvancedProjectile_eventShouldIgnoreHit_Parms \
	{ \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		OWSAdvancedProjectile_eventShouldIgnoreHit_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSAdvancedProjectile(); \
	friend struct Z_Construct_UClass_AOWSAdvancedProjectile_Statics; \
public: \
	DECLARE_CLASS(AOWSAdvancedProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSAdvancedProjectile) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_INCLASS \
private: \
	static void StaticRegisterNativesAOWSAdvancedProjectile(); \
	friend struct Z_Construct_UClass_AOWSAdvancedProjectile_Statics; \
public: \
	DECLARE_CLASS(AOWSAdvancedProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSAdvancedProjectile) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSAdvancedProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSAdvancedProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSAdvancedProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSAdvancedProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSAdvancedProjectile(AOWSAdvancedProjectile&&); \
	NO_API AOWSAdvancedProjectile(const AOWSAdvancedProjectile&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSAdvancedProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSAdvancedProjectile(AOWSAdvancedProjectile&&); \
	NO_API AOWSAdvancedProjectile(const AOWSAdvancedProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSAdvancedProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSAdvancedProjectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSAdvancedProjectile)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UTProjReplicatedMovement() { return STRUCT_OFFSET(AOWSAdvancedProjectile, UTProjReplicatedMovement); } \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AOWSAdvancedProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__MyFakeProjectile() { return STRUCT_OFFSET(AOWSAdvancedProjectile, MyFakeProjectile); } \
	FORCEINLINE static uint32 __PPO__bMoveFakeToReplicatedPos() { return STRUCT_OFFSET(AOWSAdvancedProjectile, bMoveFakeToReplicatedPos); } \
	FORCEINLINE static uint32 __PPO__MasterProjectile() { return STRUCT_OFFSET(AOWSAdvancedProjectile, MasterProjectile); } \
	FORCEINLINE static uint32 __PPO__PawnOverlapSphere() { return STRUCT_OFFSET(AOWSAdvancedProjectile, PawnOverlapSphere); } \
	FORCEINLINE static uint32 __PPO__InstigatorController() { return STRUCT_OFFSET(AOWSAdvancedProjectile, InstigatorController); } \
	FORCEINLINE static uint32 __PPO__ImpactedActor() { return STRUCT_OFFSET(AOWSAdvancedProjectile, ImpactedActor); } \
	FORCEINLINE static uint32 __PPO__bHasSpawnedFully() { return STRUCT_OFFSET(AOWSAdvancedProjectile, bHasSpawnedFully); }


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_80_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_83_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSAdvancedProjectile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSAdvancedProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
