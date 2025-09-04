// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/Hero/HeroAnimInstance.h"
#include "Characters/HeroCharacter.h"

void UHeroAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (OwningCharacter) {
		OwningHeroCharacter = Cast<AHeroCharacter>(OwningCharacter);
	}
}

void UHeroAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	if (bHasAcceleration) {
		IdleElapsedTime = 0.f;
		bShouldEnterRelaxedState = false;
	}
	else {
		IdleElapsedTime += DeltaSeconds;
		
		bShouldEnterRelaxedState = (IdleElapsedTime >= EnteredRelaxStateThreshold);	
	}
}