// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS_LaunchPad.h"
#include "Components/BoxComponent.h"
#include "FPSCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFPS_LaunchPad::AFPS_LaunchPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	BaseMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	RootComponent=BaseMesh;
	BaseMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BoxComp= CreateDefaultSubobject<UBoxComponent>(TEXT("Box Comp"));
	BoxComp->SetCollisionResponseToAllChannels(ECR_Ignore);

	BoxComp->OnComponentBeginOverlap.AddDynamic(this,&AFPS_LaunchPad::LaunchStuff);
}

// Called when the game starts or when spawned
void AFPS_LaunchPad::BeginPlay()
{
	Super::BeginPlay();
		BoxComp->SetCollisionResponseToChannel(ECC_PhysicsBody,ECR_Overlap);
	BoxComp->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
	BoxComp->OnComponentBeginOverlap.AddDynamic(this,&AFPS_LaunchPad::LaunchStuff);
	
}

// Called every frame
/* void AFPS_LaunchPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

} */
void AFPS_LaunchPad::LaunchStuff(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) 
{	

	AFPSCharacter* MyPawn= Cast<AFPSCharacter>(OtherActor);
	FRotator LaunchDirection= GetActorRotation();

	LaunchDirection.Pitch+=LaunchAngle;

	FVector LaunchVelocity= LaunchDirection.Vector()*Force;
	if(MyPawn){
	
		MyPawn->LaunchCharacter(LaunchVelocity,true,true);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ActivateLaunchPadEffect,GetActorLocation());
	}
	else{
		UE_LOG(LogTemp, Warning, TEXT("Lauch")); 
		if(OtherComp->IsSimulatingPhysics()){

		//OtherComp->SetPhysicsLinearVelocity(FVector::ZeroVector);
		OtherComp->AddImpulse(LaunchVelocity*ItemForce);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ActivateLaunchPadEffect,GetActorLocation());

		}

	}
	
}

