// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameStateBase.h"

void AFPSGameStateBase::MulticastOnMissionComplete(APawn* InstigatorPawn, bool bMissionSuccess)
{
   for(FConstPawnIterator It=GetWorld()->GetPawnIterator(); It; It++){
       APawn* Pawn= It->Get();
       if(Pawn && Pawn->IsLocallyControlled()){
           Pawn->DisableInput(nullptr);
       }
   }

}
