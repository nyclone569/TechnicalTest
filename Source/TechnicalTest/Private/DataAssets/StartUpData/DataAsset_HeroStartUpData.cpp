// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "AbilitySystem/Abilities/MyGameplayAbility.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"

void UDataAsset_HeroStartUpData::GiveToAbilitySystemComponent(UMyAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
	Super::GiveToAbilitySystemComponent(InASCToGive, ApplyLevel);

	for (const FHeroAbilitySet& AbilitySet : HeroStartUpAbilitySets)
	{
		if (!AbilitySet.IsValid()) continue;

		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);

		InASCToGive->GiveAbility(AbilitySpec);
	}
}
