// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacterBase() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterBase_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSCharacterMovementComponent_NoRegister();
// End Cross Module References
	void AOWSCharacterBase::StaticRegisterNativesAOWSCharacterBase()
	{
		UClass* Class = AOWSCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOWSMovementComponent", &AOWSCharacterBase::execGetOWSMovementComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics
	{
		struct OWSCharacterBase_eventGetOWSMovementComponent_Parms
		{
			UOWSCharacterMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterBase_eventGetOWSMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UOWSCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/OWSCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterBase, nullptr, "GetOWSMovementComponent", sizeof(OWSCharacterBase_eventGetOWSMovementComponent_Parms), Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSCharacterBase_NoRegister()
	{
		return AOWSCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AOWSCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTransferringBetweenMaps_MetaData[];
#endif
		static void NewProp_IsTransferringBetweenMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTransferringBetweenMaps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent, "GetOWSMovementComponent" }, // 584675137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OWSCharacterBase.h" },
		{ "ModuleRelativePath", "Public/OWSCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps_MetaData[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/OWSCharacterBase.h" },
	};
#endif
	void Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps_SetBit(void* Obj)
	{
		((AOWSCharacterBase*)Obj)->IsTransferringBetweenMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps = { "IsTransferringBetweenMaps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSCharacterBase), &Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSCharacterBase_Statics::ClassParams = {
		&AOWSCharacterBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSCharacterBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSCharacterBase, 3321348748);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSCharacterBase>()
	{
		return AOWSCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSCharacterBase(Z_Construct_UClass_AOWSCharacterBase, &AOWSCharacterBase::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
