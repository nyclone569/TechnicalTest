// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/MyWeaponBase.h"
#include "MyTypes/MyStuctTypes.h"
#include "HeroWeapon.generated.h"

/**
 * 
 */
UCLASS()
class TECHNICALTEST_API AHeroWeapon : public AMyWeaponBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
	FHeroWeaponData HeroWeaponData;
};
