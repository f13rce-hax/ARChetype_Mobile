// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSInventoryItem() {}
// Cross Module References
	OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ItemCategories();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemStruct();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSInventoryItem_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSInventoryItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* ItemCategories_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_ItemCategories, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ItemCategories"));
		}
		return Singleton;
	}
	template<> OWSPLUGIN_API UEnum* StaticEnum<ItemCategories>()
	{
		return ItemCategories_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ItemCategories(ItemCategories_StaticEnum, TEXT("/Script/OWSPlugin"), TEXT("ItemCategories"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OWSPlugin_ItemCategories_Hash() { return 4260976827U; }
	UEnum* Z_Construct_UEnum_OWSPlugin_ItemCategories()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ItemCategories"), 0, Get_Z_Construct_UEnum_OWSPlugin_ItemCategories_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Consumable", (int64)Consumable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Consumable.DisplayName", "Consumable" },
				{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
				nullptr,
				"ItemCategories",
				"ItemCategories",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInventoryItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FInventoryItemStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemStruct, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("InventoryItemStruct"), sizeof(FInventoryItemStruct), Get_Z_Construct_UScriptStruct_FInventoryItemStruct_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FInventoryItemStruct>()
{
	return FInventoryItemStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryItemStruct(FInventoryItemStruct::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("InventoryItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFInventoryItemStruct
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFInventoryItemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventoryItemStruct")),new UScriptStruct::TCppStructOps<FInventoryItemStruct>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFInventoryItemStruct;
	struct Z_Construct_UScriptStruct_FInventoryItemStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerInstanceCustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureToUseForIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextureToUseForIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkeletalMeshPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticMeshPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponActorClassPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponActorClassPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeCurrencyPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FreeCurrencyPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumCurrencyPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PremiumCurrencyPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeDestroyed_MetaData[];
#endif
		static void NewProp_CanBeDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeDropped_MetaData[];
#endif
		static void NewProp_CanBeDropped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlotNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSlotNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemTier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquipmentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTypeQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemTypeQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTypeDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemTypeDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemTypeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfUsesLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfUsesLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsConsumedOnUse_MetaData[];
#endif
		static void NewProp_IsConsumedOnUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsConsumedOnUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUsable_MetaData[];
#endif
		static void NewProp_IsUsable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUsable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemStackSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCanStack_MetaData[];
#endif
		static void NewProp_ItemCanStack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ItemCanStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueItemGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueItemGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PerInstanceCustomData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PerInstanceCustomData = { "PerInstanceCustomData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, PerInstanceCustomData), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PerInstanceCustomData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PerInstanceCustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureIcon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureIcon = { "TextureIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, TextureIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureIcon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureToUseForIcon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Inventory\")\n               USkeletalMesh* SkeletalMesh = nullptr;" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureToUseForIcon = { "TextureToUseForIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, TextureToUseForIcon), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureToUseForIcon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureToUseForIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_SkeletalMeshPath_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Inventory\")\n               UStaticMesh* StaticMesh = nullptr;" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, SkeletalMeshPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_SkeletalMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_SkeletalMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_StaticMeshPath_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Inventory\")\n               TSubclassOf<class AActor> WeaponActorClass = nullptr;" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_StaticMeshPath = { "StaticMeshPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, StaticMeshPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_StaticMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_StaticMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_WeaponActorClassPath_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_WeaponActorClassPath = { "WeaponActorClassPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, WeaponActorClassPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_WeaponActorClassPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_WeaponActorClassPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_FreeCurrencyPrice_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_FreeCurrencyPrice = { "FreeCurrencyPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, FreeCurrencyPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_FreeCurrencyPrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_FreeCurrencyPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PremiumCurrencyPrice_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PremiumCurrencyPrice = { "PremiumCurrencyPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, PremiumCurrencyPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PremiumCurrencyPrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PremiumCurrencyPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed_SetBit(void* Obj)
	{
		((FInventoryItemStruct*)Obj)->CanBeDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed = { "CanBeDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped_SetBit(void* Obj)
	{
		((FInventoryItemStruct*)Obj)->CanBeDropped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped = { "CanBeDropped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDuration_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDuration = { "ItemDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, Condition), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Condition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InSlotNumber_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InSlotNumber = { "InSlotNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, InSlotNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InSlotNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InSlotNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CustomData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, CustomData), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CustomData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemQuality_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemQuality = { "ItemQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTier_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTier = { "ItemTier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemTier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentSlotType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentSlotType = { "EquipmentSlotType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, EquipmentSlotType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentSlotType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentSlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, EquipmentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UserItemType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UserItemType = { "UserItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, UserItemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UserItemType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UserItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeQuality_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeQuality = { "ItemTypeQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemTypeQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeDescription_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeDescription = { "ItemTypeDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemTypeDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeID = { "ItemTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemTypeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemWeight_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_NumberOfUsesLeft_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_NumberOfUsesLeft = { "NumberOfUsesLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, NumberOfUsesLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_NumberOfUsesLeft_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_NumberOfUsesLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse_SetBit(void* Obj)
	{
		((FInventoryItemStruct*)Obj)->IsConsumedOnUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse = { "IsConsumedOnUse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable_SetBit(void* Obj)
	{
		((FInventoryItemStruct*)Obj)->IsUsable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable = { "IsUsable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemStackSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemStackSize = { "ItemStackSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemStackSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemStackSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemStackSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack_SetBit(void* Obj)
	{
		((FInventoryItemStruct*)Obj)->ItemCanStack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack = { "ItemCanStack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemValue_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemValue = { "ItemValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Quantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UniqueItemGUID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UniqueItemGUID = { "UniqueItemGUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, UniqueItemGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UniqueItemGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UniqueItemGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InventoryName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, InventoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InventoryName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InventoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PerInstanceCustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureToUseForIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_SkeletalMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_StaticMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_WeaponActorClassPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_FreeCurrencyPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PremiumCurrencyPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InSlotNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UserItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_NumberOfUsesLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemStackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UniqueItemGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InventoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"InventoryItemStruct",
		sizeof(FInventoryItemStruct),
		alignof(FInventoryItemStruct),
		Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryItemStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryItemStruct"), sizeof(FInventoryItemStruct), Get_Z_Construct_UScriptStruct_FInventoryItemStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryItemStruct_Hash() { return 1406818649U; }
	void AOWSInventoryItem::StaticRegisterNativesAOWSInventoryItem()
	{
	}
	UClass* Z_Construct_UClass_AOWSInventoryItem_NoRegister()
	{
		return AOWSInventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_AOWSInventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InventoryItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanStack_MetaData[];
#endif
		static void NewProp_CanStack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSInventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSInventoryItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OWSInventoryItem.h" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemData = { "InventoryItemData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSInventoryItem, InventoryItemData), Z_Construct_UScriptStruct_FInventoryItemStruct, METADATA_PARAMS(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
		{ "ToolTip", "This can be used to define groups of items that work similarly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSInventoryItem, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemCategory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSInventoryItem, ItemCategory), Z_Construct_UEnum_OWSPlugin_ItemCategories, METADATA_PARAMS(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemCategory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
		{ "ToolTip", "(for SQL)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemName = { "InventoryItemName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSInventoryItem, InventoryItemName), METADATA_PARAMS(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSInventoryItem, ItemID), METADATA_PARAMS(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_StackSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSInventoryItem, StackSize), METADATA_PARAMS(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_StackSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_StackSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif
	void Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack_SetBit(void* Obj)
	{
		((AOWSInventoryItem*)Obj)->CanStack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack = { "CanStack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOWSInventoryItem), &Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_InventoryItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_StackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSInventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSInventoryItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSInventoryItem_Statics::ClassParams = {
		&AOWSInventoryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOWSInventoryItem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSInventoryItem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSInventoryItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSInventoryItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSInventoryItem, 1456768524);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSInventoryItem>()
	{
		return AOWSInventoryItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSInventoryItem(Z_Construct_UClass_AOWSInventoryItem, &AOWSInventoryItem::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSInventoryItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSInventoryItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
