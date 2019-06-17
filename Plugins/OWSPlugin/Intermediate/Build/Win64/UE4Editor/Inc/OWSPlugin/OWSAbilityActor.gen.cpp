// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityActor() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAbilityActor_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAbilityActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSBasicAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	void AOWSAbilityActor::StaticRegisterNativesAOWSAbilityActor()
	{
	}
	UClass* Z_Construct_UClass_AOWSAbilityActor_NoRegister()
	{
		return AOWSAbilityActor::StaticClass();
	}
	struct Z_Construct_UClass_AOWSAbilityActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OWSBasicAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OWSBasicAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSAbilityActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAbilityActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSAbilityActor.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_OWSBasicAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAbilityActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_OWSBasicAttributes = { "OWSBasicAttributes", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAbilityActor, OWSBasicAttributes), Z_Construct_UClass_UOWSBasicAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_OWSBasicAttributes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_OWSBasicAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAbilityActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSAbilityActor, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_AbilitySystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_AbilitySystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSAbilityActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_OWSBasicAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_AbilitySystem,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOWSAbilityActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AOWSAbilityActor, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSAbilityActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSAbilityActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSAbilityActor_Statics::ClassParams = {
		&AOWSAbilityActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWSAbilityActor_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AOWSAbilityActor_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSAbilityActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSAbilityActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSAbilityActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSAbilityActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSAbilityActor, 945126058);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSAbilityActor>()
	{
		return AOWSAbilityActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSAbilityActor(Z_Construct_UClass_AOWSAbilityActor, &AOWSAbilityActor::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSAbilityActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSAbilityActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
