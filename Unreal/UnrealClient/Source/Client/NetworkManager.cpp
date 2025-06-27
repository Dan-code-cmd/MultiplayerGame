// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkManager.h"

// Sets default values
ANetworkManager::ANetworkManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANetworkManager::BeginPlay()
{
	Super::BeginPlay();

	uint16 sPort = 9050;
	uint16 cPort = 9040;

	FIPv4Address::Parse("127.0.0.1", address);
	serverep = FIPv4Endpoint(address, sPort);

	localep = FIPv4Endpoint(FIPv4Address::Any, cPort);

	socket = FUdpSocketBuilder("socket").BoundToEndpoint(localep);




	if(socket)
	{
		FString message = "im unreal client AHHHHH";
		TCHAR* charMessage = message.GetCharArray().GetData();
		uint8* array = (uint8*)TCHAR_TO_UTF8(charMessage);
		int32 arrayLength = FCString::Strlen(charMessage);
		int32 bytesSentAmount;

		socket->SendTo(array, arrayLength, bytesSentAmount, *serverep.ToInternetAddr());

		UE_LOG(LogTemp, Log, TEXT("Client complete..."));
	}
	else 
	{
		UE_LOG(LogTemp, Error, TEXT("Issue with socket..."));
	}


}

// Called every frame
void ANetworkManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	uint32 sizeData;

	while(socket->HasPendingData(sizeData))
	{
		uint8* dataSize;
		int32 dataStore;
		FInternetAddr& source = serverep.ToInternetAddr();

		socket->RecvFrom()
		
	}




}

void ANetworkManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(socket);
}