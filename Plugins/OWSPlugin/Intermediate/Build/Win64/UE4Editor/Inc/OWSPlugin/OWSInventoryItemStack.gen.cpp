// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSInventoryItemStack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSInventoryItemStack() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventoryItemStack_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventoryItemStack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSInventoryItem_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack();
// End Cross Module References
	void UOWSInventoryItemStack::StaticRegisterNativesUOWSInventoryItemStack()
	{
		UClass* Class = UOWSInventoryItemStack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToStack", &UOWSInventoryItemStack::execAddToStack },
			{ "GetTopItemFromStack", &UOWSInventoryItemStack::execGetTopItemFromStack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics
	{
		struct OWSInventoryItemStack_eventAddToStack_Parms
		{
			AOWSInventoryItem* InventoryItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventoryItemStack_eventAddToStack_Parms, InventoryItem), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::NewProp_InventoryItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "InventoryStack" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventoryItemStack, nullptr, "AddToStack", sizeof(OWSInventoryItemStack_eventAddToStack_Parms), Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics
	{
		struct OWSInventoryItemStack_eventGetTopItemFromStack_Parms
		{
			AOWSInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventoryItemStack_eventGetTopItemFromStack_Parms, ReturnValue), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "InventoryStack" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventoryItemStack, nullptr, "GetTopItemFromStack", sizeof(OWSInventoryItemStack_eventGetTopItemFromStack_Parms), Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSInventoryItemStack_NoRegister()
	{
		return UOWSInventoryItemStack::StaticClass();
	}
	struct Z_Construct_UClass_UOWSInventoryItemStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryItems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSInventoryItemStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSInventoryItemStack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack, "AddToStack" }, // 3013062210
		{ &Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack, "GetTopItemFromStack" }, // 2189356099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSInventoryItemStack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSInventoryItemStack.h" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems = { "InventoryItems", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSInventoryItemStack, InventoryItems), METADATA_PARAMS(Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems_Inner = { "InventoryItems", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSInventoryItemStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSInventoryItemStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSInventoryItemStack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSInventoryItemStack_Statics::ClassParams = {
		&UOWSInventoryItemStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSInventoryItemStack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSInventoryItemStack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSInventoryItemStack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSInventoryItemStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSInventoryItemStack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSInventoryItemStack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSInventoryItemStack, 783975657);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSInventoryItemStack>()
	{
		return UOWSInventoryItemStack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSInventoryItemStack(Z_Construct_UClass_UOWSInventoryItemStack, &UOWSInventoryItemStack::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSInventoryItemStack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSInventoryItemStack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
