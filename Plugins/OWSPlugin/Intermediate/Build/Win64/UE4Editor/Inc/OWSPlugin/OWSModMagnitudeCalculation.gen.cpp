// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSModMagnitudeCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSModMagnitudeCalculation() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSModMagnitudeCalculation_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSModMagnitudeCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
// End Cross Module References
	void UOWSModMagnitudeCalculation::StaticRegisterNativesUOWSModMagnitudeCalculation()
	{
		UClass* Class = UOWSModMagnitudeCalculation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeCapture", &UOWSModMagnitudeCalculation::execGetAttributeCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics
	{
		struct OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms
		{
			FGameplayEffectSpec Spec;
			FGameplayAttribute Attribute;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Attribute_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Spec_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Spec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Spec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
		{ "ModuleRelativePath", "Public/OWSModMagnitudeCalculation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSModMagnitudeCalculation, nullptr, "GetAttributeCapture", sizeof(OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms), Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSModMagnitudeCalculation_NoRegister()
	{
		return UOWSModMagnitudeCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture, "GetAttributeCapture" }, // 31555380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSModMagnitudeCalculation.h" },
		{ "ModuleRelativePath", "Public/OWSModMagnitudeCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSModMagnitudeCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::ClassParams = {
		&UOWSModMagnitudeCalculation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSModMagnitudeCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSModMagnitudeCalculation, 449027056);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSModMagnitudeCalculation>()
	{
		return UOWSModMagnitudeCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSModMagnitudeCalculation(Z_Construct_UClass_UOWSModMagnitudeCalculation, &UOWSModMagnitudeCalculation::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSModMagnitudeCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSModMagnitudeCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
