// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS_ExtractionZone.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "FPSCharacter.h"
#include "FPSGameMode.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
AFPS_ExtractionZone::AFPS_ExtractionZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	ExtractionZone=CreateDefaultSubobject<UBoxComponent>(TEXT("Extraction Zone"));
	RootComponent=ExtractionZone;
	ExtractionZone->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ExtractionZone->SetCollisionResponseToAllChannels(ECR_Ignore);
	ExtractionZone->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	ExtractionZone->SetBoxExtent(FVector(200.f));
	ExtractionZone->OnComponentBeginOverlap.AddDynamic(this,&AFPS_ExtractionZone::HandleOverlap);	

	DecalComp=CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Comp"));
	DecalComp->DecalSize= FVector(200.f,200.f,200.f);
	DecalComp->SetupAttachment(RootComponent);
}


void AFPS_ExtractionZone::HandleOverlap(UPrimitiveComponent* OverlappedComponent,
 AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) 
{
//	UE_LOG(LogTemp,Log,TEXT("OVERLAP"));
	AFPSCharacter* MyPawn= Cast<AFPSCharacter>(OtherActor);
	if(MyPawn==nullptr)	{
		return;
	}
	if(MyPawn->bIsCarryingObjective){
		AFPSGameMode* GM= Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
		if(GM)
		GM->CompleteMission(MyPawn,true);
	}
	else{
		UGameplayStatics::PlaySound2D(GetWorld(),ObjectiveMissingSound);
	}
}

