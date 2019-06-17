// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacterWithAbilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacterWithAbilities() {}
// Cross Module References
	OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_AbilityInput();
	UPackage* Z_Construct_UPackage__Script_OWSPlugin();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterWithAbilities_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterWithAbilities();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAttributeSet_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage();
	OWSPLUGIN_API UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	static UEnum* AbilityInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_AbilityInput, Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AbilityInput"));
		}
		return Singleton;
	}
	template<> OWSPLUGIN_API UEnum* StaticEnum<AbilityInput>()
	{
		return AbilityInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AbilityInput(AbilityInput_StaticEnum, TEXT("/Script/OWSPlugin"), TEXT("AbilityInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OWSPlugin_AbilityInput_Hash() { return 3930546573U; }
	UEnum* Z_Construct_UEnum_OWSPlugin_AbilityInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OWSPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AbilityInput"), 0, Get_Z_Construct_UEnum_OWSPlugin_AbilityInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AbilityInput::UseAbility1", (int64)AbilityInput::UseAbility1 },
				{ "AbilityInput::UseAbility2", (int64)AbilityInput::UseAbility2 },
				{ "AbilityInput::UseAbility3", (int64)AbilityInput::UseAbility3 },
				{ "AbilityInput::UseAbility4", (int64)AbilityInput::UseAbility4 },
				{ "AbilityInput::UseAbility5", (int64)AbilityInput::UseAbility5 },
				{ "AbilityInput::UseAbility6", (int64)AbilityInput::UseAbility6 },
				{ "AbilityInput::UseAbility7", (int64)AbilityInput::UseAbility7 },
				{ "AbilityInput::UseAbility8", (int64)AbilityInput::UseAbility8 },
				{ "AbilityInput::UseAbility9", (int64)AbilityInput::UseAbility9 },
				{ "AbilityInput::UseAbility0", (int64)AbilityInput::UseAbility0 },
				{ "AbilityInput::UseWeapon1", (int64)AbilityInput::UseWeapon1 },
				{ "AbilityInput::UseWeapon2", (int64)AbilityInput::UseWeapon2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
				{ "UseAbility0.DisplayName", "Use Ability 0" },
				{ "UseAbility1.DisplayName", "UseAbility1" },
				{ "UseAbility2.DisplayName", "Use Ability 2" },
				{ "UseAbility2.ToolTip", "This maps the first ability(input ID should be 0 in int) to the action mapping(which you define in the project settings) by the name of \"UseAbility1\". \"Use Spell 1\" is the blueprint name of the element." },
				{ "UseAbility3.DisplayName", "Use Ability 3" },
				{ "UseAbility3.ToolTip", "Maps ability 2(input ID 1) to action mapping UseAbility2. \"Use Spell 2\" is mostly used for when the enum is a blueprint variable." },
				{ "UseAbility4.DisplayName", "Use Ability 4" },
				{ "UseAbility5.DisplayName", "Use Ability 5" },
				{ "UseAbility6.DisplayName", "Use Ability 6" },
				{ "UseAbility7.DisplayName", "Use Ability 7" },
				{ "UseAbility8.DisplayName", "Use Ability 8" },
				{ "UseAbility9.DisplayName", "Use Ability 9" },
				{ "UseWeapon1.DisplayName", "Use Weapon 1" },
				{ "UseWeapon2.DisplayName", "Use Weapon 2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
				nullptr,
				"AbilityInput",
				"AbilityInput",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AOWSCharacterWithAbilities_CalculateUpdatedDamage = FName(TEXT("CalculateUpdatedDamage"));
	void AOWSCharacterWithAbilities::CalculateUpdatedDamage(float OriginalDamage, const UOWSAttributeSet* SourceAttributes, FGameplayTagContainer EffectTags, float& NewDamage, bool& IsCritical)
	{
		OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms Parms;
		Parms.OriginalDamage=OriginalDamage;
		Parms.SourceAttributes=SourceAttributes;
		Parms.EffectTags=EffectTags;
		Parms.NewDamage=NewDamage;
		Parms.IsCritical=IsCritical ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacterWithAbilities_CalculateUpdatedDamage),&Parms);
		NewDamage=Parms.NewDamage;
		IsCritical=Parms.IsCritical;
	}
	static FName NAME_AOWSCharacterWithAbilities_OnDeath = FName(TEXT("OnDeath"));
	void AOWSCharacterWithAbilities::OnDeath(AOWSCharacter* WhoKilledMe)
	{
		OWSCharacterWithAbilities_eventOnDeath_Parms Parms;
		Parms.WhoKilledMe=WhoKilledMe;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacterWithAbilities_OnDeath),&Parms);
	}
	static FName NAME_AOWSCharacterWithAbilities_OnInflictDamage = FName(TEXT("OnInflictDamage"));
	void AOWSCharacterWithAbilities::OnInflictDamage(AOWSCharacter* WhoWasDamaged, float DamageAmount, bool IsCritical)
	{
		OWSCharacterWithAbilities_eventOnInflictDamage_Parms Parms;
		Parms.WhoWasDamaged=WhoWasDamaged;
		Parms.DamageAmount=DamageAmount;
		Parms.IsCritical=IsCritical ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacterWithAbilities_OnInflictDamage),&Parms);
	}
	static FName NAME_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete = FName(TEXT("OnOWSAttributeInitalizationComplete"));
	void AOWSCharacterWithAbilities::OnOWSAttributeInitalizationComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete),NULL);
	}
	static FName NAME_AOWSCharacterWithAbilities_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	void AOWSCharacterWithAbilities::OnTakeDamage(AOWSCharacter* WhoAttackedMe, float DamageAmount, bool IsCritical)
	{
		OWSCharacterWithAbilities_eventOnTakeDamage_Parms Parms;
		Parms.WhoAttackedMe=WhoAttackedMe;
		Parms.DamageAmount=DamageAmount;
		Parms.IsCritical=IsCritical ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AOWSCharacterWithAbilities_OnTakeDamage),&Parms);
	}
	void AOWSCharacterWithAbilities::StaticRegisterNativesAOWSCharacterWithAbilities()
	{
		UClass* Class = AOWSCharacterWithAbilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSpell", &AOWSCharacterWithAbilities::execChangeSpell },
			{ "ClearAbility", &AOWSCharacterWithAbilities::execClearAbility },
			{ "GetCharacterStats", &AOWSCharacterWithAbilities::execGetCharacterStats },
			{ "GrantAbility", &AOWSCharacterWithAbilities::execGrantAbility },
			{ "GrantAbilityKeyBind", &AOWSCharacterWithAbilities::execGrantAbilityKeyBind },
			{ "UpdateCharacterStats", &AOWSCharacterWithAbilities::execUpdateCharacterStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics
	{
		static void NewProp_IsCritical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDamage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAttributes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_IsCritical_SetBit(void* Obj)
	{
		((OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms*)Obj)->IsCritical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms), &Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms, NewDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_EffectTags = { "EffectTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms, EffectTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes = { "SourceAttributes", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms, SourceAttributes), Z_Construct_UClass_UOWSAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_OriginalDamage = { "OriginalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms, OriginalDamage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_IsCritical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_NewDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_EffectTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_OriginalDamage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "CalculateUpdatedDamage", sizeof(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms), Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics
	{
		struct OWSCharacterWithAbilities_eventChangeSpell_Parms
		{
			int32 SpellSlot;
			TSubclassOf<UGameplayAbility>  NewSpell;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewSpell;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpellSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::NewProp_NewSpell = { "NewSpell", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventChangeSpell_Parms, NewSpell), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::NewProp_SpellSlot = { "SpellSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventChangeSpell_Parms, SpellSlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::NewProp_NewSpell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::NewProp_SpellSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "ChangeSpell", sizeof(OWSCharacterWithAbilities_eventChangeSpell_Parms), Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics
	{
		struct OWSCharacterWithAbilities_eventClearAbility_Parms
		{
			int32 SpellSlot;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpellSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::NewProp_SpellSlot = { "SpellSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventClearAbility_Parms, SpellSlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::NewProp_SpellSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "ClearAbility", sizeof(OWSCharacterWithAbilities_eventClearAbility_Parms), Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
		{ "ToolTip", "Get Character Stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "GetCharacterStats", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics
	{
		struct OWSCharacterWithAbilities_eventGrantAbility_Parms
		{
			TSubclassOf<UGameplayAbility>  NewAbility;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::NewProp_NewAbility = { "NewAbility", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventGrantAbility_Parms, NewAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::NewProp_NewAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "GrantAbility", sizeof(OWSCharacterWithAbilities_eventGrantAbility_Parms), Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics
	{
		struct OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms
		{
			TSubclassOf<UGameplayAbility>  NewAbility;
			int32 AbilityLevel;
			int32 InputID;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AbilityLevel;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms, InputID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms, AbilityLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_NewAbility = { "NewAbility", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms, NewAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_InputID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_AbilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_NewAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "GrantAbilityKeyBind", sizeof(OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms), Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhoKilledMe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::NewProp_WhoKilledMe = { "WhoKilledMe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnDeath_Parms, WhoKilledMe), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::NewProp_WhoKilledMe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnDeath", sizeof(OWSCharacterWithAbilities_eventOnDeath_Parms), Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics
	{
		static void NewProp_IsCritical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhoWasDamaged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_IsCritical_SetBit(void* Obj)
	{
		((OWSCharacterWithAbilities_eventOnInflictDamage_Parms*)Obj)->IsCritical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSCharacterWithAbilities_eventOnInflictDamage_Parms), &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnInflictDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_WhoWasDamaged = { "WhoWasDamaged", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnInflictDamage_Parms, WhoWasDamaged), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_IsCritical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_WhoWasDamaged,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnInflictDamage", sizeof(OWSCharacterWithAbilities_eventOnInflictDamage_Parms), Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnOWSAttributeInitalizationComplete", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics
	{
		static void NewProp_IsCritical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhoAttackedMe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_IsCritical_SetBit(void* Obj)
	{
		((OWSCharacterWithAbilities_eventOnTakeDamage_Parms*)Obj)->IsCritical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OWSCharacterWithAbilities_eventOnTakeDamage_Parms), &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnTakeDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_WhoAttackedMe = { "WhoAttackedMe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnTakeDamage_Parms, WhoAttackedMe), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_IsCritical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_WhoAttackedMe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnTakeDamage", sizeof(OWSCharacterWithAbilities_eventOnTakeDamage_Parms), Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
		{ "ToolTip", "Update Character Stats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "UpdateCharacterStats", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOWSCharacterWithAbilities_NoRegister()
	{
		return AOWSCharacterWithAbilities::StaticClass();
	}
	struct Z_Construct_UClass_AOWSCharacterWithAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Weapon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Weapon1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability0_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability9_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability8_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability7_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability6_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability5_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability4_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability3_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellAbilityHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpellAbilityHandles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpellAbilityHandles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OWSAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OWSAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFiredProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastFiredProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOWSCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage, "CalculateUpdatedDamage" }, // 3082437796
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell, "ChangeSpell" }, // 3265318779
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility, "ClearAbility" }, // 2969351309
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats, "GetCharacterStats" }, // 2403421603
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility, "GrantAbility" }, // 2673276885
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind, "GrantAbilityKeyBind" }, // 1813411751
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath, "OnDeath" }, // 1641875925
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage, "OnInflictDamage" }, // 2295989031
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete, "OnOWSAttributeInitalizationComplete" }, // 2052794874
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage, "OnTakeDamage" }, // 779677972
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats, "UpdateCharacterStats" }, // 1530694408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "CharacterStats Health Navigation" },
		{ "IncludePath", "OWSCharacterWithAbilities.h" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon2_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon2 = { "Weapon2", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Weapon2), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon1_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon1 = { "Weapon1", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Weapon1), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability0_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability0 = { "Ability0", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability0), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability0_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability9_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability9 = { "Ability9", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability9), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability9_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability8_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability8 = { "Ability8", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability8), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability8_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability7_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability7 = { "Ability7", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability7), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability7_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability6_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability6 = { "Ability6", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability6), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability6_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability5_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability5 = { "Ability5", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability5), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability5_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability4_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability4 = { "Ability4", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability4), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability4_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability3_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability3 = { "Ability3", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability3), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability3_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability2_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability2 = { "Ability2", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability2), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability1_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability1 = { "Ability1", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability1), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles_MetaData[] = {
		{ "Category", "Spells" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
		{ "ToolTip", "Spells" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles = { "SpellAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, SpellAbilityHandles), METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles_Inner = { "SpellAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_OWSAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_OWSAttributes = { "OWSAttributes", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, OWSAttributes), Z_Construct_UClass_UOWSAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_OWSAttributes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_OWSAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_AbilitySystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_AbilitySystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_LastFiredProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_LastFiredProjectile = { "LastFiredProjectile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, LastFiredProjectile), Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_LastFiredProjectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_LastFiredProjectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_OWSAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_AbilitySystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_LastFiredProjectile,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AOWSCharacterWithAbilities, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSCharacterWithAbilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::ClassParams = {
		&AOWSCharacterWithAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOWSCharacterWithAbilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOWSCharacterWithAbilities, 4577374);
	template<> OWSPLUGIN_API UClass* StaticClass<AOWSCharacterWithAbilities>()
	{
		return AOWSCharacterWithAbilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOWSCharacterWithAbilities(Z_Construct_UClass_AOWSCharacterWithAbilities, &AOWSCharacterWithAbilities::StaticClass, TEXT("/Script/OWSPlugin"), TEXT("AOWSCharacterWithAbilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSCharacterWithAbilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
