// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameStateBase.h"
#include "FPSPlayerController.h"
void AFPSGameStateBase::MulticastOnMissionComplete_Implementation(APawn* InstigatorPawn, bool bMissionSuccess)
{
//    for(FConstPawnIterator It=GetWorld()->GetPawnIterator(); It; It++){
//        APawn* Pawn= It->Get();
//        if(Pawn && Pawn->IsLocallyControlled()){
//            Pawn->DisableInput(nullptr);
//        }
//    }
   for(FConstPlayerControllerIterator It= GetWorld()->GetPlayerControllerIterator(); It; It++){

       AFPSPlayerController* PC= Cast<AFPSPlayerController>(It->Get());

       if(PC && PC->IsLocalController()){
        //   UE_LOG(LogTemp,Warning,TEXT("Completed"));
           PC->OnMissionCompleted(InstigatorPawn, bMissionSuccess);
        APawn* Pawn= PC->GetPawn();
            if(Pawn)
            {
                Pawn->DisableInput(nullptr);
            }
       }
   }

}
