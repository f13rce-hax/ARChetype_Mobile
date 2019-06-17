// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSAttributeSet_generated_h
#error "OWSAttributeSet.generated.h already included, missing '#pragma once' in OWSAttributeSet.h"
#endif
#define OWSPLUGIN_OWSAttributeSet_generated_h

#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOWSInitSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Speed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Speed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitRange(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetRange(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Range) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Range(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitReloadSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitReloadSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetReloadSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetReloadSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetReloadSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetReloadSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReloadSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReloadSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitResistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitResistance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetResistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetResistance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetResistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetResistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Resistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Resistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMagicArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMagicArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMagicArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMagicArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMagicArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMagicArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MagicArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MagicArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitForceArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitForceArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetForceArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetForceArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetForceArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetForceArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ForceArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ForceArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitBonusArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitBonusArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetBonusArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetBonusArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetBonusArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetBonusArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BonusArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BonusArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitPhysicalArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitPhysicalArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetPhysicalArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetPhysicalArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetPhysicalArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetPhysicalArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PhysicalArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PhysicalArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitNaturalArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitNaturalArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetNaturalArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetNaturalArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetNaturalArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetNaturalArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_NaturalArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NaturalArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitInitiative) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitInitiative(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetInitiative) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetInitiative(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetInitiative) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetInitiative(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Initiative) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Initiative(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMultishot) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMultishot(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMultishot) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMultishot(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMultishot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMultishot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Multishot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Multishot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitVersatility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitVersatility(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetVersatility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetVersatility(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetVersatility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetVersatility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Versatility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Versatility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitAvoidance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitAvoidance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetAvoidance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetAvoidance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetAvoidance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetAvoidance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Avoidance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Avoidance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitParry) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitParry(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetParry) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetParry(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetParry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetParry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Parry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Parry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitDodge) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitDodge(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetDodge) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetDodge(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetDodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Dodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Dodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitDefense) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitDefense(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetDefense) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetDefense(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetDefense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetDefense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Defense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Defense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitSpellPenetration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitSpellPenetration(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetSpellPenetration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetSpellPenetration(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetSpellPenetration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetSpellPenetration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SpellPenetration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SpellPenetration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitSpellPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitSpellPower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetSpellPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetSpellPower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetSpellPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetSpellPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SpellPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SpellPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHaste) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHaste(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHaste) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHaste(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHaste) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHaste(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Haste) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Haste(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitCritMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitCritMultiplier(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetCritMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetCritMultiplier(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetCritMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetCritMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CritMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CritMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitCritChance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitCritChance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetCritChance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetCritChance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetCritChance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetCritChance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CritChance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CritChance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitAttackSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitAttackSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetAttackSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetAttackSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetAttackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetAttackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitAttackPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitAttackPower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetAttackPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetAttackPower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetAttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetAttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitBaseAttackBonus) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitBaseAttackBonus(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetBaseAttackBonus) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetBaseAttackBonus(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetBaseAttackBonus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetBaseAttackBonus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BaseAttackBonus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BaseAttackBonus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitBaseAttack) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitBaseAttack(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetBaseAttack) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetBaseAttack(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetBaseAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetBaseAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BaseAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BaseAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitWillpower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitWillpower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetWillpower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetWillpower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetWillpower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetWillpower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Willpower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Willpower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitReflex) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitReflex(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetReflex) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetReflex(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetReflex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetReflex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Reflex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Reflex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitFortitude) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitFortitude(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetFortitude) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetFortitude(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetFortitude) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetFortitude(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Fortitude) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Fortitude(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMagic) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMagic(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMagic) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMagic(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Magic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Magic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitSpirit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitSpirit(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetSpirit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetSpirit(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetSpirit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetSpirit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Spirit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Spirit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitAgility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitAgility(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetAgility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetAgility(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetAgility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetAgility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Agility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Agility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitCharisma) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitCharisma(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetCharisma) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetCharisma(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetCharisma) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetCharisma(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Charisma) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Charisma(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitWisdom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitWisdom(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetWisdom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetWisdom(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetWisdom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetWisdom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Wisdom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Wisdom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitIntellect) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitIntellect(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetIntellect) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetIntellect(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetIntellect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetIntellect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Intellect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Intellect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitConstitution) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitConstitution(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetConstitution) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetConstitution(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetConstitution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetConstitution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Constitution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Constitution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitDexterity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitDexterity(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetDexterity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetDexterity(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetDexterity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetDexterity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Dexterity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Dexterity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitStrength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitStrength(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetStrength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetStrength(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetStrength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetStrength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Strength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Strength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitEnduranceRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitEnduranceRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetEnduranceRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetEnduranceRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetEnduranceRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetEnduranceRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_EnduranceRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_EnduranceRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxEndurance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxEndurance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxEndurance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxEndurance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxEndurance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxEndurance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxEndurance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxEndurance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitEndurance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitEndurance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetEndurance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetEndurance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetEndurance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetEndurance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Endurance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Endurance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitStaminaRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitStaminaRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetStaminaRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetStaminaRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetStaminaRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetStaminaRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_StaminaRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_StaminaRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxStamina(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxStamina(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitStamina(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetStamina(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Stamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Stamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitFatigueRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitFatigueRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetFatigueRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetFatigueRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetFatigueRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetFatigueRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FatigueRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FatigueRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxFatigue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxFatigue(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxFatigue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxFatigue(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxFatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxFatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxFatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxFatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitFatigue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitFatigue(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetFatigue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetFatigue(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetFatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetFatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Fatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Fatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitEnergyRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitEnergyRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetEnergyRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetEnergyRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetEnergyRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetEnergyRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_EnergyRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_EnergyRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxEnergy(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxEnergy(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitEnergy(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetEnergy(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Energy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Energy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitManaRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitManaRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetManaRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetManaRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetManaRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetManaRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ManaRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ManaRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxMana(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxMana(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMana(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMana(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Mana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Mana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHealthRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHealthRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHealthRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHealthRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHealthRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHealthRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HealthRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxHealth(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxHealth(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHealth(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHealth(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHunger) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHunger(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHunger) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHunger(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHunger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHunger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Hunger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Hunger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitThirst) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitThirst(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetThirst) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetThirst(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetThirst) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetThirst(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Thirst) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Thirst(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitWounds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitWounds(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetWounds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetWounds(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetWounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetWounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Wounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Wounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHitDie) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHitDie(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHitDie) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHitDie(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHitDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHitDie(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitDie(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOWSInitSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Speed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Speed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitRange(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetRange(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Range) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Range(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitReloadSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitReloadSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetReloadSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetReloadSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetReloadSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetReloadSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReloadSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReloadSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitResistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitResistance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetResistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetResistance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetResistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetResistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Resistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Resistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMagicArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMagicArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMagicArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMagicArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMagicArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMagicArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MagicArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MagicArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitForceArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitForceArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetForceArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetForceArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetForceArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetForceArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ForceArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ForceArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitBonusArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitBonusArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetBonusArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetBonusArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetBonusArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetBonusArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BonusArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BonusArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitPhysicalArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitPhysicalArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetPhysicalArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetPhysicalArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetPhysicalArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetPhysicalArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PhysicalArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PhysicalArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitNaturalArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitNaturalArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetNaturalArmor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetNaturalArmor(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetNaturalArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetNaturalArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_NaturalArmor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_NaturalArmor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitInitiative) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitInitiative(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetInitiative) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetInitiative(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetInitiative) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetInitiative(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Initiative) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Initiative(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMultishot) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMultishot(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMultishot) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMultishot(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMultishot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMultishot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Multishot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Multishot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitVersatility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitVersatility(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetVersatility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetVersatility(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetVersatility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetVersatility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Versatility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Versatility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitAvoidance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitAvoidance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetAvoidance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetAvoidance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetAvoidance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetAvoidance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Avoidance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Avoidance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitParry) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitParry(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetParry) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetParry(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetParry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetParry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Parry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Parry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitDodge) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitDodge(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetDodge) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetDodge(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetDodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetDodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Dodge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Dodge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitDefense) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitDefense(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetDefense) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetDefense(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetDefense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetDefense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Defense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Defense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitSpellPenetration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitSpellPenetration(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetSpellPenetration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetSpellPenetration(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetSpellPenetration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetSpellPenetration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SpellPenetration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SpellPenetration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitSpellPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitSpellPower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetSpellPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetSpellPower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetSpellPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetSpellPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SpellPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SpellPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHaste) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHaste(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHaste) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHaste(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHaste) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHaste(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Haste) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Haste(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitCritMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitCritMultiplier(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetCritMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetCritMultiplier(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetCritMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetCritMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CritMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CritMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitCritChance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitCritChance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetCritChance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetCritChance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetCritChance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetCritChance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_CritChance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CritChance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitAttackSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitAttackSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetAttackSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetAttackSpeed(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetAttackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetAttackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitAttackPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitAttackPower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetAttackPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetAttackPower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetAttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetAttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_AttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_AttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitBaseAttackBonus) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitBaseAttackBonus(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetBaseAttackBonus) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetBaseAttackBonus(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetBaseAttackBonus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetBaseAttackBonus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BaseAttackBonus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BaseAttackBonus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitBaseAttack) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitBaseAttack(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetBaseAttack) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetBaseAttack(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetBaseAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetBaseAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BaseAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BaseAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitWillpower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitWillpower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetWillpower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetWillpower(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetWillpower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetWillpower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Willpower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Willpower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitReflex) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitReflex(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetReflex) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetReflex(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetReflex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetReflex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Reflex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Reflex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitFortitude) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitFortitude(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetFortitude) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetFortitude(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetFortitude) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetFortitude(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Fortitude) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Fortitude(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMagic) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMagic(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMagic) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMagic(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Magic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Magic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitSpirit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitSpirit(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetSpirit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetSpirit(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetSpirit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetSpirit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Spirit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Spirit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitAgility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitAgility(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetAgility) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetAgility(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetAgility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetAgility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Agility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Agility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitCharisma) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitCharisma(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetCharisma) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetCharisma(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetCharisma) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetCharisma(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Charisma) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Charisma(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitWisdom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitWisdom(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetWisdom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetWisdom(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetWisdom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetWisdom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Wisdom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Wisdom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitIntellect) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitIntellect(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetIntellect) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetIntellect(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetIntellect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetIntellect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Intellect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Intellect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitConstitution) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitConstitution(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetConstitution) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetConstitution(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetConstitution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetConstitution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Constitution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Constitution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitDexterity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitDexterity(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetDexterity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetDexterity(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetDexterity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetDexterity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Dexterity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Dexterity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitStrength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitStrength(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetStrength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetStrength(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetStrength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetStrength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Strength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Strength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitEnduranceRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitEnduranceRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetEnduranceRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetEnduranceRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetEnduranceRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetEnduranceRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_EnduranceRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_EnduranceRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxEndurance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxEndurance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxEndurance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxEndurance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxEndurance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxEndurance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxEndurance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxEndurance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitEndurance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitEndurance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetEndurance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetEndurance(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetEndurance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetEndurance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Endurance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Endurance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitStaminaRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitStaminaRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetStaminaRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetStaminaRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetStaminaRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetStaminaRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_StaminaRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_StaminaRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxStamina(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxStamina(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitStamina(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetStamina) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetStamina(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Stamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Stamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitFatigueRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitFatigueRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetFatigueRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetFatigueRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetFatigueRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetFatigueRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_FatigueRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_FatigueRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxFatigue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxFatigue(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxFatigue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxFatigue(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxFatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxFatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxFatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxFatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitFatigue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitFatigue(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetFatigue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetFatigue(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetFatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetFatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Fatigue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Fatigue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitEnergyRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitEnergyRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetEnergyRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetEnergyRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetEnergyRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetEnergyRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_EnergyRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_EnergyRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxEnergy(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxEnergy(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitEnergy(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetEnergy(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Energy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Energy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitManaRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitManaRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetManaRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetManaRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetManaRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetManaRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ManaRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ManaRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxMana(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxMana(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMana(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMana) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMana(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Mana) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Mana(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHealthRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHealthRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHealthRegenRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHealthRegenRate(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHealthRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHealthRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HealthRegenRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitMaxHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitMaxHealth(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetMaxHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetMaxHealth(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHealth(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHealth(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Health) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Health(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHunger) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHunger(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHunger) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHunger(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHunger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHunger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Hunger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Hunger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitThirst) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitThirst(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetThirst) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetThirst(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetThirst) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetThirst(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Thirst) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Thirst(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitWounds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitWounds(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetWounds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetWounds(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetWounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetWounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_Wounds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Wounds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSInitHitDie) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSInitHitDie(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSSetHitDie) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OWSSetHitDie(Z_Param_NewVal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOWSGetHitDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->OWSGetHitDie(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitDie(); \
		P_NATIVE_END; \
	}


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAttributeSet(); \
	friend struct Z_Construct_UClass_UOWSAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UOWSAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAttributeSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAttributeSet(); \
	friend struct Z_Construct_UClass_UOWSAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UOWSAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAttributeSet) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAttributeSet(UOWSAttributeSet&&); \
	NO_API UOWSAttributeSet(const UOWSAttributeSet&); \
public:


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOWSAttributeSet(UOWSAttributeSet&&); \
	NO_API UOWSAttributeSet(const UOWSAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAttributeSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAttributeSet)


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WhoAttackedUsLast() { return STRUCT_OFFSET(UOWSAttributeSet, WhoAttackedUsLast); }


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_44_PROLOG
#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_RPC_WRAPPERS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_INCLASS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_PRIVATE_PROPERTY_OFFSET \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_INCLASS_NO_PURE_DECLS \
	OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OWSAttributeSet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenWorldStarterPlugin_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
