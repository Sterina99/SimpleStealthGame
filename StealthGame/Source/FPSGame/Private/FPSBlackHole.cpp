// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSBlackHole.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
// Sets default values
AFPSBlackHole::AFPSBlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	RootComponent=BaseMesh;
	BaseMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	InnerSphere=CreateDefaultSubobject<USphereComponent>(TEXT("Inner Sphere"));
	InnerSphere->SetupAttachment(RootComponent);



	OuterSphere=CreateDefaultSubobject<USphereComponent>(TEXT("Outer Sphere"));
	OuterSphere->SetupAttachment(RootComponent);
	//OuterSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	//OuterSphere->SetCollisionResponseToChannel(ECC_PhysicsBody,ECR_Overlap);
	InnerSphere->OnComponentBeginOverlap.AddDynamic(this, &AFPSBlackHole::OverlapInnerSphere);

}

// Called when the game starts or when spawned
void AFPSBlackHole::BeginPlay()
{
	Super::BeginPlay();
		InnerSphere->OnComponentBeginOverlap.AddDynamic(this, &AFPSBlackHole::OverlapInnerSphere);

}

// Called every frame
void AFPSBlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TArray<UPrimitiveComponent*> Elements;
	
	OuterSphere->GetOverlappingComponents(Elements);
	UE_LOG(LogTemp,Warning,TEXT("%i"), Elements.Num());
	for(UPrimitiveComponent* SingleElement : Elements){
	//	UE_LOG(LogTemp,Warning,TEXT("%s"), *SingleElement->GetName());
		if(SingleElement->IsSimulatingPhysics())	
		SingleElement->AddRadialForce(GetActorLocation(),OuterSphere->GetScaledSphereRadius(),Force,ERadialImpulseFalloff::RIF_Constant,true);
	}

}

void AFPSBlackHole::OverlapInnerSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp,Warning,TEXT("Destroy"));
	if(OtherActor){
		OtherActor->Destroy();
	}
}