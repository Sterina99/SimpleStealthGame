// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSAIGuard.generated.h"

class UPawnSensingComponent;
UENUM(BlueprintType)
enum class EAIState: uint8
{
	Idle,
	Suspicious,
	Alerted
};
UCLASS()
class FPSGAME_API AFPSAIGuard : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSAIGuard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category= "Components")
	UPawnSensingComponent* PawnSensingComp;

	UFUNCTION()
	void OnPawnSeen(APawn* SeenPawn);

	UFUNCTION()
	void OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location,float Volume);
	
	UFUNCTION()
	void ResetOrientation();

	UFUNCTION(BlueprintImplementableEvent,Category= "AI")
	void OnStateChanged(EAIState NewState);

	UFUNCTION(BlueprintImplementableEvent,Category= "AI")
	void OnTargetPointReached();

	UPROPERTY(EditInstanceOnly, Category= "AI")
	TArray<class AActor*> TargetPoints; 

	UPROPERTY(EditAnywhere, Category= "AI")
	bool bPatrol; 

	UPROPERTY(ReplicatedUsing=OnRep_GuardState)
	EAIState GuardState;

	UFUNCTION()
	void OnRep_GuardState();

	void SetGuardState(EAIState NewState);

	int32 TargetIndex;
	FRotator OriginalRotation;
	FTimerHandle TimerHandle_ResetOrientation;
	UFUNCTION(BlueprintCallable)
	void MoveToTargetPoint();
	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input


};
