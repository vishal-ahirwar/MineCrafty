// Copyright 2023 Vishal Ahirwar.All rights reserved.


#include "Block.h"

// Sets default values
ABlock::ABlock()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	this->SM_Block = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Block"));
	if (!this->SM_Block)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to Create Mesh Class : %s."), *this->GetName())
	};
};

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp,Error,TEXT("Max Resistance of %s : %f"),*this->GetName(),this->MaxResistance)

};



