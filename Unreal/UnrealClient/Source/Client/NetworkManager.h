// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Interfaces/IPv4/IPv4EndPoint.h"
#include "IPAddress.h"
#include "Sockets.h"
#include "Common/UdpSocketBuilder.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NetworkManager.generated.h"



UCLASS()
class CLIENT_API ANetworkManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANetworkManager();
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;


	FIPv4Endpoint serverep;
	FIPv4Endpoint localep;
	FIPv4Address address;
	FSocket* socket;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
