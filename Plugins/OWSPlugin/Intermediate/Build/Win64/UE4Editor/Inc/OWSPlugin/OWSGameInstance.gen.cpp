// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameInstance() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameInstance_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_FindClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
// End Cross Module References
	static FName NAME_UOWSGameInstance_HideLoadingDialog = FName(TEXT("HideLoadingDialog"));
	void UOWSGameInstance::HideLoadingDialog()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOWSGameInstance_HideLoadingDialog),NULL);
	}
	static FName NAME_UOWSGameInstance_RPGBeginLoadingScreen = FName(TEXT("RPGBeginLoadingScreen"));
	void UOWSGameInstance::RPGBeginLoadingScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOWSGameInstance_RPGBeginLoadingScreen),NULL);
	}
	static FName NAME_UOWSGameInstance_RPGEndLoadingScreen = FName(TEXT("RPGEndLoadingScreen"));
	void UOWSGameInstance::RPGEndLoadingScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOWSGameInstance_RPGEndLoadingScreen),NULL);
	}
	void UOWSGameInstance::StaticRegisterNativesUOWSGameInstance()
	{
		UClass* Class = UOWSGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginLoadingScreen", &UOWSGameInstance::execBeginLoadingScreen },
			{ "EndLoadingScreen", &UOWSGameInstance::execEndLoadingScreen },
			{ "FindClass", &UOWSGameInstance::execFindClass },
			{ "FindGameplayAbilityClass", &UOWSGameInstance::execFindGameplayAbilityClass },
			{ "HideLoadingScreen", &UOWSGameInstance::execHideLoadingScreen },
			{ "LoadGameplayAbilityClass", &UOWSGameInstance::execLoadGameplayAbilityClass },
			{ "LoadSkeletalMeshFromPath", &UOWSGameInstance::execLoadSkeletalMeshFromPath },
			{ "LoadStaticMeshFromPath", &UOWSGameInstance::execLoadStaticMeshFromPath },
			{ "LoadWeaponActorClassFromPath", &UOWSGameInstance::execLoadWeaponActorClassFromPath },
			{ "SerializeStructToJSONString", &UOWSGameInstance::execSerializeStructToJSONString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics
	{
		struct OWSGameInstance_eventBeginLoadingScreen_Parms
		{
			FString MapName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventBeginLoadingScreen_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::NewProp_MapName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::NewProp_MapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "BeginLoadingScreen", sizeof(OWSGameInstance_eventBeginLoadingScreen_Parms), Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics
	{
		struct OWSGameInstance_eventEndLoadingScreen_Parms
		{
			UWorld* world;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_world;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventEndLoadingScreen_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::NewProp_world,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "EndLoadingScreen", sizeof(OWSGameInstance_eventEndLoadingScreen_Parms), Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics
	{
		struct OWSGameInstance_eventFindClass_Parms
		{
			FString ClassName;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventFindClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventFindClass_Parms, ClassName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::NewProp_ClassName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "FindClass", sizeof(OWSGameInstance_eventFindClass_Parms), Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_FindClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics
	{
		struct OWSGameInstance_eventFindGameplayAbilityClass_Parms
		{
			FString ClassName;
			TSubclassOf<UGameplayAbility>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventFindGameplayAbilityClass_Parms, ReturnValue), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventFindGameplayAbilityClass_Parms, ClassName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::NewProp_ClassName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "FindGameplayAbilityClass", sizeof(OWSGameInstance_eventFindGameplayAbilityClass_Parms), Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "HideLoadingDialog", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "HideLoadingScreen", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics
	{
		struct OWSGameInstance_eventLoadGameplayAbilityClass_Parms
		{
			FString PathToGameplayAbilityClass;
			TSubclassOf<UGameplayAbility>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToGameplayAbilityClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadGameplayAbilityClass_Parms, ReturnValue), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::NewProp_PathToGameplayAbilityClass = { "PathToGameplayAbilityClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadGameplayAbilityClass_Parms, PathToGameplayAbilityClass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::NewProp_PathToGameplayAbilityClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadGameplayAbilityClass", sizeof(OWSGameInstance_eventLoadGameplayAbilityClass_Parms), Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics
	{
		struct OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms
		{
			FString SkeletalMeshPath;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkeletalMeshPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms, SkeletalMeshPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::NewProp_SkeletalMeshPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadSkeletalMeshFromPath", sizeof(OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms), Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics
	{
		struct OWSGameInstance_eventLoadStaticMeshFromPath_Parms
		{
			FString StaticMeshPath;
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticMeshPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadStaticMeshFromPath_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::NewProp_StaticMeshPath = { "StaticMeshPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadStaticMeshFromPath_Parms, StaticMeshPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::NewProp_StaticMeshPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadStaticMeshFromPath", sizeof(OWSGameInstance_eventLoadStaticMeshFromPath_Parms), Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics
	{
		struct OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms
		{
			FString WeaponActorClassPath;
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponActorClassPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::NewProp_WeaponActorClassPath = { "WeaponActorClassPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms, WeaponActorClassPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::NewProp_WeaponActorClassPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadWeaponActorClassFromPath", sizeof(OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms), Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "RPGBeginLoadingScreen", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "RPGEndLoadingScreen", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics
	{
		struct OWSGameInstance_eventSerializeStructToJSONString_Parms
		{
			const UStruct* StructToSerialize;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructToSerialize_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StructToSerialize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventSerializeStructToJSONString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_StructToSerialize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_StructToSerialize = { "StructToSerialize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSGameInstance_eventSerializeStructToJSONString_Parms, StructToSerialize), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_StructToSerialize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_StructToSerialize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_StructToSerialize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "SerializeStructToJSONString", sizeof(OWSGameInstance_eventSerializeStructToJSONString_Parms), Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSGameInstance_NoRegister()
	{
		return UOWSGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOWSGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen, "BeginLoadingScreen" }, // 2522288035
		{ &Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen, "EndLoadingScreen" }, // 1451365418
		{ &Z_Construct_UFunction_UOWSGameInstance_FindClass, "FindClass" }, // 3294211118
		{ &Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass, "FindGameplayAbilityClass" }, // 1815827513
		{ &Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog, "HideLoadingDialog" }, // 3301217606
		{ &Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen, "HideLoadingScreen" }, // 3377498796
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass, "LoadGameplayAbilityClass" }, // 2205690725
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath, "LoadSkeletalMeshFromPath" }, // 4208425734
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath, "LoadStaticMeshFromPath" }, // 2460115439
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath, "LoadWeaponActorClassFromPath" }, // 2720395203
		{ &Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen, "RPGBeginLoadingScreen" }, // 2177819387
		{ &Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen, "RPGEndLoadingScreen" }, // 499376794
		{ &Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString, "SerializeStructToJSONString" }, // 297133259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSGameInstance.h" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_UserSessionGUID_MetaData[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Encryption\")\n        FString EncryptWithAES(FString InputString);\nUFUNCTION(BlueprintCallable, Category = \"Encryption\")\n        FString DecryptWithAES(FString InputString);" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSGameInstance, UserSessionGUID), METADATA_PARAMS(Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_UserSessionGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_UserSessionGUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_UserSessionGUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSGameInstance_Statics::ClassParams = {
		&UOWSGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSGameInstance, 1818915686);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSGameInstance>()
	{
		return UOWSGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSGameInstance(Z_Construct_UClass_UOWSGameInstance, &UOWSGameInstance::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
