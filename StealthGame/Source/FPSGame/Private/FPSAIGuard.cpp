// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "FPSCharacter.h"
#include "FPSGameMode.h"
#include "AIController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AFPSAIGuard::AFPSAIGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PawnSensingComp= CreateDefaultSubobject<UPawnSensingComponent>(TEXT("Pawn Sensing Comp"));
	PawnSensingComp->OnSeePawn.AddDynamic(this,&AFPSAIGuard::OnPawnSeen);
}

// Called when the game starts or when spawned
void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();
	PawnSensingComp->OnSeePawn.AddDynamic(this,&AFPSAIGuard::OnPawnSeen);
	PawnSensingComp->OnHearNoise.AddDynamic(this,&AFPSAIGuard::OnNoiseHeard);
	OriginalRotation=GetActorRotation();
	TargetIndex=0;
	if(bPatrol && TargetPoints.Num()>0)
	MoveToTargetPoint();
}
	


// Called every frame
void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(!bPatrol){
		return;
	} 
	if(TargetPoints.Num()>0){
		

		FVector Delta= GetActorLocation() - TargetPoints[TargetIndex]->GetActorLocation();
		float DistanceToGoal= Delta.Size();
		
		if(DistanceToGoal<50.f){
			TargetIndex++;
			TargetIndex = TargetIndex%TargetPoints.Num();
	
			MoveToTargetPoint();
		}
	}

}

void AFPSAIGuard::OnPawnSeen(APawn* SeenPawn){


	if(SeenPawn==nullptr){
		return;
	}
	UE_LOG(LogTemp,Warning,TEXT("Spotted"));
	DrawDebugSphere(GetWorld(),SeenPawn->GetActorLocation(),32.f,20,FColor::Red,false,10.f);
	AFPSGameMode* GM= Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if(GM)
	GM->CompleteMission(SeenPawn,false);
	SetGuardState(EAIState::Alerted);

}
void AFPSAIGuard::OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location,float Volume){

	if(GuardState==EAIState::Alerted) return;

	DrawDebugSphere(GetWorld(),Location,32.f,20,FColor::Green,false,10.f);
	
	if(NoiseInstigator==nullptr) return;
	FVector Direction= Location- GetActorLocation();
	Direction.Normalize();

	FRotator NewLookAt= FRotationMatrix::MakeFromX(Direction).Rotator();
	NewLookAt.Pitch=0.0f;
	NewLookAt.Roll= 0.0f;
	SetActorRotation(NewLookAt);
	//to refresh the cooldown
	GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation,this,&AFPSAIGuard::ResetOrientation,3.0f,false);
	
	SetGuardState(EAIState::Suspicious);
}

void AFPSAIGuard::ResetOrientation(){

	if(GuardState==EAIState::Alerted) return;

	SetActorRotation(OriginalRotation);
	SetGuardState(EAIState::Idle);

}

void AFPSAIGuard::SetGuardState(EAIState NewState)
{
	if(NewState==GuardState) return;
	GuardState=NewState;

	OnRep_GuardState();
	
}

void AFPSAIGuard::OnRep_GuardState(){
	OnStateChanged(GuardState);
}

void AFPSAIGuard::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFPSAIGuard, GuardState);
}


void AFPSAIGuard::MoveToTargetPoint(){

	UAIBlueprintHelperLibrary::SimpleMoveToActor(this->GetController(),TargetPoints[TargetIndex]);

}


