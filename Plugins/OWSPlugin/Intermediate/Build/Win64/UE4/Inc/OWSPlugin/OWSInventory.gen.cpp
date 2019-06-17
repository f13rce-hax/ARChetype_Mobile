// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSInventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSInventory() {}
// Cross Module References
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventory_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_AddItemToInventory();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSInventoryItem_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_AddItemToSlot();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_AddStackToSlot();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventoryItemStack_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_FindItemIndex();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_GetStackInSlot();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_SetInventoryName();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_SetSize();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_UOWSInventory_SwapSlots();
// End Cross Module References
	void UOWSInventory::StaticRegisterNativesUOWSInventory()
	{
		UClass* Class = UOWSInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &UOWSInventory::execAddItemToInventory },
			{ "AddItemToSlot", &UOWSInventory::execAddItemToSlot },
			{ "AddStackToSlot", &UOWSInventory::execAddStackToSlot },
			{ "FindFirstEmptySlot", &UOWSInventory::execFindFirstEmptySlot },
			{ "FindItemIndex", &UOWSInventory::execFindItemIndex },
			{ "GetStackInSlot", &UOWSInventory::execGetStackInSlot },
			{ "RemoveOneItemFromSlot", &UOWSInventory::execRemoveOneItemFromSlot },
			{ "RemoveStackFromSlot", &UOWSInventory::execRemoveStackFromSlot },
			{ "SetInventoryName", &UOWSInventory::execSetInventoryName },
			{ "SetSize", &UOWSInventory::execSetSize },
			{ "SwapSlots", &UOWSInventory::execSwapSlots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics
	{
		struct OWSInventory_eventAddItemToInventory_Parms
		{
			AOWSInventoryItem* Item;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OWSInventory_eventAddItemToInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSInventory_eventAddItemToInventory_Parms), &Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventAddItemToInventory_Parms, Item), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "AddItemToInventory", sizeof(OWSInventory_eventAddItemToInventory_Parms), Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics
	{
		struct OWSInventory_eventAddItemToSlot_Parms
		{
			AOWSInventoryItem* Item;
			int32 Slot;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventAddItemToSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventAddItemToSlot_Parms, Item), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "AddItemToSlot", sizeof(OWSInventory_eventAddItemToSlot_Parms), Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_AddItemToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics
	{
		struct OWSInventory_eventAddStackToSlot_Parms
		{
			UOWSInventoryItemStack* ItemStack;
			int32 Slot;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventAddStackToSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::NewProp_ItemStack = { "ItemStack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventAddStackToSlot_Parms, ItemStack), Z_Construct_UClass_UOWSInventoryItemStack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::NewProp_ItemStack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "AddStackToSlot", sizeof(OWSInventory_eventAddStackToSlot_Parms), Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_AddStackToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics
	{
		struct OWSInventory_eventFindFirstEmptySlot_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventFindFirstEmptySlot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "FindFirstEmptySlot", sizeof(OWSInventory_eventFindFirstEmptySlot_Parms), Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics
	{
		struct OWSInventory_eventFindItemIndex_Parms
		{
			FName InventoryItemName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InventoryItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventFindItemIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::NewProp_InventoryItemName = { "InventoryItemName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventFindItemIndex_Parms, InventoryItemName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::NewProp_InventoryItemName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "FindItemIndex", sizeof(OWSInventory_eventFindItemIndex_Parms), Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_FindItemIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics
	{
		struct OWSInventory_eventGetStackInSlot_Parms
		{
			int32 Slot;
			UOWSInventoryItemStack* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventGetStackInSlot_Parms, ReturnValue), Z_Construct_UClass_UOWSInventoryItemStack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventGetStackInSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "GetStackInSlot", sizeof(OWSInventory_eventGetStackInSlot_Parms), Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_GetStackInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics
	{
		struct OWSInventory_eventRemoveOneItemFromSlot_Parms
		{
			int32 Slot;
			AOWSInventoryItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventRemoveOneItemFromSlot_Parms, ReturnValue), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventRemoveOneItemFromSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "RemoveOneItemFromSlot", sizeof(OWSInventory_eventRemoveOneItemFromSlot_Parms), Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics
	{
		struct OWSInventory_eventRemoveStackFromSlot_Parms
		{
			int32 Slot;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventRemoveStackFromSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "RemoveStackFromSlot", sizeof(OWSInventory_eventRemoveStackFromSlot_Parms), Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics
	{
		struct OWSInventory_eventSetInventoryName_Parms
		{
			FName inInventoryName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_inInventoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::NewProp_inInventoryName = { "inInventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventSetInventoryName_Parms, inInventoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::NewProp_inInventoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "SetInventoryName", sizeof(OWSInventory_eventSetInventoryName_Parms), Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_SetInventoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_SetSize_Statics
	{
		struct OWSInventory_eventSetSize_Parms
		{
			int32 Size;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_SetSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventSetSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_SetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SetSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_SetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "SetSize", sizeof(OWSInventory_eventSetSize_Parms), Z_Construct_UFunction_UOWSInventory_SetSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_SetSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics
	{
		struct OWSInventory_eventSwapSlots_Parms
		{
			int32 SlotA;
			int32 SlotB;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotB;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::NewProp_SlotB = { "SlotB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventSwapSlots_Parms, SlotB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::NewProp_SlotA = { "SlotA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSInventory_eventSwapSlots_Parms, SlotA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::NewProp_SlotB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::NewProp_SlotA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "SwapSlots", sizeof(OWSInventory_eventSwapSlots_Parms), Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOWSInventory_SwapSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOWSInventory_NoRegister()
	{
		return UOWSInventory::StaticClass();
	}
	struct Z_Construct_UClass_UOWSInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotsPerGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotsPerGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfGroupsUnlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfGroupsUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InventoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemStacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryItemStacks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItemStacks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOWSInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOWSInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSInventory_AddItemToInventory, "AddItemToInventory" }, // 4252040795
		{ &Z_Construct_UFunction_UOWSInventory_AddItemToSlot, "AddItemToSlot" }, // 1282433717
		{ &Z_Construct_UFunction_UOWSInventory_AddStackToSlot, "AddStackToSlot" }, // 1676353456
		{ &Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlot, "FindFirstEmptySlot" }, // 4290514098
		{ &Z_Construct_UFunction_UOWSInventory_FindItemIndex, "FindItemIndex" }, // 2880805003
		{ &Z_Construct_UFunction_UOWSInventory_GetStackInSlot, "GetStackInSlot" }, // 792063073
		{ &Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot, "RemoveOneItemFromSlot" }, // 546850565
		{ &Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot, "RemoveStackFromSlot" }, // 3244928035
		{ &Z_Construct_UFunction_UOWSInventory_SetInventoryName, "SetInventoryName" }, // 1162865513
		{ &Z_Construct_UFunction_UOWSInventory_SetSize, "SetSize" }, // 3090489434
		{ &Z_Construct_UFunction_UOWSInventory_SwapSlots, "SwapSlots" }, // 1507393018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSInventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWSInventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSInventory_Statics::NewProp_SlotsPerGroup_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_SlotsPerGroup = { "SlotsPerGroup", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSInventory, SlotsPerGroup), METADATA_PARAMS(Z_Construct_UClass_UOWSInventory_Statics::NewProp_SlotsPerGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::NewProp_SlotsPerGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfGroupsUnlocked_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfGroupsUnlocked = { "NumberOfGroupsUnlocked", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSInventory, NumberOfGroupsUnlocked), METADATA_PARAMS(Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfGroupsUnlocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfGroupsUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSInventory, InventoryName), METADATA_PARAMS(Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks = { "InventoryItemStacks", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOWSInventory, InventoryItemStacks), METADATA_PARAMS(Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks_Inner = { "InventoryItemStacks", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UOWSInventoryItemStack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_SlotsPerGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfGroupsUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOWSInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOWSInventory_Statics::ClassParams = {
		&UOWSInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOWSInventory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOWSInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOWSInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOWSInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOWSInventory, 4075289823);
	template<> OWSPLUGIN_API UClass* StaticClass<UOWSInventory>()
	{
		return UOWSInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOWSInventory(Z_Construct_UClass_UOWSInventory, &UOWSInventory::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("UOWSInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
