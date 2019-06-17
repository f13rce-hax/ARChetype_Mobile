// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAdvancedProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAdvancedProjectile() {}
// Cross Module References
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepUTProjMovement();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_Explode();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FRepUTProjMovement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRepUTProjMovement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepUTProjMovement, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("RepUTProjMovement"), sizeof(FRepUTProjMovement), Get_Z_Construct_UScriptStruct_FRepUTProjMovement_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FRepUTProjMovement>()
{
	return FRepUTProjMovement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRepUTProjMovement(FRepUTProjMovement::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("RepUTProjMovement"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFRepUTProjMovement
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFRepUTProjMovement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RepUTProjMovement")),new UScriptStruct::TCppStructOps<FRepUTProjMovement>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFRepUTProjMovement;
	struct Z_Construct_UScriptStruct_FRepUTProjMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "Replicated movement data of our RootComponent.\nMore efficient than engine's FRepMovement" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepUTProjMovement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepUTProjMovement, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepUTProjMovement, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepUTProjMovement, LinearVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_LinearVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_LinearVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_LinearVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"RepUTProjMovement",
		sizeof(FRepUTProjMovement),
		alignof(FRepUTProjMovement),
		Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepUTProjMovement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRepUTProjMovement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RepUTProjMovement"), sizeof(FRepUTProjMovement), Get_Z_Construct_UScriptStruct_FRepUTProjMovement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRepUTProjMovement_Hash() { return 1352917806U; }
	static FName NAME_AOWSAdvancedProjectile_DamageImpactedActor = FName(TEXT("DamageImpactedActor"));
	void AOWSAdvancedProjectile::DamageImpactedActor(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector const& HitLocation, FVector const& HitNormal)
	{
		OWSAdvancedProjectile_eventDamageImpactedActor_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.HitLocation=HitLocation;
		Parms.HitNormal=HitNormal;
		ProcessEvent(FindFunctionChecked(NAME_AOWSAdvancedProjectile_DamageImpactedActor),&Parms);
	}
	static FName NAME_AOWSAdvancedProjectile_Explode = FName(TEXT("Explode"));
	void AOWSAdvancedProjectile::Explode(FVector const& HitLocation, FVector const& HitNormal, UPrimitiveComponent* HitComp)
	{
		OWSAdvancedProjectile_eventExplode_Parms Parms;
		Parms.HitLocation=HitLocation;
		Parms.HitNormal=HitNormal;
		Parms.HitComp=HitComp;
		ProcessEvent(FindFunctionChecked(NAME_AOWSAdvancedProjectile_Explode),&Parms);
	}
	static FName NAME_AOWSAdvancedProjectile_OnShutdown = FName(TEXT("OnShutdown"));
	void AOWSAdvancedProjectile::OnShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSAdvancedProjectile_OnShutdown),NULL);
	}
	static FName NAME_AOWSAdvancedProjectile_ProcessHit = FName(TEXT("ProcessHit"));
	void AOWSAdvancedProjectile::ProcessHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector const& HitLocation, FVector const& HitNormal)
	{
		OWSAdvancedProjectile_eventProcessHit_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.HitLocation=HitLocation;
		Parms.HitNormal=HitNormal;
		ProcessEvent(FindFunctionChecked(NAME_AOWSAdvancedProjectile_ProcessHit),&Parms);
	}
	static FName NAME_AOWSAdvancedProjectile_ShouldIgnoreHit = FName(TEXT("ShouldIgnoreHit"));
	bool AOWSAdvancedProjectile::ShouldIgnoreHit(AActor* OtherActor, UPrimitiveComponent* OtherComp)
	{
		OWSAdvancedProjectile_eventShouldIgnoreHit_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		ProcessEvent(FindFunctionChecked(NAME_AOWSAdvancedProjectile_ShouldIgnoreHit),&Parms);
		return !!Parms.ReturnValue;
	}
	void AOWSAdvancedProjectile::StaticRegisterNativesAOWSAdvancedProjectile()
	{
		UClass* Class = AOWSAdvancedProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageImpactedActor", &AOWSAdvancedProjectile::execDamageImpactedActor },
			{ "Explode", &AOWSAdvancedProjectile::execExplode },
			{ "OnOverlapBegin", &AOWSAdvancedProjectile::execOnOverlapBegin },
			{ "OnPawnSphereOverlapBegin", &AOWSAdvancedProjectile::execOnPawnSphereOverlapBegin },
			{ "OnRep_UTProjReplicatedMovement", &AOWSAdvancedProjectile::execOnRep_UTProjReplicatedMovement },
			{ "OnStop", &AOWSAdvancedProjectile::execOnStop },
			{ "ProcessHit", &AOWSAdvancedProjectile::execProcessHit },
			{ "SetAoEDamageEffectOnExplosion", &AOWSAdvancedProjectile::execSetAoEDamageEffectOnExplosion },
			{ "SetDamageEffectOnHit", &AOWSAdvancedProjectile::execSetDamageEffectOnHit },
			{ "ShouldIgnoreHit", &AOWSAdvancedProjectile::execShouldIgnoreHit },
			{ "ShutDown", &AOWSAdvancedProjectile::execShutDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventDamageImpactedActor_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitNormal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventDamageImpactedActor_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventDamageImpactedActor_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventDamageImpactedActor_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "deal damage to Actor directly hit (note that this Actor will then be ignored for any radial damage)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "DamageImpactedActor", sizeof(OWSAdvancedProjectile_eventDamageImpactedActor_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventExplode_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventExplode_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitNormal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventExplode_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "CPP_Default_HitComp", "None" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "Explode", sizeof(OWSAdvancedProjectile_eventExplode_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_Explode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics
	{
		struct OWSAdvancedProjectile_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((OWSAdvancedProjectile_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSAdvancedProjectile_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnOverlapBegin", sizeof(OWSAdvancedProjectile_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics
	{
		struct OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms), &Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnPawnSphereOverlapBegin", sizeof(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "UTProjReplicatedMovement struct replication event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnRep_UTProjReplicatedMovement", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "blueprint hook for shutdown in case any blueprint-created effects need to be turned off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnShutdown", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics
	{
		struct OWSAdvancedProjectile_eventOnStop_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnStop_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnStop", sizeof(OWSAdvancedProjectile_eventOnStop_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventProcessHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitNormal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventProcessHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventProcessHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventProcessHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "called when projectile hits something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "ProcessHit", sizeof(OWSAdvancedProjectile_eventProcessHit_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics
	{
		struct OWSAdvancedProjectile_eventSetAoEDamageEffectOnExplosion_Parms
		{
			FGameplayEffectSpecHandle DamageEffect;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventSetAoEDamageEffectOnExplosion_Parms, DamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::NewProp_DamageEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "SetAoEDamageEffectOnExplosion", sizeof(OWSAdvancedProjectile_eventSetAoEDamageEffectOnExplosion_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics
	{
		struct OWSAdvancedProjectile_eventSetDamageEffectOnHit_Parms
		{
			FGameplayEffectSpecHandle DamageEffect;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventSetDamageEffectOnHit_Parms, DamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::NewProp_DamageEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "SetDamageEffectOnHit", sizeof(OWSAdvancedProjectile_eventSetDamageEffectOnHit_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWSAdvancedProjectile_eventShouldIgnoreHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms), &Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "returns whether the projectile should ignore a potential overlap hit and keep going\nsplit from ProcessHit() as some projectiles want custom hit behavior but the same exclusions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "ShouldIgnoreHit", sizeof(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms), Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "turns off projectile ambient effects, collision, physics, etc\nneeded because we need a delay between explosion and actor destruction for replication purposes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "ShutDown", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister()
	{
		return AOWSAdvancedProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AOWSAdvancedProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionGameplayCueTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExplosionGameplayCueTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AoEDamageEffectOnHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AoEDamageEffectOnHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEffectOnHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEffectOnHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateUTMovement_MetaData[];
#endif
		static void NewProp_bReplicateUTMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateUTMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasSpawnedFully_MetaData[];
#endif
		static void NewProp_bHasSpawnedFully_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasSpawnedFully;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnOverlapSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnOverlapSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveFakeToReplicatedPos_MetaData[];
#endif
		static void NewProp_bMoveFakeToReplicatedPos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveFakeToReplicatedPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyFakeProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyFakeProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UTProjReplicatedMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UTProjReplicatedMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSAdvancedProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSAdvancedProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor, "DamageImpactedActor" }, // 3835875995
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_Explode, "Explode" }, // 807628218
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin, "OnOverlapBegin" }, // 1799128064
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin, "OnPawnSphereOverlapBegin" }, // 3776680601
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement, "OnRep_UTProjReplicatedMovement" }, // 115549501
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown, "OnShutdown" }, // 1717694922
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop, "OnStop" }, // 2466377903
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit, "ProcessHit" }, // 4087715129
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion, "SetAoEDamageEffectOnExplosion" }, // 2748685820
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit, "SetDamageEffectOnHit" }, // 4155488576
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit, "ShouldIgnoreHit" }, // 3476751168
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown, "ShutDown" }, // 3087133692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "IncludePath", "OWSAdvancedProjectile.h" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionGameplayCueTag_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionGameplayCueTag = { "ExplosionGameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ExplosionGameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionGameplayCueTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionGameplayCueTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_AoEDamageEffectOnHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_AoEDamageEffectOnHit = { "AoEDamageEffectOnHit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, AoEDamageEffectOnHit), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_AoEDamageEffectOnHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_AoEDamageEffectOnHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_DamageEffectOnHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_DamageEffectOnHit = { "DamageEffectOnHit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, DamageEffectOnHit), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_DamageEffectOnHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_DamageEffectOnHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageScale_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageScale = { "ExplosionDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ExplosionDamageScale), METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageRadius = { "ExplosionDamageRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ExplosionDamageRadius), METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_OverlapRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "Projectile size for hitting pawns\nif set to zero, the extra component used for this feature will not be attached (perf improvement) but means you can't go from 0 at spawn -> 1+ after spawn" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_OverlapRadius = { "OverlapRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, OverlapRadius), METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_OverlapRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_OverlapRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "enables UT optimized movement replication; USE THIS INSTEAD OF bReplicateMovement" },
	};
