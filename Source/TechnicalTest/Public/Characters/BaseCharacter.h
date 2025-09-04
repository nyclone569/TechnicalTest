// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "BaseCharacter.generated.h"

class UMyAbilitySystemComponent;
class UMyAttributeSet;

UCLASS()
class TECHNICALTEST_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	//~ Begin IAbilitySystemInterface Interface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	//~ End IAbilitySystemInterface Interface

protected:
	//~ Begin APawn Interface
	virtual void PossessedBy(AController* NewController) override;

	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UMyAbilitySystemComponent* MyAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UMyAttributeSet* MyAttributeSet;

public:
	FORCEINLINE UMyAbilitySystemComponent* GetMyAbilitySystemComponent() const { return MyAbilitySystemComponent; }

	FORCEINLINE UMyAttributeSet* GetMyAttributeSet() const { return MyAttributeSet; }
};
