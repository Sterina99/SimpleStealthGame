// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FPSGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AFPSGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	//Multicast means that this function will run on all clients/server
	//UFUNCTION(NetMulticast, Reliable)
//	void MulticastOnMissionComplete(APawn* InstigatorPawn, bool bMissionSuccess);
	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnMissionComplete(APawn* InstigatorPawn, bool bMissionSuccess);
};
