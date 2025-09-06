// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTypes/MyStuctTypes.h"
#include "AbilitySystem/Abilities/HeroGameplayAbility.h"


bool FHeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}