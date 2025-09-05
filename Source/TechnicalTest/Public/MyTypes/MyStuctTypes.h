// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MyStuctTypes.generated.h"

class UHeroLinkedAnimLayer;

USTRUCT(BlueprintType)
struct FHeroWeaponData
{
	GENERATED_BODY();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UHeroLinkedAnimLayer> WeaponAnimLayerToLink;
};