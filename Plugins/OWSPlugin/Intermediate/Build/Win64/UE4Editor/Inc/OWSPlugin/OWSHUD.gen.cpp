// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSHUD() {}
// Cross Module References
	OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_EAnchorPoint();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFloatingDamage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSHUD_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventory_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventoryItemStack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* EAnchorPoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_EAnchorPoint, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("EAnchorPoint"));
		}
		return Singleton;
	}
	template<> OWSPLUGIN_API UEnum* StaticEnum<EAnchorPoint>()
	{
		return EAnchorPoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnchorPoint(EAnchorPoint_StaticEnum, TEXT("/Script/OWSPlugin"), TEXT("EAnchorPoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Hash() { return 1254475524U; }
	UEnum* Z_Construct_UEnum_OWSPlugin_EAnchorPoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnchorPoint"), 0, Get_Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TopLeft", (int64)TopLeft },
				{ "TopCenter", (int64)TopCenter },
				{ "TopRight", (int64)TopRight },
				{ "MiddleLeft", (int64)MiddleLeft },
				{ "MiddleCenter", (int64)MiddleCenter },
				{ "MiddleRight", (int64)MiddleRight },
				{ "BottomLeft", (int64)BottomLeft },
				{ "BottomCenter", (int64)BottomCenter },
				{ "BottomRight", (int64)BottomRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BottomCenter.DisplayName", "Bottom Center" },
				{ "BottomLeft.DisplayName", "Bottom Left" },
				{ "BottomRight.DisplayName", "Bottom Right" },
				{ "MiddleCenter.DisplayName", "Middle Center" },
				{ "MiddleLeft.DisplayName", "Middle Left" },
				{ "MiddleRight.DisplayName", "Middle Right" },
				{ "ModuleRelativePath", "Public/OWSHUD.h" },
				{ "TopCenter.DisplayName", "Top Center" },
				{ "TopLeft.DisplayName", "Top Left" },
				{ "TopRight.DisplayName", "Top Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
				nullptr,
				"EAnchorPoint",
				"EAnchorPoint",
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
class UScriptStruct* FFloatingDamage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OWSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FFloatingDamage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatingDamage, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("FloatingDamage"), sizeof(FFloatingDamage), Get_Z_Construct_UScriptStruct_FFloatingDamage_Hash());
	}
	return Singleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FFloatingDamage>()
{
	return FFloatingDamage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFloatingDamage(FFloatingDamage::StaticStruct, TEXT("/Script/OWSPlugin"), TEXT("FloatingDamage"), false, nullptr, nullptr);
static struct FScriptStruct_OWSPlugin_StaticRegisterNativesFFloatingDamage
{
	FScriptStruct_OWSPlugin_StaticRegisterNativesFFloatingDamage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FloatingDamage")),new UScriptStruct::TCppStructOps<FFloatingDamage>);
	}
} ScriptStruct_OWSPlugin_StaticRegisterNativesFFloatingDamage;
	struct Z_Construct_UScriptStruct_FFloatingDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOutline_MetaData[];
#endif
		static void NewProp_ShowOutline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDropShadow_MetaData[];
#endif
		static void NewProp_ShowDropShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDropShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedForDeletion_MetaData[];
#endif
		static void NewProp_MarkedForDeletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MarkedForDeletion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCritical_MetaData[];
#endif
		static void NewProp_IsCritical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHealing_MetaData[];
#endif
		static void NewProp_IsHealing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHealing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagedActorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamagedActorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTextLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageTextLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DamageText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatingDamage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline_SetBit(void* Obj)
	{
		((FFloatingDamage*)Obj)->ShowOutline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline = { "ShowOutline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow_SetBit(void* Obj)
	{
		((FFloatingDamage*)Obj)->ShowDropShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow = { "ShowDropShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion_SetBit(void* Obj)
	{
		((FFloatingDamage*)Obj)->MarkedForDeletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion = { "MarkedForDeletion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical_SetBit(void* Obj)
	{
		((FFloatingDamage*)Obj)->IsCritical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing_SetBit(void* Obj)
	{
		((FFloatingDamage*)Obj)->IsHealing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing = { "IsHealing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActorOffset_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActorOffset = { "DamagedActorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatingDamage, DamagedActorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActorOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActor_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatingDamage, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DisplayLocation_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DisplayLocation = { "DisplayLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatingDamage, DisplayLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DisplayLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DisplayLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatingDamage, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatingDamage, TimeLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_TimeLeft_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_TimeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageTextLength_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageTextLength = { "DamageTextLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatingDamage, DamageTextLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageTextLength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageTextLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageText_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageText = { "DamageText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatingDamage, DamageText), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatingDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DisplayLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_TimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageTextLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
		nullptr,
		&NewStructOps,
		"FloatingDamage",
		sizeof(FFloatingDamage),
		alignof(FFloatingDamage),
		Z_Construct_UScriptStruct_FFloatingDamage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatingDamage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatingDamage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatingDamage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatingDamage"), sizeof(FFloatingDamage), Get_Z_Construct_UScriptStruct_FFloatingDamage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatingDamage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatingDamage_Hash() { return 373078854U; }
	void AOWSHUD::StaticRegisterNativesAOWSHUD()
	{
		UClass* Class = AOWSHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFloatingDamageItem", &AOWSHUD::execAddFloatingDamageItem },
			{ "CalculateScreenPosition", &AOWSHUD::execCalculateScreenPosition },
			{ "CleanUpFloatingDamageItems", &AOWSHUD::execCleanUpFloatingDamageItems },
			{ "RenderFloatingDamage", &AOWSHUD::execRenderFloatingDamage },
			{ "RenderInteractiveInventoryGrid", &AOWSHUD::execRenderInteractiveInventoryGrid },
			{ "RenderInteractiveInventoryGridUsingLockedSlotGroups", &AOWSHUD::execRenderInteractiveInventoryGridUsingLockedSlotGroups },
			{ "SetSplitDialogTexture", &AOWSHUD::execSetSplitDialogTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics
	{
		struct OWSHUD_eventAddFloatingDamageItem_Parms
		{
			FString DamageText;
			AActor* DamagedActor;
			FVector DamagedActorOffset;
			bool IsHealing;
			bool IsCritical;
			bool ShowDropShadow;
			bool ShowOutline;
		};
		static void NewProp_ShowOutline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowOutline;
		static void NewProp_ShowDropShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDropShadow;
		static void NewProp_IsCritical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
		static void NewProp_IsHealing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHealing;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamagedActorOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DamageText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowOutline_SetBit(void* Obj)
	{
		((OWSHUD_eventAddFloatingDamageItem_Parms*)Obj)->ShowOutline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowOutline = { "ShowOutline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowOutline_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowDropShadow_SetBit(void* Obj)
	{
		((OWSHUD_eventAddFloatingDamageItem_Parms*)Obj)->ShowDropShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowDropShadow = { "ShowDropShadow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowDropShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsCritical_SetBit(void* Obj)
	{
		((OWSHUD_eventAddFloatingDamageItem_Parms*)Obj)->IsCritical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsHealing_SetBit(void* Obj)
	{
		((OWSHUD_eventAddFloatingDamageItem_Parms*)Obj)->IsHealing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsHealing = { "IsHealing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsHealing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamagedActorOffset = { "DamagedActorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventAddFloatingDamageItem_Parms, DamagedActorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventAddFloatingDamageItem_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamageText = { "DamageText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventAddFloatingDamageItem_Parms, DamageText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowDropShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsCritical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsHealing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamagedActorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamagedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamageText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "CPP_Default_IsCritical", "false" },
		{ "CPP_Default_IsHealing", "false" },
		{ "CPP_Default_ShowDropShadow", "false" },
		{ "CPP_Default_ShowOutline", "false" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "AddFloatingDamageItem", sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics
	{
		struct OWSHUD_eventCalculateScreenPosition_Parms
		{
			TEnumAsByte<EAnchorPoint> ScreenAnchorPoint;
			TEnumAsByte<EAnchorPoint> UIAnchorPoint;
			int32 OffsetX;
			int32 OffsetY;
			int32 UIWidth;
			int32 UIHeight;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UIHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UIWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIAnchorPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UIAnchorPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenAnchorPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenAnchorPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIHeight = { "UIHeight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, UIHeight), METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIHeight_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIWidth = { "UIWidth", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, UIWidth), METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIWidth_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, OffsetY), METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetY_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, OffsetX), METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetX_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIAnchorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIAnchorPoint = { "UIAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, UIAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIAnchorPoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIAnchorPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ScreenAnchorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ScreenAnchorPoint = { "ScreenAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, ScreenAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ScreenAnchorPoint_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ScreenAnchorPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIAnchorPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ScreenAnchorPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "CalculateScreenPosition", sizeof(OWSHUD_eventCalculateScreenPosition_Parms), Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "CleanUpFloatingDamageItems", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics
	{
		struct OWSHUD_eventRenderFloatingDamage_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderFloatingDamage_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderFloatingDamage", sizeof(OWSHUD_eventRenderFloatingDamage_Parms), Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics
	{
		struct OWSHUD_eventRenderInteractiveInventoryGrid_Parms
		{
			UOWSInventory* Inventory;
			UTexture* EmptySlotTexture;
			TEnumAsByte<EAnchorPoint> UIAnchorPoint;
			int32 X;
			int32 Y;
			int32 XSpacing;
			int32 YSpacing;
			int32 iconWidth;
			int32 iconHeight;
			int32 NumberOfRows;
			int32 NumberOfCols;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCols;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfRows;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iconHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iconWidth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_YSpacing;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XSpacing;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UIAnchorPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptySlotTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_NumberOfCols = { "NumberOfCols", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, NumberOfCols), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_NumberOfRows = { "NumberOfRows", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, NumberOfRows), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_iconHeight = { "iconHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, iconHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_iconWidth = { "iconWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, iconWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_YSpacing = { "YSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, YSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_XSpacing = { "XSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, XSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_UIAnchorPoint = { "UIAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, UIAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_EmptySlotTexture = { "EmptySlotTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, EmptySlotTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, Inventory), Z_Construct_UClass_UOWSInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_NumberOfCols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_NumberOfRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_iconHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_iconWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_YSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_XSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_UIAnchorPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_EmptySlotTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderInteractiveInventoryGrid", sizeof(OWSHUD_eventRenderInteractiveInventoryGrid_Parms), Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics
	{
		struct OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms
		{
			UOWSInventory* Inventory;
			UTexture* EmptySlotTexture;
			UTexture* LockedRowTexture;
			int32 X;
			int32 Y;
			int32 XSpacing;
			int32 YSpacing;
			int32 iconWidth;
			int32 iconHeight;
			int32 NumberOfRows;
			int32 NumberOfCols;
			int32 SlotGroupRows;
			int32 SlotGroupCols;
			int32 SlotGroupXSpacing;
			int32 SlotGroupYSpacing;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotGroupYSpacing;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotGroupXSpacing;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotGroupCols;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotGroupRows;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCols;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfRows;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iconHeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iconWidth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_YSpacing;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XSpacing;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedRowTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptySlotTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupYSpacing = { "SlotGroupYSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, SlotGroupYSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupXSpacing = { "SlotGroupXSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, SlotGroupXSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupCols = { "SlotGroupCols", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, SlotGroupCols), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupRows = { "SlotGroupRows", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, SlotGroupRows), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_NumberOfCols = { "NumberOfCols", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, NumberOfCols), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_NumberOfRows = { "NumberOfRows", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, NumberOfRows), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_iconHeight = { "iconHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, iconHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_iconWidth = { "iconWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, iconWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_YSpacing = { "YSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, YSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_XSpacing = { "XSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, XSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_LockedRowTexture = { "LockedRowTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, LockedRowTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_EmptySlotTexture = { "EmptySlotTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, EmptySlotTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, Inventory), Z_Construct_UClass_UOWSInventory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupYSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupXSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupCols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_NumberOfCols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_NumberOfRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_iconHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_iconWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_YSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_XSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_LockedRowTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_EmptySlotTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_Inventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderInteractiveInventoryGridUsingLockedSlotGroups", sizeof(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms), Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics
	{
		struct OWSHUD_eventSetSplitDialogTexture_Parms
		{
			UTexture* inSplitDialogTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inSplitDialogTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::NewProp_inSplitDialogTexture = { "inSplitDialogTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSHUD_eventSetSplitDialogTexture_Parms, inSplitDialogTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::NewProp_inSplitDialogTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "SetSplitDialogTexture", sizeof(OWSHUD_eventSetSplitDialogTexture_Parms), Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSHUD_NoRegister()
	{
		return AOWSHUD::StaticClass();
	}
	struct Z_Construct_UClass_AOWSHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStackBeingDragged_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemStackBeingDragged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatingDamageItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingDamageItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingFadeOutSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalHealingFadeOutSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingMinimumDisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalHealingMinimumDisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingOutlineFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingCriticalHealingOutlineFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingOutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalHealingOutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingDropShadowOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalHealingDropShadowOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingDropShadowOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalHealingDropShadowOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingDropShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalHealingDropShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalHealingFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalHealingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingCriticalHealingFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingFadeOutSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingHealingFadeOutSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingMinimumDisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingHealingMinimumDisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingOutlineFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingHealingOutlineFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingOutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingHealingOutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingDropShadowOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingHealingDropShadowOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingDropShadowOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingHealingDropShadowOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingDropShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingHealingDropShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingHealingFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingHealingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingHealingFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageFadeOutSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalDamageFadeOutSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageMinimumDisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalDamageMinimumDisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageOutlineFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingCriticalDamageOutlineFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageOutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalDamageOutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageDropShadowOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalDamageDropShadowOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageDropShadowOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalDamageDropShadowOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageDropShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalDamageDropShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalDamageFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalDamageSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingCriticalDamageFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageFadeOutSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingDamageFadeOutSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageMinimumDisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingDamageMinimumDisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageOutlineFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingDamageOutlineFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageOutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingDamageOutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageDropShadowOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingDamageDropShadowOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageDropShadowOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingDamageDropShadowOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageDropShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingDamageDropShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingDamageFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatingDamageSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingDamageFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem, "AddFloatingDamageItem" }, // 1457978025
		{ &Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition, "CalculateScreenPosition" }, // 2192494854
		{ &Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems, "CleanUpFloatingDamageItems" }, // 1808342807
		{ &Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage, "RenderFloatingDamage" }, // 2520032764
		{ &Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid, "RenderInteractiveInventoryGrid" }, // 1323690265
		{ &Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups, "RenderInteractiveInventoryGridUsingLockedSlotGroups" }, // 804153255
		{ &Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture, "SetSplitDialogTexture" }, // 3137367851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "OWSHUD.h" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_ItemStackBeingDragged_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_ItemStackBeingDragged = { "ItemStackBeingDragged", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, ItemStackBeingDragged), Z_Construct_UClass_UOWSInventoryItemStack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_ItemStackBeingDragged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_ItemStackBeingDragged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems = { "FloatingDamageItems", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageItems), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems_Inner = { "FloatingDamageItems", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFloatingDamage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFadeOutSpeed_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFadeOutSpeed = { "FloatingCriticalHealingFadeOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingFadeOutSpeed), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFadeOutSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFadeOutSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingMinimumDisplayTime_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingMinimumDisplayTime = { "FloatingCriticalHealingMinimumDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingMinimumDisplayTime), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingMinimumDisplayTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingMinimumDisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineFont_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineFont = { "FloatingCriticalHealingOutlineFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingOutlineFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineColor_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineColor = { "FloatingCriticalHealingOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetY_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetY = { "FloatingCriticalHealingDropShadowOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingDropShadowOffsetY), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetX_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetX = { "FloatingCriticalHealingDropShadowOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingDropShadowOffsetX), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowColor_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowColor = { "FloatingCriticalHealingDropShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingDropShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFontColor_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFontColor = { "FloatingCriticalHealingFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFontColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingSpeed_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingSpeed = { "FloatingCriticalHealingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFont_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFont = { "FloatingCriticalHealingFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFadeOutSpeed_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFadeOutSpeed = { "FloatingHealingFadeOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingFadeOutSpeed), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFadeOutSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFadeOutSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingMinimumDisplayTime_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingMinimumDisplayTime = { "FloatingHealingMinimumDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingMinimumDisplayTime), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingMinimumDisplayTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingMinimumDisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineFont_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineFont = { "FloatingHealingOutlineFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingOutlineFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineColor_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineColor = { "FloatingHealingOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetY_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetY = { "FloatingHealingDropShadowOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingDropShadowOffsetY), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetX_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetX = { "FloatingHealingDropShadowOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingDropShadowOffsetX), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowColor_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowColor = { "FloatingHealingDropShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingDropShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFontColor_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFontColor = { "FloatingHealingFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFontColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingSpeed_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingSpeed = { "FloatingHealingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFont_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFont = { "FloatingHealingFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFadeOutSpeed_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFadeOutSpeed = { "FloatingCriticalDamageFadeOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageFadeOutSpeed), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFadeOutSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFadeOutSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageMinimumDisplayTime_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageMinimumDisplayTime = { "FloatingCriticalDamageMinimumDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageMinimumDisplayTime), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageMinimumDisplayTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageMinimumDisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineFont_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineFont = { "FloatingCriticalDamageOutlineFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageOutlineFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineColor_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineColor = { "FloatingCriticalDamageOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetY_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetY = { "FloatingCriticalDamageDropShadowOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageDropShadowOffsetY), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetX_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetX = { "FloatingCriticalDamageDropShadowOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageDropShadowOffsetX), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowColor_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowColor = { "FloatingCriticalDamageDropShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageDropShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFontColor_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFontColor = { "FloatingCriticalDamageFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFontColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageSpeed_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageSpeed = { "FloatingCriticalDamageSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFont_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFont = { "FloatingCriticalDamageFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFadeOutSpeed_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFadeOutSpeed = { "FloatingDamageFadeOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageFadeOutSpeed), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFadeOutSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFadeOutSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageMinimumDisplayTime_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageMinimumDisplayTime = { "FloatingDamageMinimumDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageMinimumDisplayTime), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageMinimumDisplayTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageMinimumDisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineFont_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineFont = { "FloatingDamageOutlineFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageOutlineFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineColor_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineColor = { "FloatingDamageOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetY_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetY = { "FloatingDamageDropShadowOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageDropShadowOffsetY), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetX_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetX = { "FloatingDamageDropShadowOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageDropShadowOffsetX), METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowColor_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowColor = { "FloatingDamageDropShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageDropShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFontColor_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFontColor = { "FloatingDamageFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFontColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageSpeed_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageSpeed = { "FloatingDamageSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFont_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFont = { "FloatingDamageFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_ItemStackBeingDragged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFadeOutSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingMinimumDisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFadeOutSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingMinimumDisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFadeOutSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageMinimumDisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFadeOutSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageMinimumDisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSHUD_Statics::ClassParams = {
		&AOWSHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSHUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOWSHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSHUD, 2485070033);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSHUD>()
	{
		return AOWSHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSHUD(Z_Construct_UClass_AOWSHUD, &AOWSHUD::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
