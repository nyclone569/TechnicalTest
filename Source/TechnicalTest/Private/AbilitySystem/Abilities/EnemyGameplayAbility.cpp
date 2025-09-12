// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/EnemyGameplayAbility.h"
#include "Characters/EnemyCharacter.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "MyGamePlayTags.h"

AEnemyCharacter* UEnemyGameplayAbility::GetEnemyCharacterFromActorInfo()
{
    if (!CachedEnemyCharacter.IsValid())
    {
        CachedEnemyCharacter = Cast<AEnemyCharacter>(CurrentActorInfo->AvatarActor);
    }
    return CachedEnemyCharacter.IsValid()? CachedEnemyCharacter.Get() : nullptr;
}

UEnemyCombatComponent* UEnemyGameplayAbility::GetEnemyCombatComponentFromActorInfo()
{
    return GetEnemyCharacterFromActorInfo()->GetEnemyCombatComponent();
}

FGameplayEffectSpecHandle UEnemyGameplayAbility::MakeEnemyDamageEffectHandle(TSubclassOf<UGameplayEffect> EffectClass, const FScalableFloat& InDamageScalableFloat)
{
    check(EffectClass);

    FGameplayEffectContextHandle ContextHandle = GetMyAbilitySystemComponentFromActorInfo()->MakeEffectContext();
    ContextHandle.SetAbility(this);
    ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo());
    ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo());

    FGameplayEffectSpecHandle EffectSpecHandle = GetMyAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(
        EffectClass,
        GetAbilityLevel(),
        ContextHandle
    );

    EffectSpecHandle.Data->SetSetByCallerMagnitude(
        MyGamePlayTags::Shared_SetByCaller_BaseDamage,
        InDamageScalableFloat.GetValueAtLevel(GetAbilityLevel())
    );

    return EffectSpecHandle;
}