#endif
	void Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement_SetBit(void* Obj)
	{
		((AOWSAdvancedProjectile*)Obj)->bReplicateUTMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement = { "bReplicateUTMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSAdvancedProjectile), &Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "True once fully spawned, to avoid destroying replicated projectiles during spawn on client" },
	};
#endif
	void Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully_SetBit(void* Obj)
	{
		((AOWSAdvancedProjectile*)Obj)->bHasSpawnedFully = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully = { "bHasSpawnedFully", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSAdvancedProjectile), &Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ImpactedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "actor we hit directly and already applied damage to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ImpactedActor = { "ImpactedActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ImpactedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ImpactedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ImpactedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_InstigatorController_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_InstigatorController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_InstigatorController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_PawnOverlapSphere_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "Overlap sphere for hitting pawns\nNOTE: intentionally hidden from defaults editor so users don't mistakenly modify this when they meant to touch OverlapRadius" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_PawnOverlapSphere = { "PawnOverlapSphere", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, PawnOverlapSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_PawnOverlapSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_PawnOverlapSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MasterProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "Real projectile for which this projectile is providing visuals" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MasterProjectile = { "MasterProjectile", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, MasterProjectile), Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MasterProjectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MasterProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "If true (usually), move fake to server replicated position." },
	};
#endif
	void Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos_SetBit(void* Obj)
	{
		((AOWSAdvancedProjectile*)Obj)->bMoveFakeToReplicatedPos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos = { "bMoveFakeToReplicatedPos", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSAdvancedProjectile), &Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MyFakeProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "Fake projectile on this client providing visuals for me" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MyFakeProjectile = { "MyFakeProjectile", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, MyFakeProjectile), Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MyFakeProjectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MyFakeProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_CollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_UTProjReplicatedMovement_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
		{ "ToolTip", "Used for replication of our RootComponent's position and velocity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_UTProjReplicatedMovement = { "UTProjReplicatedMovement", "OnRep_UTProjReplicatedMovement", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, UTProjReplicatedMovement), Z_Construct_UScriptStruct_FRepUTProjMovement, METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_UTProjReplicatedMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_UTProjReplicatedMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSAdvancedProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionGameplayCueTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_AoEDamageEffectOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_DamageEffectOnHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_OverlapRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ImpactedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_InstigatorController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_PawnOverlapSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MasterProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MyFakeProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_CollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_UTProjReplicatedMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSAdvancedProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSAdvancedProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::ClassParams = {
		&AOWSAdvancedProjectile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSAdvancedProjectile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSAdvancedProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSAdvancedProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSAdvancedProjectile, 556846966);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSAdvancedProjectile>()
	{
		return AOWSAdvancedProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSAdvancedProjectile(Z_Construct_UClass_AOWSAdvancedProjectile, &AOWSAdvancedProjectile::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSAdvancedProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSAdvancedProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
