// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/NBPawn.h"

#include "NBC_HW09.h"

void ANBPawn::BeginPlay()
{
	Super::BeginPlay();

	// 현재 pawn의 Role, NetMode를 가져와 출력
	FString NetRoleString = ChatXFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("ANBPawn::BeginPlay() %s [%s]"), *ChatXFunctionLibrary::GetNetModeString(this), *NetRoleString);
	ChatXFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

void ANBPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = ChatXFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("ANBPawn::PossessedBy() %s [%s]"), *ChatXFunctionLibrary::GetNetModeString(this), *NetRoleString);
	ChatXFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}