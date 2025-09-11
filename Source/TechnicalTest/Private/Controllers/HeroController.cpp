// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/HeroController.h"

AHeroController::AHeroController()
{
	HeroTeamId = FGenericTeamId(0);
}

FGenericTeamId AHeroController::GetGenericTeamId() const
{
	return HeroTeamId;
}