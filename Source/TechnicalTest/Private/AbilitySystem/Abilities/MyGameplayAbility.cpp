// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/MyGameplayAbility.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"

void UMyGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	if(AbilityActivationPolicy == EMyAbilityActivaitonPolicy::OnGiven)
	{
		if(ActorInfo && !Spec.IsActive())
		{
			ActorInfo->AbilitySystemComponent->TryActivateAbility(Spec.Handle);
		}
	}
}

void UMyGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if(AbilityActivationPolicy == EMyAbilityActivaitonPolicy::OnGiven)
	{
		if(ActorInfo)
		{
			if(UMyAbilitySystemComponent* MyASC = Cast<UMyAbilitySystemComponent>(ActorInfo->AbilitySystemComponent.Get()))
			{
				ActorInfo->AbilitySystemComponent->ClearAbility(Handle);
			}
		}
	}
}
