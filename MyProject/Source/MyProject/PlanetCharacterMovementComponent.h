// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlanetCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UPlanetCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
		
public:
	UFUNCTION(Blueprintcallable)
	void UpdateGravityDirection(const FVector& NewGravityDir);
	
};
