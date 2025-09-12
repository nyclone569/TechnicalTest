// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/BaseAnimInstance.h"
#include "MyFunctionLibrary.h"

bool UBaseAnimInstance::DoesOwnerHaveTag(FGameplayTag TagToCheck) const
{
    if (APawn* OwningPawn = TryGetPawnOwner())
    {
        return UMyFunctionLibrary::NativeDoesActorHaveTag(OwningPawn, TagToCheck);
    }

    return false;
}
