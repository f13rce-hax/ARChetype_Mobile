// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSDontRepToOwnerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSDontRepToOwnerActor() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSDontRepToOwnerActor_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSDontRepToOwnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References
	void AOWSDontRepToOwnerActor::StaticRegisterNativesAOWSDontRepToOwnerActor()
	{
	}
	UClass* Z_Construct_UClass_AOWSDontRepToOwnerActor_NoRegister()
	{
		return AOWSDontRepToOwnerActor::StaticClass();
	}
	struct Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSDontRepToOwnerActor.h" },
		{ "ModuleRelativePath", "Public/OWSDontRepToOwnerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSDontRepToOwnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::ClassParams = {
		&AOWSDontRepToOwnerActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSDontRepToOwnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSDontRepToOwnerActor, 1189164285);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSDontRepToOwnerActor>()
	{
		return AOWSDontRepToOwnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSDontRepToOwnerActor(Z_Construct_UClass_AOWSDontRepToOwnerActor, &AOWSDontRepToOwnerActor::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSDontRepToOwnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSDontRepToOwnerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
