// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetActor() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle();
// End Cross Module References
	void AOWSGameplayAbilityTargetActor::StaticRegisterNativesAOWSGameplayAbilityTargetActor()
	{
	}
	UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_NoRegister()
	{
		return AOWSGameplayAbilityTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OWSFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OWSFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSGameplayAbilityTargetActor.h" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::NewProp_OWSFilter_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::NewProp_OWSFilter = { "OWSFilter", nullptr, (EPropertyFlags)0x0011000000000024, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor, OWSFilter), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle, METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::NewProp_OWSFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::NewProp_OWSFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::NewProp_OWSFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityTargetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::ClassParams = {
		&AOWSGameplayAbilityTargetActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSGameplayAbilityTargetActor, 2317069650);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityTargetActor>()
	{
		return AOWSGameplayAbilityTargetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSGameplayAbilityTargetActor(Z_Construct_UClass_AOWSGameplayAbilityTargetActor, &AOWSGameplayAbilityTargetActor::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSGameplayAbilityTargetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityTargetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
