// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSTravelToMapActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSTravelToMapActor() {}
// Cross Module References
	OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_DynamicAxisType();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSTravelToMapActor_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSTravelToMapActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* ERPGSchemeToChooseMap_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ERPGSchemeToChooseMap"));
		}
		return Singleton;
	}
	template<> OWSPLUGIN_API UEnum* StaticEnum<ERPGSchemeToChooseMap::SchemeToChooseMap>()
	{
		return ERPGSchemeToChooseMap_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERPGSchemeToChooseMap(ERPGSchemeToChooseMap_StaticEnum, TEXT("/Script/OWSPlugin"), TEXT("ERPGSchemeToChooseMap"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Hash() { return 3987101764U; }
	UEnum* Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERPGSchemeToChooseMap"), 0, Get_Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERPGSchemeToChooseMap::MapWithFewestPlayers", (int64)ERPGSchemeToChooseMap::MapWithFewestPlayers },
				{ "ERPGSchemeToChooseMap::MapWithMostPlayers", (int64)ERPGSchemeToChooseMap::MapWithMostPlayers },
				{ "ERPGSchemeToChooseMap::MapOnWorldServerWithLeastNumberOfMaps", (int64)ERPGSchemeToChooseMap::MapOnWorldServerWithLeastNumberOfMaps },
				{ "ERPGSchemeToChooseMap::SpecificWorldServer", (int64)ERPGSchemeToChooseMap::SpecificWorldServer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MapOnWorldServerWithLeastNumberOfMaps.DisplayName", "Map on World Server with least number of maps" },
				{ "MapWithFewestPlayers.DisplayName", "Map with fewest players" },
				{ "MapWithMostPlayers.DisplayName", "Map with most players" },
				{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
				{ "SpecificWorldServer.DisplayName", "Specific World Server" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
				nullptr,
				"ERPGSchemeToChooseMap",
				"ERPGSchemeToChooseMap::SchemeToChooseMap",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* DynamicAxisType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_DynamicAxisType, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("DynamicAxisType"));
		}
		return Singleton;
	}
	template<> OWSPLUGIN_API UEnum* StaticEnum<DynamicAxisType>()
	{
		return DynamicAxisType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DynamicAxisType(DynamicAxisType_StaticEnum, TEXT("/Script/OWSPlugin"), TEXT("DynamicAxisType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Hash() { return 2871012638U; }
	UEnum* Z_Construct_UEnum_OWSPlugin_DynamicAxisType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DynamicAxisType"), 0, Get_Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "XAxis", (int64)XAxis },
				{ "YAxis", (int64)YAxis },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
				{ "XAxis.DisplayName", "X Axis" },
				{ "YAxis.DisplayName", "Y Axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
				nullptr,
				"DynamicAxisType",
				"DynamicAxisType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AOWSTravelToMapActor_ErrorMapServerToTravelTo = FName(TEXT("ErrorMapServerToTravelTo"));
	void AOWSTravelToMapActor::ErrorMapServerToTravelTo(const FString& ErrorMsg)
	{
		OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms Parms;
		Parms.ErrorMsg=ErrorMsg;
		ProcessEvent(FindFunctionChecked(NAME_AOWSTravelToMapActor_ErrorMapServerToTravelTo),&Parms);
	}
	static FName NAME_AOWSTravelToMapActor_NotifyMapServerToTravelTo = FName(TEXT("NotifyMapServerToTravelTo"));
	void AOWSTravelToMapActor::NotifyMapServerToTravelTo(const FString& ServerAndPort)
	{
		OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms Parms;
		Parms.ServerAndPort=ServerAndPort;
		ProcessEvent(FindFunctionChecked(NAME_AOWSTravelToMapActor_NotifyMapServerToTravelTo),&Parms);
	}
	void AOWSTravelToMapActor::StaticRegisterNativesAOWSTravelToMapActor()
	{
		UClass* Class = AOWSTravelToMapActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCartesianFromSpherical", &AOWSTravelToMapActor::execGetCartesianFromSpherical },
			{ "GetMapServerToTravelTo", &AOWSTravelToMapActor::execGetMapServerToTravelTo },
			{ "GetSphericalFromCartesian", &AOWSTravelToMapActor::execGetSphericalFromCartesian },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "ErrorMapServerToTravelTo", sizeof(OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms), Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics
	{
		struct OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms
		{
			FVector2D ShpericalVector;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShpericalVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::NewProp_ShpericalVector = { "ShpericalVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms, ShpericalVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::NewProp_ShpericalVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "GetCartesianFromSpherical", sizeof(OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms), Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics
	{
		struct OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms
		{
			APlayerController* PlayerController;
			TEnumAsByte<ERPGSchemeToChooseMap::SchemeToChooseMap> SelectedSchemeToChooseMap;
			int32 WorldServerID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorldServerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedSchemeToChooseMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_WorldServerID = { "WorldServerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms, WorldServerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_SelectedSchemeToChooseMap = { "SelectedSchemeToChooseMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms, SelectedSchemeToChooseMap), Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_WorldServerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_SelectedSchemeToChooseMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "GetMapServerToTravelTo", sizeof(OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms), Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics
	{
		struct OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms
		{
			FVector CartesianVector;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CartesianVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::NewProp_CartesianVector = { "CartesianVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms, CartesianVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::NewProp_CartesianVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "GetSphericalFromCartesian", sizeof(OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms), Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerAndPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerAndPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort = { "ServerAndPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms, ServerAndPort), METADATA_PARAMS(Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "NotifyMapServerToTravelTo", sizeof(OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms), Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSTravelToMapActor_NoRegister()
	{
		return AOWSTravelToMapActor::StaticClass();
	}
	struct Z_Construct_UClass_AOWSTravelToMapActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravelTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TravelTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPIPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPIPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPGAPICustomerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RPGAPICustomerKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicSpawnRotationOffeset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicSpawnRotationOffeset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDynamicSpawnRotation_MetaData[];
#endif
		static void NewProp_UseDynamicSpawnRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDynamicSpawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicSpawnAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DynamicSpawnAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertDynamicAxisOffset_MetaData[];
#endif
		static void NewProp_InvertDynamicAxisOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertDynamicAxisOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDynamicSpawnLocation_MetaData[];
#endif
		static void NewProp_UseDynamicSpawnLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDynamicSpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOnMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOnMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSTravelToMapActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSTravelToMapActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo, "ErrorMapServerToTravelTo" }, // 666376267
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical, "GetCartesianFromSpherical" }, // 1259565440
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo, "GetMapServerToTravelTo" }, // 827572312
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian, "GetSphericalFromCartesian" }, // 3976265520
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo, "NotifyMapServerToTravelTo" }, // 85238763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSTravelToMapActor.h" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_TravelTimeout_MetaData[] = {
		{ "Category", "Connection" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_TravelTimeout = { "TravelTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSTravelToMapActor, TravelTimeout), METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_TravelTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_TravelTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPIPath = { "RPGAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSTravelToMapActor, RPGAPIPath), METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPIPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPIPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPICustomerKey_MetaData[] = {
		{ "Category", "OWSTravelToMapActor" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPICustomerKey = { "RPGAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSTravelToMapActor, RPGAPICustomerKey), METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPICustomerKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPICustomerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnRotationOffeset_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnRotationOffeset = { "DynamicSpawnRotationOffeset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSTravelToMapActor, DynamicSpawnRotationOffeset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnRotationOffeset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnRotationOffeset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	void Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation_SetBit(void* Obj)
	{
		((AOWSTravelToMapActor*)Obj)->UseDynamicSpawnRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation = { "UseDynamicSpawnRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSTravelToMapActor), &Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnAxis_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnAxis = { "DynamicSpawnAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSTravelToMapActor, DynamicSpawnAxis), Z_Construct_UEnum_OWSPlugin_DynamicAxisType, METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	void Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset_SetBit(void* Obj)
	{
		((AOWSTravelToMapActor*)Obj)->InvertDynamicAxisOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset = { "InvertDynamicAxisOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSTravelToMapActor), &Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	void Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation_SetBit(void* Obj)
	{
		((AOWSTravelToMapActor*)Obj)->UseDynamicSpawnLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation = { "UseDynamicSpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSTravelToMapActor), &Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_StartingRotation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_StartingRotation = { "StartingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSTravelToMapActor, StartingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_StartingRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_StartingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_LocationOnMap_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_LocationOnMap = { "LocationOnMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSTravelToMapActor, LocationOnMap), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_LocationOnMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_LocationOnMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_ZoneName_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSTravelToMapActor, ZoneName), METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_ZoneName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_ZoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSTravelToMapActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_TravelTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPIPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_RPGAPICustomerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnRotationOffeset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_StartingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_LocationOnMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_ZoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSTravelToMapActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSTravelToMapActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::ClassParams = {
		&AOWSTravelToMapActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSTravelToMapActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSTravelToMapActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSTravelToMapActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSTravelToMapActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSTravelToMapActor, 998413924);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSTravelToMapActor>()
	{
		return AOWSTravelToMapActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSTravelToMapActor(Z_Construct_UClass_AOWSTravelToMapActor, &AOWSTravelToMapActor::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSTravelToMapActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSTravelToMapActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
