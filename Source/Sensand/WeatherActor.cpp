// Fill out your copyright notice in the Description page of Project Settings.

#include "Sensand.h"
#include "WeatherActor.h"


// Sets default values
AWeatherActor::AWeatherActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWeatherActor::BeginPlay()
{
	Super::BeginPlay();
	LoadFileAndDraw();
}

void AWeatherActor::LoadFileAndDraw()
{
	FString FileData = "";
	FString GameDir = FPaths::GameDir();
	//UE_LOG(LogTemp, Warning, TEXT("path is %s"), *GameDir);

	FString CompleteFilePath = GameDir + "weather.txt";
	FFileHelper::LoadFileToString(FileData, *CompleteFilePath);
	UE_LOG(LogTemp, Warning, TEXT("File:\n%s"), *FileData);
	//UFont font = UFont::
	GEngine->AddOnScreenDebugMessage(-1, 5000000.f, FColor::Blue, FileData);
}

// Called every frame
void AWeatherActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

