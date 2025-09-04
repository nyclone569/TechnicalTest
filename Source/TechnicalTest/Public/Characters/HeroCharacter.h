// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "HeroCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TECHNICALTEST_API AHeroCharacter : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	AHeroCharacter();

protected:
	virtual void BeginPlay() override;

private:
#pragma region Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

#pragma endregion
};
