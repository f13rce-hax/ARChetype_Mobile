// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSPlayerState() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerState_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSPlayerState_SetCharacterName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AOWSPlayerState::StaticRegisterNativesAOWSPlayerState()
	{
		UClass* Class = AOWSPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCharacterName", &AOWSPlayerState::execSetCharacterName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics
	{
		struct OWSPlayerState_eventSetCharacterName_Parms
		{
			FString CharacterName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSPlayerState_eventSetCharacterName_Parms, CharacterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::NewProp_CharacterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerState, nullptr, "SetCharacterName", sizeof(OWSPlayerState_eventSetCharacterName_Parms), Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSPlayerState_SetCharacterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSPlayerState_NoRegister()
	{
		return AOWSPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AOWSPlayerState_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultPawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStartRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStartRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStartLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSPlayerState_SetCharacterName, "SetCharacterName" }, // 2125565156
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OWSPlayerState.h" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_UserSessionGUID_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSPlayerState, UserSessionGUID), METADATA_PARAMS(Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_UserSessionGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_UserSessionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_DefaultPawnClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_DefaultPawnClass = { "DefaultPawnClass", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSPlayerState, DefaultPawnClass), METADATA_PARAMS(Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_DefaultPawnClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_DefaultPawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartRotation_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartRotation = { "PlayerStartRotation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSPlayerState, PlayerStartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartLocation_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartLocation = { "PlayerStartLocation", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSPlayerState, PlayerStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_UserSessionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_DefaultPawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSPlayerState_Statics::ClassParams = {
		&AOWSPlayerState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSPlayerState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSPlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSPlayerState, 1276483726);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSPlayerState>()
	{
		return AOWSPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSPlayerState(Z_Construct_UClass_AOWSPlayerState, &AOWSPlayerState::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
