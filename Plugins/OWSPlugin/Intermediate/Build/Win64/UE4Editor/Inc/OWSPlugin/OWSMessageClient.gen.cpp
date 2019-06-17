// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSMessageClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSMessageClient() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSMessageClient_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSMessageClient();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation();
// End Cross Module References
	void AOWSMessageClient::StaticRegisterNativesAOWSMessageClient()
	{
		UClass* Class = AOWSMessageClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendPlayerLocation", &AOWSMessageClient::execSendPlayerLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics
	{
		struct OWSMessageClient_eventSendPlayerLocation_Parms
		{
			FString PlayerName;
			FString ZoneNamesToNotify;
			int32 CharacterModel;
			FString AdditionalCharacterSettings;
			float X;
			float Y;
			float Z;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalCharacterSettings;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CharacterModel;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ZoneNamesToNotify;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageClient_eventSendPlayerLocation_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageClient_eventSendPlayerLocation_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageClient_eventSendPlayerLocation_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_AdditionalCharacterSettings = { "AdditionalCharacterSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageClient_eventSendPlayerLocation_Parms, AdditionalCharacterSettings), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_CharacterModel = { "CharacterModel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageClient_eventSendPlayerLocation_Parms, CharacterModel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_ZoneNamesToNotify = { "ZoneNamesToNotify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageClient_eventSendPlayerLocation_Parms, ZoneNamesToNotify), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSMessageClient_eventSendPlayerLocation_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_AdditionalCharacterSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_CharacterModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_ZoneNamesToNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::NewProp_PlayerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSMessageClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSMessageClient, nullptr, "SendPlayerLocation", sizeof(OWSMessageClient_eventSendPlayerLocation_Parms), Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSMessageClient_NoRegister()
	{
		return AOWSMessageClient::StaticClass();
	}
	struct Z_Construct_UClass_AOWSMessageClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSMessageClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSMessageClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSMessageClient_SendPlayerLocation, "SendPlayerLocation" }, // 4270621291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSMessageClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSMessageClient.h" },
		{ "ModuleRelativePath", "Public/OWSMessageClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSMessageClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSMessageClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSMessageClient_Statics::ClassParams = {
		&AOWSMessageClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSMessageClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSMessageClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSMessageClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSMessageClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSMessageClient, 141008724);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSMessageClient>()
	{
		return AOWSMessageClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSMessageClient(Z_Construct_UClass_AOWSMessageClient, &AOWSMessageClient::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSMessageClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSMessageClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
