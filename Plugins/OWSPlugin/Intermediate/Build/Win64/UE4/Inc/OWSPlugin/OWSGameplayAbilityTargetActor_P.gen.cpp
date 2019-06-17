// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetActor_P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetActor_P() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void AOWSGameplayAbilityTargetActor_P::StaticRegisterNativesAOWSGameplayAbilityTargetActor_P()
	{
		UClass* Class = AOWSGameplayAbilityTargetActor_P::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTarget", &AOWSGameplayAbilityTargetActor_P::execCancelTarget },
			{ "ConfirmTarget", &AOWSGameplayAbilityTargetActor_P::execConfirmTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P, nullptr, "CancelTarget", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P, nullptr, "ConfirmTarget", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_NoRegister()
	{
		return AOWSGameplayAbilityTargetActor_P::StaticClass();
	}
	struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAtMouseCursor_MetaData[];
#endif
		static void NewProp_AimAtMouseCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AimAtMouseCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumTargetingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumTargetingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedActorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlacedActorMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlacedActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget, "CancelTarget" }, // 1756034425
		{ &Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget, "ConfirmTarget" }, // 2778376692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWSGameplayAbilityTargetActor_P.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
#endif
	void Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor_SetBit(void* Obj)
	{
		((AOWSGameplayAbilityTargetActor_P*)Obj)->AimAtMouseCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor = { "AimAtMouseCursor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSGameplayAbilityTargetActor_P), &Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_MinimumTargetingDistance_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_MinimumTargetingDistance = { "MinimumTargetingDistance", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_P, MinimumTargetingDistance), METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_MinimumTargetingDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_MinimumTargetingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorMaterial_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
		{ "ToolTip", "Override Material 0 on our placed actor's meshes with this material for visualization." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorMaterial = { "PlacedActorMaterial", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_P, PlacedActorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorClass_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
		{ "ToolTip", "Actor we intend to place." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorClass = { "PlacedActorClass", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_P, PlacedActorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_MinimumTargetingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityTargetActor_P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::ClassParams = {
		&AOWSGameplayAbilityTargetActor_P::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSGameplayAbilityTargetActor_P, 1931390967);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityTargetActor_P>()
	{
		return AOWSGameplayAbilityTargetActor_P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSGameplayAbilityTargetActor_P(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P, &AOWSGameplayAbilityTargetActor_P::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSGameplayAbilityTargetActor_P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityTargetActor_P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
