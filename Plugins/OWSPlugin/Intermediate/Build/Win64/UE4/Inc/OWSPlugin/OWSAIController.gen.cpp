// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAIController() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAIController_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSAIController_SetTeamNumber();
// End Cross Module References
	void AOWSAIController::StaticRegisterNativesAOWSAIController()
	{
		UClass* Class = AOWSAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTeamNumber", &AOWSAIController::execSetTeamNumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics
	{
		struct OWSAIController_eventSetTeamNumber_Parms
		{
			int32 TeamNumber;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::NewProp_TeamNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSAIController_eventSetTeamNumber_Parms, TeamNumber), METADATA_PARAMS(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::NewProp_TeamNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::NewProp_TeamNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::NewProp_TeamNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/OWSAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAIController, nullptr, "SetTeamNumber", sizeof(OWSAIController_eventSetTeamNumber_Parms), Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSAIController_SetTeamNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSAIController_NoRegister()
	{
		return AOWSAIController::StaticClass();
	}
	struct Z_Construct_UClass_AOWSAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSAIController_SetTeamNumber, "SetTeamNumber" }, // 153793451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OWSAIController.h" },
		{ "ModuleRelativePath", "Public/OWSAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSAIController_Statics::ClassParams = {
		&AOWSAIController::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSAIController, 4080808049);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSAIController>()
	{
		return AOWSAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSAIController(Z_Construct_UClass_AOWSAIController, &AOWSAIController::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
