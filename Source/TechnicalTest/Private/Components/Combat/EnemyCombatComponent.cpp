// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Combat/EnemyCombatComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "MyGamePlayTags.h"
#include "MyFunctionLibrary.h"

#include "DebugHelper.h"

void UEnemyCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	if (OverlappedActors.Contains(HitActor))
	{
		return;
	}

	OverlappedActors.AddUnique(HitActor);

	FGameplayEventData EventData;
	EventData.Instigator = GetOwningPawn();
	EventData.Target = HitActor;

	//TODO: Implement block check
	bool bIsValidBlock = false;

	const bool bIsPlayerBlocking = UMyFunctionLibrary::NativeDoesActorHaveTag(HitActor, MyGamePlayTags::Player_Status_Blocking);
	const bool bIsPlayerRolling = UMyFunctionLibrary::NativeDoesActorHaveTag(HitActor, MyGamePlayTags::Player_Status_Rolling);
	const bool bIsMyAttackUnblockable = false;

	if (bIsPlayerBlocking && !bIsMyAttackUnblockable)
	{
		//TODO: check if the block is valid
		bIsValidBlock = UMyFunctionLibrary::IsValidBlock(GetOwningPawn(), HitActor);
	}



	if (bIsValidBlock)
	{		
		//TODO: Handle successful block
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			HitActor,
			MyGamePlayTags::Player_Event_SuccessfulBlock,
			EventData
		);
	}
	else if (bIsPlayerRolling)
	{
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			HitActor,
			MyGamePlayTags::Player_Event_GetHitWhileRolling,
			EventData
		);
	}
	else
	{
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			GetOwningPawn(),
			MyGamePlayTags::Shared_Event_MeleeHit,
			EventData
		);
	}
}
