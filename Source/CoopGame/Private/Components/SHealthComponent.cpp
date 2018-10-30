// Fill out your copyright notice in the Description page of Project Settings.

#include "SHealthComponent.h"
#include "..\..\Public\Components\SHealthComponent.h"


// Sets default values for this component's properties
USHealthComponent::USHealthComponent()
{
	DefaultHealth = 100;
	bIsDead = false;

	TeamNum = 255;
}


// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = DefaultHealth;
}


float USHealthComponent::GetHealth() const
{
	return Health;
}
