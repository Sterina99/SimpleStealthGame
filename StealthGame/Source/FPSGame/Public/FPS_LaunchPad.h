// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPS_LaunchPad.generated.h"

UCLASS()
class FPSGAME_API AFPS_LaunchPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPS_LaunchPad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category="Components")
	class UStaticMeshComponent* BaseMesh;

	UPROPERTY(EditDefaultsOnly, Category=" Components")
	class UBoxComponent* BoxComp;
	UPROPERTY(EditDefaultsOnly, Category=" Components")
	class UParticleSystem* ActivateLaunchPadEffect;

	UPROPERTY(EditAnywhere, Category=" Launch")	
	float Force=0.f;
	UPROPERTY(EditAnywhere, Category=" Launch")	
	float ItemForce=0.f;
	UPROPERTY(EditAnywhere, Category=" Launch")	
	float LaunchAngle=0.f;

	UFUNCTION()
	void LaunchStuff( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);	

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};


