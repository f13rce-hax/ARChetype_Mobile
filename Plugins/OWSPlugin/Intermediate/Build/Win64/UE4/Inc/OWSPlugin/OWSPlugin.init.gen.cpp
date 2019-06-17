// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSPlugin_init() {}
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_NetworkSyncDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitOverlapDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_NetworkSyncDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_WaitOverlapDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_OWSApplyRootMotionConstantForceDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/OWSPlugin",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCD6FF73F,
				0x9B5DE1BB,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
