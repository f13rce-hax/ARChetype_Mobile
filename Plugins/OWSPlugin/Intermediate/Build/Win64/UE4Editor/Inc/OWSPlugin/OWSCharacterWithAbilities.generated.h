// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UOWSAttributeSet;
struct FGameplayTagContainer;
class AOWSCharacter;
#ifdef OWSPLUGIN_OWSCharacterWithAbilities_generated_h
#error "OWSCharacterWithAbilities.generated.h already included, missing '#pragma once' in OWSCharacterWithAbilities.h"
#endif
#define OWSPLUGIN_OWSCharacterWithAbilities_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGrantAbilityKeyBind) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewAbility); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AbilityLevel); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InputID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrantAbilityKeyBind(Z_Param_NewAbility,Z_Param_AbilityLevel,Z_Param_InputID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrantAbility) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrantAbility(Z_Param_NewAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAbility) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SpellSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAbility(Z_Param_SpellSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeSpell) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SpellSlot); \
		P_GET_OBJECT(UClass,Z_Param_NewSpell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeSpell(Z_Param_SpellSlot,Z_Param_NewSpell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCharacterStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCharacterStats(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCharacterStats(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGrantAbilityKeyBind) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewAbility); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AbilityLevel); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InputID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrantAbilityKeyBind(Z_Param_NewAbility,Z_Param_AbilityLevel,Z_Param_InputID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrantAbility) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewAbility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrantAbility(Z_Param_NewAbility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAbility) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SpellSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAbility(Z_Param_SpellSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeSpell) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SpellSlot); \
		P_GET_OBJECT(UClass,Z_Param_NewSpell); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeSpell(Z_Param_SpellSlot,Z_Param_NewSpell); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCharacterStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCharacterStats(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCharacterStats(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_EVENT_PARMS \
	struct OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms \
	{ \
		float OriginalDamage; \
		const UOWSAttributeSet* SourceAttributes; \
		FGameplayTagContainer EffectTags; \
		float NewDamage; \
		bool IsCritical; \
	}; \
	struct OWSCharacterWithAbilities_eventOnDeath_Parms \
	{ \
		AOWSCharacter* WhoKilledMe; \
	}; \
	struct OWSCharacterWithAbilities_eventOnInflictDamage_Parms \
	{ \
		AOWSCharacter* WhoWasDamaged; \
		float DamageAmount; \
		bool IsCritical; \
	}; \
	struct OWSCharacterWithAbilities_eventOnTakeDamage_Parms \
	{ \
		AOWSCharacter* WhoAttackedMe; \
		float DamageAmount; \
		bool IsCritical; \
	};


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_CALLBACK_WRAPPERS
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSCharacterWithAbilities(); \
	friend struct Z_Construct_UClass_AOWSCharacterWithAbilities_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacterWithAbilities, AOWSCharacter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacterWithAbilities) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSCharacterWithAbilities*>(this); }


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAOWSCharacterWithAbilities(); \
	friend struct Z_Construct_UClass_AOWSCharacterWithAbilities_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacterWithAbilities, AOWSCharacter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacterWithAbilities) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSCharacterWithAbilities*>(this); }


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSCharacterWithAbilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSCharacterWithAbilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSCharacterWithAbilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSCharacterWithAbilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSCharacterWithAbilities(AOWSCharacterWithAbilities&&); \
	NO_API AOWSCharacterWithAbilities(const AOWSCharacterWithAbilities&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOWSCharacterWithAbilities(AOWSCharacterWithAbilities&&); \
	NO_API AOWSCharacterWithAbilities(const AOWSCharacterWithAbilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSCharacterWithAbilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSCharacterWithAbilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSCharacterWithAbilities)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_PRIVATE_PROPERTY_OFFSET
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_35_PROLOG \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_EVENT_PARMS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_CALLBACK_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSCharacterWithAbilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h


#define FOREACH_ENUM_ABILITYINPUT(op) \
	op(AbilityInput::UseAbility1) \
	op(AbilityInput::UseAbility2) \
	op(AbilityInput::UseAbility3) \
	op(AbilityInput::UseAbility4) \
	op(AbilityInput::UseAbility5) \
	op(AbilityInput::UseAbility6) \
	op(AbilityInput::UseAbility7) \
	op(AbilityInput::UseAbility8) \
	op(AbilityInput::UseAbility9) \
	op(AbilityInput::UseAbility0) \
	op(AbilityInput::UseWeapon1) \
	op(AbilityInput::UseWeapon2) 

enum class AbilityInput : uint8;
template<> OWSPLUGIN_API UEnum* StaticEnum<AbilityInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
