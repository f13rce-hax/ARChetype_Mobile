// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSTask_RootMotionConstantForce.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSTask_RootMotionConstantForce() {}
// Cross Module References
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSTask_RootMotionConstantForce_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSTask_RootMotionConstantForce();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSTask_ApplyRootMotion_Base();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "OWSApplyRootMotionConstantForceDelegate__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOWSTask_RootMotionConstantForce::StaticRegisterNativesUOWSTask_RootMotionConstantForce()
	{
		UClass* Class = UOWSTask_RootMotionConstantForce::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OWSApplyRootMotionConstantForce", &UOWSTask_RootMotionConstantForce::execOWSApplyRootMotionConstantForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics
	{
		struct OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			FVector WorldDirection;
			float Strength;
			float Duration;
			bool bIsAdditive;
			UCurveFloat* StrengthOverTime;
			ERootMotionFinishVelocityMode VelocityOnFinishMode;
			FVector SetVelocityOnFinish;
			float ClampVelocityOnFinish;
			UOWSTask_RootMotionConstantForce* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampVelocityOnFinish;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetVelocityOnFinish;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelocityOnFinishMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelocityOnFinishMode_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
		static void NewProp_bIsAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, ReturnValue), Z_Construct_UClass_UOWSTask_RootMotionConstantForce_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_ClampVelocityOnFinish = { "ClampVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, ClampVelocityOnFinish), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_SetVelocityOnFinish = { "SetVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, SetVelocityOnFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode = { "VelocityOnFinishMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, VelocityOnFinishMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
	{
		((OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms*)Obj)->bIsAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms), &Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_ClampVelocityOnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_SetVelocityOnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_VelocityOnFinishMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_StrengthOverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_bIsAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::NewProp_OwningAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
		{ "ToolTip", "Apply force to character's movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSTask_RootMotionConstantForce, nullptr, "OWSApplyRootMotionConstantForce", sizeof(OWSTask_RootMotionConstantForce_eventOWSApplyRootMotionConstantForce_Parms), Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSTask_RootMotionConstantForce_NoRegister()
	{
		return UOWSTask_RootMotionConstantForce::StaticClass();
	}
	struct Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthOverTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthOverTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAdditive_MetaData[];
#endif
		static void NewProp_bIsAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOWSTask_ApplyRootMotion_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSTask_RootMotionConstantForce_OWSApplyRootMotionConstantForce, "OWSApplyRootMotionConstantForce" }, // 2579204864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSTask_RootMotionConstantForce.h" },
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_StrengthOverTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
		{ "ToolTip", "Strength of the force over time\nCurve Y is 0 to 1 which is percent of full Strength parameter to apply\nCurve X is 0 to 1 normalized time if this force has a limited duration (Duration > 0), or\n        is in units of seconds if this force has unlimited duration (Duration < 0)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_StrengthOverTime = { "StrengthOverTime", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, StrengthOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_StrengthOverTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_StrengthOverTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_bIsAdditive_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
	};
#endif
	void Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
	{
		((UOWSTask_RootMotionConstantForce*)Obj)->bIsAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOWSTask_RootMotionConstantForce), &Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_bIsAdditive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_bIsAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, Duration), METADATA_PARAMS(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Strength_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, Strength), METADATA_PARAMS(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Strength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_WorldDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_WorldDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_WorldDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSTask_RootMotionConstantForce.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSTask_RootMotionConstantForce, OnFinish), Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_OnFinish_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_OnFinish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_StrengthOverTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_bIsAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::NewProp_OnFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSTask_RootMotionConstantForce>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::ClassParams = {
		&UOWSTask_RootMotionConstantForce::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSTask_RootMotionConstantForce()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSTask_RootMotionConstantForce_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSTask_RootMotionConstantForce, 821939189);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSTask_RootMotionConstantForce>()
	{
		return UOWSTask_RootMotionConstantForce::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSTask_RootMotionConstantForce(Z_Construct_UClass_UOWSTask_RootMotionConstantForce, &UOWSTask_RootMotionConstantForce::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSTask_RootMotionConstantForce"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSTask_RootMotionConstantForce);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
