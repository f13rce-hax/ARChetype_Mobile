// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetAct_Cone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetAct_Cone() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AOWSGameplayAbilityTargetAct_Cone::StaticRegisterNativesAOWSGameplayAbilityTargetAct_Cone()
	{
	}
	UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_NoRegister()
	{
		return AOWSGameplayAbilityTargetAct_Cone::StaticClass();
	}
	struct Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWSGameplayAbilityTargetAct_Cone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetAct_Cone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_ForwardVector_MetaData[] = {
		{ "Category", "Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetAct_Cone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetAct_Cone, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_ForwardVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_ForwardVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_HalfAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetAct_Cone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_HalfAngle = { "HalfAngle", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetAct_Cone, HalfAngle), METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_HalfAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_HalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Radius" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetAct_Cone.h" },
		{ "ToolTip", "Radius of target acquisition around the ability's start location." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetAct_Cone, Radius), METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_ForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_HalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityTargetAct_Cone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::ClassParams = {
		&AOWSGameplayAbilityTargetAct_Cone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSGameplayAbilityTargetAct_Cone, 3429149206);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityTargetAct_Cone>()
	{
		return AOWSGameplayAbilityTargetAct_Cone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSGameplayAbilityTargetAct_Cone(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone, &AOWSGameplayAbilityTargetAct_Cone::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSGameplayAbilityTargetAct_Cone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityTargetAct_Cone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
