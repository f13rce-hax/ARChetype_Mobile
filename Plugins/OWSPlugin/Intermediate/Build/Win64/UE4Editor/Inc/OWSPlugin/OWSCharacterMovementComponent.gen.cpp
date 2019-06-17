// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacterMovementComponent() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSCharacterMovementComponent_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting();
// End Cross Module References
	static FName NAME_UOWSCharacterMovementComponent_Server_MoveDirection = FName(TEXT("Server_MoveDirection"));
	void UOWSCharacterMovementComponent::Server_MoveDirection(FVector const& MoveDir)
	{
		OWSCharacterMovementComponent_eventServer_MoveDirection_Parms Parms;
		Parms.MoveDir=MoveDir;
		ProcessEvent(FindFunctionChecked(NAME_UOWSCharacterMovementComponent_Server_MoveDirection),&Parms);
	}
	static FName NAME_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed = FName(TEXT("Server_SetMaxWalkSpeed"));
	void UOWSCharacterMovementComponent::Server_SetMaxWalkSpeed(const float NewMaxWalkSpeed)
	{
		OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms Parms;
		Parms.NewMaxWalkSpeed=NewMaxWalkSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed),&Parms);
	}
	void UOWSCharacterMovementComponent::StaticRegisterNativesUOWSCharacterMovementComponent()
	{
		UClass* Class = UOWSCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoDodge", &UOWSCharacterMovementComponent::execDoDodge },
			{ "IsMovingForward", &UOWSCharacterMovementComponent::execIsMovingForward },
			{ "Server_MoveDirection", &UOWSCharacterMovementComponent::execServer_MoveDirection },
			{ "Server_SetMaxWalkSpeed", &UOWSCharacterMovementComponent::execServer_SetMaxWalkSpeed },
			{ "SetMaxWalkSpeed", &UOWSCharacterMovementComponent::execSetMaxWalkSpeed },
			{ "StartSprinting", &UOWSCharacterMovementComponent::execStartSprinting },
			{ "StopSprinting", &UOWSCharacterMovementComponent::execStopSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
		{ "ToolTip", "@brief Triggers the dodge action." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "DoDodge", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics
	{
		struct OWSCharacterMovementComponent_eventIsMovingForward_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWSCharacterMovementComponent_eventIsMovingForward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSCharacterMovementComponent_eventIsMovingForward_Parms), &Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "IsMovingForward", sizeof(OWSCharacterMovementComponent_eventIsMovingForward_Parms), Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir = { "MoveDir", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterMovementComponent_eventServer_MoveDirection_Parms, MoveDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::NewProp_MoveDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "Server_MoveDirection", sizeof(OWSCharacterMovementComponent_eventServer_MoveDirection_Parms), Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { "NewMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "Server_SetMaxWalkSpeed", sizeof(OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms), Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics
	{
		struct OWSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms
		{
			float NewMaxWalkSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { "NewMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Max Walk Speed" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
		{ "ToolTip", "Set Max Walk Speed (Called from the owning client)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "SetMaxWalkSpeed", sizeof(OWSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms), Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
		{ "ToolTip", "Sprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "StartSprinting", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "StopSprinting", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSCharacterMovementComponent_NoRegister()
	{
		return UOWSCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOWSCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMaxWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSprinting_MetaData[];
#endif
		static void NewProp_IsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSprinting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDodge, "DoDodge" }, // 438651480
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward, "IsMovingForward" }, // 2250287193
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_MoveDirection, "Server_MoveDirection" }, // 3831883634
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed, "Server_SetMaxWalkSpeed" }, // 3168505410
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed, "SetMaxWalkSpeed" }, // 3770098770
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting, "StartSprinting" }, // 2402708421
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting, "StopSprinting" }, // 3674268965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DodgeStrength_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
		{ "ToolTip", "Dodge" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DodgeStrength = { "DodgeStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, DodgeStrength), METADATA_PARAMS(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DodgeStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DodgeStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_MaxMaxWalkSpeed_MetaData[] = {
		{ "Category", "Max Walk Speed" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
		{ "ToolTip", "Set Max Walk Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_MaxMaxWalkSpeed = { "MaxMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, MaxMaxWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_MaxMaxWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_MaxMaxWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintAccelerationMultiplier_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintAccelerationMultiplier = { "SprintAccelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, SprintAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintAccelerationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, SprintSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintSpeedMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting_MetaData[] = {
		{ "Category", "MovementMode" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting_SetBit(void* Obj)
	{
		((UOWSCharacterMovementComponent*)Obj)->IsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting = { "IsSprinting", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOWSCharacterMovementComponent), &Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DodgeStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_MaxMaxWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::ClassParams = {
		&UOWSCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSCharacterMovementComponent, 3038060607);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSCharacterMovementComponent>()
	{
		return UOWSCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSCharacterMovementComponent(Z_Construct_UClass_UOWSCharacterMovementComponent, &UOWSCharacterMovementComponent::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
