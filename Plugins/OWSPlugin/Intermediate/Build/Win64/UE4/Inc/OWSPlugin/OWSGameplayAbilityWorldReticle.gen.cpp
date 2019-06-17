// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityWorldReticle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityWorldReticle() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityWorldReticle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AOWSGameplayAbilityWorldReticle::StaticRegisterNativesAOWSGameplayAbilityWorldReticle()
	{
	}
	UClass* Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_NoRegister()
	{
		return AOWSGameplayAbilityWorldReticle::StaticClass();
	}
	struct Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizationComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisualizationComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualizationComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityWorldReticle,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSGameplayAbilityWorldReticle.h" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityWorldReticle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityWorldReticle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents = { "VisualizationComponents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityWorldReticle, VisualizationComponents), METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents_Inner = { "VisualizationComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityWorldReticle.h" },
		{ "ToolTip", "Hardcoded collision component, so other objects don't think they can collide with the visualization actor //DEPRECATED_FORGAME(4.6, \"CollisionComponent should not be accessed directly, please use GetCollisionComponent() function instead. CollisionComponent will soon be private and your code will not compile.\")" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityWorldReticle, CollisionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_CollisionComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityWorldReticle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::ClassParams = {
		&AOWSGameplayAbilityWorldReticle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSGameplayAbilityWorldReticle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSGameplayAbilityWorldReticle, 2800297957);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityWorldReticle>()
	{
		return AOWSGameplayAbilityWorldReticle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSGameplayAbilityWorldReticle(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle, &AOWSGameplayAbilityWorldReticle::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSGameplayAbilityWorldReticle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityWorldReticle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
