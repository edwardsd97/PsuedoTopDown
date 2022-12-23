// Fill out your copyright notice in the Description page of Project Settings.

#include "PTDBPLibrary.h"

#include "Engine/World.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"
#include "AI/Navigation/NavigationTypes.h"

float UPTDBPLibrary::SquareRoot(const float Value)
{
	return sqrt(Value);
}

/*
bool UPTDBPLibrary::GetRandomPointOnNavmesh(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float MinRadius, float MaxRadius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass)
{
	FNavLocation RandomPoint(Origin);
	bool bResult = false;

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	if ( !NavSys )
	{
		return false;
	}

	ANavigationData* UseNavData = NavData ? NavData : NavSys->GetDefaultNavDataInstance(FNavigationSystem::DontCreate);
	if ( UseNavData )
	{
		bResult = NavSys->GetRandomReachablePointInRadius(Origin, MaxRadius, RandomPoint, UseNavData, UNavigationQueryFilter::GetQueryFilter(*UseNavData, WorldContextObject, FilterClass));
		RandomLocation = RandomPoint.Location;
	}

	return bResult;
}
*/

