// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtentionComponentBase.h"
#include "GameplayTagContainer.h"
#include "PawnCombatComponent.generated.h"

class AMyWeaponBase;
/**
 * 
 */
UCLASS()
class TECHNICALTEST_API UPawnCombatComponent : public UPawnExtentionComponentBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Combat") 
	void RegisterSpawnedWeapon(const FGameplayTag& InWeaponTagToRegister, AMyWeaponBase* InWeaponToRegister, bool bRegisterAsEquippedWeapon = false);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	AMyWeaponBase* GetCharacterCarriedWeaponByTag(const FGameplayTag InWeaponTagToGet) const;

	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	UFUNCTION(BlueprintCallable, Category = "Combat")
	AMyWeaponBase* GetCharacterCurrentEquippedWeapon() const;

private:
	TMap<FGameplayTag, AMyWeaponBase*> CharacterCarriedWeaponMap;
};
