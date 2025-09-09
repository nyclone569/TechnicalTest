// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Combat/HeroCombatComponent.h"
#include "Items/Weapons/HeroWeapon.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "MyGamePlayTags.h"

#include "DebugHelper.h"

AHeroWeapon* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
    return Cast<AHeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}

AHeroWeapon* UHeroCombatComponent::GetHeroCurrentEquippedWeapon() const
{
    return Cast<AHeroWeapon>(GetCharacterCurrentEquippedWeapon());
}

float UHeroCombatComponent::GetHeroCurrentEquippedWeaponDamageAtLevel(float InLevel) const
{
    return GetHeroCurrentEquippedWeapon()->HeroWeaponData.WeaponBaseDamage.GetValueAtLevel(InLevel);
}

void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
    if (OverlappedActors.Contains(HitActor))
    {
        return;
    } 

    OverlappedActors.AddUnique(HitActor);

    FGameplayEventData Data;
    Data.Instigator = GetOwningPawn();
    Data.Target = HitActor;

    UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
        GetOwningPawn(),
        MyGamePlayTags::Shared_Event_MeleeHit,
        Data
    );

    UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
        GetOwningPawn(),
        MyGamePlayTags::Player_Event_HitPause,
        FGameplayEventData()
    );
}

void UHeroCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
    UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
        GetOwningPawn(),
        MyGamePlayTags::Player_Event_HitPause,
        FGameplayEventData()
    );
}
