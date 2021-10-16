// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSGameMode.h"
#include "FPSHUD.h"
#include "FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "FPSGameStateBase.h"
AFPSGameMode::AFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHUD::StaticClass();
	GameStateClass= AFPSGameStateBase::StaticClass();
}

void AFPSGameMode::CompleteMission(APawn* InstigatorPawn,bool bHasWon){

	if(InstigatorPawn){
		//InstigatorPawn->DisableInput(nullptr);

	if(SpectatingViewPointClass){
		TArray<AActor*> ReturnedActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(),SpectatingViewPointClass,ReturnedActors);
		//the viewtarget is changed only if there is a valid one 
		if(ReturnedActors.Num()>0){
			AActor* NewViewTarget;
			NewViewTarget= ReturnedActors[0];
			APlayerController* PC= Cast<APlayerController>(InstigatorPawn->GetController());
			if(PC){
				PC->SetViewTargetWithBlend(NewViewTarget,0.5f,EViewTargetBlendFunction::VTBlend_Cubic);
			}
		}
	  }
	}

	AFPSGameStateBase* GS= GetGameState<AFPSGameStateBase>();
	if(GS){
		GS->MulticastOnMissionComplete(InstigatorPawn, bHasWon);
	}
	OnMissionCompleted(InstigatorPawn,bHasWon);

	
}