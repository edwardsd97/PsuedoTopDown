// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NavigationSystem.h"
#include "AI/Navigation/NavigationTypes.h"

#include "PTDBPLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PSUEDOTOPDOWN_API UPTDBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	// Example
	UFUNCTION(BlueprintCallable, Category = "MyFuncs")
	static float SquareRoot(const float Value);
};
