// Fill out your copyright notice in the Description page of Project Settings.

#include "MyFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"

UMyAbilitySystemComponent* UMyFunctionLibrary::NativeGetMyASCFromActor(AActor* InActor)
{
    check(InActor);

    return CastChecked<UMyAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(InActor));
}

void UMyFunctionLibrary::AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd)
{
    UMyAbilitySystemComponent* ASC = NativeGetMyASCFromActor(InActor);

    if (ASC->HasMatchingGameplayTag(TagToAdd))
    {
        ASC->AddLooseGameplayTag(TagToAdd);
    }
}

void UMyFunctionLibrary::RemoveGameplayFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove)
{
    UMyAbilitySystemComponent* ASC = NativeGetMyASCFromActor(InActor);

    if (ASC->HasMatchingGameplayTag(TagToRemove))
    {
        ASC->RemoveLooseGameplayTag(TagToRemove);
    }
}

bool UMyFunctionLibrary::NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck)
{
    UMyAbilitySystemComponent* ASC = NativeGetMyASCFromActor(InActor);

    return ASC->HasMatchingGameplayTag(TagToCheck);
}

void UMyFunctionLibrary::BP_DoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck, EMyConfirmType& OutConfirmType)
{
    OutConfirmType = NativeDoesActorHaveTag(InActor, TagToCheck) ? EMyConfirmType::Yes : EMyConfirmType::No;
}
