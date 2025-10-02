// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtentionComponentBase.h"
#include "PawnUIComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPercentChangedDelegate, float, NewPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCounterStackChanged, int32, NewValue);
/**
 * 
 */
UCLASS()
class TECHNICALTEST_API UPawnUIComponent : public UPawnExtentionComponentBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnPercentChangedDelegate OnCurrentHealthChanged;

	UPROPERTY(BlueprintAssignable)
	FOnCounterStackChanged OnCurrentCounterStackChanged;
};
