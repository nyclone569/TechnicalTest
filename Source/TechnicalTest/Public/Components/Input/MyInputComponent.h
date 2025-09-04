// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "DataAssets/Input/DataAsset_InputConfig.h"
#include "MyInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class TECHNICALTEST_API UMyInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
	
public:
	template<class UserObject, typename CallBackFunc>
	void BindNativeInputAction(const UDataAsset_InputConfig* IninputConfig, const FGameplayTag& InInputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallBackFunc Func);
};

template<class UserObject, typename CallBackFunc>
inline void UMyInputComponent::BindNativeInputAction(const UDataAsset_InputConfig* InInputConfig, const FGameplayTag& InInputTag, ETriggerEvent TriggerEvent, UserObject* ContextObject, CallBackFunc Func)
{
	checkf(InInputConfig, TEXT("Input config data asset is null, cannot proceed with binding"));
	if (UInputAction* FoundAction = InInputConfig->FindNativeInputActionByTag(InInputTag)) {
		BindAction(FoundAction, TriggerEvent, ContextObject, Func);
	}
}
