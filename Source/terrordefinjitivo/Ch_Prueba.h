// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ch_Prueba.generated.h"

UCLASS()
class TERRORDEFINJITIVO_API ACh_Prueba : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACh_Prueba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float floatPrueba;

	UFUNCTION(BlueprintCallable)
	void OpenLobby();

	UFUNCTION(BlueprintCallable)
	void CallOpenLevel(const FString& Address);

	UFUNCTION(BlueprintCallable)
	void CallClientTravel(const FString& Address);
};
