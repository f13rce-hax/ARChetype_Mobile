// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSProjectileMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSProjectileMovementComponent() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSProjectileMovementComponent_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSProjectileMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static FName NAME_UOWSProjectileMovementComponent_ServerUpdateState = FName(TEXT("ServerUpdateState"));
	void UOWSProjectileMovementComponent::ServerUpdateState(FVector InAcceleration)
	{
		OWSProjectileMovementComponent_eventServerUpdateState_Parms Parms;
		Parms.InAcceleration=InAcceleration;
		ProcessEvent(FindFunctionChecked(NAME_UOWSProjectileMovementComponent_ServerUpdateState),&Parms);
	}
	void UOWSProjectileMovementComponent::StaticRegisterNativesUOWSProjectileMovementComponent()
	{
		UClass* Class = UOWSProjectileMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdateState", &UOWSProjectileMovementComponent::execServerUpdateState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::NewProp_InAcceleration = { "InAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSProjectileMovementComponent_eventServerUpdateState_Parms, InAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::NewProp_InAcceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSProjectileMovementComponent, nullptr, "ServerUpdateState", sizeof(OWSProjectileMovementComponent_eventServerUpdateState_Parms), Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSProjectileMovementComponent_NoRegister()
	{
		return UOWSProjectileMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOWSProjectileMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreventZHoming_MetaData[];
#endif
		static void NewProp_bPreventZHoming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreventZHoming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddlUpdatedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddlUpdatedComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddlUpdatedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitZStopSimulatingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitZStopSimulatingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepPhysicsVolumeWhenStopped_MetaData[];
#endif
		static void NewProp_bKeepPhysicsVolumeWhenStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepPhysicsVolumeWhenStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccelRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState, "ServerUpdateState" }, // 3953978991
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "IncludePath", "OWSProjectileMovementComponent.h" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "!bBounce" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
		{ "ToolTip", "If true, projectile does not home in Z axis" },
	};
#endif
	void Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming_SetBit(void* Obj)
	{
		((UOWSProjectileMovementComponent*)Obj)->bPreventZHoming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming = { "bPreventZHoming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOWSProjectileMovementComponent), &Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents_MetaData[] = {
		{ "Category", "MovementComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
		{ "ToolTip", "additional components that should be moved along with the main UpdatedComponent. Defaults to all colliding children of UpdatedComponent.\nclosest blocking hit of all components is used for blocking collision\n\nUltimately this is a workaround for UPrimitiveComponent::MoveComponent() not sweeping children." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents = { "AddlUpdatedComponents", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, AddlUpdatedComponents), METADATA_PARAMS(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents_Inner = { "AddlUpdatedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_HitZStopSimulatingThreshold_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "!bBounce" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
		{ "ToolTip", "stop only if HitNormal.Z is greater than this value, otherwise continue moving after removing velocity in the impact direction\nprimarily this is used to only stop the projectile on hitting a floor\nno effect if bBounce is true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_HitZStopSimulatingThreshold = { "HitZStopSimulatingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, HitZStopSimulatingThreshold), METADATA_PARAMS(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_HitZStopSimulatingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_HitZStopSimulatingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_ReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_ReplicatedAcceleration = { "ReplicatedAcceleration", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, ReplicatedAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_ReplicatedAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_ReplicatedAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
		{ "ToolTip", "explicit acceleration vector (additive with AccelRate)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_Acceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
		{ "ToolTip", "Don't clear physics volume when stopped" },
	};
#endif
	void Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped_SetBit(void* Obj)
	{
		((UOWSProjectileMovementComponent*)Obj)->bKeepPhysicsVolumeWhenStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped = { "bKeepPhysicsVolumeWhenStopped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOWSProjectileMovementComponent), &Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AccelRate_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
		{ "ToolTip", "linear acceleration in the direction of current velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AccelRate = { "AccelRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, AccelRate), METADATA_PARAMS(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AccelRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AccelRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_HitZStopSimulatingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_ReplicatedAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AccelRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSProjectileMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::ClassParams = {
		&UOWSProjectileMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSProjectileMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSProjectileMovementComponent, 2269433754);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSProjectileMovementComponent>()
	{
		return UOWSProjectileMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSProjectileMovementComponent(Z_Construct_UClass_UOWSProjectileMovementComponent, &UOWSProjectileMovementComponent::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSProjectileMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSProjectileMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
