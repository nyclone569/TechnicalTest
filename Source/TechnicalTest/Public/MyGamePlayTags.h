// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

namespace MyGamePlayTags
{
	/** Input tags **/
	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);

	/** Player tags **/
	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);

	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);

	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	TECHNICALTEST_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);

}