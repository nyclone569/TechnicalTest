// Fill out your copyright notice in the Description page of Project Settings.

#include "MyFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "Interfaces/PawnCombatInterface.h"
#include "GenericTeamAgentInterface.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyGamePlayTags.h"

#include "DebugHelper.h"

UMyAbilitySystemComponent* UMyFunctionLibrary::NativeGetMyASCFromActor(AActor* InActor)
{
    check(InActor);

    return CastChecked<UMyAbilitySystemComponent>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(InActor));
}

void UMyFunctionLibrary::AddGameplayTagToActorIfNone(AActor* InActor, FGameplayTag TagToAdd)
{
    UMyAbilitySystemComponent* ASC = NativeGetMyASCFromActor(InActor);

    if (!ASC->HasMatchingGameplayTag(TagToAdd))
    {
        ASC->AddLooseGameplayTag(TagToAdd);
    }
}

void UMyFunctionLibrary::RemoveGameplayTagFromActorIfFound(AActor* InActor, FGameplayTag TagToRemove)
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

UPawnCombatComponent* UMyFunctionLibrary::NativeGetPawnCombatComponentFromActor(AActor* InActor)
{
    check(InActor);

    if (IPawnCombatInterface* PawnCombatInterface = Cast<IPawnCombatInterface>(InActor))
    {
        return PawnCombatInterface->GetPawnCombatComponent();
    }

    return nullptr;
}

UPawnCombatComponent* UMyFunctionLibrary::BP_GetPawnCombatComponentFromActor(AActor* InActor, EMyValidType& OutValidType)
{
    UPawnCombatComponent* CombatComponent = NativeGetPawnCombatComponentFromActor(InActor);

    OutValidType = CombatComponent ? EMyValidType::Valid : EMyValidType::Invalid;

    return CombatComponent;
}

bool UMyFunctionLibrary::IsTargetPawnHostile(APawn* QueryPawn, APawn* TargetPawn)
{
    check(QueryPawn && TargetPawn);

    IGenericTeamAgentInterface* QueryTeamAgent = Cast<IGenericTeamAgentInterface>(QueryPawn->GetController());
    IGenericTeamAgentInterface* TargetTeamAgent = Cast<IGenericTeamAgentInterface>(TargetPawn->GetController());

    if (QueryTeamAgent && TargetTeamAgent)
    {
        return QueryTeamAgent->GetGenericTeamId() != TargetTeamAgent->GetGenericTeamId();
    }

    return false;
}

float UMyFunctionLibrary::GetScalableFloatValueAtLevel(const FScalableFloat& InScalableFloat, float InLevel)
{
    return InScalableFloat.GetValueAtLevel(InLevel);
}

FGameplayTag UMyFunctionLibrary::ComputeHitReactDirectionTag(AActor* InAttacker, AActor* InVictim, float& OutAngleDifference)
{
    check(InAttacker && InVictim);

    const FVector VictimForward = InVictim->GetActorForwardVector();
    const FVector VictimToAttackerNomalized = (InAttacker->GetActorLocation() - InVictim->GetActorLocation()).GetSafeNormal();

    const float DotResult = FVector::DotProduct(VictimForward, VictimToAttackerNomalized);
    OutAngleDifference = UKismetMathLibrary::DegAcos(DotResult);

    const FVector CrossResult = FVector::CrossProduct(VictimForward, VictimToAttackerNomalized);

    if (CrossResult.Z < 0.f)
    {
        OutAngleDifference *= -1.f;
    }

    if (OutAngleDifference >= -45.f && OutAngleDifference <= 45.f)
    {
        return MyGamePlayTags::Shared_Status_HitReact_Front;
    } else if (OutAngleDifference < -45.f && OutAngleDifference >= -135.f)
    {
        return MyGamePlayTags::Shared_Status_HitReact_Left;
    }
    else if (OutAngleDifference < -135.f || OutAngleDifference > 135.f)
    {
        return MyGamePlayTags::Shared_Status_HitReact_Back;
    }
    else if (OutAngleDifference > 45.f && OutAngleDifference <= 135.f)
    {
        return MyGamePlayTags::Shared_Status_HitReact_Right;
    }

    return MyGamePlayTags::Shared_Status_HitReact_Front;
}

bool UMyFunctionLibrary::IsValidBlock(AActor* InAttacker, AActor* InDefender)
{
    check(InAttacker && InDefender);

    const float DotResult = FVector::DotProduct(InAttacker->GetActorForwardVector(), InDefender->GetActorForwardVector());

    //const FString DebugString = FString::Printf(TEXT("Dot Result: %f %s"), DotResult, DotResult < 0.f ? TEXT("Valid Block") : TEXT("Invalid block"));

    //Debug::Print(DebugString, DotResult < -0.1f ? FColor::Green : FColor::Red);
    return DotResult < -0.1f;
}
