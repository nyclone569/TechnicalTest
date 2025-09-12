// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/MyGameplayAbility.h"
#include "EnemyGameplayAbility.generated.h"

class AEnemyCharacter;
class UEnemyCombatComponent;
/**
 * 
 */
UCLASS()
class TECHNICALTEST_API UEnemyGameplayAbility : public UMyGameplayAbility
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Ability")
	AEnemyCharacter* GetEnemyCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Ability")
	UEnemyCombatComponent* GetEnemyCombatComponentFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Ability")
	FGameplayEffectSpecHandle MakeEnemyDamageEffectHandle(TSubclassOf<UGameplayEffect> EffectClass, const FScalableFloat& InDamageScalableFloat);

private:
	TWeakObjectPtr<AEnemyCharacter> CachedEnemyCharacter;
};
