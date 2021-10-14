// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSObjectiveActor.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.h"
// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{

	BaseMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Comp"));
	RootComponent= BaseMesh;
	SphereComp=CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	SphereComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();
	PlayEffects();
}


void AFPSObjectiveActor::PlayEffects() 
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),PickupFX,GetActorLocation());
}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor* OtherActor){
	Super::NotifyActorBeginOverlap(OtherActor);

	PlayEffects();
	AFPSCharacter* MyCharacter= Cast<AFPSCharacter>(OtherActor);
	if(MyCharacter){
		MyCharacter->bIsCarryingObjective=true;
		Destroy();
	}
}
