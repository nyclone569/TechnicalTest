// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MyAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "MyFunctionLibrary.h"
#include "MyGamePlayTags.h"
#include "Interfaces/PawnUIInterface.h"
#include "Components/UI/PawnUIComponent.h"
#include "Components/UI/HeroUIComponent.h"
#include "Components/UI/EnemyUIComponent.h"

#include "DebugHelper.h"

UMyAttributeSet::UMyAttributeSet()
{
	InitCurrentHealth(1.f);
	InitMaxHealth(1.f);
	InitCurrentRage(1.f);
	InitMaxRage(1.f);
	InitCurrentPoise(1.f);
	InitMaxPoise(1.f);
	InitAttackPower(1.f);
	InitDefensePower(1.f);
	InitCounterStack(0.f);
}

void UMyAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	if (!CachedPawnUIInterface.IsValid())
	{
		CachedPawnUIInterface = TWeakInterfacePtr<IPawnUIInterface>(Data.Target.GetAvatarActor());
	}

	checkf(CachedPawnUIInterface.IsValid(), TEXT("%s didn't implement IPawnUIInterface"), *Data.Target.GetAvatarActor()->GetActorNameOrLabel());

	UPawnUIComponent* PawnUIComponent = CachedPawnUIInterface->GetPawnUIComponent();

	checkf(PawnUIComponent, TEXT("Couldn't extract a PawnUIComponent from %s"), *Data.Target.GetAvatarActor()->GetActorNameOrLabel());

	if (Data.EvaluatedData.Attribute == GetCurrentHealthAttribute())
	{
		const float NewCurrentHealth = FMath::Clamp(GetCurrentHealth(), 0.f, GetMaxHealth());

		SetCurrentHealth(NewCurrentHealth);

		PawnUIComponent->OnCurrentHealthChanged.Broadcast(GetCurrentHealth() / GetMaxHealth());
	}

	if (Data.EvaluatedData.Attribute == GetCurrentRageAttribute())
	{
		const float NewCurrentRage = FMath::Clamp(GetCurrentRage(), 0.f, GetMaxRage());

		SetCurrentRage(NewCurrentRage);

		if (UHeroUIComponent* HeroUIComponent = CachedPawnUIInterface->GetHeroUIComponent())
		{
			HeroUIComponent->OnCurrentRageChanged.Broadcast(GetCurrentRage() / GetMaxRage());
		}
	}

	if (Data.EvaluatedData.Attribute == GetCurrentPoiseAttribute())
	{
		const float NewCurrentPoise = FMath::Clamp(GetCurrentPoise(), 0.f, GetMaxPoise());

		SetCurrentPoise(NewCurrentPoise);

		if (UEnemyUIComponent* EnemyUIComponent = CachedPawnUIInterface->GetEnemyUIComponent())
		{
			EnemyUIComponent->OnCurrentPoiseChanged.Broadcast(GetCurrentPoise() / GetMaxPoise());
		}
			

		/*const FString DebugString = FString::Printf(
			TEXT("Old poise: %f, NewPoise: %f"),
			GetCurrentPoise(),
			GetMaxPoise()
		);
		Debug::Print(DebugString, FColor::Green);*/

		if (GetCurrentPoise() <= 0.f)
		{
			//TODO: apply stun effect
			UMyFunctionLibrary::AddGameplayTagToActorIfNone(Data.Target.GetAvatarActor(), MyGamePlayTags::Enemy_Status_Stunned);
		}
	}

	if (Data.EvaluatedData.Attribute == GetDamageTakenAttribute())
	{
		const float OldHealth = GetCurrentHealth();
		const float DamageDone = GetDamageTaken();

		const float NewCurrentHealth = FMath::Clamp(OldHealth - DamageDone, 0.f, GetMaxHealth());

		SetCurrentHealth(NewCurrentHealth);

		const FString DebugString = FString::Printf(
			TEXT("Old Health: %f, Damage Done: %f, New Current Health: %f"),
			OldHealth,
			DamageDone,
			NewCurrentHealth
		);
		Debug::Print(DebugString, FColor::Green);

		PawnUIComponent->OnCurrentHealthChanged.Broadcast(GetCurrentHealth() / GetMaxHealth());

		if (GetCurrentHealth() == 0.f)
		{
			UMyFunctionLibrary::AddGameplayTagToActorIfNone(Data.Target.GetAvatarActor(), MyGamePlayTags::Shared_Status_Dead);
		}
	}

	float Magnitude = Data.EvaluatedData.Magnitude;
	const FGameplayEffectSpec& Spec = Data.EffectSpec;
	const FGameplayTagContainer& EffectTags = Spec.CapturedSourceTags.GetSpecTags();

	if (Data.EvaluatedData.Attribute == GetCounterStackAttribute())
	{
		const float NewCounterStack = FMath::Clamp(GetCounterStack(), 0.f, 99.f);
		SetCounterStack(NewCounterStack);
		PawnUIComponent->OnCurrentCounterStackChanged.Broadcast(FMath::RoundToInt32(NewCounterStack));

		if (Magnitude > 0.f && EffectTags.HasTagExact(MyGamePlayTags::Player_Event_ResetCounter))
		{
			UWorld* World = GetWorld();
			if (World)
			{
				// Reset the timer
				World->GetTimerManager().ClearTimer(CounterResetTimerHandle);
				World->GetTimerManager().SetTimer(CounterResetTimerHandle, this, &UMyAttributeSet::ResetCounterStackTimerExpired, 10.f, false);
			}
		}
	}
}

void UMyAttributeSet::ResetCounterStackTimerExpired()
{
	SetCounterStack(0.f);
	if (CachedPawnUIInterface.IsValid())
	{
		if (UPawnUIComponent* PawnUIComponent = CachedPawnUIInterface->GetPawnUIComponent())
		{
			PawnUIComponent->OnCurrentCounterStackChanged.Broadcast(0);
		}
	}
}
